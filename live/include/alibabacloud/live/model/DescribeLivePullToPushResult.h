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

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEPULLTOPUSHRESULT_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEPULLTOPUSHRESULT_H_

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
			class ALIBABACLOUD_LIVE_EXPORT DescribeLivePullToPushResult : public ServiceResult
			{
			public:
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


				DescribeLivePullToPushResult();
				explicit DescribeLivePullToPushResult(const std::string &payload);
				~DescribeLivePullToPushResult();
				TaskInfo getTaskInfo()const;
				std::string getTaskExitReason()const;
				std::string getDescription()const;
				std::string getTaskId()const;
				int getRetCode()const;
				int getCurrentFileIndex()const;
				int getCurrentOffset()const;
				int getTaskStatus()const;
				int getTaskExitTime()const;
				std::string getTaskInvalidReason()const;

			protected:
				void parse(const std::string &payload);
			private:
				TaskInfo taskInfo_;
				std::string taskExitReason_;
				std::string description_;
				std::string taskId_;
				int retCode_;
				int currentFileIndex_;
				int currentOffset_;
				int taskStatus_;
				int taskExitTime_;
				std::string taskInvalidReason_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEPULLTOPUSHRESULT_H_