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

#ifndef ALIBABACLOUD_EVENTBRIDGE_MODEL_GETRULERESULT_H_
#define ALIBABACLOUD_EVENTBRIDGE_MODEL_GETRULERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eventbridge/EventbridgeExport.h>

namespace AlibabaCloud
{
	namespace Eventbridge
	{
		namespace Model
		{
			class ALIBABACLOUD_EVENTBRIDGE_EXPORT GetRuleResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct TargetsItem
					{
						struct DeadLetterQueue
						{
							std::string arn;
						};
						struct ParamListItem
						{
							std::string _template;
							std::string form;
							std::string value;
							std::string resourceKey;
						};
						std::string errorsTolerance;
						DeadLetterQueue deadLetterQueue;
						std::string pushRetryStrategy;
						std::string type;
						std::string endpoint;
						std::string id;
						std::string detailMap;
						std::string pushSelector;
						std::vector<TargetsItem::ParamListItem> paramList;
					};
					std::string status;
					std::string eventBusName;
					std::string filterPattern;
					std::string description;
					long createdTimestamp;
					std::string ruleARN;
					std::vector<TargetsItem> targets;
					std::string ruleName;
				};


				GetRuleResult();
				explicit GetRuleResult(const std::string &payload);
				~GetRuleResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EVENTBRIDGE_MODEL_GETRULERESULT_H_