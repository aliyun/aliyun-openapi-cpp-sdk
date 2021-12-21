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

#ifndef ALIBABACLOUD_CONFIG_MODEL_CREATEAGGREGATECOMPLIANCEPACKREQUEST_H_
#define ALIBABACLOUD_CONFIG_MODEL_CREATEAGGREGATECOMPLIANCEPACKREQUEST_H_

#include <alibabacloud/config/ConfigExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Config {
namespace Model {
class ALIBABACLOUD_CONFIG_EXPORT CreateAggregateCompliancePackRequest : public RpcServiceRequest {
public:
	struct ConfigRules {
		std::string managedRuleIdentifier;
		struct ConfigRuleParametersItem {
			std::string parameterValue;
			std::string parameterName;
		};
		ConfigRuleParametersItem configRuleParametersItem;
		std::vector<ConfigRuleParametersItem> configRuleParameters;
		std::string configRuleId;
		std::string configRuleName;
		std::string description;
		int riskLevel;
	};
	CreateAggregateCompliancePackRequest();
	~CreateAggregateCompliancePackRequest();
	std::string getCompliancePackName() const;
	void setCompliancePackName(const std::string &compliancePackName);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getCompliancePackTemplateId() const;
	void setCompliancePackTemplateId(const std::string &compliancePackTemplateId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getAggregatorId() const;
	void setAggregatorId(const std::string &aggregatorId);
	std::vector<ConfigRules> getConfigRules() const;
	void setConfigRules(const std::vector<ConfigRules> &configRules);
	int getRiskLevel() const;
	void setRiskLevel(int riskLevel);

private:
	std::string compliancePackName_;
	std::string clientToken_;
	std::string compliancePackTemplateId_;
	std::string description_;
	std::string aggregatorId_;
	std::vector<ConfigRules> configRules_;
	int riskLevel_;
};
} // namespace Model
} // namespace Config
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CONFIG_MODEL_CREATEAGGREGATECOMPLIANCEPACKREQUEST_H_
