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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBERCINSTANCEATTRIBUTERESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBERCINSTANCEATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeRCInstanceAttributeResult : public ServiceResult
			{
			public:
				struct DedicatedHostAttribute
				{
					std::string dedicatedHostId;
					std::string dedicatedHostName;
				};
				struct EipAddress
				{
					std::string allocationId;
					int bandwidth;
					std::string ipAddress;
					std::string internetChargeType;
				};
				struct VpcAttributes
				{
					std::vector<std::string> privateIpAddress;
					std::string vpcId;
					std::string vSwitchId;
					std::string natIpAddress;
				};
				struct SystemDisk
				{
					std::string systemDiskPerformanceLevel;
					long systemDiskSize;
					std::string encrypted;
					bool deleteWithInstance;
					std::string systemDiskCategory;
				};
				struct DataDisk
				{
					std::string category;
					std::string encrypted;
					std::string performanceLevel;
					long size;
					bool deleteWithInstance;
				};
				struct Tag
				{
					std::string resourceId;
					std::string tagKey;
					std::string resourceType;
					std::string tagValue;
				};
				struct LockReason
				{
					std::string lockReason;
				};


				DescribeRCInstanceAttributeResult();
				explicit DescribeRCInstanceAttributeResult(const std::string &payload);
				~DescribeRCInstanceAttributeResult();
				std::vector<DataDisk> getDataDisks()const;
				std::string getResourceGroupId()const;
				int getMemory()const;
				std::string getInstanceChargeType()const;
				int getCpu()const;
				int getGpu()const;
				std::string getInstanceNetworkType()const;
				SystemDisk getSystemDisk()const;
				std::string getDiskType()const;
				std::vector<std::string> getInnerIpAddress()const;
				bool getEnableJumboFrame()const;
				std::string getExpiredTime()const;
				EipAddress getEipAddress()const;
				std::string getImageId()const;
				std::string getEcsInstanceType()const;
				std::vector<Tag> getTags()const;
				std::string getHostName()const;
				std::string getVlanId()const;
				std::string getStatus()const;
				std::string getInstanceId()const;
				std::string getStoppedMode()const;
				bool getDeletionProtection()const;
				VpcAttributes getVpcAttributes()const;
				std::vector<std::string> getSecurityGroupIds()const;
				std::string getInternetChargeType()const;
				std::string getDeploymentSetId()const;
				std::string getInstanceName()const;
				int getInternetMaxBandwidthOut()const;
				std::string getSerialNumber()const;
				int getCreateMode()const;
				std::string getNodeType()const;
				std::string getCreationTime()const;
				std::string getDescription()const;
				std::string getUserData()const;
				bool getAutoRenew()const;
				std::vector<std::string> getPublicIpAddress()const;
				std::string getHostType()const;
				std::string getInstanceType()const;
				std::string getSpotStrategy()const;
				std::string getKeyPairName()const;
				std::string getGpuTypes()const;
				std::string getIoOptimized()const;
				std::string getZoneId()const;
				std::string getClusterId()const;
				DedicatedHostAttribute getDedicatedHostAttribute()const;
				std::vector<LockReason> getOperationLocks()const;
				std::string getDbType()const;
				int getInternetMaxBandwidthIn()const;
				std::string getRegionId()const;
				std::string getCreditSpecification()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DataDisk> dataDisks_;
				std::string resourceGroupId_;
				int memory_;
				std::string instanceChargeType_;
				int cpu_;
				int gpu_;
				std::string instanceNetworkType_;
				SystemDisk systemDisk_;
				std::string diskType_;
				std::vector<std::string> innerIpAddress_;
				bool enableJumboFrame_;
				std::string expiredTime_;
				EipAddress eipAddress_;
				std::string imageId_;
				std::string ecsInstanceType_;
				std::vector<Tag> tags_;
				std::string hostName_;
				std::string vlanId_;
				std::string status_;
				std::string instanceId_;
				std::string stoppedMode_;
				bool deletionProtection_;
				VpcAttributes vpcAttributes_;
				std::vector<std::string> securityGroupIds_;
				std::string internetChargeType_;
				std::string deploymentSetId_;
				std::string instanceName_;
				int internetMaxBandwidthOut_;
				std::string serialNumber_;
				int createMode_;
				std::string nodeType_;
				std::string creationTime_;
				std::string description_;
				std::string userData_;
				bool autoRenew_;
				std::vector<std::string> publicIpAddress_;
				std::string hostType_;
				std::string instanceType_;
				std::string spotStrategy_;
				std::string keyPairName_;
				std::string gpuTypes_;
				std::string ioOptimized_;
				std::string zoneId_;
				std::string clusterId_;
				DedicatedHostAttribute dedicatedHostAttribute_;
				std::vector<LockReason> operationLocks_;
				std::string dbType_;
				int internetMaxBandwidthIn_;
				std::string regionId_;
				std::string creditSpecification_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBERCINSTANCEATTRIBUTERESULT_H_