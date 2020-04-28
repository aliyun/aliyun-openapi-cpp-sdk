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

#ifndef ALIBABACLOUD_FNF_MODEL_LISTEXECUTIONSRESULT_H_
#define ALIBABACLOUD_FNF_MODEL_LISTEXECUTIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/fnf/FnfExport.h>

namespace AlibabaCloud
{
	namespace Fnf
	{
		namespace Model
		{
			class ALIBABACLOUD_FNF_EXPORT ListExecutionsResult : public ServiceResult
			{
			public:
				struct ExecutionsItem
				{
					std::string status;
					std::string input;
					std::string stoppedTime;
					std::string flowName;
					std::string output;
					std::string externalOutputUri;
					std::string startedTime;
					std::string externalInputUri;
					std::string flowDefinition;
					std::string name;
				};


				ListExecutionsResult();
				explicit ListExecutionsResult(const std::string &payload);
				~ListExecutionsResult();
				std::vector<ExecutionsItem> getExecutions()const;
				std::string getNextToken()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ExecutionsItem> executions_;
				std::string nextToken_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FNF_MODEL_LISTEXECUTIONSRESULT_H_