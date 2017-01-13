using Gtk;

namespace Boilerplate {
	
	[GtkTemplate (ui="/de/hannenz/boilerplate/interface/boilerplate_window.ui")]
	public class ApplicationWindow : Gtk.ApplicationWindow {

		public ApplicationWindow(Gtk.Application app) {
			GLib.Object(application: app);
		}
	}
}
