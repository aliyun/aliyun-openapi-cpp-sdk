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

#ifndef ALIBABACLOUD_CONFIG_MODEL_LISTCONFIGRULESREQUEST_H_
#define ALIBABACLOUD_CONFIG_MODEL_LISTCONFIGRULESREQUEST_H_

#include <alibabacloud/config/ConfigExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Config {
namespace Model {
class ALIBABACLOUD_CONFIG_EXPORT ListConfigRulesRequest : public RpcServiceRequest {
public:
	ListConfigRulesRequest();
	~ListConfigRulesRequest();
	bool getFilterInCompliancePack() const;
	void setFilterInCompliancePack(bool filterInCompliancePack);
	std::string getConfigRuleState() const;
	void setConfigRuleState(const std::string &configRuleState);
	std::string getFilterInCompliancePackExcludeIds() const;
	void setFilterInCompliancePackExcludeIds(const std::string &filterInCompliancePackExcludeIds);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getCompliancePackId() const;
	void setCompliancePackId(const std::string &compliancePackId);
	std::string getKeyword() const;
	void setKeyword(const std::string &keyword);
	std::string getComplianceType() const;
	void setComplianceType(const std::string &complianceType);
	std::string getResourceTypes() const;
	void setResourceTypes(const std::string &resourceTypes);
	int getRiskLevel() const;
	void setRiskLevel(int riskLevel);
	std::string getConfigRuleName() const;
	void setConfigRuleName(const std::string &configRuleName);
	std::string getServiceChannel() const;
	void setServiceChannel(const std::string &serviceChannel);

private:
	bool filterInCompliancePack_;
	std::string configRuleState_;
	std::string filterInCompliancePackExcludeIds_;
	int pageNumber_;
	int pageSize_;
	std::string compliancePackId_;
	std::string keyword_;
	std::string complianceType_;
	std::string resourceTypes_;
	int riskLevel_;
	std::string configRuleName_;
	std::string serviceChannel_;
};
} // namespace Model
} // namespace Config
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CONFIG_MODEL_LISTCONFIGRULESREQUEST_H_
