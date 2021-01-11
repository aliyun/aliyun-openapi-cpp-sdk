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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBESCHEDULETASKSRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBESCHEDULETASKSRESULT_H_

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
			class ALIBABACLOUD_POLARDB_EXPORT DescribeScheduleTasksResult : public ServiceResult
			{
			public:
				struct Items
				{
					int maxRetryTime;
					std::string status;
					std::string action;
					std::string args;
					long plannedTime;
					std::string taskId;
					std::string productCode;
					long gmtModified;
					std::string dBClusterId;
					long plannedStartTime;
					std::string mutex;
					std::string orderId;
					std::string response;
					long gmtCreate;
					int type;
					std::string region;
					int retryTime;
					long plannedEndTime;
				};


				DescribeScheduleTasksResult();
				explicit DescribeScheduleTasksResult(const std::string &payload);
				~DescribeScheduleTasksResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				std::vector<Items> getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				std::vector<Items> data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBESCHEDULETASKSRESULT_H_