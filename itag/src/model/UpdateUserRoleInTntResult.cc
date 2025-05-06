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

#include <alibabacloud/itag/model/UpdateUserRoleInTntResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

UpdateUserRoleInTntResult::UpdateUserRoleInTntResult() :
	ServiceResult()
{}

UpdateUserRoleInTntResult::UpdateUserRoleInTntResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateUserRoleInTntResult::~UpdateUserRoleInTntResult()
{}

void UpdateUserRoleInTntResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["SuccCount"].isNull())
		result_.succCount = std::stoi(resultNode["SuccCount"].asString());
	if(!resultNode["FailCount"].isNull())
		result_.failCount = std::stoi(resultNode["FailCount"].asString());
	if(!resultNode["FailMsg"].isNull())
		result_.failMsg = resultNode["FailMsg"].asString();
	auto allSuccUserListNode = resultNode["SuccUserList"]["ITagSimpleUserVO"];
	for (auto resultNodeSuccUserListITagSimpleUserVO : allSuccUserListNode)
	{
		Result::ITagSimpleUserVO iTagSimpleUserVOObject;
		if(!resultNodeSuccUserListITagSimpleUserVO["UserId"].isNull())
			iTagSimpleUserVOObject.userId = resultNodeSuccUserListITagSimpleUserVO["UserId"].asString();
		if(!resultNodeSuccUserListITagSimpleUserVO["UserName"].isNull())
			iTagSimpleUserVOObject.userName = resultNodeSuccUserListITagSimpleUserVO["UserName"].asString();
		if(!resultNodeSuccUserListITagSimpleUserVO["AccountType"].isNull())
			iTagSimpleUserVOObject.accountType = resultNodeSuccUserListITagSimpleUserVO["AccountType"].asString();
		if(!resultNodeSuccUserListITagSimpleUserVO["AccountNo"].isNull())
			iTagSimpleUserVOObject.accountNo = resultNodeSuccUserListITagSimpleUserVO["AccountNo"].asString();
		result_.succUserList.push_back(iTagSimpleUserVOObject);
	}
	auto allFailUserListNode = resultNode["FailUserList"]["ITagSimpleUserVO"];
	for (auto resultNodeFailUserListITagSimpleUserVO : allFailUserListNode)
	{
		Result::ITagSimpleUserVO iTagSimpleUserVOObject;
		if(!resultNodeFailUserListITagSimpleUserVO["UserId"].isNull())
			iTagSimpleUserVOObject.userId = resultNodeFailUserListITagSimpleUserVO["UserId"].asString();
		if(!resultNodeFailUserListITagSimpleUserVO["UserName"].isNull())
			iTagSimpleUserVOObject.userName = resultNodeFailUserListITagSimpleUserVO["UserName"].asString();
		if(!resultNodeFailUserListITagSimpleUserVO["AccountType"].isNull())
			iTagSimpleUserVOObject.accountType = resultNodeFailUserListITagSimpleUserVO["AccountType"].asString();
		if(!resultNodeFailUserListITagSimpleUserVO["AccountNo"].isNull())
			iTagSimpleUserVOObject.accountNo = resultNodeFailUserListITagSimpleUserVO["AccountNo"].asString();
		result_.failUserList.push_back(iTagSimpleUserVOObject);
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

std::string UpdateUserRoleInTntResult::getMsg()const
{
	return msg_;
}

bool UpdateUserRoleInTntResult::getSucc()const
{
	return succ_;
}

std::string UpdateUserRoleInTntResult::getErrorCode()const
{
	return errorCode_;
}

std::string UpdateUserRoleInTntResult::getErrInfo()const
{
	return errInfo_;
}

std::string UpdateUserRoleInTntResult::getCode()const
{
	return code_;
}

UpdateUserRoleInTntResult::Result UpdateUserRoleInTntResult::getResult()const
{
	return result_;
}

