/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_ajouter_donneur (void)
{
  GtkWidget *ajouter_donneur;
  GtkWidget *fixed1;
  GtkWidget *nom;
  GtkObject *j_adj;
  GtkWidget *j;
  GtkObject *m_adj;
  GtkWidget *m;
  GtkObject *a_adj;
  GtkWidget *a;
  GtkWidget *cin;
  GtkWidget *label26;
  GtkWidget *label27;
  GtkWidget *label6;
  GtkWidget *label5;
  GtkWidget *label4;
  GtkWidget *label1;
  GtkWidget *label2;
  GtkWidget *label31;
  GtkWidget *annuler;
  GtkWidget *alignment1;
  GtkWidget *hbox1;
  GtkWidget *image1;
  GtkWidget *label29;
  GtkWidget *ajouter;
  GtkWidget *alignment2;
  GtkWidget *hbox2;
  GtkWidget *image2;
  GtkWidget *label30;
  GtkWidget *msg;
  GtkWidget *ets;
  GtkWidget *sexe2;
  GSList *sexe2_group = NULL;
  GtkWidget *sexe1;
  GtkWidget *label3;

  ajouter_donneur = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (ajouter_donneur), _("Ajouter Donneur"));

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (ajouter_donneur), fixed1);

  nom = gtk_entry_new ();
  gtk_widget_show (nom);
  gtk_fixed_put (GTK_FIXED (fixed1), nom, 168, 24);
  gtk_widget_set_size_request (nom, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (nom), 8226);

  j_adj = gtk_adjustment_new (4, 1, 31, 1, 10, 10);
  j = gtk_spin_button_new (GTK_ADJUSTMENT (j_adj), 1, 0);
  gtk_widget_show (j);
  gtk_fixed_put (GTK_FIXED (fixed1), j, 80, 288);
  gtk_widget_set_size_request (j, 60, 27);

  m_adj = gtk_adjustment_new (5, 1, 12, 1, 10, 10);
  m = gtk_spin_button_new (GTK_ADJUSTMENT (m_adj), 1, 0);
  gtk_widget_show (m);
  gtk_fixed_put (GTK_FIXED (fixed1), m, 200, 288);
  gtk_widget_set_size_request (m, 60, 27);

  a_adj = gtk_adjustment_new (2001, 1900, 2024, 1, 10, 10);
  a = gtk_spin_button_new (GTK_ADJUSTMENT (a_adj), 1, 0);
  gtk_widget_show (a);
  gtk_fixed_put (GTK_FIXED (fixed1), a, 328, 288);
  gtk_widget_set_size_request (a, 60, 27);

  cin = gtk_entry_new ();
  gtk_widget_show (cin);
  gtk_fixed_put (GTK_FIXED (fixed1), cin, 168, 80);
  gtk_widget_set_size_request (cin, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (cin), 8226);

  label26 = gtk_label_new ("");
  gtk_widget_show (label26);
  gtk_fixed_put (GTK_FIXED (fixed1), label26, 408, 112);
  gtk_widget_set_size_request (label26, 49, 17);

  label27 = gtk_label_new ("");
  gtk_widget_show (label27);
  gtk_fixed_put (GTK_FIXED (fixed1), label27, 200, 392);
  gtk_widget_set_size_request (label27, 49, 17);

  label6 = gtk_label_new (_("anne\303\251:"));
  gtk_widget_show (label6);
  gtk_fixed_put (GTK_FIXED (fixed1), label6, 272, 296);
  gtk_widget_set_size_request (label6, 49, 17);

  label5 = gtk_label_new (_("mois:"));
  gtk_widget_show (label5);
  gtk_fixed_put (GTK_FIXED (fixed1), label5, 152, 296);
  gtk_widget_set_size_request (label5, 41, 17);

  label4 = gtk_label_new (_("jour:"));
  gtk_widget_show (label4);
  gtk_fixed_put (GTK_FIXED (fixed1), label4, 32, 296);
  gtk_widget_set_size_request (label4, 41, 17);

  label1 = gtk_label_new (_("Nom du Donneur:"));
  gtk_widget_show (label1);
  gtk_fixed_put (GTK_FIXED (fixed1), label1, 0, 32);
  gtk_widget_set_size_request (label1, 152, 16);

  label2 = gtk_label_new (_("Cin:\n"));
  gtk_widget_show (label2);
  gtk_fixed_put (GTK_FIXED (fixed1), label2, 88, 80);
  gtk_widget_set_size_request (label2, 41, 17);

  ets = gtk_label_new (_("ETS:"));
  gtk_widget_show (ets);
  gtk_fixed_put (GTK_FIXED (fixed1), ets, 80, 144);
  gtk_widget_set_size_request (ets, 49, 17);

  label31 = gtk_label_new (_("Sexe:"));
  gtk_widget_show (label31);
  gtk_fixed_put (GTK_FIXED (fixed1), label31, 64, 208);
  gtk_widget_set_size_request (label31, 49, 17);

  annuler = gtk_button_new ();
  gtk_widget_show (annuler);
  gtk_fixed_put (GTK_FIXED (fixed1), annuler, 280, 344);
  gtk_widget_set_size_request (annuler, 80, 40);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (annuler), alignment1);

  hbox1 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

  image1 = gtk_image_new_from_stock ("gtk-stop", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image1);
  gtk_box_pack_start (GTK_BOX (hbox1), image1, FALSE, FALSE, 0);

  label29 = gtk_label_new_with_mnemonic (_("annuler"));
  gtk_widget_show (label29);
  gtk_box_pack_start (GTK_BOX (hbox1), label29, FALSE, FALSE, 0);

  ajouter = gtk_button_new ();
  gtk_widget_show (ajouter);
  gtk_fixed_put (GTK_FIXED (fixed1), ajouter, 96, 344);
  gtk_widget_set_size_request (ajouter, 88, 40);

  alignment2 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment2);
  gtk_container_add (GTK_CONTAINER (ajouter), alignment2);

  hbox2 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox2);
  gtk_container_add (GTK_CONTAINER (alignment2), hbox2);

  image2 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image2);
  gtk_box_pack_start (GTK_BOX (hbox2), image2, FALSE, FALSE, 0);

  label30 = gtk_label_new_with_mnemonic (_("ajouter "));
  gtk_widget_show (label30);
  gtk_box_pack_start (GTK_BOX (hbox2), label30, FALSE, FALSE, 0);

  msg = gtk_label_new ("");
  gtk_widget_show (msg);
  gtk_fixed_put (GTK_FIXED (fixed1), msg, 160, 400);
  gtk_widget_set_size_request (msg, 144, 24);

  ets = gtk_combo_box_entry_new_text ();
  gtk_widget_show (ets);
  gtk_fixed_put (GTK_FIXED (fixed1), ets, 168, 136);
  gtk_widget_set_size_request (ets, 189, 29);

  sexe2 = gtk_radio_button_new_with_mnemonic (NULL, _("Femme"));
  gtk_widget_show (sexe2);
  gtk_fixed_put (GTK_FIXED (fixed1), sexe2, 288, 208);
  gtk_widget_set_size_request (sexe2, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (sexe2), sexe2_group);
  sexe2_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (sexe2));

  sexe1 = gtk_radio_button_new_with_mnemonic (NULL, _("Homme"));
  gtk_widget_show (sexe1);
  gtk_fixed_put (GTK_FIXED (fixed1), sexe1, 136, 208);
  gtk_widget_set_size_request (sexe1, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (sexe1), sexe2_group);
  sexe2_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (sexe1));

  label3 = gtk_label_new (_("Date:"));
  gtk_widget_show (label3);
  gtk_fixed_put (GTK_FIXED (fixed1), label3, 32, 256);
  gtk_widget_set_size_request (label3, 41, 17);

  g_signal_connect ((gpointer) annuler, "clicked",
                    G_CALLBACK (on_annuler1_clicked),
                    NULL);
  g_signal_connect ((gpointer) ajouter, "clicked",
                    G_CALLBACK (on_ajouter_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (ajouter_donneur, ajouter_donneur, "ajouter_donneur");
  GLADE_HOOKUP_OBJECT (ajouter_donneur, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (ajouter_donneur, nom, "nom");
  GLADE_HOOKUP_OBJECT (ajouter_donneur, j, "j");
  GLADE_HOOKUP_OBJECT (ajouter_donneur, m, "m");
  GLADE_HOOKUP_OBJECT (ajouter_donneur, a, "a");
  GLADE_HOOKUP_OBJECT (ajouter_donneur, cin, "cin");
  GLADE_HOOKUP_OBJECT (ajouter_donneur, label26, "label26");
  GLADE_HOOKUP_OBJECT (ajouter_donneur, label27, "label27");
  GLADE_HOOKUP_OBJECT (ajouter_donneur, label6, "label6");
  GLADE_HOOKUP_OBJECT (ajouter_donneur, label5, "label5");
  GLADE_HOOKUP_OBJECT (ajouter_donneur, label4, "label4");
  GLADE_HOOKUP_OBJECT (ajouter_donneur, label1, "label1");
  GLADE_HOOKUP_OBJECT (ajouter_donneur, label2, "label2");
  GLADE_HOOKUP_OBJECT (ajouter_donneur, ets, "ets");
  GLADE_HOOKUP_OBJECT (ajouter_donneur, label31, "label31");
  GLADE_HOOKUP_OBJECT (ajouter_donneur, annuler, "annuler");
  GLADE_HOOKUP_OBJECT (ajouter_donneur, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (ajouter_donneur, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (ajouter_donneur, image1, "image1");
  GLADE_HOOKUP_OBJECT (ajouter_donneur, label29, "label29");
  GLADE_HOOKUP_OBJECT (ajouter_donneur, ajouter, "ajouter");
  GLADE_HOOKUP_OBJECT (ajouter_donneur, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (ajouter_donneur, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (ajouter_donneur, image2, "image2");
  GLADE_HOOKUP_OBJECT (ajouter_donneur, label30, "label30");
  GLADE_HOOKUP_OBJECT (ajouter_donneur, msg, "msg");
  GLADE_HOOKUP_OBJECT (ajouter_donneur, ets, "ets");
  GLADE_HOOKUP_OBJECT (ajouter_donneur, sexe2, "sexe2");
  GLADE_HOOKUP_OBJECT (ajouter_donneur, sexe1, "sexe1");
  GLADE_HOOKUP_OBJECT (ajouter_donneur, label3, "label3");

  return ajouter_donneur;
}

GtkWidget*
create_modifier_donneur_ (void)
{
  GtkWidget *modifier_donneur_;
  GtkWidget *fixed2;
  GtkWidget *nom;
  GtkWidget *cin;
  GtkObject *j_adj;
  GtkWidget *j;
  GtkObject *m_adj;
  GtkWidget *m;
  GtkObject *a_adj;
  GtkWidget *a;
  GtkWidget *label22;
  GtkWidget *label23;
  GtkWidget *msg;
  GtkWidget *label12;
  GtkWidget *label11;
  GtkWidget *label10;
  GtkWidget *label9;
  GtkWidget *label24;
  GtkWidget *label21;
  GtkWidget *label8;
  GtkWidget *label36;
  GtkWidget *label35;
  GtkWidget *label7;
  GtkWidget *comboboxentry2;
  GtkWidget *annuler;
  GtkWidget *alignment5;
  GtkWidget *hbox5;
  GtkWidget *image5;
  GtkWidget *label34;
  GtkWidget *modifier;
  GtkWidget *alignment4;
  GtkWidget *hbox4;
  GtkWidget *image4;
  GtkWidget *label33;
  GtkWidget *chercher;
  GtkWidget *alignment3;
  GtkWidget *hbox3;
  GtkWidget *image3;
  GtkWidget *label32;
  GtkWidget *radiobutton3;
  GSList *radiobutton3_group = NULL;
  GtkWidget *radiobutton4;

  modifier_donneur_ = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (modifier_donneur_), _("Modifier Donneur"));
  gtk_window_set_position (GTK_WINDOW (modifier_donneur_), GTK_WIN_POS_CENTER);

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (modifier_donneur_), fixed2);

  nom = gtk_entry_new ();
  gtk_widget_show (nom);
  gtk_fixed_put (GTK_FIXED (fixed2), nom, 168, 80);
  gtk_widget_set_size_request (nom, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (nom), 8226);

  cin = gtk_entry_new ();
  gtk_widget_show (cin);
  gtk_fixed_put (GTK_FIXED (fixed2), cin, 168, 24);
  gtk_widget_set_size_request (cin, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (cin), 8226);

  j_adj = gtk_adjustment_new (1, 1, 31, 1, 10, 10);
  j = gtk_spin_button_new (GTK_ADJUSTMENT (j_adj), 1, 0);
  gtk_widget_show (j);
  gtk_fixed_put (GTK_FIXED (fixed2), j, 88, 296);
  gtk_widget_set_size_request (j, 60, 27);

  m_adj = gtk_adjustment_new (1, 1, 12, 1, 10, 10);
  m = gtk_spin_button_new (GTK_ADJUSTMENT (m_adj), 1, 0);
  gtk_widget_show (m);
  gtk_fixed_put (GTK_FIXED (fixed2), m, 208, 296);
  gtk_widget_set_size_request (m, 60, 27);

  a_adj = gtk_adjustment_new (2000, 1900, 2024, 1, 10, 10);
  a = gtk_spin_button_new (GTK_ADJUSTMENT (a_adj), 1, 0);
  gtk_widget_show (a);
  gtk_fixed_put (GTK_FIXED (fixed2), a, 336, 296);
  gtk_widget_set_size_request (a, 60, 27);

  label22 = gtk_label_new ("");
  gtk_widget_show (label22);
  gtk_fixed_put (GTK_FIXED (fixed2), label22, 184, 320);
  gtk_widget_set_size_request (label22, 49, 17);

  label23 = gtk_label_new ("");
  gtk_widget_show (label23);
  gtk_fixed_put (GTK_FIXED (fixed2), label23, 184, 320);
  gtk_widget_set_size_request (label23, 49, 17);

  msg = gtk_label_new ("");
  gtk_widget_show (msg);
  gtk_fixed_put (GTK_FIXED (fixed2), msg, 136, 296);
  gtk_widget_set_size_request (msg, 168, 24);

  label12 = gtk_label_new (_("anne\303\251:"));
  gtk_widget_show (label12);
  gtk_fixed_put (GTK_FIXED (fixed2), label12, 280, 304);
  gtk_widget_set_size_request (label12, 49, 17);

  label11 = gtk_label_new (_("mois:"));
  gtk_widget_show (label11);
  gtk_fixed_put (GTK_FIXED (fixed2), label11, 152, 304);
  gtk_widget_set_size_request (label11, 56, 16);

  label10 = gtk_label_new (_("jour:"));
  gtk_widget_show (label10);
  gtk_fixed_put (GTK_FIXED (fixed2), label10, 32, 304);
  gtk_widget_set_size_request (label10, 49, 17);

  label9 = gtk_label_new (_("Date:"));
  gtk_widget_show (label9);
  gtk_fixed_put (GTK_FIXED (fixed2), label9, 24, 256);
  gtk_widget_set_size_request (label9, 48, 24);

  label24 = gtk_label_new ("");
  gtk_widget_show (label24);
  gtk_fixed_put (GTK_FIXED (fixed2), label24, 176, 409);
  gtk_widget_set_size_request (label24, 40, 16);

  label21 = gtk_label_new ("");
  gtk_widget_show (label21);
  gtk_fixed_put (GTK_FIXED (fixed2), label21, 424, 112);
  gtk_widget_set_size_request (label21, 49, 17);

  label8 = gtk_label_new (_("Cin:"));
  gtk_widget_show (label8);
  gtk_fixed_put (GTK_FIXED (fixed2), label8, 80, 24);
  gtk_widget_set_size_request (label8, 48, 32);

  label36 = gtk_label_new (_("Sexe:"));
  gtk_widget_show (label36);
  gtk_fixed_put (GTK_FIXED (fixed2), label36, 56, 208);
  gtk_widget_set_size_request (label36, 49, 17);

  label35 = gtk_label_new (_("ETS:"));
  gtk_widget_show (label35);
  gtk_fixed_put (GTK_FIXED (fixed2), label35, 64, 144);
  gtk_widget_set_size_request (label35, 49, 17);

  label7 = gtk_label_new (_("Nom du donneur:"));
  gtk_widget_show (label7);
  gtk_fixed_put (GTK_FIXED (fixed2), label7, 24, 80);
  gtk_widget_set_size_request (label7, 120, 31);

  comboboxentry2 = gtk_combo_box_entry_new_text ();
  gtk_widget_show (comboboxentry2);
  gtk_fixed_put (GTK_FIXED (fixed2), comboboxentry2, 168, 136);
  gtk_widget_set_size_request (comboboxentry2, 189, 29);

  annuler = gtk_button_new ();
  gtk_widget_show (annuler);
  gtk_fixed_put (GTK_FIXED (fixed2), annuler, 320, 360);
  gtk_widget_set_size_request (annuler, 88, 32);

  alignment5 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment5);
  gtk_container_add (GTK_CONTAINER (annuler), alignment5);

  hbox5 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox5);
  gtk_container_add (GTK_CONTAINER (alignment5), hbox5);

  image5 = gtk_image_new_from_stock ("gtk-cancel", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image5);
  gtk_box_pack_start (GTK_BOX (hbox5), image5, FALSE, FALSE, 0);

  label34 = gtk_label_new_with_mnemonic (_("annuler "));
  gtk_widget_show (label34);
  gtk_box_pack_start (GTK_BOX (hbox5), label34, FALSE, FALSE, 0);

  modifier = gtk_button_new ();
  gtk_widget_show (modifier);
  gtk_fixed_put (GTK_FIXED (fixed2), modifier, 184, 360);
  gtk_widget_set_size_request (modifier, 98, 32);

  alignment4 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment4);
  gtk_container_add (GTK_CONTAINER (modifier), alignment4);

  hbox4 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox4);
  gtk_container_add (GTK_CONTAINER (alignment4), hbox4);

  image4 = gtk_image_new_from_stock ("gtk-apply", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image4);
  gtk_box_pack_start (GTK_BOX (hbox4), image4, FALSE, FALSE, 0);

  label33 = gtk_label_new_with_mnemonic (_("modifier "));
  gtk_widget_show (label33);
  gtk_box_pack_start (GTK_BOX (hbox4), label33, FALSE, FALSE, 0);

  chercher = gtk_button_new ();
  gtk_widget_show (chercher);
  gtk_fixed_put (GTK_FIXED (fixed2), chercher, 56, 360);
  gtk_widget_set_size_request (chercher, 88, 32);

  alignment3 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment3);
  gtk_container_add (GTK_CONTAINER (chercher), alignment3);

  hbox3 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (alignment3), hbox3);

  image3 = gtk_image_new_from_stock ("gtk-find", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image3);
  gtk_box_pack_start (GTK_BOX (hbox3), image3, FALSE, FALSE, 0);

  label32 = gtk_label_new_with_mnemonic (_("Chercher"));
  gtk_widget_show (label32);
  gtk_box_pack_start (GTK_BOX (hbox3), label32, FALSE, FALSE, 0);

  radiobutton3 = gtk_radio_button_new_with_mnemonic (NULL, _("Homme"));
  gtk_widget_show (radiobutton3);
  gtk_fixed_put (GTK_FIXED (fixed2), radiobutton3, 120, 208);
  gtk_widget_set_size_request (radiobutton3, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton3), radiobutton3_group);
  radiobutton3_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton3));

  radiobutton4 = gtk_radio_button_new_with_mnemonic (NULL, _("Femme"));
  gtk_widget_show (radiobutton4);
  gtk_fixed_put (GTK_FIXED (fixed2), radiobutton4, 280, 208);
  gtk_widget_set_size_request (radiobutton4, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton4), radiobutton3_group);
  radiobutton3_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton4));

  g_signal_connect ((gpointer) annuler, "clicked",
                    G_CALLBACK (on_annuler2_clicked),
                    NULL);
  g_signal_connect ((gpointer) modifier, "clicked",
                    G_CALLBACK (on_modifier_clicked),
                    NULL);
  g_signal_connect ((gpointer) chercher, "clicked",
                    G_CALLBACK (on_chercher_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (modifier_donneur_, modifier_donneur_, "modifier_donneur_");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, nom, "nom");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, cin, "cin");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, j, "j");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, m, "m");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, a, "a");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, label22, "label22");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, label23, "label23");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, msg, "msg");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, label12, "label12");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, label11, "label11");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, label10, "label10");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, label9, "label9");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, label24, "label24");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, label21, "label21");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, label8, "label8");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, label36, "label36");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, label35, "label35");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, label7, "label7");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, comboboxentry2, "comboboxentry2");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, annuler, "annuler");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, alignment5, "alignment5");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, hbox5, "hbox5");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, image5, "image5");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, label34, "label34");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, modifier, "modifier");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, image4, "image4");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, label33, "label33");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, chercher, "chercher");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, alignment3, "alignment3");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, image3, "image3");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, label32, "label32");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, radiobutton3, "radiobutton3");
  GLADE_HOOKUP_OBJECT (modifier_donneur_, radiobutton4, "radiobutton4");

  return modifier_donneur_;
}

GtkWidget*
create_supprimer_donneur (void)
{
  GtkWidget *supprimer_donneur;
  GtkWidget *fixed3;
  GtkWidget *cin;
  GtkWidget *label19;
  GtkWidget *label20;
  GtkWidget *msg;
  GtkWidget *label14;
  GtkWidget *delete;
  GtkWidget *alignment6;
  GtkWidget *hbox6;
  GtkWidget *image6;
  GtkWidget *label37;
  GtkWidget *annuler;
  GtkWidget *alignment7;
  GtkWidget *hbox7;
  GtkWidget *image7;
  GtkWidget *label38;

  supprimer_donneur = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (supprimer_donneur), _("Supprimer Donneur"));

  fixed3 = gtk_fixed_new ();
  gtk_widget_show (fixed3);
  gtk_container_add (GTK_CONTAINER (supprimer_donneur), fixed3);

  cin = gtk_entry_new ();
  gtk_widget_show (cin);
  gtk_fixed_put (GTK_FIXED (fixed3), cin, 144, 80);
  gtk_widget_set_size_request (cin, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (cin), 8226);

  label19 = gtk_label_new ("");
  gtk_widget_show (label19);
  gtk_fixed_put (GTK_FIXED (fixed3), label19, 168, 248);
  gtk_widget_set_size_request (label19, 49, 17);

  label20 = gtk_label_new ("");
  gtk_widget_show (label20);
  gtk_fixed_put (GTK_FIXED (fixed3), label20, 328, 120);
  gtk_widget_set_size_request (label20, 49, 17);

  msg = gtk_label_new ("");
  gtk_widget_show (msg);
  gtk_fixed_put (GTK_FIXED (fixed3), msg, 96, 208);
  gtk_widget_set_size_request (msg, 184, 32);

  label14 = gtk_label_new (_("Cin:"));
  gtk_widget_show (label14);
  gtk_fixed_put (GTK_FIXED (fixed3), label14, 64, 80);
  gtk_widget_set_size_request (label14, 57, 25);

  delete = gtk_button_new ();
  gtk_widget_show (delete);
  gtk_fixed_put (GTK_FIXED (fixed3), delete, 64, 152);
  gtk_widget_set_size_request (delete, 96, 32);

  alignment6 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment6);
  gtk_container_add (GTK_CONTAINER (delete), alignment6);

  hbox6 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox6);
  gtk_container_add (GTK_CONTAINER (alignment6), hbox6);

  image6 = gtk_image_new_from_stock ("gtk-delete", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image6);
  gtk_box_pack_start (GTK_BOX (hbox6), image6, FALSE, FALSE, 0);

  label37 = gtk_label_new_with_mnemonic (_("supprimer "));
  gtk_widget_show (label37);
  gtk_box_pack_start (GTK_BOX (hbox6), label37, FALSE, FALSE, 0);

  annuler = gtk_button_new ();
  gtk_widget_show (annuler);
  gtk_fixed_put (GTK_FIXED (fixed3), annuler, 240, 152);
  gtk_widget_set_size_request (annuler, 88, 32);

  alignment7 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment7);
  gtk_container_add (GTK_CONTAINER (annuler), alignment7);

  hbox7 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox7);
  gtk_container_add (GTK_CONTAINER (alignment7), hbox7);

  image7 = gtk_image_new_from_stock ("gtk-cancel", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image7);
  gtk_box_pack_start (GTK_BOX (hbox7), image7, FALSE, FALSE, 0);

  label38 = gtk_label_new_with_mnemonic (_("annuler"));
  gtk_widget_show (label38);
  gtk_box_pack_start (GTK_BOX (hbox7), label38, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) delete, "clicked",
                    G_CALLBACK (on_supprimer_clicked),
                    NULL);
  g_signal_connect ((gpointer) annuler, "clicked",
                    G_CALLBACK (on_annuler3_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (supprimer_donneur, supprimer_donneur, "supprimer_donneur");
  GLADE_HOOKUP_OBJECT (supprimer_donneur, fixed3, "fixed3");
  GLADE_HOOKUP_OBJECT (supprimer_donneur, cin, "cin");
  GLADE_HOOKUP_OBJECT (supprimer_donneur, label19, "label19");
  GLADE_HOOKUP_OBJECT (supprimer_donneur, label20, "label20");
  GLADE_HOOKUP_OBJECT (supprimer_donneur, msg, "msg");
  GLADE_HOOKUP_OBJECT (supprimer_donneur, label14, "label14");
  GLADE_HOOKUP_OBJECT (supprimer_donneur, delete, "delete");
  GLADE_HOOKUP_OBJECT (supprimer_donneur, alignment6, "alignment6");
  GLADE_HOOKUP_OBJECT (supprimer_donneur, hbox6, "hbox6");
  GLADE_HOOKUP_OBJECT (supprimer_donneur, image6, "image6");
  GLADE_HOOKUP_OBJECT (supprimer_donneur, label37, "label37");
  GLADE_HOOKUP_OBJECT (supprimer_donneur, annuler, "annuler");
  GLADE_HOOKUP_OBJECT (supprimer_donneur, alignment7, "alignment7");
  GLADE_HOOKUP_OBJECT (supprimer_donneur, hbox7, "hbox7");
  GLADE_HOOKUP_OBJECT (supprimer_donneur, image7, "image7");
  GLADE_HOOKUP_OBJECT (supprimer_donneur, label38, "label38");

  return supprimer_donneur;
}

GtkWidget*
create_Donneur (void)
{
  GtkWidget *Donneur;
  GtkWidget *fixed4;
  GtkWidget *treeview;
  GtkWidget *label16;
  GtkWidget *label17;
  GtkWidget *label15;
  GtkWidget *ajouter;
  GtkWidget *alignment8;
  GtkWidget *hbox8;
  GtkWidget *image8;
  GtkWidget *label39;
  GtkWidget *modifier;
  GtkWidget *alignment9;
  GtkWidget *hbox9;
  GtkWidget *image9;
  GtkWidget *label40;
  GtkWidget *supprimer;
  GtkWidget *alignment10;
  GtkWidget *hbox10;
  GtkWidget *image10;
  GtkWidget *label41;
  GtkWidget *refresh;
  GtkWidget *alignment11;
  GtkWidget *hbox11;
  GtkWidget *image11;
  GtkWidget *label42;
  GtkWidget *stat;

  Donneur = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (Donneur), _("Donneur"));

  fixed4 = gtk_fixed_new ();
  gtk_widget_show (fixed4);
  gtk_container_add (GTK_CONTAINER (Donneur), fixed4);

  treeview = gtk_tree_view_new ();
  gtk_widget_show (treeview);
  gtk_fixed_put (GTK_FIXED (fixed4), treeview, 40, 80);
  gtk_widget_set_size_request (treeview, 392, 224);

  label16 = gtk_label_new ("");
  gtk_widget_show (label16);
  gtk_fixed_put (GTK_FIXED (fixed4), label16, 216, 384);
  gtk_widget_set_size_request (label16, 49, 17);

  label17 = gtk_label_new ("");
  gtk_widget_show (label17);
  gtk_fixed_put (GTK_FIXED (fixed4), label17, 432, 176);
  gtk_widget_set_size_request (label17, 49, 17);

  label15 = gtk_label_new (_("Gestion Donneur"));
  gtk_widget_show (label15);
  gtk_fixed_put (GTK_FIXED (fixed4), label15, 152, 32);
  gtk_widget_set_size_request (label15, 168, 32);
  gtk_label_set_justify (GTK_LABEL (label15), GTK_JUSTIFY_CENTER);

  ajouter = gtk_button_new ();
  gtk_widget_show (ajouter);
  gtk_fixed_put (GTK_FIXED (fixed4), ajouter, 56, 336);
  gtk_widget_set_size_request (ajouter, 82, 32);

  alignment8 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment8);
  gtk_container_add (GTK_CONTAINER (ajouter), alignment8);

  hbox8 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox8);
  gtk_container_add (GTK_CONTAINER (alignment8), hbox8);

  image8 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image8);
  gtk_box_pack_start (GTK_BOX (hbox8), image8, FALSE, FALSE, 0);

  label39 = gtk_label_new_with_mnemonic (_("ajouter"));
  gtk_widget_show (label39);
  gtk_box_pack_start (GTK_BOX (hbox8), label39, FALSE, FALSE, 0);

  modifier = gtk_button_new ();
  gtk_widget_show (modifier);
  gtk_fixed_put (GTK_FIXED (fixed4), modifier, 192, 336);
  gtk_widget_set_size_request (modifier, 88, 32);

  alignment9 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment9);
  gtk_container_add (GTK_CONTAINER (modifier), alignment9);

  hbox9 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox9);
  gtk_container_add (GTK_CONTAINER (alignment9), hbox9);

  image9 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image9);
  gtk_box_pack_start (GTK_BOX (hbox9), image9, FALSE, FALSE, 0);

  label40 = gtk_label_new_with_mnemonic (_("modifier"));
  gtk_widget_show (label40);
  gtk_box_pack_start (GTK_BOX (hbox9), label40, FALSE, FALSE, 0);

  supprimer = gtk_button_new ();
  gtk_widget_show (supprimer);
  gtk_fixed_put (GTK_FIXED (fixed4), supprimer, 320, 336);
  gtk_widget_set_size_request (supprimer, 88, 32);

  alignment10 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment10);
  gtk_container_add (GTK_CONTAINER (supprimer), alignment10);

  hbox10 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox10);
  gtk_container_add (GTK_CONTAINER (alignment10), hbox10);

  image10 = gtk_image_new_from_stock ("gtk-delete", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image10);
  gtk_box_pack_start (GTK_BOX (hbox10), image10, FALSE, FALSE, 0);

  label41 = gtk_label_new_with_mnemonic (_("supprimer"));
  gtk_widget_show (label41);
  gtk_box_pack_start (GTK_BOX (hbox10), label41, FALSE, FALSE, 0);

  refresh = gtk_button_new ();
  gtk_widget_show (refresh);
  gtk_fixed_put (GTK_FIXED (fixed4), refresh, 24, 32);
  gtk_widget_set_size_request (refresh, 88, 32);

  alignment11 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment11);
  gtk_container_add (GTK_CONTAINER (refresh), alignment11);

  hbox11 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox11);
  gtk_container_add (GTK_CONTAINER (alignment11), hbox11);

  image11 = gtk_image_new_from_stock ("gtk-refresh", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image11);
  gtk_box_pack_start (GTK_BOX (hbox11), image11, FALSE, FALSE, 0);

  label42 = gtk_label_new_with_mnemonic (_("Refresh"));
  gtk_widget_show (label42);
  gtk_box_pack_start (GTK_BOX (hbox11), label42, FALSE, FALSE, 0);

  stat = gtk_button_new_with_mnemonic (_("statistique"));
  gtk_widget_show (stat);
  gtk_fixed_put (GTK_FIXED (fixed4), stat, 360, 32);
  gtk_widget_set_size_request (stat, 88, 32);

  g_signal_connect ((gpointer) ajouter, "clicked",
                    G_CALLBACK (on_ajouter_tv_clicked),
                    NULL);
  g_signal_connect ((gpointer) modifier, "clicked",
                    G_CALLBACK (on_modifier_tv_clicked),
                    NULL);
  g_signal_connect ((gpointer) supprimer, "clicked",
                    G_CALLBACK (on_supprimer_tv_clicked),
                    NULL);
  g_signal_connect ((gpointer) refresh, "clicked",
                    G_CALLBACK (on_refresh_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (Donneur, Donneur, "Donneur");
  GLADE_HOOKUP_OBJECT (Donneur, fixed4, "fixed4");
  GLADE_HOOKUP_OBJECT (Donneur, treeview, "treeview");
  GLADE_HOOKUP_OBJECT (Donneur, label16, "label16");
  GLADE_HOOKUP_OBJECT (Donneur, label17, "label17");
  GLADE_HOOKUP_OBJECT (Donneur, label15, "label15");
  GLADE_HOOKUP_OBJECT (Donneur, ajouter, "ajouter");
  GLADE_HOOKUP_OBJECT (Donneur, alignment8, "alignment8");
  GLADE_HOOKUP_OBJECT (Donneur, hbox8, "hbox8");
  GLADE_HOOKUP_OBJECT (Donneur, image8, "image8");
  GLADE_HOOKUP_OBJECT (Donneur, label39, "label39");
  GLADE_HOOKUP_OBJECT (Donneur, modifier, "modifier");
  GLADE_HOOKUP_OBJECT (Donneur, alignment9, "alignment9");
  GLADE_HOOKUP_OBJECT (Donneur, hbox9, "hbox9");
  GLADE_HOOKUP_OBJECT (Donneur, image9, "image9");
  GLADE_HOOKUP_OBJECT (Donneur, label40, "label40");
  GLADE_HOOKUP_OBJECT (Donneur, supprimer, "supprimer");
  GLADE_HOOKUP_OBJECT (Donneur, alignment10, "alignment10");
  GLADE_HOOKUP_OBJECT (Donneur, hbox10, "hbox10");
  GLADE_HOOKUP_OBJECT (Donneur, image10, "image10");
  GLADE_HOOKUP_OBJECT (Donneur, label41, "label41");
  GLADE_HOOKUP_OBJECT (Donneur, refresh, "refresh");
  GLADE_HOOKUP_OBJECT (Donneur, alignment11, "alignment11");
  GLADE_HOOKUP_OBJECT (Donneur, hbox11, "hbox11");
  GLADE_HOOKUP_OBJECT (Donneur, image11, "image11");
  GLADE_HOOKUP_OBJECT (Donneur, label42, "label42");
  GLADE_HOOKUP_OBJECT (Donneur, stat, "stat");

  return Donneur;
}

GtkWidget*
create_stat (void)
{
  GtkWidget *stat;
  GtkWidget *fixed5;
  GtkObject *j_adj;
  GtkWidget *j;
  GtkObject *m_adj;
  GtkWidget *m;
  GtkObject *a_adj;
  GtkWidget *a;
  GtkWidget *label701;
  GtkWidget *ETS;
  GtkWidget *label45;
  GtkWidget *label46;
  GtkWidget *label47;
  GtkWidget *label48;
  GtkWidget *nbrdv;
  GtkWidget *nbets;
  GtkWidget *moy;
  GtkWidget *affichier;
  GtkWidget *alignment12;
  GtkWidget *hbox12;
  GtkWidget *image12;
  GtkWidget *label51;
  GtkWidget *annuler4;
  GtkWidget *alignment13;
  GtkWidget *hbox13;
  GtkWidget *image13;
  GtkWidget *label52;

  stat = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (stat), _("statistique"));

  fixed5 = gtk_fixed_new ();
  gtk_widget_show (fixed5);
  gtk_container_add (GTK_CONTAINER (stat), fixed5);

  j_adj = gtk_adjustment_new (1, 0, 100, 1, 10, 10);
  j = gtk_spin_button_new (GTK_ADJUSTMENT (j_adj), 1, 0);
  gtk_widget_show (j);
  gtk_fixed_put (GTK_FIXED (fixed5), j, 96, 136);
  gtk_widget_set_size_request (j, 60, 27);

  m_adj = gtk_adjustment_new (1, 0, 100, 1, 10, 10);
  m = gtk_spin_button_new (GTK_ADJUSTMENT (m_adj), 1, 0);
  gtk_widget_show (m);
  gtk_fixed_put (GTK_FIXED (fixed5), m, 224, 136);
  gtk_widget_set_size_request (m, 60, 27);

  a_adj = gtk_adjustment_new (0, 0, 100, 1, 10, 10);
  a = gtk_spin_button_new (GTK_ADJUSTMENT (a_adj), 1, 0);
  gtk_widget_show (a);
  gtk_fixed_put (GTK_FIXED (fixed5), a, 360, 136);
  gtk_widget_set_size_request (a, 60, 27);

  label701 = gtk_label_new (_("ETS:"));
  gtk_widget_show (label701);
  gtk_fixed_put (GTK_FIXED (fixed5), label701, 72, 40);
  gtk_widget_set_size_request (label701, 49, 17);

  ETS = gtk_combo_box_entry_new_text ();
  gtk_widget_show (ETS);
  gtk_fixed_put (GTK_FIXED (fixed5), ETS, 144, 32);
  gtk_widget_set_size_request (ETS, 189, 29);

  label45 = gtk_label_new (_("Date:"));
  gtk_widget_show (label45);
  gtk_fixed_put (GTK_FIXED (fixed5), label45, 56, 96);
  gtk_widget_set_size_request (label45, 41, 16);

  label46 = gtk_label_new (_("jour:"));
  gtk_widget_show (label46);
  gtk_fixed_put (GTK_FIXED (fixed5), label46, 40, 144);
  gtk_widget_set_size_request (label46, 49, 17);

  label47 = gtk_label_new (_("mois:"));
  gtk_widget_show (label47);
  gtk_fixed_put (GTK_FIXED (fixed5), label47, 168, 144);
  gtk_widget_set_size_request (label47, 49, 17);

  label48 = gtk_label_new (_("anne\303\251:"));
  gtk_widget_show (label48);
  gtk_fixed_put (GTK_FIXED (fixed5), label48, 304, 144);
  gtk_widget_set_size_request (label48, 49, 17);

  nbrdv = gtk_label_new ("");
  gtk_widget_show (nbrdv);
  gtk_fixed_put (GTK_FIXED (fixed5), nbrdv, 152, 264);
  gtk_widget_set_size_request (nbrdv, 152, 24);

  nbets = gtk_label_new ("");
  gtk_widget_show (nbets);
  gtk_fixed_put (GTK_FIXED (fixed5), nbets, 168, 288);
  gtk_widget_set_size_request (nbets, 144, 24);

  moy = gtk_label_new ("");
  gtk_widget_show (moy);
  gtk_fixed_put (GTK_FIXED (fixed5), moy, 144, 328);
  gtk_widget_set_size_request (moy, 184, 32);

  affichier = gtk_button_new ();
  gtk_widget_show (affichier);
  gtk_fixed_put (GTK_FIXED (fixed5), affichier, 88, 200);
  gtk_widget_set_size_request (affichier, 88, 32);

  alignment12 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment12);
  gtk_container_add (GTK_CONTAINER (affichier), alignment12);

  hbox12 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox12);
  gtk_container_add (GTK_CONTAINER (alignment12), hbox12);

  image12 = gtk_image_new_from_stock ("gtk-apply", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image12);
  gtk_box_pack_start (GTK_BOX (hbox12), image12, FALSE, FALSE, 0);

  label51 = gtk_label_new_with_mnemonic (_("Affichier"));
  gtk_widget_show (label51);
  gtk_box_pack_start (GTK_BOX (hbox12), label51, FALSE, FALSE, 0);

  annuler4 = gtk_button_new ();
  gtk_widget_show (annuler4);
  gtk_fixed_put (GTK_FIXED (fixed5), annuler4, 272, 200);
  gtk_widget_set_size_request (annuler4, 88, 32);

  alignment13 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment13);
  gtk_container_add (GTK_CONTAINER (annuler4), alignment13);

  hbox13 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox13);
  gtk_container_add (GTK_CONTAINER (alignment13), hbox13);

  image13 = gtk_image_new_from_stock ("gtk-cancel", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image13);
  gtk_box_pack_start (GTK_BOX (hbox13), image13, FALSE, FALSE, 0);

  label52 = gtk_label_new_with_mnemonic (_("Annuler "));
  gtk_widget_show (label52);
  gtk_box_pack_start (GTK_BOX (hbox13), label52, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) affichier, "clicked",
                    G_CALLBACK (on_affichier_clicked),
                    NULL);
  g_signal_connect ((gpointer) annuler4, "clicked",
                    G_CALLBACK (on_annuler4_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (stat, stat, "stat");
  GLADE_HOOKUP_OBJECT (stat, fixed5, "fixed5");
  GLADE_HOOKUP_OBJECT (stat, j, "j");
  GLADE_HOOKUP_OBJECT (stat, m, "m");
  GLADE_HOOKUP_OBJECT (stat, a, "a");
  GLADE_HOOKUP_OBJECT (stat, label701, "label701");
  GLADE_HOOKUP_OBJECT (stat, ETS, "ETS");
  GLADE_HOOKUP_OBJECT (stat, label45, "label45");
  GLADE_HOOKUP_OBJECT (stat, label46, "label46");
  GLADE_HOOKUP_OBJECT (stat, label47, "label47");
  GLADE_HOOKUP_OBJECT (stat, label48, "label48");
  GLADE_HOOKUP_OBJECT (stat, nbrdv, "nbrdv");
  GLADE_HOOKUP_OBJECT (stat, nbets, "nbets");
  GLADE_HOOKUP_OBJECT (stat, moy, "moy");
  GLADE_HOOKUP_OBJECT (stat, affichier, "affichier");
  GLADE_HOOKUP_OBJECT (stat, alignment12, "alignment12");
  GLADE_HOOKUP_OBJECT (stat, hbox12, "hbox12");
  GLADE_HOOKUP_OBJECT (stat, image12, "image12");
  GLADE_HOOKUP_OBJECT (stat, label51, "label51");
  GLADE_HOOKUP_OBJECT (stat, annuler4, "annuler4");
  GLADE_HOOKUP_OBJECT (stat, alignment13, "alignment13");
  GLADE_HOOKUP_OBJECT (stat, hbox13, "hbox13");
  GLADE_HOOKUP_OBJECT (stat, image13, "image13");
  GLADE_HOOKUP_OBJECT (stat, label52, "label52");

  return stat;
}

