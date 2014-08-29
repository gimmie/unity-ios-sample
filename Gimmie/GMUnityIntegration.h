extern "C" {
    void NativeIOSAnonymousLogin();
    void NativeIOSLogin(const char *username);
    void NativeIOSLogout();
    bool NativeIOSIsAnonymous();
    void NativeIOSUpdateGimmieCountry(const char *country);
    void NativeIOSShowGimmieRewards();
    void NativeIOSBindGimmieNotification();
    void NativeIOSTriggerEvent(const char *eventname);
}
