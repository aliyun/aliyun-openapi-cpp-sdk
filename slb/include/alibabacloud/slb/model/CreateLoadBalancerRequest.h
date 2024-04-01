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

#ifndef ALIBABACLOUD_SLB_MODEL_CREATELOADBALANCERREQUEST_H_
#define ALIBABACLOUD_SLB_MODEL_CREATELOADBALANCERREQUEST_H_

#include <alibabacloud/slb/SlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Slb {
namespace Model {
class ALIBABACLOUD_SLB_EXPORT CreateLoadBalancerRequest : public RpcServiceRequest {
public:
	CreateLoadBalancerRequest();
	~CreateLoadBalancerRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getLoadBalancerMode() const;
	void setLoadBalancerMode(const std::string &loadBalancerMode);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getLoadBalancerName() const;
	void setLoadBalancerName(const std::string &loadBalancerName);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getAddress() const;
	void setAddress(const std::string &address);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getIsPublicAddress() const;
	void setIsPublicAddress(const std::string &isPublicAddress);
	long getOwnerId() const;
	void setOwnerId(long ownerId);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string loadBalancerMode_;
	std::string accessKeyId_;
	std::string loadBalancerName_;
	std::string regionId_;
	std::string address_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string isPublicAddress_;
	long ownerId_;
};
} // namespace Model
} // namespace Slb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SLB_MODEL_CREATELOADBALANCERREQUEST_H_
