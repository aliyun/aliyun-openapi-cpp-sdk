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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEVIRTUALBORDERROUTERSFORPHYSICALCONNECTIONREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEVIRTUALBORDERROUTERSFORPHYSICALCONNECTIONREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT DescribeVirtualBorderRoutersForPhysicalConnectionRequest : public RpcServiceRequest {
public:
	struct Filter {
		std::string key;
	};
	DescribeVirtualBorderRoutersForPhysicalConnectionRequest();
	~DescribeVirtualBorderRoutersForPhysicalConnectionRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::vector<Filter> getFilter() const;
	void setFilter(const std::vector<Filter> &filter);
	std::string getPhysicalConnectionId() const;
	void setPhysicalConnectionId(const std::string &physicalConnectionId);

private:
	long resourceOwnerId_;
	int pageNumber_;
	std::string regionId_;
	int pageSize_;
	std::string resourceOwnerAccount_;
	long ownerId_;
	std::vector<Filter> filter_;
	std::string physicalConnectionId_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEVIRTUALBORDERROUTERSFORPHYSICALCONNECTIONREQUEST_H_
