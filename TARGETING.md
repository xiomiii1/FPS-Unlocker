# Targeting notes

The supplied `libminecraftpe` archive was inspected for FPS-related symbols/strings.
Relevant names found include `MAX_FRAMERATE`, `MAX_FRAMERATE_VIBRANT_VISUALS`,
`VSYNC`, and `getRefreshRate`.

Do not patch an arbitrary address. Resolve the exact target in the exact Bedrock build,
verify its function signature, then install the hook through the supported loader API.
