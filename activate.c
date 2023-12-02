#include "header/activate.h"

void activate_window(GtkApplication *app, gpointer user_data) {
    GtkWidget *window = create_window(app); 
    gtk_window_present(GTK_WINDOW(window)); 

    GtkBuilder *builder = gtk_builder_new ();
  gtk_builder_add_from_file (builder, "fic_ui/menuwindow.ui", NULL);

  GObject *window = gtk_builder_get_object (builder, "window");
  gtk_window_set_application (GTK_WINDOW (window), app);

  gtk_widget_set_visible (GTK_WIDGET (window), TRUE);

  
  g_object_unref (builder);


} 