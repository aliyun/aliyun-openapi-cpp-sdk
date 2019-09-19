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

#include <alibabacloud/chatbot/model/DescribeKnowledgeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Chatbot;
using namespace AlibabaCloud::Chatbot::Model;

DescribeKnowledgeResult::DescribeKnowledgeResult() :
	ServiceResult()
{}

DescribeKnowledgeResult::DescribeKnowledgeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeKnowledgeResult::~DescribeKnowledgeResult()
{}

void DescribeKnowledgeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOutlinesNode = value["Outlines"]["Outline"];
	for (auto valueOutlinesOutline : allOutlinesNode)
	{
		Outline outlinesObject;
		if(!valueOutlinesOutline["KnowledgeId"].isNull())
			outlinesObject.knowledgeId = std::stol(valueOutlinesOutline["KnowledgeId"].asString());
		if(!valueOutlinesOutline["Title"].isNull())
			outlinesObject.title = valueOutlinesOutline["Title"].asString();
		if(!valueOutlinesOutline["OutlineId"].isNull())
			outlinesObject.outlineId = std::stol(valueOutlinesOutline["OutlineId"].asString());
		outlines_.push_back(outlinesObject);
	}
	auto allSimQuestionsNode = value["SimQuestions"]["SimQuestion"];
	for (auto valueSimQuestionsSimQuestion : allSimQuestionsNode)
	{
		SimQuestion simQuestionsObject;
		if(!valueSimQuestionsSimQuestion["ModifyTime"].isNull())
			simQuestionsObject.modifyTime = valueSimQuestionsSimQuestion["ModifyTime"].asString();
		if(!valueSimQuestionsSimQuestion["CreateTime"].isNull())
			simQuestionsObject.createTime = valueSimQuestionsSimQuestion["CreateTime"].asString();
		if(!valueSimQuestionsSimQuestion["SimQuestionId"].isNull())
			simQuestionsObject.simQuestionId = std::stol(valueSimQuestionsSimQuestion["SimQuestionId"].asString());
		if(!valueSimQuestionsSimQuestion["Title"].isNull())
			simQuestionsObject.title = valueSimQuestionsSimQuestion["Title"].asString();
		simQuestions_.push_back(simQuestionsObject);
	}
	auto allSolutionsNode = value["Solutions"]["Solution"];
	for (auto valueSolutionsSolution : allSolutionsNode)
	{
		Solution solutionsObject;
		if(!valueSolutionsSolution["Summary"].isNull())
			solutionsObject.summary = valueSolutionsSolution["Summary"].asString();
		if(!valueSolutionsSolution["ModifyTime"].isNull())
			solutionsObject.modifyTime = valueSolutionsSolution["ModifyTime"].asString();
		if(!valueSolutionsSolution["CreateTime"].isNull())
			solutionsObject.createTime = valueSolutionsSolution["CreateTime"].asString();
		if(!valueSolutionsSolution["SolutionId"].isNull())
			solutionsObject.solutionId = std::stol(valueSolutionsSolution["SolutionId"].asString());
		if(!valueSolutionsSolution["Content"].isNull())
			solutionsObject.content = valueSolutionsSolution["Content"].asString();
		if(!valueSolutionsSolution["PlainText"].isNull())
			solutionsObject.plainText = valueSolutionsSolution["PlainText"].asString();
		auto allPerspectiveIds = value["PerspectiveIds"]["PerspectiveId"];
		for (auto value : allPerspectiveIds)
			solutionsObject.perspectiveIds.push_back(value.asString());
		solutions_.push_back(solutionsObject);
	}
	auto allKeyWords = value["KeyWords"]["KeyWord"];
	for (const auto &item : allKeyWords)
		keyWords_.push_back(item.asString());
	auto allCoreWords = value["CoreWords"]["CoreWord"];
	for (const auto &item : allCoreWords)
		coreWords_.push_back(item.asString());
	if(!value["EndDate"].isNull())
		endDate_ = value["EndDate"].asString();
	if(!value["CreateUserName"].isNull())
		createUserName_ = value["CreateUserName"].asString();
	if(!value["KnowledgeTitle"].isNull())
		knowledgeTitle_ = value["KnowledgeTitle"].asString();
	if(!value["Version"].isNull())
		version_ = std::stoi(value["Version"].asString());
	if(!value["KnowledgeId"].isNull())
		knowledgeId_ = std::stol(value["KnowledgeId"].asString());
	if(!value["ModifyUserName"].isNull())
		modifyUserName_ = value["ModifyUserName"].asString();
	if(!value["ModifyTime"].isNull())
		modifyTime_ = value["ModifyTime"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["KnowledgeType"].isNull())
		knowledgeType_ = std::stoi(value["KnowledgeType"].asString());
	if(!value["CategoryId"].isNull())
		categoryId_ = std::stol(value["CategoryId"].asString());
	if(!value["StartDate"].isNull())
		startDate_ = value["StartDate"].asString();
	if(!value["KnowledgeStatus"].isNull())
		knowledgeStatus_ = std::stoi(value["KnowledgeStatus"].asString());

}

std::string DescribeKnowledgeResult::getKnowledgeTitle()const
{
	return knowledgeTitle_;
}

long DescribeKnowledgeResult::getCategoryId()const
{
	return categoryId_;
}

std::string DescribeKnowledgeResult::getModifyTime()const
{
	return modifyTime_;
}

std::vector<std::string> DescribeKnowledgeResult::getCoreWords()const
{
	return coreWords_;
}

std::string DescribeKnowledgeResult::getCreateTime()const
{
	return createTime_;
}

long DescribeKnowledgeResult::getKnowledgeId()const
{
	return knowledgeId_;
}

std::vector<std::string> DescribeKnowledgeResult::getKeyWords()const
{
	return keyWords_;
}

std::string DescribeKnowledgeResult::getEndDate()const
{
	return endDate_;
}

std::string DescribeKnowledgeResult::getCreateUserName()const
{
	return createUserName_;
}

std::string DescribeKnowledgeResult::getStartDate()const
{
	return startDate_;
}

std::vector<DescribeKnowledgeResult::SimQuestion> DescribeKnowledgeResult::getSimQuestions()const
{
	return simQuestions_;
}

std::vector<DescribeKnowledgeResult::Solution> DescribeKnowledgeResult::getSolutions()const
{
	return solutions_;
}

int DescribeKnowledgeResult::getVersion()const
{
	return version_;
}

std::string DescribeKnowledgeResult::getModifyUserName()const
{
	return modifyUserName_;
}

std::vector<DescribeKnowledgeResult::Outline> DescribeKnowledgeResult::getOutlines()const
{
	return outlines_;
}

int DescribeKnowledgeResult::getKnowledgeStatus()const
{
	return knowledgeStatus_;
}

int DescribeKnowledgeResult::getKnowledgeType()const
{
	return knowledgeType_;
}

