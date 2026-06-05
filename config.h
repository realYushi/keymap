// Tap-hold tuning for Keychron's older QMK fork.
#define TAPPING_TERM 250
#define TAPPING_TERM_PER_KEY
#define QUICK_TAP_TERM 100

// Gentle hold behavior for home-row mods.
#define PERMISSIVE_HOLD

// More aggressive hold behavior only for selected layer-tap keys.
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY

#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD

// Mouse
#define MK_KINETIC_SPEED	// Enable kinetic mode
#define MOUSEKEY_DELAY	5	//Delay between pressing a movement key and cursor movement
#define MOUSEKEY_INTERVAL	10	//Time between cursor movements in milliseconds
#define MOUSEKEY_MOVE_DELTA	16	//Step size for accelerating from initial to base speed
#define MOUSEKEY_INITIAL_SPEED	100	//Initial speed of the cursor in pixel per second
#define MOUSEKEY_BASE_SPEED	5000	//Maximum cursor speed at which acceleration stops
#define MOUSEKEY_DECELERATED_SPEED	400	//Decelerated cursor speed
#define MOUSEKEY_ACCELERATED_SPEED	3000	//Accelerated cursor speed
#define MOUSEKEY_WHEEL_INITIAL_MOVEMENTS	16	//Initial number of movements of the mouse wheel
#define MOUSEKEY_WHEEL_BASE_MOVEMENTS	32	//Maximum number of movements at which acceleration stops
#define MOUSEKEY_WHEEL_ACCELERATED_MOVEMENTS	48	//Accelerated wheel movements
#define MOUSEKEY_WHEEL_DECELERATED_MOVEMENTS	8	//Decelerated wheel movements