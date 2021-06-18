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

#include <alibabacloud/cloudesl/model/DescribeUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

DescribeUsersResult::DescribeUsersResult() :
	ServiceResult()
{}

DescribeUsersResult::DescribeUsersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUsersResult::~DescribeUsersResult()
{}

void DescribeUsersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUsersNode = value["Users"]["UserInfo"];
	for (auto valueUsersUserInfo : allUsersNode)
	{
		UserInfo usersObject;
		if(!valueUsersUserInfo["Stores"].isNull())
			usersObject.stores = valueUsersUserInfo["Stores"].asString();
		if(!valueUsersUserInfo["UserName"].isNull())
			usersObject.userName = valueUsersUserInfo["UserName"].asString();
		if(!valueUsersUserInfo["UserId"].isNull())
			usersObject.userId = valueUsersUserInfo["UserId"].asString();
		if(!valueUsersUserInfo["UserType"].isNull())
			usersObject.userType = valueUsersUserInfo["UserType"].asString();
		if(!valueUsersUserInfo["OwnerId"].isNull())
			usersObject.ownerId = valueUsersUserInfo["OwnerId"].asString();
		if(!valueUsersUserInfo["Bid"].isNull())
			usersObject.bid = valueUsersUserInfo["Bid"].asString();
		auto allDingTalkInfosNode = valueUsersUserInfo["DingTalkInfos"]["DingTalkInfo"];
		for (auto valueUsersUserInfoDingTalkInfosDingTalkInfo : allDingTalkInfosNode)
		{
			UserInfo::DingTalkInfo dingTalkInfosObject;
			if(!valueUsersUserInfoDingTalkInfosDingTalkInfo["DingTalkCompanyId"].isNull())
				dingTalkInfosObject.dingTalkCompanyId = valueUsersUserInfoDingTalkInfosDingTalkInfo["DingTalkCompanyId"].asString();
			if(!valueUsersUserInfoDingTalkInfosDingTalkInfo["DingTalkUserId"].isNull())
				dingTalkInfosObject.dingTalkUserId = valueUsersUserInfoDingTalkInfosDingTalkInfo["DingTalkUserId"].asString();
			usersObject.dingTalkInfos.push_back(dingTalkInfosObject);
		}
		users_.push_back(usersObject);
	}
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeUsersResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeUsersResult::getMessage()const
{
	return message_;
}

int DescribeUsersResult::getPageSize()const
{
	return pageSize_;
}

int DescribeUsersResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeUsersResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::vector<DescribeUsersResult::UserInfo> DescribeUsersResult::getUsers()const
{
	return users_;
}

std::string DescribeUsersResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeUsersResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeUsersResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribeUsersResult::getCode()const
{
	return code_;
}

bool DescribeUsersResult::getSuccess()const
{
	return success_;
}

