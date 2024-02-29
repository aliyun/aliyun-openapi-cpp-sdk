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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBEINSTANCESREQUEST_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBEINSTANCESREQUEST_H_

#include <alibabacloud/sddp/SddpExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sddp {
namespace Model {
class ALIBABACLOUD_SDDP_EXPORT DescribeInstancesRequest : public RpcServiceRequest {
public:
	DescribeInstancesRequest();
	~DescribeInstancesRequest();
	std::string getProductCode() const;
	void setProductCode(const std::string &productCode);
	long getProductId() const;
	void setProductId(long productId);
	std::string getRiskLevels() const;
	void setRiskLevels(const std::string &riskLevels);
	std::string getQueryName() const;
	void setQueryName(const std::string &queryName);
	long getRiskLevelId() const;
	void setRiskLevelId(long riskLevelId);
	std::string getSource() const;
	void setSource(const std::string &source);
	long getStartTime() const;
	void setStartTime(long startTime);
	long getUserId() const;
	void setUserId(long userId);
	std::string getNameAccurate() const;
	void setNameAccurate(const std::string &nameAccurate);
	std::string getSensLevelName() const;
	void setSensLevelName(const std::string &sensLevelName);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	long getLastFinishTimeStart() const;
	void setLastFinishTimeStart(long lastFinishTimeStart);
	int getDataType() const;
	void setDataType(int dataType);
	int getPageSize() const;
	void setPageSize(int pageSize);
	int getCheckStatus() const;
	void setCheckStatus(int checkStatus);
	std::string getLang() const;
	void setLang(const std::string &lang);
	int getQueryType() const;
	void setQueryType(int queryType);
	std::string getServiceRegionId() const;
	void setServiceRegionId(const std::string &serviceRegionId);
	std::string getEngineType() const;
	void setEngineType(const std::string &engineType);
	int getFeatureType() const;
	void setFeatureType(int featureType);
	std::string getOrderBy() const;
	void setOrderBy(const std::string &orderBy);
	int getUserType() const;
	void setUserType(int userType);
	long getEndTime() const;
	void setEndTime(long endTime);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getName() const;
	void setName(const std::string &name);
	bool getNeedModelTag() const;
	void setNeedModelTag(bool needModelTag);
	long getRuleId() const;
	void setRuleId(long ruleId);
	long getLastFinishTimeEnd() const;
	void setLastFinishTimeEnd(long lastFinishTimeEnd);

private:
	std::string productCode_;
	long productId_;
	std::string riskLevels_;
	std::string queryName_;
	long riskLevelId_;
	std::string source_;
	long startTime_;
	long userId_;
	std::string nameAccurate_;
	std::string sensLevelName_;
	std::string sourceIp_;
	long lastFinishTimeStart_;
	int dataType_;
	int pageSize_;
	int checkStatus_;
	std::string lang_;
	int queryType_;
	std::string serviceRegionId_;
	std::string engineType_;
	int featureType_;
	std::string orderBy_;
	int userType_;
	long endTime_;
	int currentPage_;
	std::string name_;
	bool needModelTag_;
	long ruleId_;
	long lastFinishTimeEnd_;
};
} // namespace Model
} // namespace Sddp
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBEINSTANCESREQUEST_H_
