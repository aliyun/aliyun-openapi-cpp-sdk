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

#ifndef ALIBABACLOUD_FNF_MODEL_LISTFLOWSRESULT_H_
#define ALIBABACLOUD_FNF_MODEL_LISTFLOWSRESULT_H_

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
			class ALIBABACLOUD_FNF_EXPORT ListFlowsResult : public ServiceResult
			{
			public:
				struct FlowsItem
				{
					std::string type;
					std::string description;
					std::string createdTime;
					std::string definition;
					std::string lastModifiedTime;
					std::string executionMode;
					std::string id;
					std::string externalStorageLocation;
					std::string roleArn;
					std::string name;
				};


				ListFlowsResult();
				explicit ListFlowsResult(const std::string &payload);
				~ListFlowsResult();
				std::string getNextToken()const;
				std::vector<FlowsItem> getFlows()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				std::vector<FlowsItem> flows_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FNF_MODEL_LISTFLOWSRESULT_H_