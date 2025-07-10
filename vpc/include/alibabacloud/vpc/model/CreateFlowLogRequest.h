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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATEFLOWLOGREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_CREATEFLOWLOGREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT CreateFlowLogRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	CreateFlowLogRequest();
	~CreateFlowLogRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getIpVersion() const;
	void setIpVersion(const std::string &ipVersion);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getResourceId() const;
	void setResourceId(const std::string &resourceId);
	std::string getProjectName() const;
	void setProjectName(const std::string &projectName);
	std::string getLogStoreName() const;
	void setLogStoreName(const std::string &logStoreName);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::vector<std::string> getTrafficPath() const;
	void setTrafficPath(const std::vector<std::string> &trafficPath);
	int getAggregationInterval() const;
	void setAggregationInterval(int aggregationInterval);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::string getTrafficType() const;
	void setTrafficType(const std::string &trafficType);
	std::string getFlowLogName() const;
	void setFlowLogName(const std::string &flowLogName);
	std::string getTrafficAnalyzerId() const;
	void setTrafficAnalyzerId(const std::string &trafficAnalyzerId);

private:
	long resourceOwnerId_;
	std::string description_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string ipVersion_;
	std::vector<Tag> tag_;
	std::string resourceId_;
	std::string projectName_;
	std::string logStoreName_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::vector<std::string> trafficPath_;
	int aggregationInterval_;
	long ownerId_;
	std::string resourceType_;
	std::string trafficType_;
	std::string flowLogName_;
	std::string trafficAnalyzerId_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_CREATEFLOWLOGREQUEST_H_
