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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBECHECKWARNINGSUMMARYREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBECHECKWARNINGSUMMARYREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT DescribeCheckWarningSummaryRequest : public RpcServiceRequest {
public:
	DescribeCheckWarningSummaryRequest();
	~DescribeCheckWarningSummaryRequest();
	std::string getTargetType() const;
	void setTargetType(const std::string &targetType);
	std::string getContainerFieldName() const;
	void setContainerFieldName(const std::string &containerFieldName);
	std::string getRiskName() const;
	void setRiskName(const std::string &riskName);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getContainerFieldValue() const;
	void setContainerFieldValue(const std::string &containerFieldValue);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getLang() const;
	void setLang(const std::string &lang);
	long getGroupId() const;
	void setGroupId(long groupId);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getRiskLevel() const;
	void setRiskLevel(const std::string &riskLevel);
	int getRiskStatus() const;
	void setRiskStatus(int riskStatus);
	long getStrategyId() const;
	void setStrategyId(long strategyId);
	std::string getTypeName() const;
	void setTypeName(const std::string &typeName);
	std::string getStatus() const;
	void setStatus(const std::string &status);
	std::string getUuids() const;
	void setUuids(const std::string &uuids);

private:
	std::string targetType_;
	std::string containerFieldName_;
	std::string riskName_;
	std::string sourceIp_;
	std::string containerFieldValue_;
	int pageSize_;
	std::string lang_;
	long groupId_;
	int currentPage_;
	std::string clusterId_;
	std::string riskLevel_;
	int riskStatus_;
	long strategyId_;
	std::string typeName_;
	std::string status_;
	std::string uuids_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBECHECKWARNINGSUMMARYREQUEST_H_
