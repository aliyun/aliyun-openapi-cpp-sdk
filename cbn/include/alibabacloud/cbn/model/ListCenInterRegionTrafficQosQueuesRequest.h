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

#ifndef ALIBABACLOUD_CBN_MODEL_LISTCENINTERREGIONTRAFFICQOSQUEUESREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_LISTCENINTERREGIONTRAFFICQOSQUEUESREQUEST_H_

#include <alibabacloud/cbn/CbnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cbn {
namespace Model {
class ALIBABACLOUD_CBN_EXPORT ListCenInterRegionTrafficQosQueuesRequest : public RpcServiceRequest {
public:
	ListCenInterRegionTrafficQosQueuesRequest();
	~ListCenInterRegionTrafficQosQueuesRequest();
	std::string getTrafficQosQueueName() const;
	void setTrafficQosQueueName(const std::string &trafficQosQueueName);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getTrafficQosQueueId() const;
	void setTrafficQosQueueId(const std::string &trafficQosQueueId);
	std::string getTrafficQosQueueDescription() const;
	void setTrafficQosQueueDescription(const std::string &trafficQosQueueDescription);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getTrafficQosPolicyId() const;
	void setTrafficQosPolicyId(const std::string &trafficQosPolicyId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getTransitRouterId() const;
	void setTransitRouterId(const std::string &transitRouterId);
	std::string getVersion() const;
	void setVersion(const std::string &version);
	std::string getTransitRouterAttachmentId() const;
	void setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId);
	int getMaxResults() const;
	void setMaxResults(int maxResults);

private:
	std::string trafficQosQueueName_;
	long resourceOwnerId_;
	std::string trafficQosQueueId_;
	std::string trafficQosQueueDescription_;
	std::string nextToken_;
	std::string trafficQosPolicyId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string transitRouterId_;
	std::string version_;
	std::string transitRouterAttachmentId_;
	int maxResults_;
};
} // namespace Model
} // namespace Cbn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CBN_MODEL_LISTCENINTERREGIONTRAFFICQOSQUEUESREQUEST_H_
