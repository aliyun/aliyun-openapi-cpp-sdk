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

#ifndef ALIBABACLOUD_ALB_MODEL_UPDATELOADBALANCERADDRESSTYPECONFIGREQUEST_H_
#define ALIBABACLOUD_ALB_MODEL_UPDATELOADBALANCERADDRESSTYPECONFIGREQUEST_H_

#include <alibabacloud/alb/AlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alb {
namespace Model {
class ALIBABACLOUD_ALB_EXPORT UpdateLoadBalancerAddressTypeConfigRequest : public RpcServiceRequest {
public:
	struct ZoneMappings {
		std::string vSwitchId;
		std::string eipType;
		std::string zoneId;
		std::string allocationId;
	};
	UpdateLoadBalancerAddressTypeConfigRequest();
	~UpdateLoadBalancerAddressTypeConfigRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getAddressType() const;
	void setAddressType(const std::string &addressType);
	std::string getDryRun() const;
	void setDryRun(const std::string &dryRun);
	std::vector<ZoneMappings> getZoneMappings() const;
	void setZoneMappings(const std::vector<ZoneMappings> &zoneMappings);
	std::string getLoadBalancerId() const;
	void setLoadBalancerId(const std::string &loadBalancerId);

private:
	std::string clientToken_;
	std::string addressType_;
	std::string dryRun_;
	std::vector<ZoneMappings> zoneMappings_;
	std::string loadBalancerId_;
};
} // namespace Model
} // namespace Alb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALB_MODEL_UPDATELOADBALANCERADDRESSTYPECONFIGREQUEST_H_
