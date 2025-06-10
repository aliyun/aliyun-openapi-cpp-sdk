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

#ifndef ALIBABACLOUD_SCHEDULERX2_MODEL_READSCHEDULERXDESIGNATEINFORESULT_H_
#define ALIBABACLOUD_SCHEDULERX2_MODEL_READSCHEDULERXDESIGNATEINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/schedulerx2/Schedulerx2Export.h>

namespace AlibabaCloud
{
	namespace Schedulerx2
	{
		namespace Model
		{
			class ALIBABACLOUD_SCHEDULERX2_EXPORT ReadSchedulerxDesignateInfoResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct DesignateDetailVo
					{
						struct Metrics
						{
							int sharePoolAvailableSize;
							double heap1Usage;
							double diskUsage;
							int cpuProcessors;
							double heap1Used;
							double cpuLoad1;
							double cpuLoad5;
							long execCount;
							int sharePoolQueueSize;
							int heapMax;
							int diskUsed;
							int diskMax;
							double heap5Usage;
						};
						bool checked;
						Metrics metrics;
						std::string version;
						int size;
						std::string busy;
						bool offline;
						std::string starter;
						std::string key;
					};
					std::vector<DesignateDetailVo> designateDetailVos;
					int designateType;
					bool transferable;
				};
				struct AccessDeniedDetail
				{
					std::string policyType;
					std::string authPrincipalOwnerId;
					std::string encodedDiagnosticMessage;
					std::string authPrincipalType;
					std::string authPrincipalDisplayName;
					std::string noPermissionType;
					std::string authAction;
				};


				ReadSchedulerxDesignateInfoResult();
				explicit ReadSchedulerxDesignateInfoResult(const std::string &payload);
				~ReadSchedulerxDesignateInfoResult();
				AccessDeniedDetail getAccessDeniedDetail()const;
				std::string getMessage()const;
				Data getData()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				AccessDeniedDetail accessDeniedDetail_;
				std::string message_;
				Data data_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCHEDULERX2_MODEL_READSCHEDULERXDESIGNATEINFORESULT_H_