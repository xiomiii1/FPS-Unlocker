# FPS Unlocker Mod

Native Android/Minecraft Bedrock FPS-unlocker scaffold.

## Target discovered in the supplied library
The supplied native library contains FPS/display-related identifiers including:
- MAX_FRAMERATE
- MAX_FRAMERATE_VIBRANT_VISUALS
- VSYNC
- getRefreshRate

## Important
This project does not hard-code guessed offsets. The final hook/patch must resolve the
symbols or signatures against the exact Minecraft Bedrock build being modded.

## Intended behavior
- Raise the game's configured FPS ceiling to the device display refresh rate (or a configured cap).
- Optionally disable the game's FPS clamp.
- Avoid forcing a frame rate higher than the physical display refresh rate by default.
- Preserve the game's normal VSync behavior unless explicitly configured otherwise.

## Build
Use the Levi LaunchDroid/Preloader Android build system and APIs documented by the project
for the exact target environment. The native implementation should be connected to the
loader's supported library-load/hook mechanism rather than using invented APIs.
