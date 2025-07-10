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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATETRAFFICMIRRORSESSIONREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_CREATETRAFFICMIRRORSESSIONREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT CreateTrafficMirrorSessionRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string key;
		std::string value;
	};
	CreateTrafficMirrorSessionRequest();
	~CreateTrafficMirrorSessionRequest();
	std::string getTrafficMirrorTargetType() const;
	void setTrafficMirrorTargetType(const std::string &trafficMirrorTargetType);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	bool getEnabled() const;
	void setEnabled(bool enabled);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getTrafficMirrorSessionName() const;
	void setTrafficMirrorSessionName(const std::string &trafficMirrorSessionName);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getTrafficMirrorSessionDescription() const;
	void setTrafficMirrorSessionDescription(const std::string &trafficMirrorSessionDescription);
	std::vector<std::string> getTrafficMirrorSourceIds() const;
	void setTrafficMirrorSourceIds(const std::vector<std::string> &trafficMirrorSourceIds);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
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
	int getPacketLength() const;
	void setPacketLength(int packetLength);
	int getVirtualNetworkId() const;
	void setVirtualNetworkId(int virtualNetworkId);
	int getTrafficMirrorSourceTruncateMode() const;
	void setTrafficMirrorSourceTruncateMode(int trafficMirrorSourceTruncateMode);

private:
	std::string trafficMirrorTargetType_;
	long resourceOwnerId_;
	std::string clientToken_;
	bool enabled_;
	std::string resourceGroupId_;
	std::string trafficMirrorSessionName_;
	std::string regionId_;
	std::string trafficMirrorSessionDescription_;
	std::vector<std::string> trafficMirrorSourceIds_;
	std::vector<Tag> tag_;
	bool dryRun_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	int priority_;
	long ownerId_;
	std::string trafficMirrorTargetId_;
	std::string trafficMirrorFilterId_;
	int packetLength_;
	int virtualNetworkId_;
	int trafficMirrorSourceTruncateMode_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_CREATETRAFFICMIRRORSESSIONREQUEST_H_
