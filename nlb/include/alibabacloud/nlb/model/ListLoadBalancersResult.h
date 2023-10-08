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

#ifndef ALIBABACLOUD_NLB_MODEL_LISTLOADBALANCERSRESULT_H_
#define ALIBABACLOUD_NLB_MODEL_LISTLOADBALANCERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/nlb/NlbExport.h>

namespace AlibabaCloud
{
	namespace Nlb
	{
		namespace Model
		{
			class ALIBABACLOUD_NLB_EXPORT ListLoadBalancersResult : public ServiceResult
			{
			public:
				struct LoadbalancerInfo
				{
					struct LoadBalancerBillingConfig
					{
						int internetBandwidth;
						std::string payType;
						std::string internetChargeType;
					};
					struct DeletionProtectionConfig
					{
						bool enabled;
						std::string enabledTime;
						std::string reason;
					};
					struct ModificationProtectionConfig
					{
						std::string status;
						std::string enabledTime;
						std::string reason;
					};
					struct OperationLock
					{
						std::string lockReason;
						std::string lockType;
					};
					struct ZoneMapping
					{
						struct LoadBalancerAddress
						{
							std::string eniId;
							std::string publicIPv4Address;
							std::string allocationId;
							std::string privateIPv4HcStatus;
							std::string privateIPv6HcStatus;
							std::string ipv6Address;
							std::string privateIPv4Address;
						};
						std::string status;
						std::string zoneId;
						std::string vSwitchId;
						std::string eipType;
						std::vector<ZoneMapping::LoadBalancerAddress> loadBalancerAddresses;
					};
					struct TagModels
					{
						std::string value;
						std::string key;
					};
					std::string addressIpVersion;
					std::string resourceGroupId;
					std::string loadBalancerId;
					std::vector<LoadbalancerInfo::ZoneMapping> zoneMappings;
					std::string dNSName;
					std::string ipv6AddressType;
					bool crossZoneEnabled;
					std::string loadBalancerType;
					long capacityUnitCount;
					DeletionProtectionConfig deletionProtectionConfig;
					std::string sysSecurityGroupId;
					std::string bandwidthPackageId;
					std::vector<LoadbalancerInfo::TagModels> tags;
					LoadBalancerBillingConfig loadBalancerBillingConfig;
					std::string createTime;
					ModificationProtectionConfig modificationProtectionConfig;
					std::vector<std::string> securityGroupIds;
					std::vector<LoadbalancerInfo::OperationLock> operationLocks;
					std::string loadBalancerName;
					std::string vpcId;
					bool trafficAffinityEnabled;
					std::string regionId;
					std::string addressType;
					std::string loadBalancerStatus;
					std::string loadBalancerBusinessStatus;
					long aliUid;
				};


				ListLoadBalancersResult();
				explicit ListLoadBalancersResult(const std::string &payload);
				~ListLoadBalancersResult();
				int getTotalCount()const;
				std::string getMessage()const;
				std::string getNextToken()const;
				int getMaxResults()const;
				int getHttpStatusCode()const;
				std::vector<LoadbalancerInfo> getLoadBalancers()const;
				std::string getDynamicCode()const;
				std::string getDynamicMessage()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string message_;
				std::string nextToken_;
				int maxResults_;
				int httpStatusCode_;
				std::vector<LoadbalancerInfo> loadBalancers_;
				std::string dynamicCode_;
				std::string dynamicMessage_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_NLB_MODEL_LISTLOADBALANCERSRESULT_H_