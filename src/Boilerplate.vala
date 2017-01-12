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

	public const string app_id = "de.hannenz.boilerplate";

	public class Boilerplate : Gtk.Application {

		private BoilerplateApplicationWindow window;
		private GLib.Settings settings;
	
		public Boilerplate() {
			Object(
				application_id: app_id,
				flags: ApplicationFlags.FLAGS_NONE
			);

			// Setup I18n 
			Intl.bindtextdomain(Constants.GETTEXT_PACKAGE, Path.build_filename(Constants.DATADIR,"locale"));
			Intl.setlocale (LocaleCategory.ALL, "");
			Intl.textdomain(Constants.GETTEXT_PACKAGE);
			Intl.bind_textdomain_codeset(Constants.GETTEXT_PACKAGE, "utf-8" );
		}

		protected override void activate() {
			settings = new GLib.Settings(application_id);
			window = new BoilerplateApplicationWindow();
			window.show_all();
			window.present();

			debug(app_id);
			debug(settings.get_string("foo"));
			debug(_("Hello, world"));
		}

		/* protected override void startup() { */
		/* 	// set_app_menu here	 */
		/* } */
	}

	public static int main(string[] args) {
		var app = new Boilerplate();
		return app.run(args);
	}
}


