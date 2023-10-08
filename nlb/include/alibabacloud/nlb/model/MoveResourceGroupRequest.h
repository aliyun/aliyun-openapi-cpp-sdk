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

#ifndef ALIBABACLOUD_NLB_MODEL_MOVERESOURCEGROUPREQUEST_H_
#define ALIBABACLOUD_NLB_MODEL_MOVERESOURCEGROUPREQUEST_H_

#include <alibabacloud/nlb/NlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Nlb {
namespace Model {
class ALIBABACLOUD_NLB_EXPORT MoveResourceGroupRequest : public RpcServiceRequest {
public:
	MoveResourceGroupRequest();
	~MoveResourceGroupRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getChannel() const;
	void setChannel(const std::string &channel);
	std::string getOwnerIdLoginEmail() const;
	void setOwnerIdLoginEmail(const std::string &ownerIdLoginEmail);
	std::string getResourceDescription() const;
	void setResourceDescription(const std::string &resourceDescription);
	std::string getCallerBidLoginEmail() const;
	void setCallerBidLoginEmail(const std::string &callerBidLoginEmail);
	std::string getCallerUidLoginEmail() const;
	void setCallerUidLoginEmail(const std::string &callerUidLoginEmail);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getRequestContent() const;
	void setRequestContent(const std::string &requestContent);
	std::string getResourceId() const;
	void setResourceId(const std::string &resourceId);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::string getNewResourceGroupId() const;
	void setNewResourceGroupId(const std::string &newResourceGroupId);
	std::string getServiceCode() const;
	void setServiceCode(const std::string &serviceCode);
	std::string getResourceName() const;
	void setResourceName(const std::string &resourceName);

private:
	std::string clientToken_;
	std::string channel_;
	std::string ownerIdLoginEmail_;
	std::string resourceDescription_;
	std::string callerBidLoginEmail_;
	std::string callerUidLoginEmail_;
	std::string regionId_;
	std::string requestContent_;
	std::string resourceId_;
	bool dryRun_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string resourceType_;
	std::string newResourceGroupId_;
	std::string serviceCode_;
	std::string resourceName_;
};
} // namespace Model
} // namespace Nlb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NLB_MODEL_MOVERESOURCEGROUPREQUEST_H_
