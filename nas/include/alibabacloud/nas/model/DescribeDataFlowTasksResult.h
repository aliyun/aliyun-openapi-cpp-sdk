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

#ifndef ALIBABACLOUD_NAS_MODEL_DESCRIBEDATAFLOWTASKSRESULT_H_
#define ALIBABACLOUD_NAS_MODEL_DESCRIBEDATAFLOWTASKSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/nas/NASExport.h>

namespace AlibabaCloud
{
	namespace NAS
	{
		namespace Model
		{
			class ALIBABACLOUD_NAS_EXPORT DescribeDataFlowTasksResult : public ServiceResult
			{
			public:
				struct Task
				{
					struct ProgressStats
					{
						long averageSpeed;
						long filesTotal;
						long filesDone;
						long bytesDone;
						long actualBytes;
						long remainTime;
						long actualFiles;
						long bytesTotal;
					};
					struct Report
					{
						std::string path;
						std::string name;
					};
					std::string fileSystemPath;
					std::string status;
					std::string filesystemId;
					long progress;
					std::string taskId;
					std::string endTime;
					std::string taskAction;
					std::string createTime;
					std::string startTime;
					std::string errorMsg;
					std::vector<Task::Report> reports;
					std::string dstDirectory;
					std::string sourceStorage;
					std::string conflictPolicy;
					std::string originator;
					ProgressStats progressStats;
					std::string reportPath;
					std::string dataType;
					std::string dataFlowId;
					std::string fsPath;
					std::string directory;
				};


				DescribeDataFlowTasksResult();
				explicit DescribeDataFlowTasksResult(const std::string &payload);
				~DescribeDataFlowTasksResult();
				std::vector<Task> getTaskInfo()const;
				std::string getNextToken()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Task> taskInfo_;
				std::string nextToken_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_NAS_MODEL_DESCRIBEDATAFLOWTASKSRESULT_H_