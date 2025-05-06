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

#include <alibabacloud/itag/model/GetHistoryMarkResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

GetHistoryMarkResultResult::GetHistoryMarkResultResult() :
	ServiceResult()
{}

GetHistoryMarkResultResult::GetHistoryMarkResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetHistoryMarkResultResult::~GetHistoryMarkResultResult()
{}

void GetHistoryMarkResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["WorkNode"].isNull())
			resultObject.workNode = valueResultResultItem["WorkNode"].asString();
		if(!valueResultResultItem["AccountNo"].isNull())
			resultObject.accountNo = valueResultResultItem["AccountNo"].asString();
		if(!valueResultResultItem["Name"].isNull())
			resultObject.name = valueResultResultItem["Name"].asString();
		auto allUserMarkResultsNode = valueResultResultItem["UserMarkResults"]["UserMarkResult"];
		for (auto valueResultResultItemUserMarkResultsUserMarkResult : allUserMarkResultsNode)
		{
			ResultItem::UserMarkResult userMarkResultsObject;
			if(!valueResultResultItemUserMarkResultsUserMarkResult["MarkResultId"].isNull())
				userMarkResultsObject.markResultId = valueResultResultItemUserMarkResultsUserMarkResult["MarkResultId"].asString();
			if(!valueResultResultItemUserMarkResultsUserMarkResult["MarkTitle"].isNull())
				userMarkResultsObject.markTitle = valueResultResultItemUserMarkResultsUserMarkResult["MarkTitle"].asString();
			if(!valueResultResultItemUserMarkResultsUserMarkResult["MarkResult"].isNull())
				userMarkResultsObject.markResult = valueResultResultItemUserMarkResultsUserMarkResult["MarkResult"].asString();
			if(!valueResultResultItemUserMarkResultsUserMarkResult["QuestionId"].isNull())
				userMarkResultsObject.questionId = valueResultResultItemUserMarkResultsUserMarkResult["QuestionId"].asString();
			if(!valueResultResultItemUserMarkResultsUserMarkResult["ResultType"].isNull())
				userMarkResultsObject.resultType = valueResultResultItemUserMarkResultsUserMarkResult["ResultType"].asString();
			if(!valueResultResultItemUserMarkResultsUserMarkResult["Version"].isNull())
				userMarkResultsObject.version = valueResultResultItemUserMarkResultsUserMarkResult["Version"].asString();
			if(!valueResultResultItemUserMarkResultsUserMarkResult["MarkTime"].isNull())
				userMarkResultsObject.markTime = valueResultResultItemUserMarkResultsUserMarkResult["MarkTime"].asString();
			auto progressNode = value["Progress"];
			if(!progressNode["Total"].isNull())
				userMarkResultsObject.progress.total = std::stoi(progressNode["Total"].asString());
			if(!progressNode["Finished"].isNull())
				userMarkResultsObject.progress.finished = std::stoi(progressNode["Finished"].asString());
			resultObject.userMarkResults.push_back(userMarkResultsObject);
		}
		result_.push_back(resultObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["ErrInfo"].isNull())
		errInfo_ = value["ErrInfo"].asString();
	if(!value["Succ"].isNull())
		succ_ = value["Succ"].asString() == "true";
	if(!value["Rt"].isNull())
		rt_ = std::stol(value["Rt"].asString());
	if(!value["Host"].isNull())
		host_ = value["Host"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string GetHistoryMarkResultResult::getMsg()const
{
	return msg_;
}

long GetHistoryMarkResultResult::getRt()const
{
	return rt_;
}

bool GetHistoryMarkResultResult::getSucc()const
{
	return succ_;
}

std::string GetHistoryMarkResultResult::getHost()const
{
	return host_;
}

std::string GetHistoryMarkResultResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetHistoryMarkResultResult::getErrInfo()const
{
	return errInfo_;
}

int GetHistoryMarkResultResult::getCode()const
{
	return code_;
}

std::vector<GetHistoryMarkResultResult::ResultItem> GetHistoryMarkResultResult::getResult()const
{
	return result_;
}

