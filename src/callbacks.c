#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <gtk/gtk.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "callbacks.h"
#include "interface.h"
#include "donneur.h"
#include "support.h"

void on_ajouter_clicked(GtkWidget *widget, gpointer user_data)
{
    GtkWidget *wnom, *wcin, *wj, *wm, *wa;
    wnom = lookup_widget(widget, "nom");
    wcin = lookup_widget(widget, "cin");
    wj = lookup_widget(widget, "j");
    wm = lookup_widget(widget, "m");
    wa = lookup_widget(widget, "a");

    char nom[NAME_SIZE], cin[CIN_SIZE];
    int j, m, a;

    strcpy(nom, gtk_entry_get_text(GTK_ENTRY(wnom)));
    strcpy(cin, gtk_entry_get_text(GTK_ENTRY(wcin)));
    j = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(wj));
    m = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(wm));
    a = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(wa));

    export(collect(nom, cin, j, m, a));
    gtk_label_set_text(GTK_LABEL(lookup_widget(widget, "msg")), "Ajouteé !!!");
}

void on_supprimer_clicked(GtkWidget *widget, gpointer user_data)
{
    GtkWidget *wcin;
    wcin = lookup_widget(widget, "cin");
    char cin[CIN_SIZE];
    strcpy(cin, gtk_entry_get_text(GTK_ENTRY(wcin)));
    int signal = delete_donneur(cin);
    char msg[256];
    if (signal == -1)
        strcpy(msg, "error");
    else if (signal == 0)
        strcpy(msg, "Introuvable");
    else
        strcpy(msg, "Supprimées!!!");
    gtk_label_set_text(GTK_LABEL(lookup_widget(widget, "msg")), msg);
}

void on_chercher_clicked(GtkWidget *widget, gpointer user_data)
{
    GtkWidget *wnom, *wcin, *wj, *wm, *wa, *msg;
    wnom = lookup_widget(widget, "nom");
    wcin = lookup_widget(widget, "cin");
    wj = lookup_widget(widget, "j");
    wm = lookup_widget(widget, "m");
    wa = lookup_widget(widget, "a");
    msg = lookup_widget(widget, "msg");

    char cin[CIN_SIZE], j[3], m[3], a[3];

    strcpy(cin, gtk_entry_get_text(GTK_ENTRY(wcin)));

    Donneur d;
    int signal = searchDonneurByCIN(cin, &d);
    if (signal == 1)
    {
        gtk_entry_set_text(GTK_ENTRY(wnom), d.nom);
        gtk_spin_button_set_value(GTK_SPIN_BUTTON(wj), d.date.j);
        gtk_spin_button_set_value(GTK_SPIN_BUTTON(wm), d.date.m);
        gtk_spin_button_set_value(GTK_SPIN_BUTTON(wa), d.date.a);
        gtk_widget_set_sensitive(wcin, 0);
    }
    else
    {
        gtk_label_set_text(GTK_LABEL(lookup_widget(widget, "msg")), "Introuvable");
    }
}

void on_modifier_clicked(GtkWidget *widget, gpointer user_data)
{
    GtkWidget *wnom, *wcin, *wj, *wm, *wa;
    wnom = lookup_widget(widget, "nom");
    wcin = lookup_widget(widget, "cin");
    wj = lookup_widget(widget, "j");
    wm = lookup_widget(widget, "m");
    wa = lookup_widget(widget, "a");

    char nom[NAME_SIZE], cin[CIN_SIZE];
    int j, m, a;

    strcpy(nom, gtk_entry_get_text(GTK_ENTRY(wnom)));
    strcpy(cin, gtk_entry_get_text(GTK_ENTRY(wcin)));
    j = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(wj));
    m = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(wm));
    a = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(wa));
    delete_donneur(cin);
    export(collect(nom, cin, j, m, a));
    gtk_label_set_text(GTK_LABEL(lookup_widget(widget, "msg")), "Modifiée !!!");
}

void on_ajouter_tv_clicked(GtkWidget *widget, gpointer user_data)
{
    GtkWidget *ajouter = create_ajouter_donneur();
    gtk_widget_show(ajouter);
}

void on_modifier_tv_clicked(GtkWidget *widget, gpointer user_data)
{
    GtkWidget *modifier = create_modifier_donneur_();
    gtk_widget_show(modifier);
}

void on_supprimer_tv_clicked(GtkWidget *widget, gpointer user_data)
{
    GtkWidget *supprimer = create_supprimer_donneur();
    gtk_widget_show(supprimer);
}

void on_refresh_clicked(GtkWidget *widget, gpointer user_data)
{
    GtkWidget *tv;
    tv = lookup_widget(widget, "treeview");
    GtkCellRenderer *renderer;
    GtkTreeViewColumn *column;
    GtkTreeIter iter;
    GtkListStore *store;

    if (gtk_tree_view_get_model(GTK_TREE_VIEW(tv)) == NULL)
    {
        store = gtk_list_store_new(3, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);
        gtk_tree_view_set_model(GTK_TREE_VIEW(tv), GTK_TREE_MODEL(store));
        renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes("Nom", renderer, "text", 0, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(tv), column);
        column = gtk_tree_view_column_new_with_attributes("Cin", renderer, "text", 1, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(tv), column);
        column = gtk_tree_view_column_new_with_attributes("Date", renderer, "text", 2, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(tv), column);
    }

    store = GTK_LIST_STORE(gtk_tree_view_get_model(GTK_TREE_VIEW(tv)));
    gtk_list_store_clear(store);

    int n;
    Donneur donneurs[ARRAY_SIZE];
    populate(donneurs, &n);

    for (int i = 0; i < n; i++)
    {
        gtk_list_store_append(store, &iter);
        gtk_list_store_set(store, &iter, 0, donneurs[i].nom, 1, donneurs[i].cin, 2, date_to_string(donneurs[i].date), -1);
    }
}

void on_annuler1_clicked(GtkWidget *widget, gpointer user_data)
{
    gtk_widget_destroy(gtk_widget_get_parent(gtk_widget_get_parent(widget)));
}
void on_annuler2_clicked(GtkWidget *widget, gpointer user_data)
{
    gtk_widget_destroy(gtk_widget_get_parent(gtk_widget_get_parent(widget)));
}
void on_annuler3_clicked(GtkWidget *widget, gpointer user_data)
{
    gtk_widget_destroy(gtk_widget_get_parent(gtk_widget_get_parent(widget)));
}