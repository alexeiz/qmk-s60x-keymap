# Sentraq S60-X Keyboard Keymap

This is my keymap layout for the Sentraq S60-X keyboard.  It requires the [QMK Firmware](http://qmk.fm/).

## Keyboard

Sentraq S60-X is a fully programmable DIY keyboard kit sold here:
https://sentraq.com/collections/kits/products/s60-x-diy-keyboard-kit

## Keymap

This keymap is loosely based on Pok3r, but with a single Fn-layer and the Pn
key replaced with a second Fn key.  This keymap supports RGB features of S60-X.
In fact, the RGB control keys are left untouched.  For convenience there are two
Fn keys: on the left and right sides. The rest of the keymap is simple: Fn+HJKL
are mapped to arrow keys, Fn+A/E - home/end, Fn+D/U - page down/up, Shift+Esc -
tilde, Fn+Esc - grave character.  Some keys are missing (such as scroll lock)
because I don't need them.

The visual representation of the keymap can be viewed on
[keyboard-layout-editor.com](http://www.keyboard-layout-editor.com/#/gists/bfe102488209a4641dd0331945b8d28c).

## How to build and flash this keymap firmware

These are the steps to compile and flash this keymap.  It assumes that you have
a Linux distro and basic development tools.

0. Install prerequisites:
  * gcc-avr
  * avr-libc
1. Clone the QMK Firmware repository:

        $ git clone --recursive https://github.com/qmk/qmk_firmware.git

2. Clone this repository into `keyboards/s60_x/keymaps` sub-directory:

        $ cd qmk_firmware/keyboards/s60_x/keymaps
        $ git clone https://github.com/alexeiz/qmk-s60x-keymap.git my_layout

3. Build all firmwares for S60-X including this keymap layout with RGB support:

        $ cd qmk_firmware/keyboards/s60_x
        $ make rgb

   * Result: `s60_x_rgb_my_layout.hex` firmware file in the root `qmk_firmware`
     directory

4. Flash the firmware (you need the dnf-programmer tool):
  * Build and install the `dfu-programmer` tool (https://github.com/dfu-programmer/dfu-programmer).
  * Press and hold the reset button on the back of the keyboard for several
    seconds to put the keyboard into the flashing mode.
  * Erase, flash the firmware and restart the keyboard:

        $ cd qmk_firmware
        $ sudo dfu-programmer atmega32u4 erase
        $ sudo dfu-programmer atmega32u4 flash s60_x_rgb_my_layout.hex
        $ sudo dfu-programmer atmega32u4 start

5. If something went wrong and your keyboard is messed up, restore the factory
   default firmware using file `S60-X_FW.hex`.
