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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_DESCRIBESMARTACCESSGATEWAYATTRIBUTERESULT_H_
#define ALIBABACLOUD_SMARTAG_MODEL_DESCRIBESMARTACCESSGATEWAYATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/smartag/SmartagExport.h>

namespace AlibabaCloud
{
	namespace Smartag
	{
		namespace Model
		{
			class ALIBABACLOUD_SMARTAG_EXPORT DescribeSmartAccessGatewayAttributeResult : public ServiceResult
			{
			public:
				struct Link
				{
					std::string status;
					std::string type;
					long endTime;
					std::string instanceId;
					std::string relateInstanceId;
					std::string bandwidth;
					std::string relateInstanceRegionId;
					std::string commodityType;
					std::string healthCheckTargetIp;
				};
				struct Device
				{
					std::string monitorVersion;
					long softwareVersion;
					std::string serialNumber;
					std::string haState;
					std::string hcState;
				};


				DescribeSmartAccessGatewayAttributeResult();
				explicit DescribeSmartAccessGatewayAttributeResult(const std::string &payload);
				~DescribeSmartAccessGatewayAttributeResult();
				std::string getDescription()const;
				int getUpBandwidth4G()const;
				long getEndTime()const;
				int getUserCount()const;
				std::string getMaxBandwidth()const;
				std::string getAssociatedCcnName()const;
				std::string getVpnStatus()const;
				std::string getBoxControllerIp()const;
				std::vector<std::string> getQosIds()const;
				std::string getCidrBlock()const;
				int getUpBandwidthWan()const;
				std::vector<Device> getDevices()const;
				std::string getName()const;
				bool getOptimizationType()const;
				std::string getIpsecStatus()const;
				std::string getRoutingStrategy()const;
				std::vector<std::string> getFlowLogIds()const;
				std::string getAssociatedCcnId()const;
				std::string getSmartAGId()const;
				std::string getInstanceType()const;
				int getSecurityLockThreshold()const;
				std::string getStatus()const;
				long getCreateTime()const;
				long getDataPlan()const;
				bool getEnableOptimization()const;
				std::string getCity()const;
				std::string getSerialNumber()const;
				std::string getBackupBoxControllerIp()const;
				std::string getTrafficMasterSn()const;
				std::vector<Link> getLinks()const;
				std::vector<std::string> getAclIds()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string description_;
				int upBandwidth4G_;
				long endTime_;
				int userCount_;
				std::string maxBandwidth_;
				std::string associatedCcnName_;
				std::string vpnStatus_;
				std::string boxControllerIp_;
				std::vector<std::string> qosIds_;
				std::string cidrBlock_;
				int upBandwidthWan_;
				std::vector<Device> devices_;
				std::string name_;
				bool optimizationType_;
				std::string ipsecStatus_;
				std::string routingStrategy_;
				std::vector<std::string> flowLogIds_;
				std::string associatedCcnId_;
				std::string smartAGId_;
				std::string instanceType_;
				int securityLockThreshold_;
				std::string status_;
				long createTime_;
				long dataPlan_;
				bool enableOptimization_;
				std::string city_;
				std::string serialNumber_;
				std::string backupBoxControllerIp_;
				std::string trafficMasterSn_;
				std::vector<Link> links_;
				std::vector<std::string> aclIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTAG_MODEL_DESCRIBESMARTACCESSGATEWAYATTRIBUTERESULT_H_