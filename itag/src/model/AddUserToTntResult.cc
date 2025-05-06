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

#include <alibabacloud/itag/model/AddUserToTntResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

AddUserToTntResult::AddUserToTntResult() :
	ServiceResult()
{}

AddUserToTntResult::AddUserToTntResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AddUserToTntResult::~AddUserToTntResult()
{}

void AddUserToTntResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["SuccCount"].isNull())
		result_.succCount = std::stol(resultNode["SuccCount"].asString());
	if(!resultNode["FailCount"].isNull())
		result_.failCount = std::stol(resultNode["FailCount"].asString());
	auto allSuccUserListNode = resultNode["SuccUserList"]["SuccUserListItem"];
	for (auto resultNodeSuccUserListSuccUserListItem : allSuccUserListNode)
	{
		Result::SuccUserListItem succUserListItemObject;
		if(!resultNodeSuccUserListSuccUserListItem["UserId"].isNull())
			succUserListItemObject.userId = resultNodeSuccUserListSuccUserListItem["UserId"].asString();
		if(!resultNodeSuccUserListSuccUserListItem["UserName"].isNull())
			succUserListItemObject.userName = resultNodeSuccUserListSuccUserListItem["UserName"].asString();
		if(!resultNodeSuccUserListSuccUserListItem["AccountType"].isNull())
			succUserListItemObject.accountType = resultNodeSuccUserListSuccUserListItem["AccountType"].asString();
		if(!resultNodeSuccUserListSuccUserListItem["AccountNo"].isNull())
			succUserListItemObject.accountNo = resultNodeSuccUserListSuccUserListItem["AccountNo"].asString();
		result_.succUserList.push_back(succUserListItemObject);
	}
	auto allFailUserListNode = resultNode["FailUserList"]["FailUserListItem"];
	for (auto resultNodeFailUserListFailUserListItem : allFailUserListNode)
	{
		Result::FailUserListItem failUserListItemObject;
		if(!resultNodeFailUserListFailUserListItem["UserId"].isNull())
			failUserListItemObject.userId = resultNodeFailUserListFailUserListItem["UserId"].asString();
		if(!resultNodeFailUserListFailUserListItem["UserName"].isNull())
			failUserListItemObject.userName = resultNodeFailUserListFailUserListItem["UserName"].asString();
		if(!resultNodeFailUserListFailUserListItem["AccountType"].isNull())
			failUserListItemObject.accountType = resultNodeFailUserListFailUserListItem["AccountType"].asString();
		if(!resultNodeFailUserListFailUserListItem["AccountNo"].isNull())
			failUserListItemObject.accountNo = resultNodeFailUserListFailUserListItem["AccountNo"].asString();
		result_.failUserList.push_back(failUserListItemObject);
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

std::string AddUserToTntResult::getMsg()const
{
	return msg_;
}

bool AddUserToTntResult::getSucc()const
{
	return succ_;
}

std::string AddUserToTntResult::getErrorCode()const
{
	return errorCode_;
}

std::string AddUserToTntResult::getErrInfo()const
{
	return errInfo_;
}

std::string AddUserToTntResult::getCode()const
{
	return code_;
}

AddUserToTntResult::Result AddUserToTntResult::getResult()const
{
	return result_;
}

