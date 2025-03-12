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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBENETWORKINTERFACEATTRIBUTERESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBENETWORKINTERFACEATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeNetworkInterfaceAttributeResult : public ServiceResult
			{
			public:
				struct AssociatedPublicIp
				{
					std::string publicIpAddress;
					std::string allocationId;
				};
				struct Attachment
				{
					std::string instanceId;
					int deviceIndex;
					std::vector<std::string> memberNetworkInterfaceIds;
					int networkCardIndex;
					std::string trunkNetworkInterfaceId;
				};
				struct BondInterfaceSpecification
				{
					struct SlaveInterfaceSpecificationSet
					{
						std::string bondNetworkInterfaceId;
						std::string workState;
						std::string slaveNetworkInterfaceId;
					};
					std::vector<SlaveInterfaceSpecificationSet> slaveInterfaceSpecification2;
					std::string bondMode;
				};
				struct SlaveInterfaceSpecification
				{
					std::string bondNetworkInterfaceId;
					std::string workState;
					std::string slaveNetworkInterfaceId;
				};
				struct NetworkInterfaceTrafficConfig
				{
					std::string networkInterfaceTrafficMode;
					int queueNumber;
					int queuePairNumber;
				};
				struct ConnectionTrackingConfiguration
				{
					int tcpClosedAndTimeWaitTimeout;
					int udpTimeout;
					int tcpEstablishedTimeout;
				};
				struct EnhancedNetwork
				{
					bool enableRss;
					bool enableSriov;
				};
				struct PrivateIpSet
				{
					struct AssociatedPublicIp1
					{
						std::string publicIpAddress;
						std::string allocationId;
					};
					AssociatedPublicIp1 associatedPublicIp1;
					std::string privateIpAddress;
					bool primary;
				};
				struct Ipv6Set
				{
					std::string ipv6Address;
				};
				struct Ipv4PrefixSet
				{
					std::string ipv4Prefix;
				};
				struct Ipv6PrefixSet
				{
					std::string ipv6Prefix;
				};
				struct Tag
				{
					std::string tagKey;
					std::string tagValue;
				};


				DescribeNetworkInterfaceAttributeResult();
				explicit DescribeNetworkInterfaceAttributeResult(const std::string &payload);
				~DescribeNetworkInterfaceAttributeResult();
				std::string getDescription()const;
				std::string getPrivateIpAddress()const;
				bool getServiceManaged()const;
				std::string getResourceGroupId()const;
				bool getDeleteOnRelease()const;
				Attachment getAttachment()const;
				std::string getNetworkInterfaceId()const;
				EnhancedNetwork getEnhancedNetwork()const;
				std::vector<Ipv6Set> getIpv6Sets()const;
				std::string getOwnerId()const;
				AssociatedPublicIp getAssociatedPublicIp()const;
				std::vector<Tag> getTags()const;
				std::string getStatus()const;
				std::string getNetworkInterfaceTrafficMode()const;
				SlaveInterfaceSpecification getSlaveInterfaceSpecification()const;
				std::string getZoneId()const;
				std::string getInstanceId()const;
				std::string getVSwitchId()const;
				std::string getNetworkInterfaceName()const;
				std::string getMacAddress()const;
				std::vector<std::string> getSecurityGroupIds()const;
				long getServiceID()const;
				std::string getTcpOptionAddressEnabled()const;
				bool getSourceDestCheck()const;
				std::string getType()const;
				int getQueuePairNumber()const;
				int getQueueNumber()const;
				std::string getVpcId()const;
				std::vector<Ipv6PrefixSet> getIpv6PrefixSets()const;
				BondInterfaceSpecification getBondInterfaceSpecification()const;
				std::string getCreationTime()const;
				NetworkInterfaceTrafficConfig getNetworkInterfaceTrafficConfig()const;
				ConnectionTrackingConfiguration getConnectionTrackingConfiguration()const;
				std::vector<Ipv4PrefixSet> getIpv4PrefixSets()const;
				std::vector<PrivateIpSet> getPrivateIpSets()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string description_;
				std::string privateIpAddress_;
				bool serviceManaged_;
				std::string resourceGroupId_;
				bool deleteOnRelease_;
				Attachment attachment_;
				std::string networkInterfaceId_;
				EnhancedNetwork enhancedNetwork_;
				std::vector<Ipv6Set> ipv6Sets_;
				std::string ownerId_;
				AssociatedPublicIp associatedPublicIp_;
				std::vector<Tag> tags_;
				std::string status_;
				std::string networkInterfaceTrafficMode_;
				SlaveInterfaceSpecification slaveInterfaceSpecification_;
				std::string zoneId_;
				std::string instanceId_;
				std::string vSwitchId_;
				std::string networkInterfaceName_;
				std::string macAddress_;
				std::vector<std::string> securityGroupIds_;
				long serviceID_;
				std::string tcpOptionAddressEnabled_;
				bool sourceDestCheck_;
				std::string type_;
				int queuePairNumber_;
				int queueNumber_;
				std::string vpcId_;
				std::vector<Ipv6PrefixSet> ipv6PrefixSets_;
				BondInterfaceSpecification bondInterfaceSpecification_;
				std::string creationTime_;
				NetworkInterfaceTrafficConfig networkInterfaceTrafficConfig_;
				ConnectionTrackingConfiguration connectionTrackingConfiguration_;
				std::vector<Ipv4PrefixSet> ipv4PrefixSets_;
				std::vector<PrivateIpSet> privateIpSets_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBENETWORKINTERFACEATTRIBUTERESULT_H_