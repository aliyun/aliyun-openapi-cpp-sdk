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
					int listenerPort;
					std::string listenerProtocol;
				};
				struct BackendServer
				{
					std::string serverId;
					int weight;
				};


				DescribeLoadBalancerAttributeResult();
				explicit DescribeLoadBalancerAttributeResult(const std::string &payload);
				~DescribeLoadBalancerAttributeResult();
				std::vector<ListenerPortAndProtocal> getListenerPortsAndProtocal()const;
				void setListenerPortsAndProtocal(const std::vector<ListenerPortAndProtocal>& listenerPortsAndProtocal);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getAddress()const;
				void setAddress(const std::string& address);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::vector<ListenerPortAndProtocol> getListenerPortsAndProtocol()const;
				void setListenerPortsAndProtocol(const std::vector<ListenerPortAndProtocol>& listenerPortsAndProtocol);
				std::string getLoadBalancerId()const;
				void setLoadBalancerId(const std::string& loadBalancerId);
				std::vector<BackendServer> getBackendServers()const;
				void setBackendServers(const std::vector<BackendServer>& backendServers);
				std::string getLoadBalancerSpec()const;
				void setLoadBalancerSpec(const std::string& loadBalancerSpec);
				std::string getNetworkType()const;
				void setNetworkType(const std::string& networkType);
				int getBandwidth()const;
				void setBandwidth(int bandwidth);
				std::vector<std::string> getListenerPorts()const;
				void setListenerPorts(const std::vector<std::string>& listenerPorts);
				std::string getMasterZoneId()const;
				void setMasterZoneId(const std::string& masterZoneId);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getCreateTime()const;
				void setCreateTime(const std::string& createTime);
				std::string getPayType()const;
				void setPayType(const std::string& payType);
				std::string getSlaveZoneId()const;
				void setSlaveZoneId(const std::string& slaveZoneId);
				std::string getInternetChargeType()const;
				void setInternetChargeType(const std::string& internetChargeType);
				std::string getRegionIdAlias()const;
				void setRegionIdAlias(const std::string& regionIdAlias);
				std::string getLoadBalancerName()const;
				void setLoadBalancerName(const std::string& loadBalancerName);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				long getEndTimeStamp()const;
				void setEndTimeStamp(long endTimeStamp);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getAddressType()const;
				void setAddressType(const std::string& addressType);
				std::string getLoadBalancerStatus()const;
				void setLoadBalancerStatus(const std::string& loadBalancerStatus);
				long getCreateTimeStamp()const;
				void setCreateTimeStamp(long createTimeStamp);
				long getAutoReleaseTime()const;
				void setAutoReleaseTime(long autoReleaseTime);

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ListenerPortAndProtocal> listenerPortsAndProtocal_;
				std::string resourceGroupId_;
				std::string address_;
				std::string endTime_;
				std::vector<ListenerPortAndProtocol> listenerPortsAndProtocol_;
				std::string loadBalancerId_;
				std::vector<BackendServer> backendServers_;
				std::string loadBalancerSpec_;
				std::string networkType_;
				int bandwidth_;
				std::vector<std::string> listenerPorts_;
				std::string masterZoneId_;
				std::string vSwitchId_;
				std::string createTime_;
				std::string payType_;
				std::string slaveZoneId_;
				std::string internetChargeType_;
				std::string regionIdAlias_;
				std::string loadBalancerName_;
				std::string vpcId_;
				long endTimeStamp_;
				std::string regionId_;
				std::string addressType_;
				std::string loadBalancerStatus_;
				long createTimeStamp_;
				long autoReleaseTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERATTRIBUTERESULT_H_