#pragma once
// KernelTimeMachine
// Safe CIA manager
// Licensed under GNU General Public License (GPL)
// Check out https://www.gnu.org/licenses/gpl.html

bool checkIfInstalled(u8 mediatype, u64 titleID);
bool installCIA(char *path, u8 mediatype, char *name, bool allowSafeTitles);
bool installFIRM(char *path, u8 mediatype, char *name, bool allowSafeTitles);
bool installPendingFIRM();
bool isFirmPending();
