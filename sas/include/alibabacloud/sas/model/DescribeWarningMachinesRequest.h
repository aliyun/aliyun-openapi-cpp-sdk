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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEWARNINGMACHINESREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEWARNINGMACHINESREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT DescribeWarningMachinesRequest : public RpcServiceRequest {
public:
	DescribeWarningMachinesRequest();
	~DescribeWarningMachinesRequest();
	std::string getTargetType() const;
	void setTargetType(const std::string &targetType);
	std::string getContainerFieldName() const;
	void setContainerFieldName(const std::string &containerFieldName);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getContainerFieldValue() const;
	void setContainerFieldValue(const std::string &containerFieldValue);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getMachineName() const;
	void setMachineName(const std::string &machineName);
	std::string getLang() const;
	void setLang(const std::string &lang);
	int getHaveRisk() const;
	void setHaveRisk(int haveRisk);
	long getGroupId() const;
	void setGroupId(long groupId);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	long getRiskId() const;
	void setRiskId(long riskId);
	long getStrategyId() const;
	void setStrategyId(long strategyId);
	std::string getUuids() const;
	void setUuids(const std::string &uuids);

private:
	std::string targetType_;
	std::string containerFieldName_;
	std::string sourceIp_;
	std::string containerFieldValue_;
	int pageSize_;
	std::string machineName_;
	std::string lang_;
	int haveRisk_;
	long groupId_;
	int currentPage_;
	std::string clusterId_;
	long riskId_;
	long strategyId_;
	std::string uuids_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEWARNINGMACHINESREQUEST_H_
