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
				struct PortOverridesItem
				{
					int listenerPort;
					int endpointPort;
				};
				struct EndpointConfigurationsItem
				{
					bool enableProxyProtocol;
					std::string probeProtocol;
					std::string type;
					std::string endpoint;
					bool enableClientIPPreservation;
					int probePort;
					int weight;
				};


				DescribeEndpointGroupResult();
				explicit DescribeEndpointGroupResult(const std::string &payload);
				~DescribeEndpointGroupResult();
				int getHealthCheckIntervalSeconds()const;
				std::vector<std::string> getForwardingRuleIds()const;
				int getTrafficPercentage()const;
				std::string getDescription()const;
				std::string getEndpointGroupId()const;
				std::string getSlsRegion()const;
				std::string getHealthCheckPath()const;
				int getThresholdCount()const;
				std::string getSlsLogStoreName()const;
				std::string getEndpointRequestProtocol()const;
				std::string getName()const;
				std::vector<PortOverridesItem> getPortOverrides()const;
				bool getEnableAccessLog()const;
				int getTotalCount()const;
				std::string getEndpointGroupRegion()const;
				std::string getSlsProjectName()const;
				std::string getState()const;
				std::string getAccessLogSwitch()const;
				std::string getHealthCheckProtocol()const;
				int getHealthCheckPort()const;
				std::vector<EndpointConfigurationsItem> getEndpointConfigurations()const;
				std::string getAcceleratorId()const;
				std::string getEndpointGroupType()const;
				std::string getListenerId()const;

			protected:
				void parse(const std::string &payload);
			private:
				int healthCheckIntervalSeconds_;
				std::vector<std::string> forwardingRuleIds_;
				int trafficPercentage_;
				std::string description_;
				std::string endpointGroupId_;
				std::string slsRegion_;
				std::string healthCheckPath_;
				int thresholdCount_;
				std::string slsLogStoreName_;
				std::string endpointRequestProtocol_;
				std::string name_;
				std::vector<PortOverridesItem> portOverrides_;
				bool enableAccessLog_;
				int totalCount_;
				std::string endpointGroupRegion_;
				std::string slsProjectName_;
				std::string state_;
				std::string accessLogSwitch_;
				std::string healthCheckProtocol_;
				int healthCheckPort_;
				std::vector<EndpointConfigurationsItem> endpointConfigurations_;
				std::string acceleratorId_;
				std::string endpointGroupType_;
				std::string listenerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GA_MODEL_DESCRIBEENDPOINTGROUPRESULT_H_