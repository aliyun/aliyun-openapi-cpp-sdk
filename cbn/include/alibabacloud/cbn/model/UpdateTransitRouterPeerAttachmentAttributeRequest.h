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

#ifndef ALIBABACLOUD_CBN_MODEL_UPDATETRANSITROUTERPEERATTACHMENTATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_UPDATETRANSITROUTERPEERATTACHMENTATTRIBUTEREQUEST_H_

#include <alibabacloud/cbn/CbnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cbn {
namespace Model {
class ALIBABACLOUD_CBN_EXPORT UpdateTransitRouterPeerAttachmentAttributeRequest : public RpcServiceRequest {
public:
	UpdateTransitRouterPeerAttachmentAttributeRequest();
	~UpdateTransitRouterPeerAttachmentAttributeRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getBandwidthType() const;
	void setBandwidthType(const std::string &bandwidthType);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getTransitRouterAttachmentName() const;
	void setTransitRouterAttachmentName(const std::string &transitRouterAttachmentName);
	std::string getDefaultLinkType() const;
	void setDefaultLinkType(const std::string &defaultLinkType);
	bool getAutoPublishRouteEnabled() const;
	void setAutoPublishRouteEnabled(bool autoPublishRouteEnabled);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	int getBandwidth() const;
	void setBandwidth(int bandwidth);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::string getVersion() const;
	void setVersion(const std::string &version);
	std::string getTransitRouterAttachmentId() const;
	void setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId);
	std::string getTransitRouterAttachmentDescription() const;
	void setTransitRouterAttachmentDescription(const std::string &transitRouterAttachmentDescription);
	std::string getCenBandwidthPackageId() const;
	void setCenBandwidthPackageId(const std::string &cenBandwidthPackageId);

private:
	long resourceOwnerId_;
	std::string bandwidthType_;
	std::string clientToken_;
	std::string transitRouterAttachmentName_;
	std::string defaultLinkType_;
	bool autoPublishRouteEnabled_;
	bool dryRun_;
	std::string resourceOwnerAccount_;
	int bandwidth_;
	std::string ownerAccount_;
	long ownerId_;
	std::string resourceType_;
	std::string version_;
	std::string transitRouterAttachmentId_;
	std::string transitRouterAttachmentDescription_;
	std::string cenBandwidthPackageId_;
};
} // namespace Model
} // namespace Cbn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CBN_MODEL_UPDATETRANSITROUTERPEERATTACHMENTATTRIBUTEREQUEST_H_
