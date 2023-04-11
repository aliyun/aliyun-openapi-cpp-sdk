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

#ifndef ALIBABACLOUD_ALB_MODEL_LISTASCRIPTSRESULT_H_
#define ALIBABACLOUD_ALB_MODEL_LISTASCRIPTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/alb/AlbExport.h>

namespace AlibabaCloud
{
	namespace Alb
	{
		namespace Model
		{
			class ALIBABACLOUD_ALB_EXPORT ListAScriptsResult : public ServiceResult
			{
			public:
				struct AScript
				{
					struct ExtAttribute
					{
						std::string attributeKey;
						std::string attributeValue;
					};
					std::string scriptContent;
					std::string aScriptStatus;
					std::string aScriptName;
					std::string position;
					long priority;
					std::string aScriptId;
					bool enabled;
					bool extAttributeEnabled;
					std::string loadBalancerId;
					std::vector<AScript::ExtAttribute> extAttributes;
					std::string listenerId;
				};


				ListAScriptsResult();
				explicit ListAScriptsResult(const std::string &payload);
				~ListAScriptsResult();
				int getTotalCount()const;
				std::string getNextToken()const;
				int getMaxResults()const;
				std::vector<AScript> getAScripts()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string nextToken_;
				int maxResults_;
				std::vector<AScript> aScripts_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALB_MODEL_LISTASCRIPTSRESULT_H_