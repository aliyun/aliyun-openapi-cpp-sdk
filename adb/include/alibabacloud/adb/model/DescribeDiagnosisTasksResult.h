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

#ifndef ALIBABACLOUD_ADB_MODEL_DESCRIBEDIAGNOSISTASKSRESULT_H_
#define ALIBABACLOUD_ADB_MODEL_DESCRIBEDIAGNOSISTASKSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/adb/AdbExport.h>

namespace AlibabaCloud
{
	namespace Adb
	{
		namespace Model
		{
			class ALIBABACLOUD_ADB_EXPORT DescribeDiagnosisTasksResult : public ServiceResult
			{
			public:
				struct SqlTasks
				{
					std::string taskId;
					std::string drivers;
					long taskEndTime;
					long peakMemory;
					long elapsedTime;
					long scanDataSize;
					long inputRows;
					std::string taskHost;
					long taskCreateTime;
					long scanRows;
					long scanCost;
					std::string queuedTime;
					std::string state;
					long operatorCost;
					long outputRows;
					std::string computeTimeRatio;
					long inputDataSize;
					long outputDataSize;
				};


				DescribeDiagnosisTasksResult();
				explicit DescribeDiagnosisTasksResult(const std::string &payload);
				~DescribeDiagnosisTasksResult();
				int getTotalCount()const;
				std::vector<SqlTasks> getTaskList()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<SqlTasks> taskList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ADB_MODEL_DESCRIBEDIAGNOSISTASKSRESULT_H_