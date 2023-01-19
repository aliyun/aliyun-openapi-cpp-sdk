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

#ifndef ALIBABACLOUD_SAS_MODEL_LISTSYSTEMCLIENTRULESREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_LISTSYSTEMCLIENTRULESREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT ListSystemClientRulesRequest : public RpcServiceRequest {
public:
	ListSystemClientRulesRequest();
	~ListSystemClientRulesRequest();
	std::vector<int> getRuleTypes() const;
	void setRuleTypes(const std::vector<int> &ruleTypes);
	int getSystemType() const;
	void setSystemType(int systemType);
	std::string getRuleName() const;
	void setRuleName(const std::string &ruleName);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	int getPageSize() const;
	void setPageSize(int pageSize);
	int getIsContainer() const;
	void setIsContainer(int isContainer);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::vector<int> getAggregationIds() const;
	void setAggregationIds(const std::vector<int> &aggregationIds);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getBusinessSecondType() const;
	void setBusinessSecondType(const std::string &businessSecondType);

private:
	std::vector<int> ruleTypes_;
	int systemType_;
	std::string ruleName_;
	std::string sourceIp_;
	int pageSize_;
	int isContainer_;
	std::string lang_;
	std::vector<int> aggregationIds_;
	int currentPage_;
	std::string businessSecondType_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_LISTSYSTEMCLIENTRULESREQUEST_H_
