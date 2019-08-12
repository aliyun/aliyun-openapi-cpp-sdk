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

#ifndef ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERATTRIBUTERESULT_H_
#define ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/slb/SlbExport.h>

namespace AlibabaCloud
{
	namespace Slb
	{
		namespace Model
		{
			class ALIBABACLOUD_SLB_EXPORT DescribeLoadBalancerAttributeResult : public ServiceResult
			{
			public:
				struct ListenerPortAndProtocal
				{
					int listenerPort;
					std::string listenerProtocal;
				};
				struct ListenerPortAndProtocol
				{
					std::string listenerForward;
					int listenerPort;
					std::string description;
					int forwardPort;
					std::string listenerProtocol;
				};
				struct BackendServer
				{
					std::string type;
					std::string serverId;
					std::string description;
					std::string vpcId;
					std::string serverIp;
					int weight;
				};


				DescribeLoadBalancerAttributeResult();
				explicit DescribeLoadBalancerAttributeResult(const std::string &payload);
				~DescribeLoadBalancerAttributeResult();
				int getRenewalDuration()const;
				std::vector<ListenerPortAndProtocal> getListenerPortsAndProtocal()const;
				std::string getResourceGroupId()const;
				std::string getAddress()const;
				std::string getEndTime()const;
				std::string getAddressIPVersion()const;
				std::vector<ListenerPortAndProtocol> getListenerPortsAndProtocol()const;
				std::string getLoadBalancerId()const;
				std::vector<BackendServer> getBackendServers()const;
				std::string getHasReservedInfo()const;
				std::string getReservedInfoBandwidth()const;
				std::string getLoadBalancerSpec()const;
				std::string getNetworkType()const;
				int getBandwidth()const;
				std::vector<std::string> getListenerPorts()const;
				std::string getMasterZoneId()const;
				std::string getCloudType()const;
				std::string getVSwitchId()const;
				std::string getCreateTime()const;
				std::string getRenewalStatus()const;
				std::string getRenewalCycUnit()const;
				std::string getPayType()const;
				std::string getReservedInfoActiveTime()const;
				std::string getSlaveZoneId()const;
				std::string getInternetChargeType()const;
				std::string getRegionIdAlias()const;
				std::string getReservedInfoInternetChargeType()const;
				std::string getLoadBalancerName()const;
				std::string getVpcId()const;
				std::string getDeleteProtection()const;
				long getEndTimeStamp()const;
				std::string getRegionId()const;
				std::string getReservedInfoOrderType()const;
				std::string getAddressType()const;
				std::string getLoadBalancerStatus()const;
				long getCreateTimeStamp()const;
				long getAutoReleaseTime()const;

			protected:
				void parse(const std::string &payload);
			private:
				int renewalDuration_;
				std::vector<ListenerPortAndProtocal> listenerPortsAndProtocal_;
				std::string resourceGroupId_;
				std::string address_;
				std::string endTime_;
				std::string addressIPVersion_;
				std::vector<ListenerPortAndProtocol> listenerPortsAndProtocol_;
				std::string loadBalancerId_;
				std::vector<BackendServer> backendServers_;
				std::string hasReservedInfo_;
				std::string reservedInfoBandwidth_;
				std::string loadBalancerSpec_;
				std::string networkType_;
				int bandwidth_;
				std::vector<std::string> listenerPorts_;
				std::string masterZoneId_;
				std::string cloudType_;
				std::string vSwitchId_;
				std::string createTime_;
				std::string renewalStatus_;
				std::string renewalCycUnit_;
				std::string payType_;
				std::string reservedInfoActiveTime_;
				std::string slaveZoneId_;
				std::string internetChargeType_;
				std::string regionIdAlias_;
				std::string reservedInfoInternetChargeType_;
				std::string loadBalancerName_;
				std::string vpcId_;
				std::string deleteProtection_;
				long endTimeStamp_;
				std::string regionId_;
				std::string reservedInfoOrderType_;
				std::string addressType_;
				std::string loadBalancerStatus_;
				long createTimeStamp_;
				long autoReleaseTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERATTRIBUTERESULT_H_