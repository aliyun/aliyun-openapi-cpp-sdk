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

#ifndef ALIBABACLOUD_ENS_MODEL_CREATELOADBALANCERREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_CREATELOADBALANCERREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT CreateLoadBalancerRequest : public RpcServiceRequest {
public:
	CreateLoadBalancerRequest();
	~CreateLoadBalancerRequest();
	std::string getLoadBalancerName() const;
	void setLoadBalancerName(const std::string &loadBalancerName);
	std::string getEnsRegionId() const;
	void setEnsRegionId(const std::string &ensRegionId);
	std::string getLoadBalancerSpec() const;
	void setLoadBalancerSpec(const std::string &loadBalancerSpec);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getNetworkId() const;
	void setNetworkId(const std::string &networkId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getPayType() const;
	void setPayType(const std::string &payType);

private:
	std::string loadBalancerName_;
	std::string ensRegionId_;
	std::string loadBalancerSpec_;
	std::string vSwitchId_;
	std::string networkId_;
	std::string clientToken_;
	std::string payType_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_CREATELOADBALANCERREQUEST_H_
