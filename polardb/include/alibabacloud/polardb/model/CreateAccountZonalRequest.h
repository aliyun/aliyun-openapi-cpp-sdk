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

#ifndef ALIBABACLOUD_POLARDB_MODEL_CREATEACCOUNTZONALREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_CREATEACCOUNTZONALREQUEST_H_

#include <alibabacloud/polardb/PolardbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardb {
namespace Model {
class ALIBABACLOUD_POLARDB_EXPORT CreateAccountZonalRequest : public RpcServiceRequest {
public:
	CreateAccountZonalRequest();
	~CreateAccountZonalRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getNodeType() const;
	void setNodeType(const std::string &nodeType);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getAccountType() const;
	void setAccountType(const std::string &accountType);
	std::string getAccountDescription() const;
	void setAccountDescription(const std::string &accountDescription);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getAccountPrivilege() const;
	void setAccountPrivilege(const std::string &accountPrivilege);
	std::string getAccountName() const;
	void setAccountName(const std::string &accountName);
	std::string getTairAccountPassword() const;
	void setTairAccountPassword(const std::string &tairAccountPassword);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getAccountPassword() const;
	void setAccountPassword(const std::string &accountPassword);
	std::string getDBName() const;
	void setDBName(const std::string &dBName);
	std::string getPrivForAllDB() const;
	void setPrivForAllDB(const std::string &privForAllDB);

private:
	long resourceOwnerId_;
	std::string nodeType_;
	std::string clientToken_;
	std::string accountType_;
	std::string accountDescription_;
	std::string accessKeyId_;
	std::string accountPrivilege_;
	std::string accountName_;
	std::string tairAccountPassword_;
	std::string resourceOwnerAccount_;
	std::string dBClusterId_;
	std::string ownerAccount_;
	long ownerId_;
	std::string accountPassword_;
	std::string dBName_;
	std::string privForAllDB_;
};
} // namespace Model
} // namespace Polardb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDB_MODEL_CREATEACCOUNTZONALREQUEST_H_
