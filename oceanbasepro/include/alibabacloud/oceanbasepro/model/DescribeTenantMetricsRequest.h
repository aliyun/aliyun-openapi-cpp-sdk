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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBETENANTMETRICSREQUEST_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBETENANTMETRICSREQUEST_H_

#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OceanBasePro {
namespace Model {
class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeTenantMetricsRequest : public RpcServiceRequest {
public:
	DescribeTenantMetricsRequest();
	~DescribeTenantMetricsRequest();
	std::string getTenantIdList() const;
	void setTenantIdList(const std::string &tenantIdList);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getTenantId() const;
	void setTenantId(const std::string &tenantId);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getTenantName() const;
	void setTenantName(const std::string &tenantName);
	std::string getMetrics() const;
	void setMetrics(const std::string &metrics);

private:
	std::string tenantIdList_;
	std::string startTime_;
	int pageNumber_;
	int pageSize_;
	std::string tenantId_;
	std::string endTime_;
	std::string instanceId_;
	std::string tenantName_;
	std::string metrics_;
};
} // namespace Model
} // namespace OceanBasePro
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBETENANTMETRICSREQUEST_H_
