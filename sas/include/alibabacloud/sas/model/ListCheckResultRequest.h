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

#ifndef ALIBABACLOUD_SAS_MODEL_LISTCHECKRESULTREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_LISTCHECKRESULTREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT ListCheckResultRequest : public RpcServiceRequest {
public:
	ListCheckResultRequest();
	~ListCheckResultRequest();
	std::vector<std::string> getInstanceSubTypes() const;
	void setInstanceSubTypes(const std::vector<std::string> &instanceSubTypes);
	std::vector<long> getStandardIds() const;
	void setStandardIds(const std::vector<long> &standardIds);
	std::vector<std::string> getRiskLevels() const;
	void setRiskLevels(const std::vector<std::string> &riskLevels);
	std::vector<std::string> getInstanceTypes() const;
	void setInstanceTypes(const std::vector<std::string> &instanceTypes);
	bool getCustomParam() const;
	void setCustomParam(bool customParam);
	std::string getCheckKey() const;
	void setCheckKey(const std::string &checkKey);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::vector<std::string> getVendors() const;
	void setVendors(const std::vector<std::string> &vendors);
	std::vector<std::string> getTypes() const;
	void setTypes(const std::vector<std::string> &types);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::vector<long> getRequirementIds() const;
	void setRequirementIds(const std::vector<long> &requirementIds);
	std::vector<std::string> getSortTypes() const;
	void setSortTypes(const std::vector<std::string> &sortTypes);
	std::vector<std::string> getInstanceIds() const;
	void setInstanceIds(const std::vector<std::string> &instanceIds);
	std::vector<std::string> getStatuses() const;
	void setStatuses(const std::vector<std::string> &statuses);

private:
	std::vector<std::string> instanceSubTypes_;
	std::vector<long> standardIds_;
	std::vector<std::string> riskLevels_;
	std::vector<std::string> instanceTypes_;
	bool customParam_;
	std::string checkKey_;
	std::string sourceIp_;
	std::string regionId_;
	int pageSize_;
	std::string lang_;
	std::vector<std::string> vendors_;
	std::vector<std::string> types_;
	int currentPage_;
	std::vector<long> requirementIds_;
	std::vector<std::string> sortTypes_;
	std::vector<std::string> instanceIds_;
	std::vector<std::string> statuses_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_LISTCHECKRESULTREQUEST_H_
