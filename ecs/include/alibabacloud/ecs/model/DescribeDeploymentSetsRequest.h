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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEDEPLOYMENTSETSREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEDEPLOYMENTSETSREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT DescribeDeploymentSetsRequest : public RpcServiceRequest {
public:
	DescribeDeploymentSetsRequest();
	~DescribeDeploymentSetsRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getNetworkType() const;
	void setNetworkType(const std::string &networkType);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getDeploymentSetIds() const;
	void setDeploymentSetIds(const std::string &deploymentSetIds);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getDeploymentSetName() const;
	void setDeploymentSetName(const std::string &deploymentSetName);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getGranularity() const;
	void setGranularity(const std::string &granularity);
	std::string getDomain() const;
	void setDomain(const std::string &domain);
	std::string getStrategy() const;
	void setStrategy(const std::string &strategy);

private:
	long resourceOwnerId_;
	std::string networkType_;
	int pageNumber_;
	std::string deploymentSetIds_;
	std::string regionId_;
	int pageSize_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string deploymentSetName_;
	long ownerId_;
	std::string granularity_;
	std::string domain_;
	std::string strategy_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEDEPLOYMENTSETSREQUEST_H_
