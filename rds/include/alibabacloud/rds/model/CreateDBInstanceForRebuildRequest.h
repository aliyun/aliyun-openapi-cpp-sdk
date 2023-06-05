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

#ifndef ALIBABACLOUD_RDS_MODEL_CREATEDBINSTANCEFORREBUILDREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_CREATEDBINSTANCEFORREBUILDREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT CreateDBInstanceForRebuildRequest : public RpcServiceRequest {
public:
	CreateDBInstanceForRebuildRequest();
	~CreateDBInstanceForRebuildRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getZoneIdSlave1() const;
	void setZoneIdSlave1(const std::string &zoneIdSlave1);
	std::string getZoneIdSlave2() const;
	void setZoneIdSlave2(const std::string &zoneIdSlave2);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getDBInstanceDescription() const;
	void setDBInstanceDescription(const std::string &dBInstanceDescription);
	std::string getDBInstanceNetType() const;
	void setDBInstanceNetType(const std::string &dBInstanceNetType);
	std::string getPeriod() const;
	void setPeriod(const std::string &period);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getUsedTime() const;
	void setUsedTime(const std::string &usedTime);
	std::string getSecurityIPList() const;
	void setSecurityIPList(const std::string &securityIPList);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getVPCId() const;
	void setVPCId(const std::string &vPCId);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getPayType() const;
	void setPayType(const std::string &payType);
	std::string getInstanceNetworkType() const;
	void setInstanceNetworkType(const std::string &instanceNetworkType);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string zoneIdSlave1_;
	std::string zoneIdSlave2_;
	std::string accessKeyId_;
	std::string resourceGroupId_;
	std::string securityToken_;
	std::string regionId_;
	std::string dBInstanceId_;
	std::string dBInstanceDescription_;
	std::string dBInstanceNetType_;
	std::string period_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string usedTime_;
	std::string securityIPList_;
	std::string vSwitchId_;
	std::string vPCId_;
	std::string zoneId_;
	std::string payType_;
	std::string instanceNetworkType_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_CREATEDBINSTANCEFORREBUILDREQUEST_H_
