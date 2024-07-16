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

#ifndef ALIBABACLOUD_SWAS_OPEN_MODEL_MODIFYFIREWALLTEMPLATEREQUEST_H_
#define ALIBABACLOUD_SWAS_OPEN_MODEL_MODIFYFIREWALLTEMPLATEREQUEST_H_

#include <alibabacloud/swas-open/SWAS_OPENExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace SWAS_OPEN {
namespace Model {
class ALIBABACLOUD_SWAS_OPEN_EXPORT ModifyFirewallTemplateRequest : public RpcServiceRequest {
public:
	struct FirewallTemplateRule {
		std::string firewallTemplateRuleId;
		std::string ruleProtocol;
		std::string port;
		std::string sourceCidrIp;
		std::string remark;
	};
	ModifyFirewallTemplateRequest();
	~ModifyFirewallTemplateRequest();
	std::string getFirewallTemplateId() const;
	void setFirewallTemplateId(const std::string &firewallTemplateId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<FirewallTemplateRule> getFirewallTemplateRule() const;
	void setFirewallTemplateRule(const std::vector<FirewallTemplateRule> &firewallTemplateRule);
	std::string getName() const;
	void setName(const std::string &name);

private:
	std::string firewallTemplateId_;
	std::string clientToken_;
	std::string description_;
	std::string instanceId_;
	std::string regionId_;
	std::vector<FirewallTemplateRule> firewallTemplateRule_;
	std::string name_;
};
} // namespace Model
} // namespace SWAS_OPEN
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SWAS_OPEN_MODEL_MODIFYFIREWALLTEMPLATEREQUEST_H_
