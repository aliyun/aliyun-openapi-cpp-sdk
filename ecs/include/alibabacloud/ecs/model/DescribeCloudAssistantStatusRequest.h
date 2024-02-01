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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBECLOUDASSISTANTSTATUSREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBECLOUDASSISTANTSTATUSREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT DescribeCloudAssistantStatusRequest : public RpcServiceRequest {
public:
	DescribeCloudAssistantStatusRequest();
	~DescribeCloudAssistantStatusRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	long getPageNumber() const;
	void setPageNumber(long pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getOSType() const;
	void setOSType(const std::string &oSType);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::vector<std::string> getInstanceId() const;
	void setInstanceId(const std::vector<std::string> &instanceId);
	int getMaxResults() const;
	void setMaxResults(int maxResults);

private:
	long resourceOwnerId_;
	long pageNumber_;
	std::string regionId_;
	std::string nextToken_;
	long pageSize_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string oSType_;
	long ownerId_;
	std::vector<std::string> instanceId_;
	int maxResults_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBECLOUDASSISTANTSTATUSREQUEST_H_
