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

#ifndef ALIBABACLOUD_CONFIG_MODEL_UPDATEAGGREGATECONFIGRULEREQUEST_H_
#define ALIBABACLOUD_CONFIG_MODEL_UPDATEAGGREGATECONFIGRULEREQUEST_H_

#include <alibabacloud/config/ConfigExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Config {
namespace Model {
class ALIBABACLOUD_CONFIG_EXPORT UpdateAggregateConfigRuleRequest : public RpcServiceRequest {
public:
	UpdateAggregateConfigRuleRequest();
	~UpdateAggregateConfigRuleRequest();
	std::string getConfigRuleId() const;
	void setConfigRuleId(const std::string &configRuleId);
	std::string getTagKeyScope() const;
	void setTagKeyScope(const std::string &tagKeyScope);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::vector<std::string> getResourceTypesScope() const;
	void setResourceTypesScope(const std::vector<std::string> &resourceTypesScope);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getAggregatorId() const;
	void setAggregatorId(const std::string &aggregatorId);
	std::string getConfigRuleTriggerTypes() const;
	void setConfigRuleTriggerTypes(const std::string &configRuleTriggerTypes);
	std::string getTagValueScope() const;
	void setTagValueScope(const std::string &tagValueScope);
	std::string getExcludeAccountIdsScope() const;
	void setExcludeAccountIdsScope(const std::string &excludeAccountIdsScope);
	std::string getRegionIdsScope() const;
	void setRegionIdsScope(const std::string &regionIdsScope);
	std::string getExcludeFolderIdsScope() const;
	void setExcludeFolderIdsScope(const std::string &excludeFolderIdsScope);
	int getRiskLevel() const;
	void setRiskLevel(int riskLevel);
	std::string getResourceGroupIdsScope() const;
	void setResourceGroupIdsScope(const std::string &resourceGroupIdsScope);
	std::string getInputParameters() const;
	void setInputParameters(const std::string &inputParameters);
	std::string getConfigRuleName() const;
	void setConfigRuleName(const std::string &configRuleName);
	std::string getTagKeyLogicScope() const;
	void setTagKeyLogicScope(const std::string &tagKeyLogicScope);
	std::string getMaximumExecutionFrequency() const;
	void setMaximumExecutionFrequency(const std::string &maximumExecutionFrequency);
	std::string getFolderIdsScope() const;
	void setFolderIdsScope(const std::string &folderIdsScope);
	std::string getExcludeResourceIdsScope() const;
	void setExcludeResourceIdsScope(const std::string &excludeResourceIdsScope);
	std::string getConditions() const;
	void setConditions(const std::string &conditions);

private:
	std::string configRuleId_;
	std::string tagKeyScope_;
	std::string clientToken_;
	std::vector<std::string> resourceTypesScope_;
	std::string description_;
	std::string aggregatorId_;
	std::string configRuleTriggerTypes_;
	std::string tagValueScope_;
	std::string excludeAccountIdsScope_;
	std::string regionIdsScope_;
	std::string excludeFolderIdsScope_;
	int riskLevel_;
	std::string resourceGroupIdsScope_;
	std::string inputParameters_;
	std::string configRuleName_;
	std::string tagKeyLogicScope_;
	std::string maximumExecutionFrequency_;
	std::string folderIdsScope_;
	std::string excludeResourceIdsScope_;
	std::string conditions_;
};
} // namespace Model
} // namespace Config
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CONFIG_MODEL_UPDATEAGGREGATECONFIGRULEREQUEST_H_
