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

#include <alibabacloud/eds-user/model/ResetUserPasswordResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eds_user;
using namespace AlibabaCloud::Eds_user::Model;

ResetUserPasswordResult::ResetUserPasswordResult() :
	ServiceResult()
{}

ResetUserPasswordResult::ResetUserPasswordResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ResetUserPasswordResult::~ResetUserPasswordResult()
{}

void ResetUserPasswordResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resetUsersResultNode = value["ResetUsersResult"];
	auto allFailedUsersNode = resetUsersResultNode["FailedUsers"]["failedUsersItem"];
	for (auto resetUsersResultNodeFailedUsersfailedUsersItem : allFailedUsersNode)
	{
		ResetUsersResult::FailedUsersItem failedUsersItemObject;
		if(!resetUsersResultNodeFailedUsersfailedUsersItem["EndUserId"].isNull())
			failedUsersItemObject.endUserId = resetUsersResultNodeFailedUsersfailedUsersItem["EndUserId"].asString();
		if(!resetUsersResultNodeFailedUsersfailedUsersItem["ErrorCode"].isNull())
			failedUsersItemObject.errorCode = resetUsersResultNodeFailedUsersfailedUsersItem["ErrorCode"].asString();
		if(!resetUsersResultNodeFailedUsersfailedUsersItem["ErrorMessage"].isNull())
			failedUsersItemObject.errorMessage = resetUsersResultNodeFailedUsersfailedUsersItem["ErrorMessage"].asString();
		resetUsersResult_.failedUsers.push_back(failedUsersItemObject);
	}
		auto allResetUsers = resetUsersResultNode["ResetUsers"]["ResetUsers"];
		for (auto value : allResetUsers)
			resetUsersResult_.resetUsers.push_back(value.asString());

}

ResetUserPasswordResult::ResetUsersResult ResetUserPasswordResult::getResetUsersResult()const
{
	return resetUsersResult_;
}

