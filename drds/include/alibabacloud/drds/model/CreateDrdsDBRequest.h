/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_DRDS_MODEL_CREATEDRDSDBREQUEST_H_
#define ALIBABACLOUD_DRDS_MODEL_CREATEDRDSDBREQUEST_H_

#include <alibabacloud/drds/DrdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Drds {
namespace Model {
class ALIBABACLOUD_DRDS_EXPORT CreateDrdsDBRequest : public RpcServiceRequest {
public:
	struct RdsSuperAccount {
		std::string password;
		std::string accountName;
		std::string dbInstanceId;
	};
	struct InstDbName {
		std::string dbInstanceId;
	};
	CreateDrdsDBRequest();
	~CreateDrdsDBRequest();
	std::string getEncode() const;
	void setEncode(const std::string &encode);
	std::vector<std::string> getRdsInstance() const;
	void setRdsInstance(const std::vector<std::string> &rdsInstance);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getPassword() const;
	void setPassword(const std::string &password);
	std::vector<RdsSuperAccount> getRdsSuperAccount() const;
	void setRdsSuperAccount(const std::vector<RdsSuperAccount> &rdsSuperAccount);
	std::string getAccountName() const;
	void setAccountName(const std::string &accountName);
	std::string getDrdsInstanceId() const;
	void setDrdsInstanceId(const std::string &drdsInstanceId);
	bool getDbInstanceIsCreating() const;
	void setDbInstanceIsCreating(bool dbInstanceIsCreating);
	std::vector<InstDbName> getInstDbName() const;
	void setInstDbName(const std::vector<InstDbName> &instDbName);
	std::string getDbName() const;
	void setDbName(const std::string &dbName);
	std::string getDbInstType() const;
	void setDbInstType(const std::string &dbInstType);

private:
	std::string encode_;
	std::vector<std::string> rdsInstance_;
	std::string type_;
	std::string accessKeyId_;
	std::string password_;
	std::vector<RdsSuperAccount> rdsSuperAccount_;
	std::string accountName_;
	std::string drdsInstanceId_;
	bool dbInstanceIsCreating_;
	std::vector<InstDbName> instDbName_;
	std::string dbName_;
	std::string dbInstType_;
};
} // namespace Model
} // namespace Drds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DRDS_MODEL_CREATEDRDSDBREQUEST_H_
