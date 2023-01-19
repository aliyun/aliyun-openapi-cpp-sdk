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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBECYCLETASKLISTRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBECYCLETASKLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeCycleTaskListResult : public ServiceResult
			{
			public:
				struct PageInfo
				{
					int totalCount;
					int pageSize;
					int currentPage;
					int count;
				};
				struct CycleScheduleResponse
				{
					int targetEndTime;
					std::string taskName;
					std::string taskType;
					std::string param;
					int intervalPeriod;
					long firstDateStr;
					int enable;
					int targetStartTime;
					std::string configId;
					long nextStartTimeStr;
					std::string lastTaskId;
					std::string periodUnit;
				};


				DescribeCycleTaskListResult();
				explicit DescribeCycleTaskListResult(const std::string &payload);
				~DescribeCycleTaskListResult();
				std::vector<CycleScheduleResponse> getCycleScheduleResponseList()const;
				PageInfo getPageInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<CycleScheduleResponse> cycleScheduleResponseList_;
				PageInfo pageInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBECYCLETASKLISTRESULT_H_