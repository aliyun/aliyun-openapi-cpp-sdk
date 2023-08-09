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

#ifndef ALIBABACLOUD_CONFIG_MODEL_LISTCONFIGRULEEVALUATIONRESULTSREQUEST_H_
#define ALIBABACLOUD_CONFIG_MODEL_LISTCONFIGRULEEVALUATIONRESULTSREQUEST_H_

#include <alibabacloud/config/ConfigExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Config {
namespace Model {
class ALIBABACLOUD_CONFIG_EXPORT ListConfigRuleEvaluationResultsRequest : public RpcServiceRequest {
public:
	ListConfigRuleEvaluationResultsRequest();
	~ListConfigRuleEvaluationResultsRequest();
	std::string getConfigRuleId() const;
	void setConfigRuleId(const std::string &configRuleId);
	std::string getRegions() const;
	void setRegions(const std::string &regions);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getCompliancePackId() const;
	void setCompliancePackId(const std::string &compliancePackId);
	std::string getComplianceType() const;
	void setComplianceType(const std::string &complianceType);
	std::string getResourceTypes() const;
	void setResourceTypes(const std::string &resourceTypes);
	std::string getResourceGroupIds() const;
	void setResourceGroupIds(const std::string &resourceGroupIds);
	int getMaxResults() const;
	void setMaxResults(int maxResults);

private:
	std::string configRuleId_;
	std::string regions_;
	std::string nextToken_;
	std::string compliancePackId_;
	std::string complianceType_;
	std::string resourceTypes_;
	std::string resourceGroupIds_;
	int maxResults_;
};
} // namespace Model
} // namespace Config
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CONFIG_MODEL_LISTCONFIGRULEEVALUATIONRESULTSREQUEST_H_
