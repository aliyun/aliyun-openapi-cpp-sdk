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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBETASKSRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBETASKSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardb/PolardbExport.h>

namespace AlibabaCloud
{
	namespace Polardb
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDB_EXPORT DescribeTasksResult : public ServiceResult
			{
			public:
				struct Task
				{
					std::string expectedFinishTime;
					int progress;
					int remain;
					std::string taskId;
					std::string taskAction;
					std::string beginTime;
					std::string taskErrorMessage;
					std::string stepProgressInfo;
					std::string finishTime;
					std::string stepsInfo;
					std::string currentStepName;
					std::string progressInfo;
					std::string dBName;
					std::string taskErrorCode;
				};


				DescribeTasksResult();
				explicit DescribeTasksResult(const std::string &payload);
				~DescribeTasksResult();
				int getTotalRecordCount()const;
				std::vector<Task> getTasks()const;
				int getPageRecordCount()const;
				std::string getEndTime()const;
				int getPageNumber()const;
				std::string getStartTime()const;
				std::string getDBClusterId()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalRecordCount_;
				std::vector<Task> tasks_;
				int pageRecordCount_;
				std::string endTime_;
				int pageNumber_;
				std::string startTime_;
				std::string dBClusterId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBETASKSRESULT_H_