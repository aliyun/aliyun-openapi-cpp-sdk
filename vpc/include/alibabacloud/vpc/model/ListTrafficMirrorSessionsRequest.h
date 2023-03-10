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

#ifndef ALIBABACLOUD_VPC_MODEL_LISTTRAFFICMIRRORSESSIONSREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_LISTTRAFFICMIRRORSESSIONSREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT ListTrafficMirrorSessionsRequest : public RpcServiceRequest {
public:
	struct Tags {
		std::string key;
		std::string value;
	};
	ListTrafficMirrorSessionsRequest();
	~ListTrafficMirrorSessionsRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getTrafficMirrorSourceId() const;
	void setTrafficMirrorSourceId(const std::string &trafficMirrorSourceId);
	bool getEnabled() const;
	void setEnabled(bool enabled);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getTrafficMirrorSessionName() const;
	void setTrafficMirrorSessionName(const std::string &trafficMirrorSessionName);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<std::string> getTrafficMirrorSessionIds() const;
	void setTrafficMirrorSessionIds(const std::vector<std::string> &trafficMirrorSessionIds);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	int getPriority() const;
	void setPriority(int priority);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getTrafficMirrorTargetId() const;
	void setTrafficMirrorTargetId(const std::string &trafficMirrorTargetId);
	std::string getTrafficMirrorFilterId() const;
	void setTrafficMirrorFilterId(const std::string &trafficMirrorFilterId);
	std::vector<Tags> getTags() const;
	void setTags(const std::vector<Tags> &tags);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	int getVirtualNetworkId() const;
	void setVirtualNetworkId(int virtualNetworkId);

private:
	long resourceOwnerId_;
	std::string trafficMirrorSourceId_;
	bool enabled_;
	std::string resourceGroupId_;
	std::string trafficMirrorSessionName_;
	std::string nextToken_;
	std::string regionId_;
	std::vector<std::string> trafficMirrorSessionIds_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	int priority_;
	long ownerId_;
	std::string trafficMirrorTargetId_;
	std::string trafficMirrorFilterId_;
	std::vector<Tags> tags_;
	int maxResults_;
	int virtualNetworkId_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_LISTTRAFFICMIRRORSESSIONSREQUEST_H_
