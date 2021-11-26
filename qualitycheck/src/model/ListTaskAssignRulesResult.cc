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

#include <alibabacloud/qualitycheck/model/ListTaskAssignRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

ListTaskAssignRulesResult::ListTaskAssignRulesResult() :
	ServiceResult()
{}

ListTaskAssignRulesResult::ListTaskAssignRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTaskAssignRulesResult::~ListTaskAssignRulesResult()
{}

void ListTaskAssignRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["TaskAssignRuleInfo"];
	for (auto valueDataTaskAssignRuleInfo : allDataNode)
	{
		TaskAssignRuleInfo dataObject;
		if(!valueDataTaskAssignRuleInfo["UpdateTime"].isNull())
			dataObject.updateTime = valueDataTaskAssignRuleInfo["UpdateTime"].asString();
		if(!valueDataTaskAssignRuleInfo["SkillGroupsStr"].isNull())
			dataObject.skillGroupsStr = valueDataTaskAssignRuleInfo["SkillGroupsStr"].asString();
		if(!valueDataTaskAssignRuleInfo["CallTimeEnd"].isNull())
			dataObject.callTimeEnd = std::stol(valueDataTaskAssignRuleInfo["CallTimeEnd"].asString());
		if(!valueDataTaskAssignRuleInfo["DurationMax"].isNull())
			dataObject.durationMax = std::stoi(valueDataTaskAssignRuleInfo["DurationMax"].asString());
		if(!valueDataTaskAssignRuleInfo["CreateTime"].isNull())
			dataObject.createTime = valueDataTaskAssignRuleInfo["CreateTime"].asString();
		if(!valueDataTaskAssignRuleInfo["Priority"].isNull())
			dataObject.priority = std::stoi(valueDataTaskAssignRuleInfo["Priority"].asString());
		if(!valueDataTaskAssignRuleInfo["DurationMin"].isNull())
			dataObject.durationMin = std::stoi(valueDataTaskAssignRuleInfo["DurationMin"].asString());
		if(!valueDataTaskAssignRuleInfo["AgentsStr"].isNull())
			dataObject.agentsStr = valueDataTaskAssignRuleInfo["AgentsStr"].asString();
		if(!valueDataTaskAssignRuleInfo["RuleName"].isNull())
			dataObject.ruleName = valueDataTaskAssignRuleInfo["RuleName"].asString();
		if(!valueDataTaskAssignRuleInfo["RuleId"].isNull())
			dataObject.ruleId = std::stol(valueDataTaskAssignRuleInfo["RuleId"].asString());
		if(!valueDataTaskAssignRuleInfo["AssignmentType"].isNull())
			dataObject.assignmentType = std::stoi(valueDataTaskAssignRuleInfo["AssignmentType"].asString());
		if(!valueDataTaskAssignRuleInfo["CallType"].isNull())
			dataObject.callType = std::stoi(valueDataTaskAssignRuleInfo["CallType"].asString());
		if(!valueDataTaskAssignRuleInfo["Enabled"].isNull())
			dataObject.enabled = std::stoi(valueDataTaskAssignRuleInfo["Enabled"].asString());
		if(!valueDataTaskAssignRuleInfo["CallTimeStart"].isNull())
			dataObject.callTimeStart = std::stol(valueDataTaskAssignRuleInfo["CallTimeStart"].asString());
		auto allAgentsNode = valueDataTaskAssignRuleInfo["Agents"]["Agent"];
		for (auto valueDataTaskAssignRuleInfoAgentsAgent : allAgentsNode)
		{
			TaskAssignRuleInfo::Agent agentsObject;
			if(!valueDataTaskAssignRuleInfoAgentsAgent["AgentName"].isNull())
				agentsObject.agentName = valueDataTaskAssignRuleInfoAgentsAgent["AgentName"].asString();
			if(!valueDataTaskAssignRuleInfoAgentsAgent["AgentId"].isNull())
				agentsObject.agentId = valueDataTaskAssignRuleInfoAgentsAgent["AgentId"].asString();
			dataObject.agents.push_back(agentsObject);
		}
		auto allSkillGroupsNode = valueDataTaskAssignRuleInfo["SkillGroups"]["SkillGroup"];
		for (auto valueDataTaskAssignRuleInfoSkillGroupsSkillGroup : allSkillGroupsNode)
		{
			TaskAssignRuleInfo::SkillGroup skillGroupsObject;
			if(!valueDataTaskAssignRuleInfoSkillGroupsSkillGroup["SkillName"].isNull())
				skillGroupsObject.skillName = valueDataTaskAssignRuleInfoSkillGroupsSkillGroup["SkillName"].asString();
			if(!valueDataTaskAssignRuleInfoSkillGroupsSkillGroup["SkillId"].isNull())
				skillGroupsObject.skillId = valueDataTaskAssignRuleInfoSkillGroupsSkillGroup["SkillId"].asString();
			dataObject.skillGroups.push_back(skillGroupsObject);
		}
		auto allReviewersNode = valueDataTaskAssignRuleInfo["Reviewers"]["Reviewer"];
		for (auto valueDataTaskAssignRuleInfoReviewersReviewer : allReviewersNode)
		{
			TaskAssignRuleInfo::Reviewer reviewersObject;
			if(!valueDataTaskAssignRuleInfoReviewersReviewer["ReviewerId"].isNull())
				reviewersObject.reviewerId = valueDataTaskAssignRuleInfoReviewersReviewer["ReviewerId"].asString();
			if(!valueDataTaskAssignRuleInfoReviewersReviewer["ReviewerName"].isNull())
				reviewersObject.reviewerName = valueDataTaskAssignRuleInfoReviewersReviewer["ReviewerName"].asString();
			dataObject.reviewers.push_back(reviewersObject);
		}
		auto allRulesNode = valueDataTaskAssignRuleInfo["Rules"]["RuleBasicInfo"];
		for (auto valueDataTaskAssignRuleInfoRulesRuleBasicInfo : allRulesNode)
		{
			TaskAssignRuleInfo::RuleBasicInfo rulesObject;
			if(!valueDataTaskAssignRuleInfoRulesRuleBasicInfo["Name"].isNull())
				rulesObject.name = valueDataTaskAssignRuleInfoRulesRuleBasicInfo["Name"].asString();
			if(!valueDataTaskAssignRuleInfoRulesRuleBasicInfo["Rid"].isNull())
				rulesObject.rid = valueDataTaskAssignRuleInfoRulesRuleBasicInfo["Rid"].asString();
			dataObject.rules.push_back(rulesObject);
		}
		auto samplingModeNode = value["SamplingMode"];
		if(!samplingModeNode["NumberOfDraws"].isNull())
			dataObject.samplingMode.numberOfDraws = std::stoi(samplingModeNode["NumberOfDraws"].asString());
		if(!samplingModeNode["AnyNumberOfDraws"].isNull())
			dataObject.samplingMode.anyNumberOfDraws = std::stoi(samplingModeNode["AnyNumberOfDraws"].asString());
		if(!samplingModeNode["Limit"].isNull())
			dataObject.samplingMode.limit = std::stoi(samplingModeNode["Limit"].asString());
		if(!samplingModeNode["Proportion"].isNull())
			dataObject.samplingMode.proportion = std::stof(samplingModeNode["Proportion"].asString());
		if(!samplingModeNode["Dimension"].isNull())
			dataObject.samplingMode.dimension = std::stoi(samplingModeNode["Dimension"].asString());
		if(!samplingModeNode["Designated"].isNull())
			dataObject.samplingMode.designated = samplingModeNode["Designated"].asString() == "true";
		if(!samplingModeNode["RandomInspectionNumber"].isNull())
			dataObject.samplingMode.randomInspectionNumber = std::stoi(samplingModeNode["RandomInspectionNumber"].asString());
		auto allSamplingModeAgentsNode = samplingModeNode["SamplingModeAgents"]["SamplingModeAgent"];
		for (auto samplingModeNodeSamplingModeAgentsSamplingModeAgent : allSamplingModeAgentsNode)
		{
			TaskAssignRuleInfo::SamplingMode::SamplingModeAgent samplingModeAgentObject;
			if(!samplingModeNodeSamplingModeAgentsSamplingModeAgent["AgentName"].isNull())
				samplingModeAgentObject.agentName = samplingModeNodeSamplingModeAgentsSamplingModeAgent["AgentName"].asString();
			if(!samplingModeNodeSamplingModeAgentsSamplingModeAgent["AgentId"].isNull())
				samplingModeAgentObject.agentId = samplingModeNodeSamplingModeAgentsSamplingModeAgent["AgentId"].asString();
			dataObject.samplingMode.samplingModeAgents.push_back(samplingModeAgentObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());

}

std::string ListTaskAssignRulesResult::getMessage()const
{
	return message_;
}

int ListTaskAssignRulesResult::getPageSize()const
{
	return pageSize_;
}

int ListTaskAssignRulesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListTaskAssignRulesResult::TaskAssignRuleInfo> ListTaskAssignRulesResult::getData()const
{
	return data_;
}

int ListTaskAssignRulesResult::getCount()const
{
	return count_;
}

std::string ListTaskAssignRulesResult::getCode()const
{
	return code_;
}

bool ListTaskAssignRulesResult::getSuccess()const
{
	return success_;
}

