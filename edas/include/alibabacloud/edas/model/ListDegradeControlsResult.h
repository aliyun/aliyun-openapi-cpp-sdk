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

#ifndef ALIBABACLOUD_EDAS_MODEL_LISTDEGRADECONTROLSRESULT_H_
#define ALIBABACLOUD_EDAS_MODEL_LISTDEGRADECONTROLSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/edas/EdasExport.h>

namespace AlibabaCloud
{
	namespace Edas
	{
		namespace Model
		{
			class ALIBABACLOUD_EDAS_EXPORT ListDegradeControlsResult : public ServiceResult
			{
			public:
				struct FlowControlsMap
				{
					struct RuleList
					{
						struct Rule
						{
							std::string appId;
							int rtThreshold;
							int state;
							std::string ruleId;
							long createTime;
							long updateTime;
							std::string resource;
							int duration;
							std::string ruleType;
						};
						int pageSize;
						int currentPage;
						std::vector<Rule> ruleResultList;
						int totalSize;
					};
					struct InterfaceMethod
					{
						std::string version;
						std::vector<std::string> methods;
						std::string name;
					};
					RuleList ruleList;
					std::vector<InterfaceMethod> interfaceMethods;
					std::string appId;
					std::string appName;
				};


				ListDegradeControlsResult();
				explicit ListDegradeControlsResult(const std::string &payload);
				~ListDegradeControlsResult();
				std::string getMessage()const;
				FlowControlsMap getFlowControlsMap()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				FlowControlsMap flowControlsMap_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_LISTDEGRADECONTROLSRESULT_H_