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

#ifndef ALIBABACLOUD_CBN_MODEL_CREATECENINTERREGIONTRAFFICQOSPOLICYREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_CREATECENINTERREGIONTRAFFICQOSPOLICYREQUEST_H_

#include <alibabacloud/cbn/CbnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cbn {
namespace Model {
class ALIBABACLOUD_CBN_EXPORT CreateCenInterRegionTrafficQosPolicyRequest : public RpcServiceRequest {
public:
	struct TrafficQosQueues {
		std::string qosQueueName;
		std::string remainBandwidthPercent;
		std::string qosQueueDescription;
	};
	CreateCenInterRegionTrafficQosPolicyRequest();
	~CreateCenInterRegionTrafficQosPolicyRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::vector<TrafficQosQueues> getTrafficQosQueues() const;
	void setTrafficQosQueues(const std::vector<TrafficQosQueues> &trafficQosQueues);
	std::string getTrafficQosPolicyName() const;
	void setTrafficQosPolicyName(const std::string &trafficQosPolicyName);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getTrafficQosPolicyDescription() const;
	void setTrafficQosPolicyDescription(const std::string &trafficQosPolicyDescription);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getTransitRouterId() const;
	void setTransitRouterId(const std::string &transitRouterId);
	std::string getVersion() const;
	void setVersion(const std::string &version);
	std::string getTransitRouterAttachmentId() const;
	void setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::vector<TrafficQosQueues> trafficQosQueues_;
	std::string trafficQosPolicyName_;
	bool dryRun_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string trafficQosPolicyDescription_;
	long ownerId_;
	std::string transitRouterId_;
	std::string version_;
	std::string transitRouterAttachmentId_;
};
} // namespace Model
} // namespace Cbn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CBN_MODEL_CREATECENINTERREGIONTRAFFICQOSPOLICYREQUEST_H_
