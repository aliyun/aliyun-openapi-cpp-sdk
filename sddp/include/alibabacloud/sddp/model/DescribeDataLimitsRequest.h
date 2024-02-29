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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATALIMITSREQUEST_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATALIMITSREQUEST_H_

#include <alibabacloud/sddp/SddpExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sddp {
namespace Model {
class ALIBABACLOUD_SDDP_EXPORT DescribeDataLimitsRequest : public RpcServiceRequest {
public:
	DescribeDataLimitsRequest();
	~DescribeDataLimitsRequest();
	long getStartTime() const;
	void setStartTime(long startTime);
	std::string getParentId() const;
	void setParentId(const std::string &parentId);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	int getEnable() const;
	void setEnable(int enable);
	int getPageSize() const;
	void setPageSize(int pageSize);
	int getCheckStatus() const;
	void setCheckStatus(int checkStatus);
	int getDatamaskStatus() const;
	void setDatamaskStatus(int datamaskStatus);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getServiceRegionId() const;
	void setServiceRegionId(const std::string &serviceRegionId);
	std::string getEngineType() const;
	void setEngineType(const std::string &engineType);
	int getAuditStatus() const;
	void setAuditStatus(int auditStatus);
	int getFeatureType() const;
	void setFeatureType(int featureType);
	long getEndTime() const;
	void setEndTime(long endTime);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	int getResourceType() const;
	void setResourceType(int resourceType);

private:
	long startTime_;
	std::string parentId_;
	std::string sourceIp_;
	int enable_;
	int pageSize_;
	int checkStatus_;
	int datamaskStatus_;
	std::string lang_;
	std::string serviceRegionId_;
	std::string engineType_;
	int auditStatus_;
	int featureType_;
	long endTime_;
	int currentPage_;
	int resourceType_;
};
} // namespace Model
} // namespace Sddp
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATALIMITSREQUEST_H_
