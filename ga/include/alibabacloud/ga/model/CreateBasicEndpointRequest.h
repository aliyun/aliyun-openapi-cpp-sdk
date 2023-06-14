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

#ifndef ALIBABACLOUD_GA_MODEL_CREATEBASICENDPOINTREQUEST_H_
#define ALIBABACLOUD_GA_MODEL_CREATEBASICENDPOINTREQUEST_H_

#include <alibabacloud/ga/GaExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ga {
namespace Model {
class ALIBABACLOUD_GA_EXPORT CreateBasicEndpointRequest : public RpcServiceRequest {
public:
	CreateBasicEndpointRequest();
	~CreateBasicEndpointRequest();
	std::string getEndpointZoneId() const;
	void setEndpointZoneId(const std::string &endpointZoneId);
	std::string getEndpointSubAddressType() const;
	void setEndpointSubAddressType(const std::string &endpointSubAddressType);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getEndpointAddress() const;
	void setEndpointAddress(const std::string &endpointAddress);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getEndpointType() const;
	void setEndpointType(const std::string &endpointType);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getAcceleratorId() const;
	void setAcceleratorId(const std::string &acceleratorId);
	std::string getEndpointSubAddress() const;
	void setEndpointSubAddress(const std::string &endpointSubAddress);
	std::string getEndpointGroupId() const;
	void setEndpointGroupId(const std::string &endpointGroupId);

private:
	std::string endpointZoneId_;
	std::string endpointSubAddressType_;
	std::string clientToken_;
	std::string endpointAddress_;
	std::string regionId_;
	std::string endpointType_;
	std::string name_;
	std::string acceleratorId_;
	std::string endpointSubAddress_;
	std::string endpointGroupId_;
};
} // namespace Model
} // namespace Ga
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GA_MODEL_CREATEBASICENDPOINTREQUEST_H_
