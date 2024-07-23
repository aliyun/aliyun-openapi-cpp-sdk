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

#ifndef ALIBABACLOUD_RDS_MODEL_MODIFYDBINSTANCESECURITYGROUPRULEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_MODIFYDBINSTANCESECURITYGROUPRULEREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT ModifyDBInstanceSecurityGroupRuleRequest : public RpcServiceRequest {
public:
	ModifyDBInstanceSecurityGroupRuleRequest();
	~ModifyDBInstanceSecurityGroupRuleRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getPortRange() const;
	void setPortRange(const std::string &portRange);
	std::string getIpProtocol() const;
	void setIpProtocol(const std::string &ipProtocol);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getSourceCidrIp() const;
	void setSourceCidrIp(const std::string &sourceCidrIp);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getOwnerId() const;
	void setOwnerId(const std::string &ownerId);
	std::string getSecurityGroupRuleId() const;
	void setSecurityGroupRuleId(const std::string &securityGroupRuleId);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string description_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string dBInstanceId_;
	std::string portRange_;
	std::string ipProtocol_;
	std::string resourceOwnerAccount_;
	std::string sourceCidrIp_;
	std::string ownerAccount_;
	std::string ownerId_;
	std::string securityGroupRuleId_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_MODIFYDBINSTANCESECURITYGROUPRULEREQUEST_H_
