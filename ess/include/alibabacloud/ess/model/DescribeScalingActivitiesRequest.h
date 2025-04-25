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

#ifndef ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGACTIVITIESREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGACTIVITIESREQUEST_H_

#include <alibabacloud/ess/EssExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ess {
namespace Model {
class ALIBABACLOUD_ESS_EXPORT DescribeScalingActivitiesRequest : public RpcServiceRequest {
public:
	DescribeScalingActivitiesRequest();
	~DescribeScalingActivitiesRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getScalingGroupId() const;
	void setScalingGroupId(const std::string &scalingGroupId);
	std::string getInstanceRefreshTaskId() const;
	void setInstanceRefreshTaskId(const std::string &instanceRefreshTaskId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getStatusCode() const;
	void setStatusCode(const std::string &statusCode);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::vector<std::string> getScalingActivityId() const;
	void setScalingActivityId(const std::vector<std::string> &scalingActivityId);

private:
	long resourceOwnerId_;
	std::string scalingGroupId_;
	std::string instanceRefreshTaskId_;
	int pageNumber_;
	std::string accessKeyId_;
	std::string statusCode_;
	std::string regionId_;
	int pageSize_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::vector<std::string> scalingActivityId_;
};
} // namespace Model
} // namespace Ess
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGACTIVITIESREQUEST_H_
