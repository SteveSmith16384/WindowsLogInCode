include <windows.h>
include <typedefs.h>
include <stdio.h>

/* Windows login code.  Called by Windows once background services are running.
*/
int main(int argc, char **argv)
{
	show_picture();
	wait_for_keypress();
	start_thread({spin_harddrive_constantly()});
	send_private_data_to_redmond();
	show_spinner(WinDefs.2_MINUTES);
	check_windows_licence_is_fully_paid();
	var credentials = show_login_box();
	show_spinner(WinDefs.2_MINUTES);
	if (rand(1,100) < 1) {
		show_error_code(rand(10000,99999));
		return -1;
	}
	if (credentials->correct()) {
		show_spinner(WinDefs.2_MINUTES);
		defrag_hard_drive();
		load_adverts_for_start_menu();
		if (now().month == 1 && now().day == 1) {
			set_bing_as_default();
			set_edge_as_default_browser();
		}
		return 1;
	} else {
		show_spinner(WinDefs.2_MINUTES);
		goto 10;
	}
}