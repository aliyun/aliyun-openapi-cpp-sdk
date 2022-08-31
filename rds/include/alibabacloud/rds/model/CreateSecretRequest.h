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

#ifndef ALIBABACLOUD_RDS_MODEL_CREATESECRETREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_CREATESECRETREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT CreateSecretRequest : public RpcServiceRequest {
public:
	CreateSecretRequest();
	~CreateSecretRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getPassword() const;
	void setPassword(const std::string &password);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getEngine() const;
	void setEngine(const std::string &engine);
	std::string getDbInstanceId() const;
	void setDbInstanceId(const std::string &dbInstanceId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getDbNames() const;
	void setDbNames(const std::string &dbNames);
	std::string getSecretName() const;
	void setSecretName(const std::string &secretName);
	std::string getUsername() const;
	void setUsername(const std::string &username);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string description_;
	std::string accessKeyId_;
	std::string resourceGroupId_;
	std::string password_;
	std::string regionId_;
	std::string engine_;
	std::string dbInstanceId_;
	std::string resourceOwnerAccount_;
	long ownerId_;
	std::string dbNames_;
	std::string secretName_;
	std::string username_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_CREATESECRETREQUEST_H_
