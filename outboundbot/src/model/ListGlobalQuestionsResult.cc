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

#include <alibabacloud/outboundbot/model/ListGlobalQuestionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

ListGlobalQuestionsResult::ListGlobalQuestionsResult() :
	ServiceResult()
{}

ListGlobalQuestionsResult::ListGlobalQuestionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListGlobalQuestionsResult::~ListGlobalQuestionsResult()
{}

void ListGlobalQuestionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto globalQuestionsNode = value["GlobalQuestions"];
	if(!globalQuestionsNode["PageNumber"].isNull())
		globalQuestions_.pageNumber = std::stoi(globalQuestionsNode["PageNumber"].asString());
	if(!globalQuestionsNode["PageSize"].isNull())
		globalQuestions_.pageSize = std::stoi(globalQuestionsNode["PageSize"].asString());
	if(!globalQuestionsNode["TotalCount"].isNull())
		globalQuestions_.totalCount = std::stoi(globalQuestionsNode["TotalCount"].asString());
	auto allListNode = globalQuestionsNode["List"]["GlobalQuestion"];
	for (auto globalQuestionsNodeListGlobalQuestion : allListNode)
	{
		GlobalQuestions::GlobalQuestion globalQuestionObject;
		if(!globalQuestionsNodeListGlobalQuestion["GlobalQuestionId"].isNull())
			globalQuestionObject.globalQuestionId = globalQuestionsNodeListGlobalQuestion["GlobalQuestionId"].asString();
		if(!globalQuestionsNodeListGlobalQuestion["Answers"].isNull())
			globalQuestionObject.answers = globalQuestionsNodeListGlobalQuestion["Answers"].asString();
		if(!globalQuestionsNodeListGlobalQuestion["GlobalQuestionType"].isNull())
			globalQuestionObject.globalQuestionType = globalQuestionsNodeListGlobalQuestion["GlobalQuestionType"].asString();
		if(!globalQuestionsNodeListGlobalQuestion["GlobalQuestionName"].isNull())
			globalQuestionObject.globalQuestionName = globalQuestionsNodeListGlobalQuestion["GlobalQuestionName"].asString();
		if(!globalQuestionsNodeListGlobalQuestion["Questions"].isNull())
			globalQuestionObject.questions = globalQuestionsNodeListGlobalQuestion["Questions"].asString();
		if(!globalQuestionsNodeListGlobalQuestion["ScriptId"].isNull())
			globalQuestionObject.scriptId = globalQuestionsNodeListGlobalQuestion["ScriptId"].asString();
		globalQuestions_.list.push_back(globalQuestionObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListGlobalQuestionsResult::getMessage()const
{
	return message_;
}

int ListGlobalQuestionsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListGlobalQuestionsResult::GlobalQuestions ListGlobalQuestionsResult::getGlobalQuestions()const
{
	return globalQuestions_;
}

std::string ListGlobalQuestionsResult::getCode()const
{
	return code_;
}

bool ListGlobalQuestionsResult::getSuccess()const
{
	return success_;
}

