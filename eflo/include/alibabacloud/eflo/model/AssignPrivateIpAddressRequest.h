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

#ifndef ALIBABACLOUD_EFLO_MODEL_ASSIGNPRIVATEIPADDRESSREQUEST_H_
#define ALIBABACLOUD_EFLO_MODEL_ASSIGNPRIVATEIPADDRESSREQUEST_H_

#include <alibabacloud/eflo/EfloExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eflo {
namespace Model {
class ALIBABACLOUD_EFLO_EXPORT AssignPrivateIpAddressRequest : public RpcServiceRequest {
public:
	AssignPrivateIpAddressRequest();
	~AssignPrivateIpAddressRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	bool getAssignMac() const;
	void setAssignMac(bool assignMac);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getSubnetId() const;
	void setSubnetId(const std::string &subnetId);
	bool getSkipConfig() const;
	void setSkipConfig(bool skipConfig);
	std::string getPrivateIpAddress() const;
	void setPrivateIpAddress(const std::string &privateIpAddress);
	std::string getNetworkInterfaceId() const;
	void setNetworkInterfaceId(const std::string &networkInterfaceId);

private:
	std::string clientToken_;
	std::string description_;
	bool assignMac_;
	std::string regionId_;
	std::string subnetId_;
	bool skipConfig_;
	std::string privateIpAddress_;
	std::string networkInterfaceId_;
};
} // namespace Model
} // namespace Eflo
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EFLO_MODEL_ASSIGNPRIVATEIPADDRESSREQUEST_H_
