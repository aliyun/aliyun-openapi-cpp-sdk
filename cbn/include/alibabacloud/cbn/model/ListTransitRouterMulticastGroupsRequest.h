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

#ifndef ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERMULTICASTGROUPSREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERMULTICASTGROUPSREQUEST_H_

#include <alibabacloud/cbn/CbnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cbn {
namespace Model {
class ALIBABACLOUD_CBN_EXPORT ListTransitRouterMulticastGroupsRequest : public RpcServiceRequest {
public:
	ListTransitRouterMulticastGroupsRequest();
	~ListTransitRouterMulticastGroupsRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::vector<std::string> getNetworkInterfaceIds() const;
	void setNetworkInterfaceIds(const std::vector<std::string> &networkInterfaceIds);
	std::vector<std::string> getVSwitchIds() const;
	void setVSwitchIds(const std::vector<std::string> &vSwitchIds);
	std::string getTransitRouterMulticastDomainId() const;
	void setTransitRouterMulticastDomainId(const std::string &transitRouterMulticastDomainId);
	bool getIsGroupSource() const;
	void setIsGroupSource(bool isGroupSource);
	std::vector<std::string> getConnectPeerIds() const;
	void setConnectPeerIds(const std::vector<std::string> &connectPeerIds);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getGroupIpAddress() const;
	void setGroupIpAddress(const std::string &groupIpAddress);
	std::string getResourceId() const;
	void setResourceId(const std::string &resourceId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::vector<std::string> getPeerTransitRouterMulticastDomains() const;
	void setPeerTransitRouterMulticastDomains(const std::vector<std::string> &peerTransitRouterMulticastDomains);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::string getVersion() const;
	void setVersion(const std::string &version);
	std::string getTransitRouterAttachmentId() const;
	void setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId);
	long getMaxResults() const;
	void setMaxResults(long maxResults);
	bool getIsGroupMember() const;
	void setIsGroupMember(bool isGroupMember);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::vector<std::string> networkInterfaceIds_;
	std::vector<std::string> vSwitchIds_;
	std::string transitRouterMulticastDomainId_;
	bool isGroupSource_;
	std::vector<std::string> connectPeerIds_;
	std::string nextToken_;
	std::string groupIpAddress_;
	std::string resourceId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::vector<std::string> peerTransitRouterMulticastDomains_;
	long ownerId_;
	std::string resourceType_;
	std::string version_;
	std::string transitRouterAttachmentId_;
	long maxResults_;
	bool isGroupMember_;
};
} // namespace Model
} // namespace Cbn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERMULTICASTGROUPSREQUEST_H_
