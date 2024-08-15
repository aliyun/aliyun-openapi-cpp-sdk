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

#ifndef ALIBABACLOUD_ARMS_MODEL_CREATEORUPDATESILENCEPOLICYRESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_CREATEORUPDATESILENCEPOLICYRESULT_H_

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
			class ALIBABACLOUD_ARMS_EXPORT CreateOrUpdateSilencePolicyResult : public ServiceResult
			{
			public:
				struct SilencePolicy
				{
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
					std::string effectiveTimeType;
					std::string state;
					std::string timePeriod;
					std::vector<MatchingRulesItem> matchingRules;
					long id;
					std::string timeSlots;
					std::string name;
				};


				CreateOrUpdateSilencePolicyResult();
				explicit CreateOrUpdateSilencePolicyResult(const std::string &payload);
				~CreateOrUpdateSilencePolicyResult();
				SilencePolicy getSilencePolicy()const;

			protected:
				void parse(const std::string &payload);
			private:
				SilencePolicy silencePolicy_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_CREATEORUPDATESILENCEPOLICYRESULT_H_