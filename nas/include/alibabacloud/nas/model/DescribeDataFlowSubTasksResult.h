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

#ifndef ALIBABACLOUD_NAS_MODEL_DESCRIBEDATAFLOWSUBTASKSRESULT_H_
#define ALIBABACLOUD_NAS_MODEL_DESCRIBEDATAFLOWSUBTASKSRESULT_H_

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
			class ALIBABACLOUD_NAS_EXPORT DescribeDataFlowSubTasksResult : public ServiceResult
			{
			public:
				struct DataFlowSubTaskItem
				{
					struct ProgressStats
					{
						long averageSpeed;
						long bytesDone;
						long actualBytes;
						long bytesTotal;
					};
					struct FileDetail
					{
						long modifyTime;
						long size;
						std::string checksum;
					};
					std::string status;
					int progress;
					FileDetail fileDetail;
					std::string dataFlowSubTaskId;
					std::string endTime;
					std::string dstFilePath;
					std::string createTime;
					std::string startTime;
					std::string errorMsg;
					std::string dataFlowTaskId;
					ProgressStats progressStats;
					std::string srcFilePath;
					std::string fileSystemId;
					std::string dataFlowId;
				};


				DescribeDataFlowSubTasksResult();
				explicit DescribeDataFlowSubTasksResult(const std::string &payload);
				~DescribeDataFlowSubTasksResult();
				std::string getNextToken()const;
				std::vector<DataFlowSubTaskItem> getDataFlowSubTask()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				std::vector<DataFlowSubTaskItem> dataFlowSubTask_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_NAS_MODEL_DESCRIBEDATAFLOWSUBTASKSRESULT_H_