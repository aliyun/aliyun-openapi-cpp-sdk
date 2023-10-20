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

#ifndef ALIBABACLOUD_EFLO_MODEL_UNASSIGNPRIVATEIPADDRESSREQUEST_H_
#define ALIBABACLOUD_EFLO_MODEL_UNASSIGNPRIVATEIPADDRESSREQUEST_H_

#include <alibabacloud/eflo/EfloExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eflo {
namespace Model {
class ALIBABACLOUD_EFLO_EXPORT UnAssignPrivateIpAddressRequest : public RpcServiceRequest {
public:
	UnAssignPrivateIpAddressRequest();
	~UnAssignPrivateIpAddressRequest();
	std::string getSubnetId() const;
	void setSubnetId(const std::string &subnetId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getPrivateIpAddress() const;
	void setPrivateIpAddress(const std::string &privateIpAddress);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getIpName() const;
	void setIpName(const std::string &ipName);
	std::string getNetworkInterfaceId() const;
	void setNetworkInterfaceId(const std::string &networkInterfaceId);

private:
	std::string subnetId_;
	std::string clientToken_;
	std::string privateIpAddress_;
	std::string regionId_;
	std::string ipName_;
	std::string networkInterfaceId_;
};
} // namespace Model
} // namespace Eflo
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EFLO_MODEL_UNASSIGNPRIVATEIPADDRESSREQUEST_H_
