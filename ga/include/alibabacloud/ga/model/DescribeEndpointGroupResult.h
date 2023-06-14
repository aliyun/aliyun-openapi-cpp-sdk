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

#ifndef ALIBABACLOUD_GA_MODEL_DESCRIBEENDPOINTGROUPRESULT_H_
#define ALIBABACLOUD_GA_MODEL_DESCRIBEENDPOINTGROUPRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ga/GaExport.h>

namespace AlibabaCloud
{
	namespace Ga
	{
		namespace Model
		{
			class ALIBABACLOUD_GA_EXPORT DescribeEndpointGroupResult : public ServiceResult
			{
			public:
				struct EndpointConfigurationsItem
				{
					std::string probeProtocol;
					bool enableProxyProtocol;
					std::string type;
					bool enableClientIPPreservation;
					std::string endpoint;
					int probePort;
					int weight;
				};
				struct PortOverridesItem
				{
					int listenerPort;
					int endpointPort;
				};
				struct TagsItem
				{
					std::string value;
					std::string key;
				};


				DescribeEndpointGroupResult();
				explicit DescribeEndpointGroupResult(const std::string &payload);
				~DescribeEndpointGroupResult();
				std::vector<std::string> getForwardingRuleIds()const;
				int getTrafficPercentage()const;
				std::string getEndpointGroupId()const;
				std::string getDescription()const;
				std::string getHealthCheckPath()const;
				std::string getEndpointRequestProtocol()const;
				std::string getName()const;
				std::vector<PortOverridesItem> getPortOverrides()const;
				std::string getEndpointGroupRegion()const;
				std::string getSlsProjectName()const;
				std::string getHealthCheckProtocol()const;
				std::string getAccessLogSwitch()const;
				std::vector<EndpointConfigurationsItem> getEndpointConfigurations()const;
				std::vector<TagsItem> getTags()const;
				std::string getEndpointGroupType()const;
				int getHealthCheckIntervalSeconds()const;
				std::string getSlsRegion()const;
				int getThresholdCount()const;
				bool getHealthCheckEnabled()const;
				std::string getSlsLogStoreName()const;
				std::vector<std::string> getEndpointGroupIpList()const;
				bool getEnableAccessLog()const;
				std::vector<std::string> getEndpointGroupUnconfirmedIpList()const;
				std::string getState()const;
				int getHealthCheckPort()const;
				std::string getAcceleratorId()const;
				std::string getListenerId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> forwardingRuleIds_;
				int trafficPercentage_;
				std::string endpointGroupId_;
				std::string description_;
				std::string healthCheckPath_;
				std::string endpointRequestProtocol_;
				std::string name_;
				std::vector<PortOverridesItem> portOverrides_;
				std::string endpointGroupRegion_;
				std::string slsProjectName_;
				std::string healthCheckProtocol_;
				std::string accessLogSwitch_;
				std::vector<EndpointConfigurationsItem> endpointConfigurations_;
				std::vector<TagsItem> tags_;
				std::string endpointGroupType_;
				int healthCheckIntervalSeconds_;
				std::string slsRegion_;
				int thresholdCount_;
				bool healthCheckEnabled_;
				std::string slsLogStoreName_;
				std::vector<std::string> endpointGroupIpList_;
				bool enableAccessLog_;
				std::vector<std::string> endpointGroupUnconfirmedIpList_;
				std::string state_;
				int healthCheckPort_;
				std::string acceleratorId_;
				std::string listenerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GA_MODEL_DESCRIBEENDPOINTGROUPRESULT_H_