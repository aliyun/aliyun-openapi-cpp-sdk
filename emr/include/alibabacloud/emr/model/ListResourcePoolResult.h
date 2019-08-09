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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTRESOURCEPOOLRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTRESOURCEPOOLRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT ListResourcePoolResult : public ServiceResult
			{
			public:
				struct PoolInfo
				{
					struct EcmResourcePool
					{
						bool active;
						std::string poolType;
						std::string userId;
						std::string note;
						std::string yarnSiteConfig;
						long id;
						std::string name;
					};
					struct Queue
					{
						struct EcmResourceQueue
						{
							std::string status;
							std::string userId;
							std::string qualifiedName;
							long parentQueueId;
							bool leaf;
							long id;
							std::string name;
							std::string queueType;
							long resourcePoolId;
						};
						struct EcmResourcePoolConfig
						{
							std::string status;
							std::string configValue;
							std::string configKey;
							std::string category;
							std::string note;
							long id;
							std::string configType;
						};
						EcmResourceQueue ecmResourceQueue;
						std::vector<Queue::EcmResourcePoolConfig> ecmResourcePoolConfigList1;
					};
					struct EcmResourcePoolConfig2
					{
						std::string status;
						std::string configValue;
						std::string configKey;
						std::string category;
						std::string note;
						long id;
						std::string configType;
					};
					std::vector<PoolInfo::EcmResourcePoolConfig2> ecmResourcePoolConfigList;
					EcmResourcePool ecmResourcePool;
					std::vector<PoolInfo::Queue> queueList;
				};


				ListResourcePoolResult();
				explicit ListResourcePoolResult(const std::string &payload);
				~ListResourcePoolResult();
				int getPageSize()const;
				int getPageNumber()const;
				int getTotal()const;
				std::vector<PoolInfo> getPoolInfoList()const;

			protected:
				void parse(const std::string &payload);
			private:
				int pageSize_;
				int pageNumber_;
				int total_;
				std::vector<PoolInfo> poolInfoList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTRESOURCEPOOLRESULT_H_