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

#ifndef ALIBABACLOUD_QUALITYCHECK_MODEL_LISTTASKASSIGNRULESRESULT_H_
#define ALIBABACLOUD_QUALITYCHECK_MODEL_LISTTASKASSIGNRULESRESULT_H_

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
			class ALIBABACLOUD_QUALITYCHECK_EXPORT ListTaskAssignRulesResult : public ServiceResult
			{
			public:
				struct TaskAssignRuleInfo
				{
					struct SamplingMode
					{
						struct SamplingModeAgent
						{
							std::string agentName;
							std::string agentId;
						};
						int anyNumberOfDraws;
						int numberOfDraws;
						float proportion;
						bool designated;
						std::vector<SamplingModeAgent> samplingModeAgents;
						int randomInspectionNumber;
						int limit;
						int dimension;
					};
					struct Agent
					{
						std::string agentName;
						std::string agentId;
					};
					struct SkillGroup
					{
						std::string skillName;
						std::string skillId;
					};
					struct Reviewer
					{
						std::string reviewerId;
						std::string reviewerName;
					};
					struct RuleBasicInfo
					{
						std::string rid;
						std::string name;
					};
					SamplingMode samplingMode;
					long callTimeEnd;
					int priority;
					std::string createTime;
					long ruleId;
					std::vector<TaskAssignRuleInfo::Agent> agents;
					int callType;
					std::vector<TaskAssignRuleInfo::SkillGroup> skillGroups;
					int enabled;
					std::vector<TaskAssignRuleInfo::RuleBasicInfo> rules;
					int durationMin;
					std::string skillGroupsStr;
					int assignmentType;
					std::string updateTime;
					std::string agentsStr;
					int durationMax;
					std::vector<TaskAssignRuleInfo::Reviewer> reviewers;
					std::string ruleName;
					long callTimeStart;
				};


				ListTaskAssignRulesResult();
				explicit ListTaskAssignRulesResult(const std::string &payload);
				~ListTaskAssignRulesResult();
				std::string getMessage()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<TaskAssignRuleInfo> getData()const;
				int getCount()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int pageSize_;
				int pageNumber_;
				std::vector<TaskAssignRuleInfo> data_;
				int count_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_QUALITYCHECK_MODEL_LISTTASKASSIGNRULESRESULT_H_