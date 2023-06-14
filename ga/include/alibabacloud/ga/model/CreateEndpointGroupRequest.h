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

#ifndef ALIBABACLOUD_GA_MODEL_CREATEENDPOINTGROUPREQUEST_H_
#define ALIBABACLOUD_GA_MODEL_CREATEENDPOINTGROUPREQUEST_H_

#include <alibabacloud/ga/GaExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ga {
namespace Model {
class ALIBABACLOUD_GA_EXPORT CreateEndpointGroupRequest : public RpcServiceRequest {
public:
	struct PortOverrides {
		int listenerPort;
		int endpointPort;
	};
	struct SystemTag {
		std::string key;
		std::string value;
		std::string scope;
	};
	struct EndpointConfigurations {
		std::string type;
		bool enableClientIPPreservation;
		int weight;
		bool enableProxyProtocol;
		std::string endpoint;
	};
	struct Tag {
		std::string key;
		std::string value;
	};
	CreateEndpointGroupRequest();
	~CreateEndpointGroupRequest();
	std::vector<PortOverrides> getPortOverrides() const;
	void setPortOverrides(const std::vector<PortOverrides> &portOverrides);
	bool getHealthCheckEnabled() const;
	void setHealthCheckEnabled(bool healthCheckEnabled);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::vector<SystemTag> getSystemTag() const;
	void setSystemTag(const std::vector<SystemTag> &systemTag);
	int getHealthCheckIntervalSeconds() const;
	void setHealthCheckIntervalSeconds(int healthCheckIntervalSeconds);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getHealthCheckProtocol() const;
	void setHealthCheckProtocol(const std::string &healthCheckProtocol);
	std::string getEndpointRequestProtocol() const;
	void setEndpointRequestProtocol(const std::string &endpointRequestProtocol);
	std::string getListenerId() const;
	void setListenerId(const std::string &listenerId);
	std::string getHealthCheckPath() const;
	void setHealthCheckPath(const std::string &healthCheckPath);
	std::vector<EndpointConfigurations> getEndpointConfigurations() const;
	void setEndpointConfigurations(const std::vector<EndpointConfigurations> &endpointConfigurations);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getEndpointGroupType() const;
	void setEndpointGroupType(const std::string &endpointGroupType);
	std::string getAcceleratorId() const;
	void setAcceleratorId(const std::string &acceleratorId);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	int getTrafficPercentage() const;
	void setTrafficPercentage(int trafficPercentage);
	int getHealthCheckPort() const;
	void setHealthCheckPort(int healthCheckPort);
	int getThresholdCount() const;
	void setThresholdCount(int thresholdCount);
	std::string getEndpointGroupRegion() const;
	void setEndpointGroupRegion(const std::string &endpointGroupRegion);
	std::string getName() const;
	void setName(const std::string &name);

private:
	std::vector<PortOverrides> portOverrides_;
	bool healthCheckEnabled_;
	std::string clientToken_;
	std::vector<SystemTag> systemTag_;
	int healthCheckIntervalSeconds_;
	std::string description_;
	std::string healthCheckProtocol_;
	std::string endpointRequestProtocol_;
	std::string listenerId_;
	std::string healthCheckPath_;
	std::vector<EndpointConfigurations> endpointConfigurations_;
	std::string regionId_;
	std::string endpointGroupType_;
	std::string acceleratorId_;
	std::vector<Tag> tag_;
	int trafficPercentage_;
	int healthCheckPort_;
	int thresholdCount_;
	std::string endpointGroupRegion_;
	std::string name_;
};
} // namespace Model
} // namespace Ga
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GA_MODEL_CREATEENDPOINTGROUPREQUEST_H_
