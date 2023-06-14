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

#ifndef ALIBABACLOUD_GA_MODEL_CREATELISTENERREQUEST_H_
#define ALIBABACLOUD_GA_MODEL_CREATELISTENERREQUEST_H_

#include <alibabacloud/ga/GaExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ga {
namespace Model {
class ALIBABACLOUD_GA_EXPORT CreateListenerRequest : public RpcServiceRequest {
public:
	struct CustomRoutingEndpointGroupConfigurations {
		std::string endpointGroupRegion;
		std::string name;
		std::string description;
		struct DestinationConfigurationsItem {
			std::string string;
			std::vector<std::string> protocols;
			int fromPort;
			int toPort;
		};
		DestinationConfigurationsItem destinationConfigurationsItem;
		std::vector<DestinationConfigurationsItem> destinationConfigurations;
		struct EndpointConfigurationsItem {
			std::string type;
			std::string endpoint;
			std::string trafficToEndpointPolicy;
			struct PolicyConfigurationsItem {
				std::string address;
				struct PortRangesItem {
					int fromPort;
					int toPort;
				};
				PortRangesItem portRangesItem;
				std::vector<PortRangesItem> portRanges;
			};
			PolicyConfigurationsItem policyConfigurationsItem;
			std::vector<PolicyConfigurationsItem> policyConfigurations;
		};
		EndpointConfigurationsItem endpointConfigurationsItem;
		std::vector<EndpointConfigurationsItem> endpointConfigurations;
	};
	struct BackendPorts {
		int fromPort;
		int toPort;
	};
	struct EndpointGroupConfigurations {
		std::string endpointGroupName;
		std::string endpointGroupDescription;
		std::string endpointGroupRegion;
		long trafficPercentage;
		bool healthCheckEnabled;
		long healthCheckIntervalSeconds;
		std::string healthCheckPath;
		long healthCheckPort;
		std::string healthCheckProtocol;
		long thresholdCount;
		struct EndpointConfigurationsItem {
			std::string type;
			long weight;
			std::string endpoint;
		};
		EndpointConfigurationsItem endpointConfigurationsItem;
		std::vector<EndpointConfigurationsItem> endpointConfigurations;
		std::string endpointRequestProtocol;
		std::string endpointGroupType;
		struct PortOverridesItem {
			long listenerPort;
			long endpointPort;
		};
		PortOverridesItem portOverridesItem;
		std::vector<PortOverridesItem> portOverrides;
		bool enableClientIPPreservationToa;
		bool enableClientIPPreservationProxyProtocol;
	};
	struct XForwardedForConfig {
		bool xForwardedForGaIdEnabled;
		bool xForwardedForGaApEnabled;
		bool xForwardedForProtoEnabled;
		bool xForwardedForPortEnabled;
		bool xRealIpEnabled;
	};
	struct PortRanges {
		int fromPort;
		int toPort;
	};
	struct Certificates {
		std::string id;
	};
	CreateListenerRequest();
	~CreateListenerRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::vector<CustomRoutingEndpointGroupConfigurations> getCustomRoutingEndpointGroupConfigurations() const;
	void setCustomRoutingEndpointGroupConfigurations(const std::vector<CustomRoutingEndpointGroupConfigurations> &customRoutingEndpointGroupConfigurations);
	std::string getType() const;
	void setType(const std::string &type);
	std::vector<BackendPorts> getBackendPorts() const;
	void setBackendPorts(const std::vector<BackendPorts> &backendPorts);
	std::string getProtocol() const;
	void setProtocol(const std::string &protocol);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getAcceleratorId() const;
	void setAcceleratorId(const std::string &acceleratorId);
	std::vector<EndpointGroupConfigurations> getEndpointGroupConfigurations() const;
	void setEndpointGroupConfigurations(const std::vector<EndpointGroupConfigurations> &endpointGroupConfigurations);
	XForwardedForConfig getXForwardedForConfig() const;
	void setXForwardedForConfig(const XForwardedForConfig &xForwardedForConfig);
	std::string getSecurityPolicyId() const;
	void setSecurityPolicyId(const std::string &securityPolicyId);
	bool getProxyProtocol() const;
	void setProxyProtocol(bool proxyProtocol);
	std::vector<PortRanges> getPortRanges() const;
	void setPortRanges(const std::vector<PortRanges> &portRanges);
	std::vector<Certificates> getCertificates() const;
	void setCertificates(const std::vector<Certificates> &certificates);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getClientAffinity() const;
	void setClientAffinity(const std::string &clientAffinity);

private:
	std::string clientToken_;
	std::string description_;
	std::vector<CustomRoutingEndpointGroupConfigurations> customRoutingEndpointGroupConfigurations_;
	std::string type_;
	std::vector<BackendPorts> backendPorts_;
	std::string protocol_;
	std::string regionId_;
	std::string acceleratorId_;
	std::vector<EndpointGroupConfigurations> endpointGroupConfigurations_;
	XForwardedForConfig xForwardedForConfig_;
	std::string securityPolicyId_;
	bool proxyProtocol_;
	std::vector<PortRanges> portRanges_;
	std::vector<Certificates> certificates_;
	std::string name_;
	std::string clientAffinity_;
};
} // namespace Model
} // namespace Ga
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GA_MODEL_CREATELISTENERREQUEST_H_
