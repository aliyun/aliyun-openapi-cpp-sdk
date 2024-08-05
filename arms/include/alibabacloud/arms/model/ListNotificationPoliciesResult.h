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

#ifndef ALIBABACLOUD_ARMS_MODEL_LISTNOTIFICATIONPOLICIESRESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_LISTNOTIFICATIONPOLICIESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/arms/ARMSExport.h>

namespace AlibabaCloud
{
	namespace ARMS
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS_EXPORT ListNotificationPoliciesResult : public ServiceResult
			{
			public:
				struct PageBean
				{
					struct Policies
					{
						struct GroupRule
						{
							long groupInterval;
							std::vector<std::string> groupingFields;
							long groupWait;
						};
						struct NotifyRule
						{
							struct NotifyObjectsItem
							{
								std::vector<std::string> notifyChannels1;
								std::string notifyObjectName;
								std::string notifyObjectType;
								long notifyObjectId;
							};
							std::vector<std::string> notifyChannels;
							std::vector<NotifyObjectsItem> notifyObjects;
							std::string notifyStartTime;
							std::string notifyEndTime;
						};
						struct NotifyTemplate
						{
							std::string emailRecoverContent;
							std::string emailRecoverTitle;
							std::string ttsContent;
							std::string ttsRecoverContent;
							std::string emailTitle;
							std::string emailContent;
							std::string smsContent;
							std::string smsRecoverContent;
							std::string robotContent;
						};
						struct MatchingRulesItem
						{
							struct MatchingConditionsItem
							{
								std::string value;
								std::string _operator;
								std::string key;
							};
							std::vector<MatchingRulesItem::MatchingConditionsItem> matchingConditions;
						};
						long escalationPolicyId;
						NotifyTemplate notifyTemplate;
						NotifyRule notifyRule;
						bool sendRecoverMessage;
						std::vector<Policies::MatchingRulesItem> matchingRules;
						bool repeat;
						long integrationId;
						std::string name;
						std::string state;
						GroupRule groupRule;
						long id;
						bool directedMode;
						long repeatInterval;
					};
					long size;
					std::vector<Policies> notificationPolicies;
					long total;
					long page;
				};


				ListNotificationPoliciesResult();
				explicit ListNotificationPoliciesResult(const std::string &payload);
				~ListNotificationPoliciesResult();
				PageBean getPageBean()const;

			protected:
				void parse(const std::string &payload);
			private:
				PageBean pageBean_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_LISTNOTIFICATIONPOLICIESRESULT_H_