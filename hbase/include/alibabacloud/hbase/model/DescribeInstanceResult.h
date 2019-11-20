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
				bool getIsHa()const;
				std::string getCreatedTime()const;
				std::string getMasterInstanceType()const;
				std::string getNetworkType()const;
				std::string getCoreInstanceType()const;
				std::string getMasterDiskType()const;
				std::vector<Tag> getTags()const;
				std::string getEngine()const;
				std::string getStatus()const;
				std::string getMajorVersion()const;
				std::string getCoreDiskCount()const;
				int getMasterDiskSize()const;
				std::string getZoneId()const;
				std::string getInstanceId()const;
				int getCoreNodeCount()const;
				std::string getColdStorageStatus()const;
				std::string getMinorVersion()const;
				std::string getPayType()const;
				std::string getVswitchId()const;
				std::string getInstanceName()const;
				int getMasterNodeCount()const;
				std::string getVpcId()const;
				std::string getCoreDiskType()const;
				std::string getRegionId()const;
				std::string getExpireTime()const;
				int getCoreDiskSize()const;
				std::string getBackupStatus()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool isHa_;
				std::string createdTime_;
				std::string masterInstanceType_;
				std::string networkType_;
				std::string coreInstanceType_;
				std::string masterDiskType_;
				std::vector<Tag> tags_;
				std::string engine_;
				std::string status_;
				std::string majorVersion_;
				std::string coreDiskCount_;
				int masterDiskSize_;
				std::string zoneId_;
				std::string instanceId_;
				int coreNodeCount_;
				std::string coldStorageStatus_;
				std::string minorVersion_;
				std::string payType_;
				std::string vswitchId_;
				std::string instanceName_;
				int masterNodeCount_;
				std::string vpcId_;
				std::string coreDiskType_;
				std::string regionId_;
				std::string expireTime_;
				int coreDiskSize_;
				std::string backupStatus_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HBASE_MODEL_DESCRIBEINSTANCERESULT_H_