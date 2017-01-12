/* BoilerplateWindow.c generated by valac 0.34.1, the Vala compiler
 * generated from BoilerplateWindow.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>


#define BOILERPLATE_TYPE_BOILERPLATE_APPLICATION_WINDOW (boilerplate_boilerplate_application_window_get_type ())
#define BOILERPLATE_BOILERPLATE_APPLICATION_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BOILERPLATE_TYPE_BOILERPLATE_APPLICATION_WINDOW, BoilerplateBoilerplateApplicationWindow))
#define BOILERPLATE_BOILERPLATE_APPLICATION_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BOILERPLATE_TYPE_BOILERPLATE_APPLICATION_WINDOW, BoilerplateBoilerplateApplicationWindowClass))
#define BOILERPLATE_IS_BOILERPLATE_APPLICATION_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BOILERPLATE_TYPE_BOILERPLATE_APPLICATION_WINDOW))
#define BOILERPLATE_IS_BOILERPLATE_APPLICATION_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BOILERPLATE_TYPE_BOILERPLATE_APPLICATION_WINDOW))
#define BOILERPLATE_BOILERPLATE_APPLICATION_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BOILERPLATE_TYPE_BOILERPLATE_APPLICATION_WINDOW, BoilerplateBoilerplateApplicationWindowClass))

typedef struct _BoilerplateBoilerplateApplicationWindow BoilerplateBoilerplateApplicationWindow;
typedef struct _BoilerplateBoilerplateApplicationWindowClass BoilerplateBoilerplateApplicationWindowClass;
typedef struct _BoilerplateBoilerplateApplicationWindowPrivate BoilerplateBoilerplateApplicationWindowPrivate;

struct _BoilerplateBoilerplateApplicationWindow {
	GtkApplicationWindow parent_instance;
	BoilerplateBoilerplateApplicationWindowPrivate * priv;
};

struct _BoilerplateBoilerplateApplicationWindowClass {
	GtkApplicationWindowClass parent_class;
};


static gpointer boilerplate_boilerplate_application_window_parent_class = NULL;

GType boilerplate_boilerplate_application_window_get_type (void) G_GNUC_CONST;
enum  {
	BOILERPLATE_BOILERPLATE_APPLICATION_WINDOW_DUMMY_PROPERTY
};
BoilerplateBoilerplateApplicationWindow* boilerplate_boilerplate_application_window_new (void);
BoilerplateBoilerplateApplicationWindow* boilerplate_boilerplate_application_window_construct (GType object_type);


BoilerplateBoilerplateApplicationWindow* boilerplate_boilerplate_application_window_construct (GType object_type) {
	BoilerplateBoilerplateApplicationWindow * self = NULL;
	self = (BoilerplateBoilerplateApplicationWindow*) g_object_new (object_type, NULL);
	return self;
}


BoilerplateBoilerplateApplicationWindow* boilerplate_boilerplate_application_window_new (void) {
	return boilerplate_boilerplate_application_window_construct (BOILERPLATE_TYPE_BOILERPLATE_APPLICATION_WINDOW);
}


static void boilerplate_boilerplate_application_window_class_init (BoilerplateBoilerplateApplicationWindowClass * klass) {
	boilerplate_boilerplate_application_window_parent_class = g_type_class_peek_parent (klass);
}


static void boilerplate_boilerplate_application_window_instance_init (BoilerplateBoilerplateApplicationWindow * self) {
}


GType boilerplate_boilerplate_application_window_get_type (void) {
	static volatile gsize boilerplate_boilerplate_application_window_type_id__volatile = 0;
	if (g_once_init_enter (&boilerplate_boilerplate_application_window_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (BoilerplateBoilerplateApplicationWindowClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) boilerplate_boilerplate_application_window_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (BoilerplateBoilerplateApplicationWindow), 0, (GInstanceInitFunc) boilerplate_boilerplate_application_window_instance_init, NULL };
		GType boilerplate_boilerplate_application_window_type_id;
		boilerplate_boilerplate_application_window_type_id = g_type_register_static (gtk_application_window_get_type (), "BoilerplateBoilerplateApplicationWindow", &g_define_type_info, 0);
		g_once_init_leave (&boilerplate_boilerplate_application_window_type_id__volatile, boilerplate_boilerplate_application_window_type_id);
	}
	return boilerplate_boilerplate_application_window_type_id__volatile;
}


