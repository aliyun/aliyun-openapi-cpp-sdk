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

#ifndef ALIBABACLOUD_RESOURCEMANAGER_MODEL_CREATEAUTOGROUPINGRULEREQUEST_H_
#define ALIBABACLOUD_RESOURCEMANAGER_MODEL_CREATEAUTOGROUPINGRULEREQUEST_H_

#include <alibabacloud/resourcemanager/ResourceManagerExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ResourceManager {
namespace Model {
class ALIBABACLOUD_RESOURCEMANAGER_EXPORT CreateAutoGroupingRuleRequest : public RpcServiceRequest {
public:
	struct RuleContents {
		std::string targetResourceGroupCondition;
		std::string autoGroupingScopeCondition;
	};
	CreateAutoGroupingRuleRequest();
	~CreateAutoGroupingRuleRequest();
	std::string getRuleDesc() const;
	void setRuleDesc(const std::string &ruleDesc);
	std::string getResourceTypesScope() const;
	void setResourceTypesScope(const std::string &resourceTypesScope);
	std::string getRuleName() const;
	void setRuleName(const std::string &ruleName);
	std::string getExcludeResourceGroupIdsScope() const;
	void setExcludeResourceGroupIdsScope(const std::string &excludeResourceGroupIdsScope);
	std::string getRegionIdsScope() const;
	void setRegionIdsScope(const std::string &regionIdsScope);
	std::string getResourceIdsScope() const;
	void setResourceIdsScope(const std::string &resourceIdsScope);
	std::vector<RuleContents> getRuleContents() const;
	void setRuleContents(const std::vector<RuleContents> &ruleContents);
	std::string getExcludeResourceTypesScope() const;
	void setExcludeResourceTypesScope(const std::string &excludeResourceTypesScope);
	std::string getRuleType() const;
	void setRuleType(const std::string &ruleType);
	std::string getResourceGroupIdsScope() const;
	void setResourceGroupIdsScope(const std::string &resourceGroupIdsScope);
	std::string getExcludeRegionIdsScope() const;
	void setExcludeRegionIdsScope(const std::string &excludeRegionIdsScope);
	std::string getExcludeResourceIdsScope() const;
	void setExcludeResourceIdsScope(const std::string &excludeResourceIdsScope);

private:
	std::string ruleDesc_;
	std::string resourceTypesScope_;
	std::string ruleName_;
	std::string excludeResourceGroupIdsScope_;
	std::string regionIdsScope_;
	std::string resourceIdsScope_;
	std::vector<RuleContents> ruleContents_;
	std::string excludeResourceTypesScope_;
	std::string ruleType_;
	std::string resourceGroupIdsScope_;
	std::string excludeRegionIdsScope_;
	std::string excludeResourceIdsScope_;
};
} // namespace Model
} // namespace ResourceManager
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RESOURCEMANAGER_MODEL_CREATEAUTOGROUPINGRULEREQUEST_H_
