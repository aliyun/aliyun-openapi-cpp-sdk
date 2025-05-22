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

#ifndef ALIBABACLOUD_RDS_MODEL_MODIFYRCSECURITYGROUPPERMISSIONREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_MODIFYRCSECURITYGROUPPERMISSIONREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT ModifyRCSecurityGroupPermissionRequest : public RpcServiceRequest {
public:
	ModifyRCSecurityGroupPermissionRequest();
	~ModifyRCSecurityGroupPermissionRequest();
	std::string getSourcePortRange() const;
	void setSourcePortRange(const std::string &sourcePortRange);
	std::string getSecurityGroupId() const;
	void setSecurityGroupId(const std::string &securityGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDirection() const;
	void setDirection(const std::string &direction);
	std::string getPolicy() const;
	void setPolicy(const std::string &policy);
	std::string getPortRange() const;
	void setPortRange(const std::string &portRange);
	std::string getIpProtocol() const;
	void setIpProtocol(const std::string &ipProtocol);
	std::string getSourceCidrIp() const;
	void setSourceCidrIp(const std::string &sourceCidrIp);
	std::string getPriority() const;
	void setPriority(const std::string &priority);
	std::string getDestCidrIp() const;
	void setDestCidrIp(const std::string &destCidrIp);
	std::string getSecurityGroupRuleId() const;
	void setSecurityGroupRuleId(const std::string &securityGroupRuleId);

private:
	std::string sourcePortRange_;
	std::string securityGroupId_;
	std::string regionId_;
	std::string direction_;
	std::string policy_;
	std::string portRange_;
	std::string ipProtocol_;
	std::string sourceCidrIp_;
	std::string priority_;
	std::string destCidrIp_;
	std::string securityGroupRuleId_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_MODIFYRCSECURITYGROUPPERMISSIONREQUEST_H_
