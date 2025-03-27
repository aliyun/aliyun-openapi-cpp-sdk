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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETDISYNCTASKRESULT_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETDISYNCTASKRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT GetDISyncTaskResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct SolutionDetail
					{
						std::string status;
						std::string type;
						std::string processContent;
						std::string sourceType;
						std::string startTime;
						long projectId;
						long id;
						std::string submitTime;
						std::string creatorName;
						std::string processExtra;
						std::string name;
					};
					struct AlarmListItem
					{
						struct NotifyRule
						{
							std::vector<std::string> warning;
							std::vector<std::string> critical;
							long interval;
						};
						struct AlarmRuleListItem
						{
							std::string aggregator;
							std::string level;
							long duration;
							std::string comparator;
							long threshold;
						};
						std::string description;
						NotifyRule notifyRule;
						std::vector<AlarmListItem::AlarmRuleListItem> alarmRuleList;
						bool enabled;
						std::string metric;
						long id;
						std::string ruleName;
					};
					std::string status;
					std::string message;
					std::vector<AlarmListItem> alarmList;
					SolutionDetail solutionDetail;
					std::string code;
				};


				GetDISyncTaskResult();
				explicit GetDISyncTaskResult(const std::string &payload);
				~GetDISyncTaskResult();
				Data getData()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETDISYNCTASKRESULT_H_