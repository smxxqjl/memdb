#include <map>
#include <string>

class memdb<ResStat> {
	public:
		ResStat *put(const string &key, const string &val);
		ResStat *get(const string &key, string &val);
		virtual int real_put(const string &key, const string &val, ResStat &stat);
		virtual int real_get(const string &key, const string &val, ResStat &stat);
	private:
		// This map simulate the inserted kv datastore in memory
		std::map<std::string, std::string> memkv;
};
