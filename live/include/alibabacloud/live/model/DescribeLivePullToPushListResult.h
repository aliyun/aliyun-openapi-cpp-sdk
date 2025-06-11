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

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEPULLTOPUSHLISTRESULT_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEPULLTOPUSHLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/live/LiveExport.h>

namespace AlibabaCloud
{
	namespace Live
	{
		namespace Model
		{
			class ALIBABACLOUD_LIVE_EXPORT DescribeLivePullToPushListResult : public ServiceResult
			{
			public:
				struct TaskListItem
				{
					struct TaskInfo
					{
						int repeatNumber;
						std::string taskId;
						std::string endTime;
						std::string sourceType;
						std::string startTime;
						std::vector<std::string> sourceUrls;
						int offset;
						std::string callbackURL;
						int fileIndex;
						int retryCount;
						std::string taskName;
						std::string sourceProtocol;
						int retryInterval;
						std::string dstUrl;
					};
					TaskInfo taskInfo;
					std::string taskExitReason;
					std::string taskId;
					int currentFileIndex;
					int currentOffset;
					int taskStatus;
					int taskExitTime;
					std::string taskInvalidReason;
				};


				DescribeLivePullToPushListResult();
				explicit DescribeLivePullToPushListResult(const std::string &payload);
				~DescribeLivePullToPushListResult();
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<TaskListItem> getTaskList()const;
				int getTotal()const;

			protected:
				void parse(const std::string &payload);
			private:
				int pageSize_;
				int pageNumber_;
				std::vector<TaskListItem> taskList_;
				int total_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEPULLTOPUSHLISTRESULT_H_