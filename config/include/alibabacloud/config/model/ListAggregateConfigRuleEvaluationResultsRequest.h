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

#ifndef ALIBABACLOUD_CONFIG_MODEL_LISTAGGREGATECONFIGRULEEVALUATIONRESULTSREQUEST_H_
#define ALIBABACLOUD_CONFIG_MODEL_LISTAGGREGATECONFIGRULEEVALUATIONRESULTSREQUEST_H_

#include <alibabacloud/config/ConfigExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Config {
namespace Model {
class ALIBABACLOUD_CONFIG_EXPORT ListAggregateConfigRuleEvaluationResultsRequest : public RpcServiceRequest {
public:
	ListAggregateConfigRuleEvaluationResultsRequest();
	~ListAggregateConfigRuleEvaluationResultsRequest();
	std::string getConfigRuleId() const;
	void setConfigRuleId(const std::string &configRuleId);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getAggregatorId() const;
	void setAggregatorId(const std::string &aggregatorId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::string getCompliancePackId() const;
	void setCompliancePackId(const std::string &compliancePackId);
	std::string getComplianceType() const;
	void setComplianceType(const std::string &complianceType);

private:
	std::string configRuleId_;
	long resourceOwnerId_;
	std::string aggregatorId_;
	std::string nextToken_;
	int maxResults_;
	std::string compliancePackId_;
	std::string complianceType_;
};
} // namespace Model
} // namespace Config
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CONFIG_MODEL_LISTAGGREGATECONFIGRULEEVALUATIONRESULTSREQUEST_H_
