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

#ifndef ALIBABACLOUD_POLARDB_MODEL_CREATEGLOBALDATABASENETWORKREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_CREATEGLOBALDATABASENETWORKREQUEST_H_

#include <alibabacloud/polardb/PolardbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardb {
namespace Model {
class ALIBABACLOUD_POLARDB_EXPORT CreateGlobalDatabaseNetworkRequest : public RpcServiceRequest {
public:
	CreateGlobalDatabaseNetworkRequest();
	~CreateGlobalDatabaseNetworkRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getAccountName() const;
	void setAccountName(const std::string &accountName);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getGDNDescription() const;
	void setGDNDescription(const std::string &gDNDescription);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	bool getEnableGlobalDomainName() const;
	void setEnableGlobalDomainName(bool enableGlobalDomainName);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getAccountPassword() const;
	void setAccountPassword(const std::string &accountPassword);
	std::string getDBName() const;
	void setDBName(const std::string &dBName);

private:
	long resourceOwnerId_;
	std::string accessKeyId_;
	std::string resourceGroupId_;
	std::string accountName_;
	std::string securityToken_;
	std::string gDNDescription_;
	std::string resourceOwnerAccount_;
	std::string dBClusterId_;
	std::string ownerAccount_;
	bool enableGlobalDomainName_;
	long ownerId_;
	std::string accountPassword_;
	std::string dBName_;
};
} // namespace Model
} // namespace Polardb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDB_MODEL_CREATEGLOBALDATABASENETWORKREQUEST_H_
