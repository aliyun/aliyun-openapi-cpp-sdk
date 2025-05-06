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

#include <alibabacloud/itag/model/ListFinishedSubUserTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

ListFinishedSubUserTaskResult::ListFinishedSubUserTaskResult() :
	ServiceResult()
{}

ListFinishedSubUserTaskResult::ListFinishedSubUserTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFinishedSubUserTaskResult::~ListFinishedSubUserTaskResult()
{}

void ListFinishedSubUserTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["PageNum"].isNull())
		result_.pageNum = std::stoi(resultNode["PageNum"].asString());
	if(!resultNode["PageSize"].isNull())
		result_.pageSize = std::stoi(resultNode["PageSize"].asString());
	if(!resultNode["Total"].isNull())
		result_.total = std::stol(resultNode["Total"].asString());
	if(!resultNode["TotalPage"].isNull())
		result_.totalPage = std::stol(resultNode["TotalPage"].asString());
	auto allListNode = resultNode["List"]["ListItem"];
	for (auto resultNodeListListItem : allListNode)
	{
		Result::ListItem listItemObject;
		if(!resultNodeListListItem["SubTaskId"].isNull())
			listItemObject.subTaskId = resultNodeListListItem["SubTaskId"].asString();
		if(!resultNodeListListItem["TaskName"].isNull())
			listItemObject.taskName = resultNodeListListItem["TaskName"].asString();
		if(!resultNodeListListItem["TaskId"].isNull())
			listItemObject.taskId = resultNodeListListItem["TaskId"].asString();
		if(!resultNodeListListItem["State"].isNull())
			listItemObject.state = resultNodeListListItem["State"].asString();
		if(!resultNodeListListItem["WorkTime"].isNull())
			listItemObject.workTime = resultNodeListListItem["WorkTime"].asString();
		if(!resultNodeListListItem["WorkNode"].isNull())
			listItemObject.workNode = resultNodeListListItem["WorkNode"].asString();
		if(!resultNodeListListItem["UserSubTaskId"].isNull())
			listItemObject.userSubTaskId = resultNodeListListItem["UserSubTaskId"].asString();
		if(!resultNodeListListItem["GmtCreate"].isNull())
			listItemObject.gmtCreate = resultNodeListListItem["GmtCreate"].asString();
		if(!resultNodeListListItem["GmtModified"].isNull())
			listItemObject.gmtModified = resultNodeListListItem["GmtModified"].asString();
		auto creatorNode = value["Creator"];
		if(!creatorNode["UserId"].isNull())
			listItemObject.creator.userId = creatorNode["UserId"].asString();
		if(!creatorNode["UserName"].isNull())
			listItemObject.creator.userName = creatorNode["UserName"].asString();
		if(!creatorNode["AccountType"].isNull())
			listItemObject.creator.accountType = creatorNode["AccountType"].asString();
		if(!creatorNode["AccountNo"].isNull())
			listItemObject.creator.accountNo = creatorNode["AccountNo"].asString();
		if(!creatorNode["Email"].isNull())
			listItemObject.creator.email = creatorNode["Email"].asString();
		if(!creatorNode["PamNo"].isNull())
			listItemObject.creator.pamNo = creatorNode["PamNo"].asString();
		if(!creatorNode["SupplierId"].isNull())
			listItemObject.creator.supplierId = creatorNode["SupplierId"].asString();
		if(!creatorNode["SupplierName"].isNull())
			listItemObject.creator.supplierName = creatorNode["SupplierName"].asString();
		auto modifierNode = value["Modifier"];
		if(!modifierNode["UserId"].isNull())
			listItemObject.modifier.userId = modifierNode["UserId"].asString();
		if(!modifierNode["UserName"].isNull())
			listItemObject.modifier.userName = modifierNode["UserName"].asString();
		if(!modifierNode["AccountType"].isNull())
			listItemObject.modifier.accountType = modifierNode["AccountType"].asString();
		if(!modifierNode["AccountNo"].isNull())
			listItemObject.modifier.accountNo = modifierNode["AccountNo"].asString();
		if(!modifierNode["Email"].isNull())
			listItemObject.modifier.email = modifierNode["Email"].asString();
		if(!modifierNode["PamNo"].isNull())
			listItemObject.modifier.pamNo = modifierNode["PamNo"].asString();
		if(!modifierNode["SupplierId"].isNull())
			listItemObject.modifier.supplierId = modifierNode["SupplierId"].asString();
		if(!modifierNode["SupplierName"].isNull())
			listItemObject.modifier.supplierName = modifierNode["SupplierName"].asString();
		result_.list.push_back(listItemObject);
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

std::string ListFinishedSubUserTaskResult::getMsg()const
{
	return msg_;
}

long ListFinishedSubUserTaskResult::getRt()const
{
	return rt_;
}

bool ListFinishedSubUserTaskResult::getSucc()const
{
	return succ_;
}

std::string ListFinishedSubUserTaskResult::getHost()const
{
	return host_;
}

std::string ListFinishedSubUserTaskResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListFinishedSubUserTaskResult::getErrInfo()const
{
	return errInfo_;
}

int ListFinishedSubUserTaskResult::getCode()const
{
	return code_;
}

ListFinishedSubUserTaskResult::Result ListFinishedSubUserTaskResult::getResult()const
{
	return result_;
}

