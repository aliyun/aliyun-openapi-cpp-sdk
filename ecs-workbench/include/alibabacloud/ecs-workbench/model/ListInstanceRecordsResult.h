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

#ifndef ALIBABACLOUD_ECS_WORKBENCH_MODEL_LISTINSTANCERECORDSRESULT_H_
#define ALIBABACLOUD_ECS_WORKBENCH_MODEL_LISTINSTANCERECORDSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs-workbench/Ecs_workbenchExport.h>

namespace AlibabaCloud
{
	namespace Ecs_workbench
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_WORKBENCH_EXPORT ListInstanceRecordsResult : public ServiceResult
			{
			public:
				struct Root
				{
					struct RecordListItem
					{
						std::string terminalSessionToken;
						std::string status;
						std::string gmtCreate;
						long accountId;
						std::string instanceRecordUrl;
						std::string instanceId;
						long recordDurationMillis;
						std::string expireTime;
					};
					int totalCount;
					std::vector<RecordListItem> recordList;
				};


				ListInstanceRecordsResult();
				explicit ListInstanceRecordsResult(const std::string &payload);
				~ListInstanceRecordsResult();
				Root getRoot()const;
				std::string getMessage()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				Root root_;
				std::string message_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_WORKBENCH_MODEL_LISTINSTANCERECORDSRESULT_H_