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

#ifndef ALIBABACLOUD_GA_MODEL_CREATECUSTOMROUTINGENDPOINTGROUPSREQUEST_H_
#define ALIBABACLOUD_GA_MODEL_CREATECUSTOMROUTINGENDPOINTGROUPSREQUEST_H_

#include <alibabacloud/ga/GaExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ga {
namespace Model {
class ALIBABACLOUD_GA_EXPORT CreateCustomRoutingEndpointGroupsRequest : public RpcServiceRequest {
public:
	struct EndpointGroupConfigurations {
		std::string endpointGroupRegion;
		std::string name;
		std::string description;
		struct DestinationConfigurations {
			int fromPort;
			int toPort;
		};
		std::vector<DestinationConfigurations> destinationConfigurations;
		struct EndpointConfigurations {
			std::string type;
			std::string endpoint;
			std::string trafficToEndpointPolicy;
			struct PolicyConfigurations {
				std::string address;
				struct PortRanges {
					int fromPort;
					int toPort;
				};
				std::vector<PortRanges> portRanges;
			};
			std::vector<PolicyConfigurations> policyConfigurations;
		};
		std::vector<EndpointConfigurations> endpointConfigurations;
	};
	CreateCustomRoutingEndpointGroupsRequest();
	~CreateCustomRoutingEndpointGroupsRequest();
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::vector<EndpointGroupConfigurations> getEndpointGroupConfigurations() const;
	void setEndpointGroupConfigurations(const std::vector<EndpointGroupConfigurations> &endpointGroupConfigurations);
	std::string getListenerId() const;
	void setListenerId(const std::string &listenerId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getAcceleratorId() const;
	void setAcceleratorId(const std::string &acceleratorId);

private:
	bool dryRun_;
	std::string clientToken_;
	std::vector<EndpointGroupConfigurations> endpointGroupConfigurations_;
	std::string listenerId_;
	std::string regionId_;
	std::string acceleratorId_;
};
} // namespace Model
} // namespace Ga
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GA_MODEL_CREATECUSTOMROUTINGENDPOINTGROUPSREQUEST_H_
