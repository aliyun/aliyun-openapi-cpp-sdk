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

#ifndef ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
#define ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEDBINSTANCESREQUEST_H_

#include <alibabacloud/polardbx/PolardbxExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardbx {
namespace Model {
class ALIBABACLOUD_POLARDBX_EXPORT DescribeDBInstancesRequest : public RpcServiceRequest {
public:
	DescribeDBInstancesRequest();
	~DescribeDBInstancesRequest();
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	bool getMustHasCdc() const;
	void setMustHasCdc(bool mustHasCdc);
	std::string getTags() const;
	void setTags(const std::string &tags);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getSeries() const;
	void setSeries(const std::string &series);

private:
	std::string resourceGroupId_;
	bool mustHasCdc_;
	std::string tags_;
	std::string instanceId_;
	int pageNumber_;
	std::string regionId_;
	int pageSize_;
	std::string series_;
};
} // namespace Model
} // namespace Polardbx
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
