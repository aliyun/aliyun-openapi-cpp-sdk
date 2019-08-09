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

#ifndef ALIBABACLOUD_CCC_MODEL_LISTPREDICTIVEJOBSTATUSRESULT_H_
#define ALIBABACLOUD_CCC_MODEL_LISTPREDICTIVEJOBSTATUSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ccc/CCCExport.h>

namespace AlibabaCloud
{
	namespace CCC
	{
		namespace Model
		{
			class ALIBABACLOUD_CCC_EXPORT ListPredictiveJobStatusResult : public ServiceResult
			{
			public:
				struct Jobs
				{
					struct Job
					{
						struct Contact
						{
							std::string role;
							std::string honorific;
							std::string referenceId;
							std::string state;
							std::string phoneNumber;
							std::string contactId;
							std::string contactName;
							std::string jobId;
						};
						std::string status;
						std::string jobGroupId;
						std::string scenarioId;
						std::vector<Job::Contact> contacts;
						std::string referenceId;
						int priority;
						int systemPriority;
						std::string failureReason;
						std::string strategyId;
						std::string jobId;
						std::vector<std::string> callingNumbers;
					};
					int totalCount;
					int pageSize;
					int pageNumber;
					std::vector<Job> list;
				};


				ListPredictiveJobStatusResult();
				explicit ListPredictiveJobStatusResult(const std::string &payload);
				~ListPredictiveJobStatusResult();
				std::string getMessage()const;
				Jobs getJobs()const;
				int getHttpStatusCode()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Jobs jobs_;
				int httpStatusCode_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_LISTPREDICTIVEJOBSTATUSRESULT_H_