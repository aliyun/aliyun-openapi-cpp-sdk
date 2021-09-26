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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATAMASKINGTASKSRESULT_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATAMASKINGTASKSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sddp/SddpExport.h>

namespace AlibabaCloud
{
	namespace Sddp
	{
		namespace Model
		{
			class ALIBABACLOUD_SDDP_EXPORT DescribeDataMaskingTasksResult : public ServiceResult
			{
			public:
				struct Task
				{
					int status;
					int triggerType;
					std::string owner;
					std::string taskId;
					std::string dstPath;
					bool hasUnfinishProcess;
					std::string dstTypeCode;
					std::string srcPath;
					int dstType;
					bool originalTable;
					long gmtCreate;
					std::string taskName;
					int srcType;
					int runCount;
					long id;
					std::string srcTypeCode;
				};


				DescribeDataMaskingTasksResult();
				explicit DescribeDataMaskingTasksResult(const std::string &payload);
				~DescribeDataMaskingTasksResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getCurrentPage()const;
				std::vector<Task> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int currentPage_;
				std::vector<Task> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATAMASKINGTASKSRESULT_H_