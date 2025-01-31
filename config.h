// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 300

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define QUICK_TAP_TERM 0
#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD
// Mouse key speed and acceleration.
#define MK_KINETIC_SPEED          // Enable kinetic mode

// Basic movement settings
#define MOUSEKEY_DELAY 5          // 5ms delay before cursor movement
#define MOUSEKEY_INTERVAL 10      // 10ms between movements
#define MOUSEKEY_MOVE_DELTA 16    // 16px initial step size
#define MOUSEKEY_INITIAL_SPEED 200  // Initial cursor speed (px/sec)
#define MOUSEKEY_BASE_SPEED 5000    // Max base speed
#define MOUSEKEY_DECELERATED_SPEED 400   // Speed when slowing down
#define MOUSEKEY_ACCELERATED_SPEED 3000  // Speed when accelerating

// Mouse wheel settings
#define MOUSEKEY_WHEEL_INITIAL_MOVEMENTS 16   // Initial wheel speed
#define MOUSEKEY_WHEEL_BASE_MOVEMENTS 32      // Base wheel speed
#define MOUSEKEY_WHEEL_ACCELERATED_MOVEMENTS 48  // Accelerated wheel speed
#define MOUSEKEY_WHEEL_DECELERATED_MOVEMENTS 8   // Decelerated wheel speed