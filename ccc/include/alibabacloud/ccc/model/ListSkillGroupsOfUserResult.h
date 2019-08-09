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

#ifndef ALIBABACLOUD_CCC_MODEL_LISTSKILLGROUPSOFUSERRESULT_H_
#define ALIBABACLOUD_CCC_MODEL_LISTSKILLGROUPSOFUSERRESULT_H_

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
			class ALIBABACLOUD_CCC_EXPORT ListSkillGroupsOfUserResult : public ServiceResult
			{
			public:
				struct SkillLevel
				{
					struct Skill
					{
						struct PhoneNumber
						{
							std::string usage;
							bool testOnly;
							bool allowOutbound;
							std::string number;
							std::string instanceId;
							int remainingTime;
							int trunks;
							std::string city;
							std::string phoneNumberId;
							std::string province;
							std::string phoneNumberDescription;
						};
						std::string skillGroupName;
						std::string instanceId;
						std::string routingStrategy;
						std::string skillGroupId;
						std::vector<PhoneNumber> outboundPhoneNumbers;
						std::string skillGroupDescription;
					};
					Skill skill;
					std::string skillLevelId;
					int level;
				};


				ListSkillGroupsOfUserResult();
				explicit ListSkillGroupsOfUserResult(const std::string &payload);
				~ListSkillGroupsOfUserResult();
				std::vector<SkillLevel> getSkillLevels()const;
				std::string getMessage()const;
				int getHttpStatusCode()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<SkillLevel> skillLevels_;
				std::string message_;
				int httpStatusCode_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_LISTSKILLGROUPSOFUSERRESULT_H_