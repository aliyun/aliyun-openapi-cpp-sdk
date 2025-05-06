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

#include <alibabacloud/itag/model/SkipFinishedResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

SkipFinishedResult::SkipFinishedResult() :
	ServiceResult()
{}

SkipFinishedResult::SkipFinishedResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SkipFinishedResult::~SkipFinishedResult()
{}

void SkipFinishedResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["PageNum"].isNull())
		result_.pageNum = std::stol(resultNode["PageNum"].asString());
	if(!resultNode["PageSize"].isNull())
		result_.pageSize = std::stol(resultNode["PageSize"].asString());
	if(!resultNode["Total"].isNull())
		result_.total = std::stol(resultNode["Total"].asString());
	if(!resultNode["TotalPage"].isNull())
		result_.totalPage = std::stol(resultNode["TotalPage"].asString());
	auto allListNode = resultNode["List"]["ITagSubTaskDTO"];
	for (auto resultNodeListITagSubTaskDTO : allListNode)
	{
		Result::ITagSubTaskDTO iTagSubTaskDTOObject;
		if(!resultNodeListITagSubTaskDTO["Id"].isNull())
			iTagSubTaskDTOObject.id = resultNodeListITagSubTaskDTO["Id"].asString();
		if(!resultNodeListITagSubTaskDTO["TaskId"].isNull())
			iTagSubTaskDTOObject.taskId = resultNodeListITagSubTaskDTO["TaskId"].asString();
		if(!resultNodeListITagSubTaskDTO["CurrentWorkNode"].isNull())
			iTagSubTaskDTOObject.currentWorkNode = resultNodeListITagSubTaskDTO["CurrentWorkNode"].asString();
		if(!resultNodeListITagSubTaskDTO["CurrentUserSubTaskId"].isNull())
			iTagSubTaskDTOObject.currentUserSubTaskId = resultNodeListITagSubTaskDTO["CurrentUserSubTaskId"].asString();
		if(!resultNodeListITagSubTaskDTO["WorkNodeState"].isNull())
			iTagSubTaskDTOObject.workNodeState = resultNodeListITagSubTaskDTO["WorkNodeState"].asString();
		if(!resultNodeListITagSubTaskDTO["WorkNodeUsers"].isNull())
			iTagSubTaskDTOObject.workNodeUsers = resultNodeListITagSubTaskDTO["WorkNodeUsers"].asString();
		if(!resultNodeListITagSubTaskDTO["CanReassign"].isNull())
			iTagSubTaskDTOObject.canReassign = resultNodeListITagSubTaskDTO["CanReassign"].asString() == "true";
		if(!resultNodeListITagSubTaskDTO["CanRelease"].isNull())
			iTagSubTaskDTOObject.canRelease = resultNodeListITagSubTaskDTO["CanRelease"].asString() == "true";
		if(!resultNodeListITagSubTaskDTO["CanDiscard"].isNull())
			iTagSubTaskDTOObject.canDiscard = resultNodeListITagSubTaskDTO["CanDiscard"].asString() == "true";
		auto currentHandlerNode = value["CurrentHandler"];
		if(!currentHandlerNode["UserId"].isNull())
			iTagSubTaskDTOObject.currentHandler.userId = currentHandlerNode["UserId"].asString();
		if(!currentHandlerNode["UserName"].isNull())
			iTagSubTaskDTOObject.currentHandler.userName = currentHandlerNode["UserName"].asString();
		if(!currentHandlerNode["AccountType"].isNull())
			iTagSubTaskDTOObject.currentHandler.accountType = currentHandlerNode["AccountType"].asString();
		if(!currentHandlerNode["AccountNo"].isNull())
			iTagSubTaskDTOObject.currentHandler.accountNo = currentHandlerNode["AccountNo"].asString();
		result_.list.push_back(iTagSubTaskDTOObject);
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

std::string SkipFinishedResult::getMsg()const
{
	return msg_;
}

bool SkipFinishedResult::getSucc()const
{
	return succ_;
}

std::string SkipFinishedResult::getErrorCode()const
{
	return errorCode_;
}

std::string SkipFinishedResult::getErrInfo()const
{
	return errInfo_;
}

std::string SkipFinishedResult::getCode()const
{
	return code_;
}

SkipFinishedResult::Result SkipFinishedResult::getResult()const
{
	return result_;
}

