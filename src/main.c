#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <gtk/gtk.h>
#include "interface.h"
#include "support.h"
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  GtkWidget *myWindow;
#ifdef ENABLE_NLS
  bindtextdomain(GETTEXT_PACKAGE, PACKAGE_LOCALE_DIR);
  bind_textdomain_codeset(GETTEXT_PACKAGE, "UTF-8");
  textdomain(GETTEXT_PACKAGE);
#endif

  gtk_set_locale();
  gtk_init(&argc, &argv);

  add_pixmap_directory(PACKAGE_DATA_DIR "/" PACKAGE "/pixmaps");

  myWindow = create_Donneur();

  gtk_widget_show(myWindow);
  gtk_main();

  return 0;
}
