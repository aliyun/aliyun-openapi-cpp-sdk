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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBELOADBALANCERATTRIBUTERESULT_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBELOADBALANCERATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ens/EnsExport.h>

namespace AlibabaCloud
{
	namespace Ens
	{
		namespace Model
		{
			class ALIBABACLOUD_ENS_EXPORT DescribeLoadBalancerAttributeResult : public ServiceResult
			{
			public:
				struct Rs
				{
					std::string type;
					std::string serverId;
					std::string ip;
					std::string port;
					int weight;
				};
				struct Listener
				{
					std::string listenerForward;
					int listenerPort;
					std::string description;
					int forwardPort;
					std::string listenerProtocol;
					int backendServerPort;
				};


				DescribeLoadBalancerAttributeResult();
				explicit DescribeLoadBalancerAttributeResult(const std::string &payload);
				~DescribeLoadBalancerAttributeResult();
				std::string getAddress()const;
				std::string getEndTime()const;
				std::string getVSwitchId()const;
				std::string getCreateTime()const;
				std::string getAddressIPVersion()const;
				std::string getLoadBalancerId()const;
				std::string getPayType()const;
				std::vector<Rs> getBackendServers()const;
				std::string getNetworkId()const;
				std::string getLoadBalancerSpec()const;
				std::string getLoadBalancerName()const;
				int getBandwidth()const;
				std::vector<Listener> getListenerPortsAndProtocols()const;
				std::string getEnsRegionId()const;
				std::string getLoadBalancerStatus()const;
				std::vector<std::string> getListenerPorts()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string address_;
				std::string endTime_;
				std::string vSwitchId_;
				std::string createTime_;
				std::string addressIPVersion_;
				std::string loadBalancerId_;
				std::string payType_;
				std::vector<Rs> backendServers_;
				std::string networkId_;
				std::string loadBalancerSpec_;
				std::string loadBalancerName_;
				int bandwidth_;
				std::vector<Listener> listenerPortsAndProtocols_;
				std::string ensRegionId_;
				std::string loadBalancerStatus_;
				std::vector<std::string> listenerPorts_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBELOADBALANCERATTRIBUTERESULT_H_