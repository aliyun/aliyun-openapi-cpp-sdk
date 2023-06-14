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

#ifndef ALIBABACLOUD_GA_MODEL_UPDATEFORWARDINGRULESREQUEST_H_
#define ALIBABACLOUD_GA_MODEL_UPDATEFORWARDINGRULESREQUEST_H_

#include <alibabacloud/ga/GaExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ga {
namespace Model {
class ALIBABACLOUD_GA_EXPORT UpdateForwardingRulesRequest : public RpcServiceRequest {
public:
	struct ForwardingRules {
		int priority;
		struct RuleConditionsItem {
			std::string ruleConditionType;
			std::string ruleConditionValue;
			struct PathConfig {
				std::string string;
				std::vector<std::string> values;
			};
			PathConfig pathConfig;
			struct HostConfig {
				std::string string;
				std::vector<std::string> values;
			};
			HostConfig hostConfig;
		};
		RuleConditionsItem ruleConditionsItem;
		std::vector<RuleConditionsItem> ruleConditions;
		struct RuleActionsItem {
			int order;
			std::string ruleActionType;
			std::string ruleActionValue;
			struct ForwardGroupConfig {
				struct ServerGroupTuplesItem {
					std::string endpointGroupId;
				};
				ServerGroupTuplesItem serverGroupTuplesItem;
				std::vector<ServerGroupTuplesItem> serverGroupTuples;
			};
			ForwardGroupConfig forwardGroupConfig;
		};
		RuleActionsItem ruleActionsItem;
		std::vector<RuleActionsItem> ruleActions;
		std::string forwardingRuleId;
		std::string forwardingRuleName;
		std::string ruleDirection;
	};
	UpdateForwardingRulesRequest();
	~UpdateForwardingRulesRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getListenerId() const;
	void setListenerId(const std::string &listenerId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getAcceleratorId() const;
	void setAcceleratorId(const std::string &acceleratorId);
	std::vector<ForwardingRules> getForwardingRules() const;
	void setForwardingRules(const std::vector<ForwardingRules> &forwardingRules);

private:
	std::string clientToken_;
	std::string listenerId_;
	std::string regionId_;
	std::string acceleratorId_;
	std::vector<ForwardingRules> forwardingRules_;
};
} // namespace Model
} // namespace Ga
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GA_MODEL_UPDATEFORWARDINGRULESREQUEST_H_
