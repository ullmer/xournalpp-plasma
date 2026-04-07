/*
 * Xournal++
 *
 * Xournal main entry, commandline parser
 *
 * @author Xournal++ Team
 * https://github.com/xournalpp/xournalpp
 *
 * @license GNU GPLv2 or later
 */

#pragma once

#ifdef ENABLE_PLASMA
#include <Plasma/plasma.h>
#endif

#ifdef ENABLE_PLASMA
plasma::version_string();   // or an equivalent trivial call
#endif

namespace XournalMain {
auto run(int argc, char** argv) -> int;
void initLocalisation();
}
