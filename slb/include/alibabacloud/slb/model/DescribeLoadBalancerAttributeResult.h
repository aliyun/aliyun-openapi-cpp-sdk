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
				struct Tag
				{
					std::string tagKey;
					std::string tagValue;
				};
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
					std::string description;
					std::string serverId;
					std::string vpcId;
					std::string serverIp;
					int weight;
				};


				DescribeLoadBalancerAttributeResult();
				explicit DescribeLoadBalancerAttributeResult(const std::string &payload);
				~DescribeLoadBalancerAttributeResult();
				std::vector<ListenerPortAndProtocal> getListenerPortsAndProtocal()const;
				std::string getAddress()const;
				std::string getResourceGroupId()const;
				std::string getSpecType()const;
				std::string getInstanceChargeType()const;
				std::vector<BackendServer> getBackendServers()const;
				std::string getHasReservedInfo()const;
				std::string getBusinessStatus()const;
				std::string getLoadBalancerSpec()const;
				std::string getServiceManagedMode()const;
				std::string getModificationProtectionReason()const;
				std::string getAssociatedCenId()const;
				std::vector<Tag> getTags()const;
				std::vector<std::string> getListenerPorts()const;
				std::string getCloudInstanceType()const;
				std::string getVSwitchId()const;
				std::string getRenewalStatus()const;
				std::vector<std::string> getLabels()const;
				std::string getPayType()const;
				std::string getInternetChargeType()const;
				std::string getReservedInfoInternetChargeType()const;
				std::string getVpcId()const;
				std::string getDeleteProtection()const;
				long getEndTimeStamp()const;
				std::string getLoadBalancerStatus()const;
				long getAutoReleaseTime()const;
				int getRenewalDuration()const;
				std::string getAssociatedCenStatus()const;
				std::string getEndTime()const;
				bool getSupportPrivateLink()const;
				std::string getAddressIPVersion()const;
				std::vector<ListenerPortAndProtocol> getListenerPortsAndProtocol()const;
				std::string getLoadBalancerId()const;
				std::string getReservedInfoBandwidth()const;
				std::string getModificationProtectionStatus()const;
				std::string getNetworkType()const;
				int getBandwidth()const;
				bool getSpecBpsFlag()const;
				std::string getMasterZoneId()const;
				std::string getTunnelType()const;
				std::string getCloudType()const;
				std::string getCreateTime()const;
				long getCloudInstanceUid()const;
				std::string getRenewalCycUnit()const;
				std::string getReservedInfoActiveTime()const;
				std::string getCloudInstanceId()const;
				std::string getSlaveZoneId()const;
				std::string getRegionIdAlias()const;
				std::string getLoadBalancerName()const;
				std::string getReservedInfoOrderType()const;
				std::string getRegionId()const;
				std::string getAddressType()const;
				long getCreateTimeStamp()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ListenerPortAndProtocal> listenerPortsAndProtocal_;
				std::string address_;
				std::string resourceGroupId_;
				std::string specType_;
				std::string instanceChargeType_;
				std::vector<BackendServer> backendServers_;
				std::string hasReservedInfo_;
				std::string businessStatus_;
				std::string loadBalancerSpec_;
				std::string serviceManagedMode_;
				std::string modificationProtectionReason_;
				std::string associatedCenId_;
				std::vector<Tag> tags_;
				std::vector<std::string> listenerPorts_;
				std::string cloudInstanceType_;
				std::string vSwitchId_;
				std::string renewalStatus_;
				std::vector<std::string> labels_;
				std::string payType_;
				std::string internetChargeType_;
				std::string reservedInfoInternetChargeType_;
				std::string vpcId_;
				std::string deleteProtection_;
				long endTimeStamp_;
				std::string loadBalancerStatus_;
				long autoReleaseTime_;
				int renewalDuration_;
				std::string associatedCenStatus_;
				std::string endTime_;
				bool supportPrivateLink_;
				std::string addressIPVersion_;
				std::vector<ListenerPortAndProtocol> listenerPortsAndProtocol_;
				std::string loadBalancerId_;
				std::string reservedInfoBandwidth_;
				std::string modificationProtectionStatus_;
				std::string networkType_;
				int bandwidth_;
				bool specBpsFlag_;
				std::string masterZoneId_;
				std::string tunnelType_;
				std::string cloudType_;
				std::string createTime_;
				long cloudInstanceUid_;
				std::string renewalCycUnit_;
				std::string reservedInfoActiveTime_;
				std::string cloudInstanceId_;
				std::string slaveZoneId_;
				std::string regionIdAlias_;
				std::string loadBalancerName_;
				std::string reservedInfoOrderType_;
				std::string regionId_;
				std::string addressType_;
				long createTimeStamp_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERATTRIBUTERESULT_H_