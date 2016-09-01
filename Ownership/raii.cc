#include <mutex>
#include <iostream>

struct NoOpMutex {
	void lock() {
	}
	void unlock() {
	}
};

template <typename LockPolicy,
          typename LogPolicy>
struct Lockable {
protected:
	std::mutex m;
public:
	void lock() {
		LockPolicy::lock(m);
		LogPolicy::logLocking();
	}
	void unlock() {
		LockPolicy::unlock(m);
		LogPolicy::logUnlocking();
	}
};

struct NopLockingPolicy {
	static void lock(std::mutex& /*m*/) {
	}
	static void unlock(std::mutex& /*m*/) {
	}
};

struct RealLockingPolicy {
	static void lock(std::mutex& m) {
		m.lock();
	}
	static void unlock(std::mutex& m) {
		m.unlock();
	}
};

struct StdoutLoggingPolicy {
	static void logLocking() {
		printf("Locked!\n");
	}
	static void logUnlocking() {
		printf("Unlocked!\n");
	}
};

struct NopLoggingPolicy {
	static void logLocking() {
	}
	static void logUnlocking() {
	}
};

using NopLogLockable = Lockable<NopLockingPolicy, NopLoggingPolicy>;
using LogLockable    = Lockable<RealLockingPolicy, StdoutLoggingPolicy>;

int main() {
  using Mutex = std::mutex;

  Mutex mutex;
  LogLockable logmutex;

  {
	  std::lock_guard<decltype(logmutex)> guard{logmutex};
    
    // fn();
  }

}
