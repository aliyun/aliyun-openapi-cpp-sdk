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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTEXECUTIONPLANSRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTEXECUTIONPLANSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT ListExecutionPlansResult : public ServiceResult
			{
			public:
				struct ExecutionPlanInfo
				{
					std::string status;
					int timeInterval;
					std::string stragety;
					long startTime;
					std::string timeUnit;
					std::string id;
					bool createClusterOnDemand;
					std::string name;
				};


				ListExecutionPlansResult();
				explicit ListExecutionPlansResult(const std::string &payload);
				~ListExecutionPlansResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<ExecutionPlanInfo> getExecutionPlans()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<ExecutionPlanInfo> executionPlans_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTEXECUTIONPLANSRESULT_H_