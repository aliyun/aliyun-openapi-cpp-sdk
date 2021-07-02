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

#ifndef ALIBABACLOUD_HBASE_MODEL_DESCRIBEMULTIZONECLUSTERRESULT_H_
#define ALIBABACLOUD_HBASE_MODEL_DESCRIBEMULTIZONECLUSTERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/hbase/HBaseExport.h>

namespace AlibabaCloud
{
	namespace HBase
	{
		namespace Model
		{
			class ALIBABACLOUD_HBASE_EXPORT DescribeMultiZoneClusterResult : public ServiceResult
			{
			public:
				struct MultiZoneInstanceModel
				{
					std::string status;
					std::string role;
					bool isLatestVersion;
					std::string minorVersion;
					std::string insName;
				};
				struct Tag
				{
					std::string value;
					std::string key;
				};


				DescribeMultiZoneClusterResult();
				explicit DescribeMultiZoneClusterResult(const std::string &payload);
				~DescribeMultiZoneClusterResult();
				std::string getModuleStackVersion()const;
				std::string getStandbyZoneId()const;
				std::string getCreatedTime()const;
				std::string getResourceGroupId()const;
				int getModuleId()const;
				std::string getStandbyVSwitchIds()const;
				std::vector<Tag> getTags()const;
				std::string getEngine()const;
				std::string getStatus()const;
				std::string getEncryptionType()const;
				std::string getExpireTimeUTC()const;
				int getMasterDiskSize()const;
				std::string getInstanceId()const;
				int getDuration()const;
				std::string getPayType()const;
				std::string getInstanceName()const;
				int getMasterNodeCount()const;
				bool getAutoRenewal()const;
				std::string getVpcId()const;
				std::string getCoreDiskType()const;
				std::string getExpireTime()const;
				std::string getEncryptionKey()const;
				std::string getMasterInstanceType()const;
				std::string getPrimaryVSwitchIds()const;
				bool getIsDeletionProtection()const;
				std::string getLogDiskCount()const;
				int getLogDiskSize()const;
				std::string getArbiterVSwitchIds()const;
				std::string getMaintainEndTime()const;
				std::string getNetworkType()const;
				std::string getCoreInstanceType()const;
				std::string getClusterName()const;
				std::string getMasterDiskType()const;
				std::string getMaintainStartTime()const;
				std::string getArbiterZoneId()const;
				std::string getMajorVersion()const;
				std::string getCoreDiskCount()const;
				std::string getParentId()const;
				std::vector<MultiZoneInstanceModel> getMultiZoneInstanceModels()const;
				std::string getPrimaryZoneId()const;
				std::string getMultiZoneCombination()const;
				std::string getClusterId()const;
				int getCoreNodeCount()const;
				std::string getCreatedTimeUTC()const;
				std::string getLogInstanceType()const;
				int getLogNodeCount()const;
				std::string getLogDiskType()const;
				std::string getRegionId()const;
				int getCoreDiskSize()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string moduleStackVersion_;
				std::string standbyZoneId_;
				std::string createdTime_;
				std::string resourceGroupId_;
				int moduleId_;
				std::string standbyVSwitchIds_;
				std::vector<Tag> tags_;
				std::string engine_;
				std::string status_;
				std::string encryptionType_;
				std::string expireTimeUTC_;
				int masterDiskSize_;
				std::string instanceId_;
				int duration_;
				std::string payType_;
				std::string instanceName_;
				int masterNodeCount_;
				bool autoRenewal_;
				std::string vpcId_;
				std::string coreDiskType_;
				std::string expireTime_;
				std::string encryptionKey_;
				std::string masterInstanceType_;
				std::string primaryVSwitchIds_;
				bool isDeletionProtection_;
				std::string logDiskCount_;
				int logDiskSize_;
				std::string arbiterVSwitchIds_;
				std::string maintainEndTime_;
				std::string networkType_;
				std::string coreInstanceType_;
				std::string clusterName_;
				std::string masterDiskType_;
				std::string maintainStartTime_;
				std::string arbiterZoneId_;
				std::string majorVersion_;
				std::string coreDiskCount_;
				std::string parentId_;
				std::vector<MultiZoneInstanceModel> multiZoneInstanceModels_;
				std::string primaryZoneId_;
				std::string multiZoneCombination_;
				std::string clusterId_;
				int coreNodeCount_;
				std::string createdTimeUTC_;
				std::string logInstanceType_;
				int logNodeCount_;
				std::string logDiskType_;
				std::string regionId_;
				int coreDiskSize_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HBASE_MODEL_DESCRIBEMULTIZONECLUSTERRESULT_H_