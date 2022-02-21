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

#ifndef ALIBABACLOUD_HBASE_MODEL_DESCRIBEINSTANCERESULT_H_
#define ALIBABACLOUD_HBASE_MODEL_DESCRIBEINSTANCERESULT_H_

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
			class ALIBABACLOUD_HBASE_EXPORT DescribeInstanceResult : public ServiceResult
			{
			public:
				struct Tag
				{
					std::string value;
					std::string key;
				};


				DescribeInstanceResult();
				explicit DescribeInstanceResult(const std::string &payload);
				~DescribeInstanceResult();
				std::string getModuleStackVersion()const;
				std::string getCreatedTime()const;
				std::string getResourceGroupId()const;
				bool getNeedUpgrade()const;
				int getModuleId()const;
				std::vector<Tag> getTags()const;
				std::vector<std::string> getNeedUpgradeComps()const;
				std::string getEngine()const;
				std::string getStatus()const;
				int getColdStorageSize()const;
				std::string getEncryptionType()const;
				std::string getExpireTimeUTC()const;
				int getMasterDiskSize()const;
				std::string getInstanceId()const;
				int getDuration()const;
				std::string getPayType()const;
				std::string getVswitchId()const;
				int getMasterNodeCount()const;
				std::string getInstanceName()const;
				std::string getVpcId()const;
				bool getAutoRenewal()const;
				std::string getCoreDiskType()const;
				std::string getExpireTime()const;
				std::string getBackupStatus()const;
				bool getIsHa()const;
				std::string getEncryptionKey()const;
				std::string getTaskProgress()const;
				std::string getMasterInstanceType()const;
				bool getIsDeletionProtection()const;
				bool getIsLatestVersion()const;
				std::string getMaintainEndTime()const;
				std::string getNetworkType()const;
				std::string getCoreInstanceType()const;
				std::string getClusterName()const;
				std::string getMasterDiskType()const;
				std::string getMaintainStartTime()const;
				std::string getParentId()const;
				std::string getMajorVersion()const;
				std::string getCoreDiskCount()const;
				std::string getZoneId()const;
				std::string getClusterId()const;
				int getCoreNodeCount()const;
				std::string getColdStorageStatus()const;
				std::string getCreatedTimeUTC()const;
				std::string getMinorVersion()const;
				bool getIsMultiModel()const;
				std::string getClusterType()const;
				std::string getRegionId()const;
				std::string getConfirmMaintainTime()const;
				int getCoreDiskSize()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string moduleStackVersion_;
				std::string createdTime_;
				std::string resourceGroupId_;
				bool needUpgrade_;
				int moduleId_;
				std::vector<Tag> tags_;
				std::vector<std::string> needUpgradeComps_;
				std::string engine_;
				std::string status_;
				int coldStorageSize_;
				std::string encryptionType_;
				std::string expireTimeUTC_;
				int masterDiskSize_;
				std::string instanceId_;
				int duration_;
				std::string payType_;
				std::string vswitchId_;
				int masterNodeCount_;
				std::string instanceName_;
				std::string vpcId_;
				bool autoRenewal_;
				std::string coreDiskType_;
				std::string expireTime_;
				std::string backupStatus_;
				bool isHa_;
				std::string encryptionKey_;
				std::string taskProgress_;
				std::string masterInstanceType_;
				bool isDeletionProtection_;
				bool isLatestVersion_;
				std::string maintainEndTime_;
				std::string networkType_;
				std::string coreInstanceType_;
				std::string clusterName_;
				std::string masterDiskType_;
				std::string maintainStartTime_;
				std::string parentId_;
				std::string majorVersion_;
				std::string coreDiskCount_;
				std::string zoneId_;
				std::string clusterId_;
				int coreNodeCount_;
				std::string coldStorageStatus_;
				std::string createdTimeUTC_;
				std::string minorVersion_;
				bool isMultiModel_;
				std::string clusterType_;
				std::string regionId_;
				std::string confirmMaintainTime_;
				int coreDiskSize_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HBASE_MODEL_DESCRIBEINSTANCERESULT_H_