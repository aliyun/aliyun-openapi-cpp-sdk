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

#ifndef ALIBABACLOUD_ESS_MODEL_DESCRIBESCHEDULEDTASKSRESULT_H_
#define ALIBABACLOUD_ESS_MODEL_DESCRIBESCHEDULEDTASKSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ess/EssExport.h>

namespace AlibabaCloud
{
	namespace Ess
	{
		namespace Model
		{
			class ALIBABACLOUD_ESS_EXPORT DescribeScheduledTasksResult : public ServiceResult
			{
			public:
				struct ScheduledTask
				{
					std::string description;
					std::string launchTime;
					std::string scheduledTaskId;
					std::string recurrenceType;
					int minValue;
					std::string scheduledTaskName;
					std::string scheduledAction;
					int maxValue;
					std::string recurrenceEndTime;
					std::string recurrenceValue;
					int launchExpirationTime;
					bool taskEnabled;
				};


				DescribeScheduledTasksResult();
				explicit DescribeScheduledTasksResult(const std::string &payload);
				~DescribeScheduledTasksResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<ScheduledTask> getScheduledTasks()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<ScheduledTask> scheduledTasks_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_DESCRIBESCHEDULEDTASKSRESULT_H_