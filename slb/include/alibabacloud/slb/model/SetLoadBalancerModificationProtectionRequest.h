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

#ifndef ALIBABACLOUD_SLB_MODEL_SETLOADBALANCERMODIFICATIONPROTECTIONREQUEST_H_
#define ALIBABACLOUD_SLB_MODEL_SETLOADBALANCERMODIFICATIONPROTECTIONREQUEST_H_

#include <alibabacloud/slb/SlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Slb {
namespace Model {
class ALIBABACLOUD_SLB_EXPORT SetLoadBalancerModificationProtectionRequest : public RpcServiceRequest {
public:
	SetLoadBalancerModificationProtectionRequest();
	~SetLoadBalancerModificationProtectionRequest();
	std::string getModificationProtectionReason() const;
	void setModificationProtectionReason(const std::string &modificationProtectionReason);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getModificationProtectionStatus() const;
	void setModificationProtectionStatus(const std::string &modificationProtectionStatus);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getLoadBalancerId() const;
	void setLoadBalancerId(const std::string &loadBalancerId);

private:
	std::string modificationProtectionReason_;
	long resourceOwnerId_;
	std::string regionId_;
	std::string resourceOwnerAccount_;
	std::string modificationProtectionStatus_;
	std::string ownerAccount_;
	long ownerId_;
	std::string loadBalancerId_;
};
} // namespace Model
} // namespace Slb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SLB_MODEL_SETLOADBALANCERMODIFICATIONPROTECTIONREQUEST_H_
