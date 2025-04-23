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

#include <alibabacloud/eds-user/model/LockUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eds_user;
using namespace AlibabaCloud::Eds_user::Model;

LockUsersResult::LockUsersResult() :
	ServiceResult()
{}

LockUsersResult::LockUsersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

LockUsersResult::~LockUsersResult()
{}

void LockUsersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto lockUsersResultNode = value["LockUsersResult"];
	auto allFailedUsersNode = lockUsersResultNode["FailedUsers"]["FailedUsersItem"];
	for (auto lockUsersResultNodeFailedUsersFailedUsersItem : allFailedUsersNode)
	{
		Result::FailedUsersItem failedUsersItemObject;
		if(!lockUsersResultNodeFailedUsersFailedUsersItem["EndUserId"].isNull())
			failedUsersItemObject.endUserId = lockUsersResultNodeFailedUsersFailedUsersItem["EndUserId"].asString();
		if(!lockUsersResultNodeFailedUsersFailedUsersItem["ErrorCode"].isNull())
			failedUsersItemObject.errorCode = lockUsersResultNodeFailedUsersFailedUsersItem["ErrorCode"].asString();
		if(!lockUsersResultNodeFailedUsersFailedUsersItem["ErrorMessage"].isNull())
			failedUsersItemObject.errorMessage = lockUsersResultNodeFailedUsersFailedUsersItem["ErrorMessage"].asString();
		result_.failedUsers.push_back(failedUsersItemObject);
	}
		auto allLockedUsers = lockUsersResultNode["LockedUsers"]["LockedUsers"];
		for (auto value : allLockedUsers)
			result_.lockedUsers.push_back(value.asString());

}

LockUsersResult::Result LockUsersResult::getLockUsersResult()const
{
	return lockUsersResult_;
}

