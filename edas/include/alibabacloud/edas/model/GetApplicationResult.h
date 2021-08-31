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

#ifndef ALIBABACLOUD_EDAS_MODEL_GETAPPLICATIONRESULT_H_
#define ALIBABACLOUD_EDAS_MODEL_GETAPPLICATIONRESULT_H_

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
			class ALIBABACLOUD_EDAS_EXPORT GetApplicationResult : public ServiceResult
			{
			public:
				struct Applcation
				{
					std::string slbId;
					std::string owner;
					std::string description;
					std::string email;
					std::string healthCheckUrl;
					int memory;
					int port;
					int cpu;
					std::string slbName;
					std::string name;
					std::string _nameSpace;
					int slbPort;
					std::string slbIp;
					bool dockerize;
					long buildPackageId;
					std::string clusterId;
					long createTime;
					int clusterType;
					std::string slbInfo;
					std::string extSlbId;
					int instanceCount;
					std::string extSlbName;
					std::string applicationType;
					std::string appId;
					std::string userId;
					std::string regionId;
					std::string extSlbIp;
					int runningInstanceCount;
				};
				struct Application
				{
					std::string slbId;
					std::string owner;
					std::string description;
					std::string email;
					std::string healthCheckUrl;
					int memory;
					int port;
					int cpu;
					std::string slbName;
					std::string name;
					std::string _nameSpace;
					int slbPort;
					std::string slbIp;
					bool dockerize;
					long buildPackageId;
					std::string clusterId;
					long createTime;
					std::string clusterType;
					std::string slbInfo;
					std::string extSlbId;
					int instanceCount;
					std::string extSlbName;
					std::string applicationType;
					std::string appId;
					std::string userId;
					std::string regionId;
					std::string extSlbIp;
					int runningInstanceCount;
				};


				GetApplicationResult();
				explicit GetApplicationResult(const std::string &payload);
				~GetApplicationResult();
				std::string getMessage()const;
				Applcation getApplcation()const;
				Application getApplication()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Applcation applcation_;
				Application application_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_GETAPPLICATIONRESULT_H_