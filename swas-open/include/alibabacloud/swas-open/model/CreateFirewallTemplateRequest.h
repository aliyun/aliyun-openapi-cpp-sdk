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

#ifndef ALIBABACLOUD_SWAS_OPEN_MODEL_CREATEFIREWALLTEMPLATEREQUEST_H_
#define ALIBABACLOUD_SWAS_OPEN_MODEL_CREATEFIREWALLTEMPLATEREQUEST_H_

#include <alibabacloud/swas-open/SWAS_OPENExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace SWAS_OPEN {
namespace Model {
class ALIBABACLOUD_SWAS_OPEN_EXPORT CreateFirewallTemplateRequest : public RpcServiceRequest {
public:
	struct FirewallRule {
		std::string ruleProtocol;
		std::string port;
		std::string sourceCidrIp;
		std::string remark;
	};
	CreateFirewallTemplateRequest();
	~CreateFirewallTemplateRequest();
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getName() const;
	void setName(const std::string &name);
	std::vector<FirewallRule> getFirewallRule() const;
	void setFirewallRule(const std::vector<FirewallRule> &firewallRule);

private:
	std::string description_;
	std::string regionId_;
	std::string name_;
	std::vector<FirewallRule> firewallRule_;
};
} // namespace Model
} // namespace SWAS_OPEN
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SWAS_OPEN_MODEL_CREATEFIREWALLTEMPLATEREQUEST_H_
