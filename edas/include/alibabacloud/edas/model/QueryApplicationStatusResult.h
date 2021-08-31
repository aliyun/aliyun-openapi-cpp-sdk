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

#ifndef ALIBABACLOUD_EDAS_MODEL_QUERYAPPLICATIONSTATUSRESULT_H_
#define ALIBABACLOUD_EDAS_MODEL_QUERYAPPLICATIONSTATUSRESULT_H_

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
			class ALIBABACLOUD_EDAS_EXPORT QueryApplicationStatusResult : public ServiceResult
			{
			public:
				struct AppInfo
				{
					struct Application
					{
						int buildPackageId;
						bool dockerize;
						std::string owner;
						std::string email;
						long launchTime;
						std::string healthCheckUrl;
						std::string clusterId;
						int memory;
						long createTime;
						int port;
						int cpu;
						std::string name;
						int instanceCount;
						std::string phone;
						std::string userId;
						std::string regionId;
						std::string applicationId;
						int runningInstanceCount;
					};
					struct Ecu
					{
						std::string regionId1;
						std::string ipAddr;
						std::string zoneId;
						std::string instanceId;
						long createTime;
						std::string ecuId;
						long heartbeatTime;
						int availableMem;
						std::string groupId;
						std::string name;
						std::string vpcId;
						std::string userId;
						long updateTime;
						std::string regionId;
						bool online;
						bool dockerEnv;
						int availableCpu;
					};
					struct Ecc
					{
						std::string containerStatus;
						std::string appId;
						std::string vpcId;
						long createTime;
						std::string ip;
						long updateTime;
						std::string ecuId;
						std::string eccId;
						int appState;
						int taskState;
						std::string groupId;
					};
					struct Group
					{
						std::string groupName;
						std::string appId;
						int groupType;
						std::string clusterId;
						long createTime;
						long updateTime;
						std::string packageVersionId;
						std::string appVersionId;
						std::string groupId;
					};
					struct DeployRecord
					{
						std::string deployRecordId;
						long createTime;
						std::string ecuId;
						std::string packageMd5;
						std::string eccId;
						std::string packageVersionId;
					};
					std::vector<Group> groupList;
					std::vector<Ecu> ecuList;
					std::vector<Ecc> eccList;
					Application application;
					std::vector<DeployRecord> deployRecordList;
				};


				QueryApplicationStatusResult();
				explicit QueryApplicationStatusResult(const std::string &payload);
				~QueryApplicationStatusResult();
				std::string getMessage()const;
				int getCode()const;
				AppInfo getAppInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int code_;
				AppInfo appInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_QUERYAPPLICATIONSTATUSRESULT_H_