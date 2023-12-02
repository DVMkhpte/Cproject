#include "header/createwindow.h"

GtkWidget *create_window(GtkApplication *app){
    GtkWidget *window;

    window = gtk_application_window_new(app);
    gtk_widget_set_name (GTK_WIDGET(window), "main-window");
    gtk_window_set_title(GTK_WINDOW(window), "Application");
    
    gtk_window_set_default_size(GTK_WINDOW(window), 1500, 1000);

    return window;

    
}