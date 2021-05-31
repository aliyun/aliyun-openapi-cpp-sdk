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

#ifndef ALIBABACLOUD_DBFS_MODEL_LISTTASKRESULT_H_
#define ALIBABACLOUD_DBFS_MODEL_LISTTASKRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dbfs/DBFSExport.h>

namespace AlibabaCloud
{
	namespace DBFS
	{
		namespace Model
		{
			class ALIBABACLOUD_DBFS_EXPORT ListTaskResult : public ServiceResult
			{
			public:
				struct TasksItem
				{
					std::string createdTime;
					std::string taskAdder;
					std::string priority;
					int taskStatusCode;
					int taskProgress;
					int maxRetry;
					std::string taskStatus;
					std::string nextExecutionTime;
					std::string taskErrorReason;
					std::string taskRunner;
					std::string taskOwner;
					std::string taskName;
					std::string completionTime;
					std::string taskType;
					int id;
					std::string clientToken;
					std::string taskProgressDescription;
					int taskExecutionCounts;
				};


				ListTaskResult();
				explicit ListTaskResult(const std::string &payload);
				~ListTaskResult();
				int getTotalCount()const;
				std::vector<TasksItem> getTasks()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<TasksItem> tasks_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DBFS_MODEL_LISTTASKRESULT_H_