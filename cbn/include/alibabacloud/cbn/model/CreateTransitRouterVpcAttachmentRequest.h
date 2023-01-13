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

#ifndef ALIBABACLOUD_CBN_MODEL_CREATETRANSITROUTERVPCATTACHMENTREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_CREATETRANSITROUTERVPCATTACHMENTREQUEST_H_

#include <alibabacloud/cbn/CbnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cbn {
namespace Model {
class ALIBABACLOUD_CBN_EXPORT CreateTransitRouterVpcAttachmentRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	struct ZoneMappings {
		std::string vSwitchId;
		std::string zoneId;
	};
	CreateTransitRouterVpcAttachmentRequest();
	~CreateTransitRouterVpcAttachmentRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getServiceMode() const;
	void setServiceMode(const std::string &serviceMode);
	long getVpcOwnerId() const;
	void setVpcOwnerId(long vpcOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getCenId() const;
	void setCenId(const std::string &cenId);
	bool getRouteTableAssociationEnabled() const;
	void setRouteTableAssociationEnabled(bool routeTableAssociationEnabled);
	std::string getTransitRouterAttachmentName() const;
	void setTransitRouterAttachmentName(const std::string &transitRouterAttachmentName);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	bool getAutoCreateVpcRoute() const;
	void setAutoCreateVpcRoute(bool autoCreateVpcRoute);
	bool getAutoPublishRouteEnabled() const;
	void setAutoPublishRouteEnabled(bool autoPublishRouteEnabled);
	bool getRouteTablePropagationEnabled() const;
	void setRouteTablePropagationEnabled(bool routeTablePropagationEnabled);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::vector<ZoneMappings> getZoneMappings() const;
	void setZoneMappings(const std::vector<ZoneMappings> &zoneMappings);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getTransitRouterId() const;
	void setTransitRouterId(const std::string &transitRouterId);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::string getVersion() const;
	void setVersion(const std::string &version);
	std::string getTransitRouterAttachmentDescription() const;
	void setTransitRouterAttachmentDescription(const std::string &transitRouterAttachmentDescription);
	std::string getAssociateRouteTableId() const;
	void setAssociateRouteTableId(const std::string &associateRouteTableId);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	std::string getChargeType() const;
	void setChargeType(const std::string &chargeType);

private:
	long resourceOwnerId_;
	std::string serviceMode_;
	long vpcOwnerId_;
	std::string clientToken_;
	std::string cenId_;
	bool routeTableAssociationEnabled_;
	std::string transitRouterAttachmentName_;
	std::string regionId_;
	std::vector<Tag> tag_;
	bool autoCreateVpcRoute_;
	bool autoPublishRouteEnabled_;
	bool routeTablePropagationEnabled_;
	bool dryRun_;
	std::string resourceOwnerAccount_;
	std::vector<ZoneMappings> zoneMappings_;
	std::string ownerAccount_;
	long ownerId_;
	std::string transitRouterId_;
	std::string resourceType_;
	std::string version_;
	std::string transitRouterAttachmentDescription_;
	std::string associateRouteTableId_;
	std::string vpcId_;
	std::string chargeType_;
};
} // namespace Model
} // namespace Cbn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CBN_MODEL_CREATETRANSITROUTERVPCATTACHMENTREQUEST_H_
