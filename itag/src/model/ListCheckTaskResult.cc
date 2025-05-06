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

#include <alibabacloud/itag/model/ListCheckTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

ListCheckTaskResult::ListCheckTaskResult() :
	ServiceResult()
{}

ListCheckTaskResult::ListCheckTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCheckTaskResult::~ListCheckTaskResult()
{}

void ListCheckTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["CanRelease"].isNull())
			resultObject.canRelease = valueResultResultItem["CanRelease"].asString() == "true";
		if(!valueResultResultItem["CanReassign"].isNull())
			resultObject.canReassign = valueResultResultItem["CanReassign"].asString() == "true";
		if(!valueResultResultItem["SubTaskId"].isNull())
			resultObject.subTaskId = valueResultResultItem["SubTaskId"].asString();
		if(!valueResultResultItem["UserSubTaskId"].isNull())
			resultObject.userSubTaskId = valueResultResultItem["UserSubTaskId"].asString();
		if(!valueResultResultItem["TaskName"].isNull())
			resultObject.taskName = valueResultResultItem["TaskName"].asString();
		if(!valueResultResultItem["TaskId"].isNull())
			resultObject.taskId = valueResultResultItem["TaskId"].asString();
		if(!valueResultResultItem["Source"].isNull())
			resultObject.source = valueResultResultItem["Source"].asString();
		if(!valueResultResultItem["State"].isNull())
			resultObject.state = valueResultResultItem["State"].asString();
		if(!valueResultResultItem["GmtCreate"].isNull())
			resultObject.gmtCreate = valueResultResultItem["GmtCreate"].asString();
		if(!valueResultResultItem["GmtModified"].isNull())
			resultObject.gmtModified = valueResultResultItem["GmtModified"].asString();
		auto creatorNode = value["Creator"];
		if(!creatorNode["UserId"].isNull())
			resultObject.creator.userId = creatorNode["UserId"].asString();
		if(!creatorNode["UserName"].isNull())
			resultObject.creator.userName = creatorNode["UserName"].asString();
		if(!creatorNode["AccountType"].isNull())
			resultObject.creator.accountType = creatorNode["AccountType"].asString();
		if(!creatorNode["AccountNo"].isNull())
			resultObject.creator.accountNo = creatorNode["AccountNo"].asString();
		if(!creatorNode["Email"].isNull())
			resultObject.creator.email = creatorNode["Email"].asString();
		if(!creatorNode["PamNo"].isNull())
			resultObject.creator.pamNo = creatorNode["PamNo"].asString();
		if(!creatorNode["SupplierId"].isNull())
			resultObject.creator.supplierId = creatorNode["SupplierId"].asString();
		if(!creatorNode["SupplierName"].isNull())
			resultObject.creator.supplierName = creatorNode["SupplierName"].asString();
		auto modifierNode = value["Modifier"];
		if(!modifierNode["UserId"].isNull())
			resultObject.modifier.userId = modifierNode["UserId"].asString();
		if(!modifierNode["UserName"].isNull())
			resultObject.modifier.userName = modifierNode["UserName"].asString();
		if(!modifierNode["AccountType"].isNull())
			resultObject.modifier.accountType = modifierNode["AccountType"].asString();
		if(!modifierNode["AccountNo"].isNull())
			resultObject.modifier.accountNo = modifierNode["AccountNo"].asString();
		if(!modifierNode["Email"].isNull())
			resultObject.modifier.email = modifierNode["Email"].asString();
		if(!modifierNode["PamNo"].isNull())
			resultObject.modifier.pamNo = modifierNode["PamNo"].asString();
		if(!modifierNode["SupplierId"].isNull())
			resultObject.modifier.supplierId = modifierNode["SupplierId"].asString();
		if(!modifierNode["SupplierName"].isNull())
			resultObject.modifier.supplierName = modifierNode["SupplierName"].asString();
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
			resultObject.tags.push_back(value.asString());
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

std::string ListCheckTaskResult::getMsg()const
{
	return msg_;
}

long ListCheckTaskResult::getRt()const
{
	return rt_;
}

bool ListCheckTaskResult::getSucc()const
{
	return succ_;
}

std::string ListCheckTaskResult::getHost()const
{
	return host_;
}

std::string ListCheckTaskResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListCheckTaskResult::getErrInfo()const
{
	return errInfo_;
}

int ListCheckTaskResult::getCode()const
{
	return code_;
}

std::vector<ListCheckTaskResult::ResultItem> ListCheckTaskResult::getResult()const
{
	return result_;
}

