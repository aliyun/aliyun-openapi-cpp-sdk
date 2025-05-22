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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBERCINSTANCEIPADDRESSREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBERCINSTANCEIPADDRESSREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT DescribeRCInstanceIpAddressRequest : public RpcServiceRequest {
public:
	DescribeRCInstanceIpAddressRequest();
	~DescribeRCInstanceIpAddressRequest();
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getDdosRegionId() const;
	void setDdosRegionId(const std::string &ddosRegionId);
	std::string getDdosStatus() const;
	void setDdosStatus(const std::string &ddosStatus);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getInstanceName() const;
	void setInstanceName(const std::string &instanceName);
	std::string getInstanceIp() const;
	void setInstanceIp(const std::string &instanceIp);

private:
	std::string regionId_;
	int pageSize_;
	std::string instanceType_;
	std::string ddosRegionId_;
	std::string ddosStatus_;
	int currentPage_;
	std::string resourceType_;
	std::string instanceId_;
	std::string instanceName_;
	std::string instanceIp_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBERCINSTANCEIPADDRESSREQUEST_H_
