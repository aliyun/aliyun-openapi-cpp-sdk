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

#ifndef ALIBABACLOUD_RDS_MODEL_MODIFYDBINSTANCECONFIGREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_MODIFYDBINSTANCECONFIGREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT ModifyDBInstanceConfigRequest : public RpcServiceRequest {
public:
	ModifyDBInstanceConfigRequest();
	~ModifyDBInstanceConfigRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getSwitchTimeMode() const;
	void setSwitchTimeMode(const std::string &switchTimeMode);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getConfigName() const;
	void setConfigName(const std::string &configName);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getSwitchTime() const;
	void setSwitchTime(const std::string &switchTime);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getConfigValue() const;
	void setConfigValue(const std::string &configValue);
	long getOwnerId() const;
	void setOwnerId(long ownerId);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string accessKeyId_;
	std::string switchTimeMode_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string configName_;
	std::string dBInstanceId_;
	std::string switchTime_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string configValue_;
	long ownerId_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_MODIFYDBINSTANCECONFIGREQUEST_H_
