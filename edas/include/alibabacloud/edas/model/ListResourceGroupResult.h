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

#ifndef ALIBABACLOUD_EDAS_MODEL_LISTRESOURCEGROUPRESULT_H_
#define ALIBABACLOUD_EDAS_MODEL_LISTRESOURCEGROUPRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/edas/EdasExport.h>

namespace AlibabaCloud
{
	namespace Edas
	{
		namespace Model
		{
			class ALIBABACLOUD_EDAS_EXPORT ListResourceGroupResult : public ServiceResult
			{
			public:
				struct ResGroupEntity
				{
					struct EcsEntity
					{
						struct EcuEntity
						{
							std::string ipAddr;
							std::string zoneId;
							std::string instanceId;
							long createTime;
							std::string ecuId;
							int cpu;
							long heartbeatTime;
							int availableMem;
							std::string name;
							std::string vpcId;
							int mem;
							std::string userId;
							long updateTime;
							std::string regionId;
							bool online;
							bool dockerEnv;
							int availableCpu;
						};
						struct VpcEntity
						{
							std::string status;
							std::string description;
							std::string vpcId;
							std::string userId;
							int ecsNum;
							std::string vpcName;
							std::string cidrblock;
							bool expired;
							std::string regionId;
						};
						VpcEntity vpcEntity;
						std::string status;
						std::string description;
						std::string innerIp;
						std::string zoneId;
						std::string instanceId;
						std::string publicIp;
						std::string sgId;
						int cpu;
						bool expired;
						std::string eip;
						std::string groupId;
						std::string instanceName;
						std::string serialNum;
						std::string vpcId;
						int mem;
						std::string privateIp;
						std::string userId;
						EcuEntity ecuEntity;
						std::string regionId;
						std::string hostName;
						std::string instanceId1;
					};
					struct SlbEntity
					{
						std::string slbId;
						std::string address;
						std::string vpcId;
						std::string userId;
						std::string networkType;
						bool expired;
						std::string regionId;
						std::string addressType;
						std::string vswitchId;
						std::string slbName;
						std::string slbStatus;
						int groupId;
					};
					std::string description;
					long createTime;
					std::string adminUserId;
					long updateTime;
					long id;
					std::string regionId;
					std::vector<ResGroupEntity::EcsEntity> ecsList;
					std::vector<ResGroupEntity::SlbEntity> slbList;
					std::string name;
				};


				ListResourceGroupResult();
				explicit ListResourceGroupResult(const std::string &payload);
				~ListResourceGroupResult();
				std::string getMessage()const;
				std::vector<ResGroupEntity> getResourceGroupList()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<ResGroupEntity> resourceGroupList_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_LISTRESOURCEGROUPRESULT_H_