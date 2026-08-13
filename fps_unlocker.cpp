#include <algorithm>
#include <cstdint>

namespace fps_unlocker {

// Converts a requested cap into a safe target. A value <= 0 means "use display refresh".
static int32_t choose_target_fps(int32_t requested_cap, float refresh_rate_hz) {
    if (requested_cap <= 0) {
        return std::max<int32_t>(60, static_cast<int32_t>(refresh_rate_hz + 0.5f));
    }
    return std::max<int32_t>(30, requested_cap);
}

// Keep this function small so it can be called from a hook around the game's
// framerate-limit calculation once the exact signature is resolved for the build.
int32_t override_framerate_limit(int32_t original_limit,
                                 int32_t requested_cap,
                                 float refresh_rate_hz) {
    const int32_t target = choose_target_fps(requested_cap, refresh_rate_hz);
    return std::max(original_limit, target);
}

} // namespace fps_unlocker
