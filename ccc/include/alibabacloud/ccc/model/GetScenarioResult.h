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

#ifndef ALIBABACLOUD_CCC_MODEL_GETSCENARIORESULT_H_
#define ALIBABACLOUD_CCC_MODEL_GETSCENARIORESULT_H_

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
			class ALIBABACLOUD_CCC_EXPORT GetScenarioResult : public ServiceResult
			{
			public:
				struct Scenario
				{
					struct Strategy
					{
						struct TimeFrame
						{
							std::string endTime;
							std::string beginTime;
						};
						std::vector<TimeFrame> workingTime;
						bool isTemplate;
						std::string description;
						std::string repeatBy;
						int minAttemptInterval;
						long endTime;
						long startTime;
						std::string name;
						std::string followUpStrategy;
						std::string type;
						std::string customized;
						int maxAttemptsPerDay;
						std::string routingStrategy;
						std::vector<std::string> repeatDays;
						std::string id;
					};
					struct Survey
					{
						struct IntentNode
						{
							std::string nodeId;
							std::string intentId;
						};
						std::string role;
						std::string description;
						std::string beebotId;
						std::vector<Survey::IntentNode> intents;
						int round;
						std::string id;
						std::string name;
					};
					struct KeyValuePair
					{
						std::string value;
						std::string key;
					};
					std::vector<Survey> surveys;
					std::vector<KeyValuePair> variables;
					bool isTemplate;
					std::string type;
					std::string description;
					Strategy strategy;
					std::string id;
					std::string name;
				};


				GetScenarioResult();
				explicit GetScenarioResult(const std::string &payload);
				~GetScenarioResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				std::string getCode()const;
				bool getSuccess()const;
				Scenario getScenario()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				std::string code_;
				bool success_;
				Scenario scenario_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_GETSCENARIORESULT_H_