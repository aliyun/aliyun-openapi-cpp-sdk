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

#ifndef ALIBABACLOUD_TESLAMAXCOMPUTE_MODEL_GETPROJECTINSTANCERESULT_H_
#define ALIBABACLOUD_TESLAMAXCOMPUTE_MODEL_GETPROJECTINSTANCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/teslamaxcompute/TeslaMaxComputeExport.h>

namespace AlibabaCloud
{
	namespace TeslaMaxCompute
	{
		namespace Model
		{
			class ALIBABACLOUD_TESLAMAXCOMPUTE_EXPORT GetProjectInstanceResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Instance
					{
						std::string status;
						int quotaId;
						float cpuUsedRatioMin;
						std::string runTime;
						std::string skynetId;
						long memRequest;
						std::string instanceId;
						std::string cluster;
						float memUsedRatioMax;
						std::string nickName;
						long memUsedTotal;
						float cpuUsedRatioMax;
						std::string project;
						std::string quotaName;
						long memUsed;
						long cpuUsedTotal;
						std::string taskType;
						float memUsedRatioMin;
						long cpuUsed;
						std::string userAccount;
						long cpuRequest;
					};
					int total;
					std::vector<Instance> detail;
				};


				GetProjectInstanceResult();
				explicit GetProjectInstanceResult(const std::string &payload);
				~GetProjectInstanceResult();
				std::string getMessage()const;
				Data getData()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TESLAMAXCOMPUTE_MODEL_GETPROJECTINSTANCERESULT_H_