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

#ifndef ALIBABACLOUD_QUALITYCHECK_MODEL_LISTSKILLGROUPCONFIGRESULT_H_
#define ALIBABACLOUD_QUALITYCHECK_MODEL_LISTSKILLGROUPCONFIGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/qualitycheck/QualitycheckExport.h>

namespace AlibabaCloud
{
	namespace Qualitycheck
	{
		namespace Model
		{
			class ALIBABACLOUD_QUALITYCHECK_EXPORT ListSkillGroupConfigResult : public ServiceResult
			{
			public:
				struct SkillGroupConfig
				{
					struct RuleNameInfo
					{
						long rid;
						std::string ruleName;
					};
					struct RuleNameInfo
					{
						long rid;
						std::string ruleName;
					};
					struct SkillGroupScreen
					{
						int symbol;
						std::string value;
						int dataType;
						std::string name;
					};
					int status;
					std::vector<SkillGroupConfig::RuleNameInfo> ruleList;
					bool screenSwitch;
					std::string modelName;
					long vocabId;
					int qualityCheckType;
					int allContentQualityCheck;
					std::string instanceId;
					std::string createTime;
					std::string skillGroupId;
					std::string rid;
					std::string vocabName;
					std::string name;
					int type;
					std::vector<SkillGroupConfig::SkillGroupScreen> skillGroupScreens;
					std::string skillGroupName;
					std::string updateTime;
					long id;
					std::string allRids;
					long modelId;
					std::vector<SkillGroupConfig::RuleNameInfo> allRuleList;
					int skillGroupFrom;
				};


				ListSkillGroupConfigResult();
				explicit ListSkillGroupConfigResult(const std::string &payload);
				~ListSkillGroupConfigResult();
				std::string getMessage()const;
				std::vector<SkillGroupConfig> getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<SkillGroupConfig> data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_QUALITYCHECK_MODEL_LISTSKILLGROUPCONFIGRESULT_H_