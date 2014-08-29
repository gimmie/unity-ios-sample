#import "Gimmie.h"
#import "GMUnityIntegration.h"

void NativeIOSAnonymousLogin()
{
    [[GMService sharedService] loginWithGenerateID];
}

void NativeIOSLogin(const char *username)
{
    NSString *user = [NSString stringWithUTF8String:username];
    [Gimmie login:user];
}

void NativeIOSLogout()
{
    [[GMService sharedService] logout];
}

bool NativeIOSIsAnonymous()
{
    NSString *user = [GMService sharedService].user;
    return [user hasPrefix:@"guest:"];
}

void NativeIOSUpdateGimmieCountry(const char *country)
{
    [GMService sharedService].country = [NSString stringWithUTF8String: country];
}

void NativeIOSShowGimmieRewards()
{
    [Gimmie showGimmieView];
}

void NativeIOSBindGimmieNotification() {
    [Gimmie start];
    [[NSNotificationCenter defaultCenter] addObserverForName:GMNeedLoginNotification
                                                      object:nil
                                                       queue:nil
                                                  usingBlock:^(NSNotification *note) {
                                                    UnitySendMessage("GimmieBinding", "HandleNeedLogin", "");
                                                  }];
}

void NativeIOSTriggerEvent(const char *eventname)
{
    NSString *event = [NSString stringWithUTF8String:eventname];
    [Gimmie trigger:event];
}

