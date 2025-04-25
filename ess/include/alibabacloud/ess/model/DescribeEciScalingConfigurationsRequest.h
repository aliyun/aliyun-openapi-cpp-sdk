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

#ifndef ALIBABACLOUD_ESS_MODEL_DESCRIBEECISCALINGCONFIGURATIONSREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_DESCRIBEECISCALINGCONFIGURATIONSREQUEST_H_

#include <alibabacloud/ess/EssExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ess {
namespace Model {
class ALIBABACLOUD_ESS_EXPORT DescribeEciScalingConfigurationsRequest : public RpcServiceRequest {
public:
	DescribeEciScalingConfigurationsRequest();
	~DescribeEciScalingConfigurationsRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getScalingGroupId() const;
	void setScalingGroupId(const std::string &scalingGroupId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
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
	std::vector<std::string> getScalingConfigurationName() const;
	void setScalingConfigurationName(const std::vector<std::string> &scalingConfigurationName);
	std::vector<std::string> getScalingConfigurationId() const;
	void setScalingConfigurationId(const std::vector<std::string> &scalingConfigurationId);

private:
	long resourceOwnerId_;
	std::string scalingGroupId_;
	int pageNumber_;
	std::string accessKeyId_;
	std::string regionId_;
	int pageSize_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::vector<std::string> scalingConfigurationName_;
	std::vector<std::string> scalingConfigurationId_;
};
} // namespace Model
} // namespace Ess
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ESS_MODEL_DESCRIBEECISCALINGCONFIGURATIONSREQUEST_H_
