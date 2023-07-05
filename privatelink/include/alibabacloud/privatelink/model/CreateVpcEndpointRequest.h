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

#ifndef ALIBABACLOUD_PRIVATELINK_MODEL_CREATEVPCENDPOINTREQUEST_H_
#define ALIBABACLOUD_PRIVATELINK_MODEL_CREATEVPCENDPOINTREQUEST_H_

#include <alibabacloud/privatelink/PrivatelinkExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Privatelink {
namespace Model {
class ALIBABACLOUD_PRIVATELINK_EXPORT CreateVpcEndpointRequest : public RpcServiceRequest {
public:
	struct SystemTag {
		std::string key;
		std::string value;
		std::string scope;
	};
	struct Zone {
		std::string vSwitchId;
		std::string zoneId;
		std::string ip;
	};
	struct Tag {
		std::string key;
		std::string value;
	};
	CreateVpcEndpointRequest();
	~CreateVpcEndpointRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::vector<SystemTag> getSystemTag() const;
	void setSystemTag(const std::vector<SystemTag> &systemTag);
	std::vector<std::string> getSecurityGroupId() const;
	void setSecurityGroupId(const std::vector<std::string> &securityGroupId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getEndpointType() const;
	void setEndpointType(const std::string &endpointType);
	std::vector<Zone> getZone() const;
	void setZone(const std::vector<Zone> &zone);
	std::string getServiceName() const;
	void setServiceName(const std::string &serviceName);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getEndpointDescription() const;
	void setEndpointDescription(const std::string &endpointDescription);
	long getZonePrivateIpAddressCount() const;
	void setZonePrivateIpAddressCount(long zonePrivateIpAddressCount);
	bool getProtectedEnabled() const;
	void setProtectedEnabled(bool protectedEnabled);
	std::string getEndpointName() const;
	void setEndpointName(const std::string &endpointName);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	std::string getServiceId() const;
	void setServiceId(const std::string &serviceId);

private:
	std::string clientToken_;
	std::vector<SystemTag> systemTag_;
	std::vector<std::string> securityGroupId_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string endpointType_;
	std::vector<Zone> zone_;
	std::string serviceName_;
	std::vector<Tag> tag_;
	bool dryRun_;
	std::string endpointDescription_;
	long zonePrivateIpAddressCount_;
	bool protectedEnabled_;
	std::string endpointName_;
	std::string vpcId_;
	std::string serviceId_;
};
} // namespace Model
} // namespace Privatelink
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_PRIVATELINK_MODEL_CREATEVPCENDPOINTREQUEST_H_
