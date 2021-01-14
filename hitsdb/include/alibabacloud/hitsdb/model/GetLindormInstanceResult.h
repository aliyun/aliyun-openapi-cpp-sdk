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
					std::string engine;
					bool isLastVersion;
					std::string coreCount;
				};


				GetLindormInstanceResult();
				explicit GetLindormInstanceResult(const std::string &payload);
				~GetLindormInstanceResult();
				std::vector<Engine> getEngineList()const;
				std::string getInstanceStorage()const;
				std::string getZoneId()const;
				std::string getInstanceId()const;
				bool getEnableBDS()const;
				std::string getCreateTime()const;
				bool getAutoRenew()const;
				int getColdStorage()const;
				std::string getDiskCategory()const;
				std::string getPayType()const;
				std::string getDeletionProtection()const;
				bool getEnableFS()const;
				std::string getVswitchId()const;
				std::string getVpcId()const;
				std::string getInstanceAlias()const;
				std::string getInstanceStatus()const;
				std::string getNetworkType()const;
				std::string getServiceType()const;
				int getEngineType()const;
				bool getEnablePhoenix()const;
				std::string getRegionId()const;
				std::string getExpireTime()const;
				long getAliUid()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Engine> engineList_;
				std::string instanceStorage_;
				std::string zoneId_;
				std::string instanceId_;
				bool enableBDS_;
				std::string createTime_;
				bool autoRenew_;
				int coldStorage_;
				std::string diskCategory_;
				std::string payType_;
				std::string deletionProtection_;
				bool enableFS_;
				std::string vswitchId_;
				std::string vpcId_;
				std::string instanceAlias_;
				std::string instanceStatus_;
				std::string networkType_;
				std::string serviceType_;
				int engineType_;
				bool enablePhoenix_;
				std::string regionId_;
				std::string expireTime_;
				long aliUid_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HITSDB_MODEL_GETLINDORMINSTANCERESULT_H_