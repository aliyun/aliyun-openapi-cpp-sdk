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

#ifndef ALIBABACLOUD_EIAM_MODEL_UPDATECONDITIONALACCESSPOLICYREQUEST_H_
#define ALIBABACLOUD_EIAM_MODEL_UPDATECONDITIONALACCESSPOLICYREQUEST_H_

#include <alibabacloud/eiam/EiamExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eiam {
namespace Model {
class ALIBABACLOUD_EIAM_EXPORT UpdateConditionalAccessPolicyRequest : public RpcServiceRequest {
public:
	struct ConditionsConfig {
		struct NetworkZones {
			std::string string;
			std::vector<std::string> excludeNetworkZones;
			std::string string;
			std::vector<std::string> includeNetworkZones;
		};
		NetworkZones networkZones;
		struct Users {
			std::string string;
			std::vector<std::string> includeGroups;
			std::string string;
			std::vector<std::string> excludeUsers;
			std::string string;
			std::vector<std::string> includeOrganizationalUnits;
			std::string string;
			std::vector<std::string> excludeOrganizationalUnits;
			std::string string;
			std::vector<std::string> excludeGroups;
			std::string string;
			std::vector<std::string> includeUsers;
		};
		Users users;
		struct Applications {
			std::string string;
			std::vector<std::string> excludeApplications;
			std::string string;
			std::vector<std::string> includeApplications;
		};
		Applications applications;
	};
	struct DecisionConfig {
		std::string mfaType;
		long mfaAuthenticationIntervalSeconds;
		std::string effect;
		std::string activeSessionReuseStatus;
		std::string string;
		std::vector<std::string> mfaAuthenticationMethods;
	};
	UpdateConditionalAccessPolicyRequest();
	~UpdateConditionalAccessPolicyRequest();
	ConditionsConfig getConditionsConfig() const;
	void setConditionsConfig(const ConditionsConfig &conditionsConfig);
	std::string getDecisionType() const;
	void setDecisionType(const std::string &decisionType);
	std::string getConditionalAccessPolicyId() const;
	void setConditionalAccessPolicyId(const std::string &conditionalAccessPolicyId);
	int getPriority() const;
	void setPriority(int priority);
	DecisionConfig getDecisionConfig() const;
	void setDecisionConfig(const DecisionConfig &decisionConfig);
	std::string getConditionalAccessPolicyName() const;
	void setConditionalAccessPolicyName(const std::string &conditionalAccessPolicyName);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);

private:
	ConditionsConfig conditionsConfig_;
	std::string decisionType_;
	std::string conditionalAccessPolicyId_;
	int priority_;
	DecisionConfig decisionConfig_;
	std::string conditionalAccessPolicyName_;
	std::string instanceId_;
};
} // namespace Model
} // namespace Eiam
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EIAM_MODEL_UPDATECONDITIONALACCESSPOLICYREQUEST_H_
