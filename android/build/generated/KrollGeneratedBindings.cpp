/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -L C++ -E -t /Users/dimovdaniel/Documents/Appcelerator_Studio_Workspace/tismooch/android/build/generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/Users/dimovdaniel/Documents/Appcelerator_Studio_Workspace/tismooch/android/build/generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "com.mobidonia.smooch.ExampleProxy.h"
#include "com.mobidonia.smooch.TismoochModule.h"


#line 14 "/Users/dimovdaniel/Documents/Appcelerator_Studio_Workspace/tismooch/android/build/generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 3, duplicates = 0 */

class TismoochBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
TismoochBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
TismoochBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 2,
      MIN_WORD_LENGTH = 33,
      MAX_WORD_LENGTH = 35,
      MIN_HASH_VALUE = 33,
      MAX_HASH_VALUE = 35
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 17 "/Users/dimovdaniel/Documents/Appcelerator_Studio_Workspace/tismooch/android/build/generated/KrollGeneratedBindings.gperf"
      {"com.mobidonia.smooch.ExampleProxy",::com::mobidonia::smooch::tismooch::ExampleProxy::bindProxy,::com::mobidonia::smooch::tismooch::ExampleProxy::dispose},
      {""},
#line 16 "/Users/dimovdaniel/Documents/Appcelerator_Studio_Workspace/tismooch/android/build/generated/KrollGeneratedBindings.gperf"
      {"com.mobidonia.smooch.TismoochModule",::com::mobidonia::smooch::TismoochModule::bindProxy,::com::mobidonia::smooch::TismoochModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 18 "/Users/dimovdaniel/Documents/Appcelerator_Studio_Workspace/tismooch/android/build/generated/KrollGeneratedBindings.gperf"

