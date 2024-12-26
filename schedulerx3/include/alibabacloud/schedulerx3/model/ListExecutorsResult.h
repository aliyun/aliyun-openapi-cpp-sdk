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

#ifndef ALIBABACLOUD_SCHEDULERX3_MODEL_LISTEXECUTORSRESULT_H_
#define ALIBABACLOUD_SCHEDULERX3_MODEL_LISTEXECUTORSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/schedulerx3/SchedulerX3Export.h>

namespace AlibabaCloud
{
	namespace SchedulerX3
	{
		namespace Model
		{
			class ALIBABACLOUD_SCHEDULERX3_EXPORT ListExecutorsResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					bool isDesignated;
					std::string address;
					std::string version;
					std::string ip;
					int port;
					std::string label;
					bool online;
				};


				ListExecutorsResult();
				explicit ListExecutorsResult(const std::string &payload);
				~ListExecutorsResult();
				std::string getMessage()const;
				std::vector<DataItem> getData()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<DataItem> data_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCHEDULERX3_MODEL_LISTEXECUTORSRESULT_H_