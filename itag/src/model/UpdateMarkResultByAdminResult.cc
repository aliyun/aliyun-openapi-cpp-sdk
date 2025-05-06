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

#include <alibabacloud/itag/model/UpdateMarkResultByAdminResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

UpdateMarkResultByAdminResult::UpdateMarkResultByAdminResult() :
	ServiceResult()
{}

UpdateMarkResultByAdminResult::UpdateMarkResultByAdminResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateMarkResultByAdminResult::~UpdateMarkResultByAdminResult()
{}

void UpdateMarkResultByAdminResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["CanCommit"].isNull())
		result_.canCommit = resultNode["CanCommit"].asString() == "true";
	if(!resultNode["CommitMsg"].isNull())
		result_.commitMsg = resultNode["CommitMsg"].asString();
	if(!resultNode["AllUpdateSucc"].isNull())
		result_.allUpdateSucc = resultNode["AllUpdateSucc"].asString() == "true";
	auto allFailListNode = resultNode["FailList"]["FailListItem"];
	for (auto resultNodeFailListFailListItem : allFailListNode)
	{
		Result::FailListItem failListItemObject;
		if(!resultNodeFailListFailListItem["MarkResultId"].isNull())
			failListItemObject.markResultId = resultNodeFailListFailListItem["MarkResultId"].asString();
		if(!resultNodeFailListFailListItem["QuestionId"].isNull())
			failListItemObject.questionId = resultNodeFailListFailListItem["QuestionId"].asString();
		if(!resultNodeFailListFailListItem["MarkResult"].isNull())
			failListItemObject.markResult = resultNodeFailListFailListItem["MarkResult"].asString();
		if(!resultNodeFailListFailListItem["QuestionTitle"].isNull())
			failListItemObject.questionTitle = resultNodeFailListFailListItem["QuestionTitle"].asString();
		if(!resultNodeFailListFailListItem["QuestionType"].isNull())
			failListItemObject.questionType = resultNodeFailListFailListItem["QuestionType"].asString();
		if(!resultNodeFailListFailListItem["Version"].isNull())
			failListItemObject.version = resultNodeFailListFailListItem["Version"].asString();
		result_.failList.push_back(failListItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrInfo"].isNull())
		errInfo_ = value["ErrInfo"].asString();
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["Succ"].isNull())
		succ_ = value["Succ"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string UpdateMarkResultByAdminResult::getMsg()const
{
	return msg_;
}

bool UpdateMarkResultByAdminResult::getSucc()const
{
	return succ_;
}

std::string UpdateMarkResultByAdminResult::getErrorCode()const
{
	return errorCode_;
}

std::string UpdateMarkResultByAdminResult::getErrInfo()const
{
	return errInfo_;
}

std::string UpdateMarkResultByAdminResult::getCode()const
{
	return code_;
}

UpdateMarkResultByAdminResult::Result UpdateMarkResultByAdminResult::getResult()const
{
	return result_;
}

