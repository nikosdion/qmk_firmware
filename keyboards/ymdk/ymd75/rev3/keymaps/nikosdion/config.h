// Change USB VID:PID to 05AC:029A (Magic Keyboard with Touch ID)
#undef VENDOR_ID
#define VENDOR_ID 0x05AC
#undef PRODUCT_ID
#define PRODUCT_ID 0x0267

/**
 * Apple PIDs (VID is always 05AC)
 * - 029A   Magic Keyboard with Touch ID -- Fx not working, Globe-x works
 * - 0267   Magic Keyboard A1644
 * - 0263   Apple Internal Keyboard / Trackpad (MacBook Retina)
 * - 0259   Internal Keyboard/Trackpad
 * - 0252   Internal Keyboard/Trackpad (ANSI)
 * - 024F   Aluminium Keyboard (ANSI)
 * - 0245   Internal Keyboard (ANSI)
 * - 0242   Internal Keyboard (ANSI)
 * - 023F   Internal Keyboard (ANSI)
 * - 0236   Internal Keyboard (ANSI)
 * - 0229   Internal Keyboard (ANSI)
 * - 0223   Internal Keyboard (ANSI)
 * - 0220   Aluminum Keyboard (ANSI)
 *
 * Reference: https://devicehunt.com/view/type/usb/vendor/05AC
 */

//#define PRODUCT_ID 0x029D
