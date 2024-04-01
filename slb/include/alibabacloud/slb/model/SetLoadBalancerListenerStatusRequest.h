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

#ifndef ALIBABACLOUD_SLB_MODEL_SETLOADBALANCERLISTENERSTATUSREQUEST_H_
#define ALIBABACLOUD_SLB_MODEL_SETLOADBALANCERLISTENERSTATUSREQUEST_H_

#include <alibabacloud/slb/SlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Slb {
namespace Model {
class ALIBABACLOUD_SLB_EXPORT SetLoadBalancerListenerStatusRequest : public RpcServiceRequest {
public:
	SetLoadBalancerListenerStatusRequest();
	~SetLoadBalancerListenerStatusRequest();
	int getListenerPort() const;
	void setListenerPort(int listenerPort);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getHostId() const;
	void setHostId(const std::string &hostId);
	std::string getOwnerId() const;
	void setOwnerId(const std::string &ownerId);
	std::string getListenerStatus() const;
	void setListenerStatus(const std::string &listenerStatus);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getLoadBalancerId() const;
	void setLoadBalancerId(const std::string &loadBalancerId);

private:
	int listenerPort_;
	std::string ownerAccount_;
	std::string hostId_;
	std::string ownerId_;
	std::string listenerStatus_;
	std::string accessKeyId_;
	std::string loadBalancerId_;
};
} // namespace Model
} // namespace Slb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SLB_MODEL_SETLOADBALANCERLISTENERSTATUSREQUEST_H_
