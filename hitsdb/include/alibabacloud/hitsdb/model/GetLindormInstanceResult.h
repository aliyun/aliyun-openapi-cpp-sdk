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

#ifndef ALIBABACLOUD_HITSDB_MODEL_GETLINDORMINSTANCERESULT_H_
#define ALIBABACLOUD_HITSDB_MODEL_GETLINDORMINSTANCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/hitsdb/HitsdbExport.h>

namespace AlibabaCloud
{
	namespace Hitsdb
	{
		namespace Model
		{
			class ALIBABACLOUD_HITSDB_EXPORT GetLindormInstanceResult : public ServiceResult
			{
			public:
				struct Engine
				{
					std::string memorySize;
					std::string cpuCount;
					std::string version;
					std::string latestVersion;
					std::string engine;
					bool isLastVersion;
					std::string coreCount;
				};


				GetLindormInstanceResult();
				explicit GetLindormInstanceResult(const std::string &payload);
				~GetLindormInstanceResult();
				long getExpiredMilliseconds()const;
				std::string getStandbyZoneId()const;
				std::vector<Engine> getEngineList()const;
				bool getEnableLTS()const;
				std::string getResourceGroupId()const;
				bool getEnableBDS()const;
				std::string getLogDiskCategory()const;
				std::string getDiskUsage()const;
				bool getEnableFS()const;
				std::string getStandbyVSwitchId()const;
				bool getEnableCompute()const;
				std::string getServiceType()const;
				std::string getInstanceAlias()const;
				int getEngineType()const;
				std::string getCoreSpec()const;
				bool getEnableSSL()const;
				std::string getCoreDiskCategory()const;
				std::string getInstanceStorage()const;
				std::string getInstanceId()const;
				int getCoreSingleStorage()const;
				int getColdStorage()const;
				std::string getDiskCategory()const;
				std::string getPayType()const;
				std::string getDeletionProtection()const;
				std::string getVswitchId()const;
				std::string getArbiterVSwitchId()const;
				std::string getVpcId()const;
				bool getEnableCdc()const;
				bool getEnableMLCtrl()const;
				bool getEnableStream()const;
				bool getEnablePhoenix()const;
				int getLogSingleStorage()const;
				std::string getExpireTime()const;
				bool getEnableML()const;
				int getLogNum()const;
				int getLocalCloudStorage()const;
				bool getEnableBlob()const;
				std::string getDiskThreshold()const;
				bool getEnableLsqlVersionV3()const;
				bool getAutoRenew()const;
				bool getEnableShs()const;
				std::string getMaintainEndTime()const;
				std::string getNetworkType()const;
				std::string getInstanceStatus()const;
				long getCreateMilliseconds()const;
				std::string getMaintainStartTime()const;
				std::string getArbiterZoneId()const;
				std::string getPrimaryZoneId()const;
				std::string getZoneId()const;
				std::string getMultiZoneCombination()const;
				bool getEnableKms()const;
				int getCoreNum()const;
				std::string getArchVersion()const;
				std::string getCreateTime()const;
				std::string getLogSpec()const;
				std::string getLocalCloudCategory()const;
				std::string getPrimaryVSwitchId()const;
				std::string getRegionId()const;
				long getAliUid()const;

			protected:
				void parse(const std::string &payload);
			private:
				long expiredMilliseconds_;
				std::string standbyZoneId_;
				std::vector<Engine> engineList_;
				bool enableLTS_;
				std::string resourceGroupId_;
				bool enableBDS_;
				std::string logDiskCategory_;
				std::string diskUsage_;
				bool enableFS_;
				std::string standbyVSwitchId_;
				bool enableCompute_;
				std::string serviceType_;
				std::string instanceAlias_;
				int engineType_;
				std::string coreSpec_;
				bool enableSSL_;
				std::string coreDiskCategory_;
				std::string instanceStorage_;
				std::string instanceId_;
				int coreSingleStorage_;
				int coldStorage_;
				std::string diskCategory_;
				std::string payType_;
				std::string deletionProtection_;
				std::string vswitchId_;
				std::string arbiterVSwitchId_;
				std::string vpcId_;
				bool enableCdc_;
				bool enableMLCtrl_;
				bool enableStream_;
				bool enablePhoenix_;
				int logSingleStorage_;
				std::string expireTime_;
				bool enableML_;
				int logNum_;
				int localCloudStorage_;
				bool enableBlob_;
				std::string diskThreshold_;
				bool enableLsqlVersionV3_;
				bool autoRenew_;
				bool enableShs_;
				std::string maintainEndTime_;
				std::string networkType_;
				std::string instanceStatus_;
				long createMilliseconds_;
				std::string maintainStartTime_;
				std::string arbiterZoneId_;
				std::string primaryZoneId_;
				std::string zoneId_;
				std::string multiZoneCombination_;
				bool enableKms_;
				int coreNum_;
				std::string archVersion_;
				std::string createTime_;
				std::string logSpec_;
				std::string localCloudCategory_;
				std::string primaryVSwitchId_;
				std::string regionId_;
				long aliUid_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HITSDB_MODEL_GETLINDORMINSTANCERESULT_H_