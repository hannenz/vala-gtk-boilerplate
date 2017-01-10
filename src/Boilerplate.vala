/**
 * A Boilerplate for GTK3 Project
 *
 * @author Johannes Braun <johannes.braun@hannenz.de>
 * @version 2017-01-10 
 *
 * Handling:
 * - Application
 * - ApplicationWindow
 * - AppMenu with About Dialog
 * - I18n
 * - GSettings
 * - Ressources
 * - Build with cmake (autovala)
 */
using Gtk;

namespace Boilerplate {

	public const string application_id = "de.hannenz.boilerplate";

	public class Boilerplate : Gtk.Application {

		private BoilerplateWindow window;
		private GLib.Settings settings;
	
		public Boilerplate() {
			Object(application_id: application_id);
		}

		protected override void activate() {
			settings = new GLib.Settings(application_id);
			window = new BoilerplateWindow();
			window.show_all();
			window.present();
		}
	}

	public static int main(string[] args) {
		var app = new Boilerplate();
		return app.run(args);
	}
}
