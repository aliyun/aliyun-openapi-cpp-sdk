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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTAPMAPPLICATIONRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTAPMAPPLICATIONRESULT_H_

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
			class ALIBABACLOUD_EMR_EXPORT ListApmApplicationResult : public ServiceResult
			{
			public:
				struct ApmAppInfo
				{
					float queueUsagePercent;
					long allocatedMemory;
					std::string resourceRequests;
					std::string user;
					std::string diagnostics;
					long finishedTime;
					std::string name;
					std::string clusterBizId;
					int runningDuration;
					long memorySeconds;
					std::string finalStatus;
					std::string queue;
					long allocatedVcore;
					float clusterUsagePercent;
					float progress;
					long vcoreSeconds;
					long startTime;
					int runningContainers;
					int duration;
					long submitTime;
					std::string diagnoseCode;
					std::string applicationType;
					std::string state;
					std::string applicationId;
					std::string diagnoseResult;
				};


				ListApmApplicationResult();
				explicit ListApmApplicationResult(const std::string &payload);
				~ListApmApplicationResult();
				std::vector<ApmAppInfo> getApmAppInfoList()const;
				int getPageSize()const;
				int getPageNumber()const;
				int getTotal()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ApmAppInfo> apmAppInfoList_;
				int pageSize_;
				int pageNumber_;
				int total_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTAPMAPPLICATIONRESULT_H_