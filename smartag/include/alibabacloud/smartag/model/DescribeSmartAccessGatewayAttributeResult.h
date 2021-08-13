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
				struct ApplicationBandwidthPackageOperationLocks
				{
					std::string lockReason;
					std::string lockType;
				};
				struct Device
				{
					std::string monitorVersion;
					std::string secretKey;
					std::string softwareVersion;
					std::string serialNumber;
					std::string haState;
					std::string dpiSignatureDbVersion;
					int distributeSkStatus;
					std::string hcState;
				};
				struct Link
				{
					std::string status;
					std::string type;
					long endTime;
					std::string instanceId;
					std::string relateInstanceId;
					std::string bandwidth;
					std::string healthCheckTargetIp;
					std::string relateInstanceRegionId;
					std::string commodityType;
				};


				DescribeSmartAccessGatewayAttributeResult();
				explicit DescribeSmartAccessGatewayAttributeResult(const std::string &payload);
				~DescribeSmartAccessGatewayAttributeResult();
				int getUpBandwidth4G()const;
				std::string getDescription()const;
				long getEndTime()const;
				std::string getResourceGroupId()const;
				int getUserCount()const;
				std::string getAssociatedCcnName()const;
				std::string getMaxBandwidth()const;
				std::string getVpnStatus()const;
				std::string getBoxControllerIp()const;
				std::vector<std::string> getQosIds()const;
				int getUpBandwidthWan()const;
				std::string getCidrBlock()const;
				std::vector<Device> getDevices()const;
				std::string getName()const;
				bool getOptimizationType()const;
				std::string getApplicationBandwidthPackageName()const;
				std::string getIpsecStatus()const;
				std::string getRoutingStrategy()const;
				std::string getApplicationBandwidthPackageId()const;
				std::vector<std::string> getFlowLogIds()const;
				std::string getAssociatedCcnId()const;
				std::string getSmartAGId()const;
				std::string getInstanceType()const;
				std::string getResellerUid()const;
				int getSecurityLockThreshold()const;
				std::string getStatus()const;
				long getCreateTime()const;
				long getDataPlan()const;
				bool getEnableOptimization()const;
				std::string getApplicationBandwidthPackageBussinessStatus()const;
				std::string getCity()const;
				ApplicationBandwidthPackageOperationLocks getApplicationBandwidthPackageOperationLocks()const;
				long getAccelerateBandwidth()const;
				std::string getResellerInstanceId()const;
				std::string getSerialNumber()const;
				std::string getBackupBoxControllerIp()const;
				std::string getTrafficMasterSn()const;
				std::string getAccessPointId()const;
				std::vector<Link> getLinks()const;
				std::vector<std::string> getAclIds()const;

			protected:
				void parse(const std::string &payload);
			private:
				int upBandwidth4G_;
				std::string description_;
				long endTime_;
				std::string resourceGroupId_;
				int userCount_;
				std::string associatedCcnName_;
				std::string maxBandwidth_;
				std::string vpnStatus_;
				std::string boxControllerIp_;
				std::vector<std::string> qosIds_;
				int upBandwidthWan_;
				std::string cidrBlock_;
				std::vector<Device> devices_;
				std::string name_;
				bool optimizationType_;
				std::string applicationBandwidthPackageName_;
				std::string ipsecStatus_;
				std::string routingStrategy_;
				std::string applicationBandwidthPackageId_;
				std::vector<std::string> flowLogIds_;
				std::string associatedCcnId_;
				std::string smartAGId_;
				std::string instanceType_;
				std::string resellerUid_;
				int securityLockThreshold_;
				std::string status_;
				long createTime_;
				long dataPlan_;
				bool enableOptimization_;
				std::string applicationBandwidthPackageBussinessStatus_;
				std::string city_;
				ApplicationBandwidthPackageOperationLocks applicationBandwidthPackageOperationLocks_;
				long accelerateBandwidth_;
				std::string resellerInstanceId_;
				std::string serialNumber_;
				std::string backupBoxControllerIp_;
				std::string trafficMasterSn_;
				std::string accessPointId_;
				std::vector<Link> links_;
				std::vector<std::string> aclIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTAG_MODEL_DESCRIBESMARTACCESSGATEWAYATTRIBUTERESULT_H_