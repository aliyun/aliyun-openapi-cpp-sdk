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

#include <alibabacloud/companyreg/model/BindProduceAuthorizationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

BindProduceAuthorizationResult::BindProduceAuthorizationResult() :
	ServiceResult()
{}

BindProduceAuthorizationResult::BindProduceAuthorizationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BindProduceAuthorizationResult::~BindProduceAuthorizationResult()
{}

void BindProduceAuthorizationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Success"].isNull())
		data_.success = dataNode["Success"].asString() == "true";
	if(!dataNode["Message"].isNull())
		data_.message = dataNode["Message"].asString();
	auto allAuthorizedUserListNode = dataNode["AuthorizedUserList"]["AuthorizedUserListItem"];
	for (auto dataNodeAuthorizedUserListAuthorizedUserListItem : allAuthorizedUserListNode)
	{
		Data::AuthorizedUserListItem authorizedUserListItemObject;
		if(!dataNodeAuthorizedUserListAuthorizedUserListItem["UserId"].isNull())
			authorizedUserListItemObject.userId = dataNodeAuthorizedUserListAuthorizedUserListItem["UserId"].asString();
		if(!dataNodeAuthorizedUserListAuthorizedUserListItem["UserName"].isNull())
			authorizedUserListItemObject.userName = dataNodeAuthorizedUserListAuthorizedUserListItem["UserName"].asString();
		if(!dataNodeAuthorizedUserListAuthorizedUserListItem["AccountValidType"].isNull())
			authorizedUserListItemObject.accountValidType = std::stoi(dataNodeAuthorizedUserListAuthorizedUserListItem["AccountValidType"].asString());
		data_.authorizedUserList.push_back(authorizedUserListItemObject);
	}
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string BindProduceAuthorizationResult::getErrorMsg()const
{
	return errorMsg_;
}

BindProduceAuthorizationResult::Data BindProduceAuthorizationResult::getData()const
{
	return data_;
}

std::string BindProduceAuthorizationResult::getErrorCode()const
{
	return errorCode_;
}

