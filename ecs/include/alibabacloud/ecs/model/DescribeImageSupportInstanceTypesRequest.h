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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEIMAGESUPPORTINSTANCETYPESREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEIMAGESUPPORTINSTANCETYPESREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT DescribeImageSupportInstanceTypesRequest : public RpcServiceRequest {
public:
	struct Filter {
		std::string value;
		std::string key;
	};
	DescribeImageSupportInstanceTypesRequest();
	~DescribeImageSupportInstanceTypesRequest();
	std::string getActionType() const;
	void setActionType(const std::string &actionType);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getImageId() const;
	void setImageId(const std::string &imageId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::vector<Filter> getFilter() const;
	void setFilter(const std::vector<Filter> &filter);

private:
	std::string actionType_;
	long resourceOwnerId_;
	std::string imageId_;
	std::string regionId_;
	std::string resourceOwnerAccount_;
	long ownerId_;
	std::vector<Filter> filter_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEIMAGESUPPORTINSTANCETYPESREQUEST_H_
