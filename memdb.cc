#include "memdb.h"

ResStat memdb::put(const string &key, const string &val) {
	ResStat stat = new ResStat();
	int ret = this->real_put(key, val, stat);
	if (ret == 0) {
		this->memkv[key] = val;
	}
	return stat;
}

ResStat memdb::get(const string &key, string &val) {
	ResStat stat = new ResStat();

}
