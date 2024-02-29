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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBETABLESREQUEST_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBETABLESREQUEST_H_

#include <alibabacloud/sddp/SddpExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sddp {
namespace Model {
class ALIBABACLOUD_SDDP_EXPORT DescribeTablesRequest : public RpcServiceRequest {
public:
	DescribeTablesRequest();
	~DescribeTablesRequest();
	std::string getProductCode() const;
	void setProductCode(const std::string &productCode);
	long getProductId() const;
	void setProductId(long productId);
	std::string getRiskLevels() const;
	void setRiskLevels(const std::string &riskLevels);
	bool getNeedRiskCount() const;
	void setNeedRiskCount(bool needRiskCount);
	long getPackageId() const;
	void setPackageId(long packageId);
	std::string getRuleName() const;
	void setRuleName(const std::string &ruleName);
	std::string getQueryName() const;
	void setQueryName(const std::string &queryName);
	long getRiskLevelId() const;
	void setRiskLevelId(long riskLevelId);
	long getStartTime() const;
	void setStartTime(long startTime);
	long getLastScanTimeEnd() const;
	void setLastScanTimeEnd(long lastScanTimeEnd);
	long getLastScanTimeStart() const;
	void setLastScanTimeStart(long lastScanTimeStart);
	std::string getSensLevelName() const;
	void setSensLevelName(const std::string &sensLevelName);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getInstanceDescription() const;
	void setInstanceDescription(const std::string &instanceDescription);
	std::string getLang() const;
	void setLang(const std::string &lang);
	int getQueryType() const;
	void setQueryType(int queryType);
	std::string getServiceRegionId() const;
	void setServiceRegionId(const std::string &serviceRegionId);
	int getFeatureType() const;
	void setFeatureType(int featureType);
	std::string getOrderBy() const;
	void setOrderBy(const std::string &orderBy);
	long getEndTime() const;
	void setEndTime(long endTime);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	long getTemplateId() const;
	void setTemplateId(long templateId);
	std::string getRuleIds() const;
	void setRuleIds(const std::string &ruleIds);
	long getInstanceId() const;
	void setInstanceId(long instanceId);
	std::string getInstanceName() const;
	void setInstanceName(const std::string &instanceName);
	std::string getName() const;
	void setName(const std::string &name);
	long getRuleId() const;
	void setRuleId(long ruleId);

private:
	std::string productCode_;
	long productId_;
	std::string riskLevels_;
	bool needRiskCount_;
	long packageId_;
	std::string ruleName_;
	std::string queryName_;
	long riskLevelId_;
	long startTime_;
	long lastScanTimeEnd_;
	long lastScanTimeStart_;
	std::string sensLevelName_;
	std::string sourceIp_;
	int pageSize_;
	std::string instanceDescription_;
	std::string lang_;
	int queryType_;
	std::string serviceRegionId_;
	int featureType_;
	std::string orderBy_;
	long endTime_;
	int currentPage_;
	long templateId_;
	std::string ruleIds_;
	long instanceId_;
	std::string instanceName_;
	std::string name_;
	long ruleId_;
};
} // namespace Model
} // namespace Sddp
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBETABLESREQUEST_H_
