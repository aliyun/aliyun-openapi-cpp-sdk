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

#include <alibabacloud/itag/model/ListAssignedSubUserTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

ListAssignedSubUserTaskResult::ListAssignedSubUserTaskResult() :
	ServiceResult()
{}

ListAssignedSubUserTaskResult::ListAssignedSubUserTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAssignedSubUserTaskResult::~ListAssignedSubUserTaskResult()
{}

void ListAssignedSubUserTaskResult::parse(const std::string &payload)
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
	auto allListNode = resultNode["List"]["ListItem"];
	for (auto resultNodeListListItem : allListNode)
	{
		Result::ListItem listItemObject;
		if(!resultNodeListListItem["TaskId"].isNull())
			listItemObject.taskId = resultNodeListListItem["TaskId"].asString();
		if(!resultNodeListListItem["TaskName"].isNull())
			listItemObject.taskName = resultNodeListListItem["TaskName"].asString();
		if(!resultNodeListListItem["Count"].isNull())
			listItemObject.count = std::stol(resultNodeListListItem["Count"].asString());
		if(!resultNodeListListItem["State"].isNull())
			listItemObject.state = resultNodeListListItem["State"].asString();
		if(!resultNodeListListItem["SubTaskId"].isNull())
			listItemObject.subTaskId = std::stol(resultNodeListListItem["SubTaskId"].asString());
		if(!resultNodeListListItem["CanRelease"].isNull())
			listItemObject.canRelease = resultNodeListListItem["CanRelease"].asString() == "true";
		if(!resultNodeListListItem["CanReassign"].isNull())
			listItemObject.canReassign = resultNodeListListItem["CanReassign"].asString() == "true";
		auto creatorNode = value["Creator"];
		if(!creatorNode["UserId"].isNull())
			listItemObject.creator.userId = creatorNode["UserId"].asString();
		if(!creatorNode["UserName"].isNull())
			listItemObject.creator.userName = creatorNode["UserName"].asString();
		if(!creatorNode["AccountType"].isNull())
			listItemObject.creator.accountType = creatorNode["AccountType"].asString();
		if(!creatorNode["AccountNo"].isNull())
			listItemObject.creator.accountNo = creatorNode["AccountNo"].asString();
		auto allTags = value["Tags"]["Tags"];
		for (auto value : allTags)
			listItemObject.tags.push_back(value.asString());
		result_.list.push_back(listItemObject);
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

std::string ListAssignedSubUserTaskResult::getMsg()const
{
	return msg_;
}

bool ListAssignedSubUserTaskResult::getSucc()const
{
	return succ_;
}

std::string ListAssignedSubUserTaskResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListAssignedSubUserTaskResult::getErrInfo()const
{
	return errInfo_;
}

std::string ListAssignedSubUserTaskResult::getCode()const
{
	return code_;
}

ListAssignedSubUserTaskResult::Result ListAssignedSubUserTaskResult::getResult()const
{
	return result_;
}

