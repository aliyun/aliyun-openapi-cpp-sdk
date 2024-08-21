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

#ifndef ALIBABACLOUD_ECS_WORKBENCH_MODEL_VIEWINSTANCERECORDSRESULT_H_
#define ALIBABACLOUD_ECS_WORKBENCH_MODEL_VIEWINSTANCERECORDSRESULT_H_

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
			class ALIBABACLOUD_ECS_WORKBENCH_EXPORT ViewInstanceRecordsResult : public ServiceResult
			{
			public:


				ViewInstanceRecordsResult();
				explicit ViewInstanceRecordsResult(const std::string &payload);
				~ViewInstanceRecordsResult();
				bool getRoot()const;
				std::string getMessage()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool root_;
				std::string message_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_WORKBENCH_MODEL_VIEWINSTANCERECORDSRESULT_H_