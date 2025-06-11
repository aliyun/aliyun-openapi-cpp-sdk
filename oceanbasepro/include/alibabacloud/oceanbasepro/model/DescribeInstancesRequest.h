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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEINSTANCESREQUEST_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEINSTANCESREQUEST_H_

#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OceanBasePro {
namespace Model {
class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeInstancesRequest : public RpcServiceRequest {
public:
	DescribeInstancesRequest();
	~DescribeInstancesRequest();
	std::string getSearchKey() const;
	void setSearchKey(const std::string &searchKey);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getInstanceName() const;
	void setInstanceName(const std::string &instanceName);
	bool getWithOBCloudInstances() const;
	void setWithOBCloudInstances(bool withOBCloudInstances);

private:
	std::string searchKey_;
	int pageNumber_;
	std::string resourceGroupId_;
	int pageSize_;
	std::string instanceId_;
	std::string instanceName_;
	bool withOBCloudInstances_;
};
} // namespace Model
} // namespace OceanBasePro
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEINSTANCESREQUEST_H_
