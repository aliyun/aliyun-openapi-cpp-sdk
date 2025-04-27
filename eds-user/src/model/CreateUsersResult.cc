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

#include <alibabacloud/eds-user/model/CreateUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eds_user;
using namespace AlibabaCloud::Eds_user::Model;

CreateUsersResult::CreateUsersResult() :
	ServiceResult()
{}

CreateUsersResult::CreateUsersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateUsersResult::~CreateUsersResult()
{}

void CreateUsersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto createResultNode = value["CreateResult"];
	auto allCreatedUsersNode = createResultNode["CreatedUsers"]["createdUsersItem"];
	for (auto createResultNodeCreatedUserscreatedUsersItem : allCreatedUsersNode)
	{
		CreateResult::CreatedUsersItem createdUsersItemObject;
		if(!createResultNodeCreatedUserscreatedUsersItem["EndUserId"].isNull())
			createdUsersItemObject.endUserId = createResultNodeCreatedUserscreatedUsersItem["EndUserId"].asString();
		if(!createResultNodeCreatedUserscreatedUsersItem["Email"].isNull())
			createdUsersItemObject.email = createResultNodeCreatedUserscreatedUsersItem["Email"].asString();
		if(!createResultNodeCreatedUserscreatedUsersItem["Phone"].isNull())
			createdUsersItemObject.phone = createResultNodeCreatedUserscreatedUsersItem["Phone"].asString();
		if(!createResultNodeCreatedUserscreatedUsersItem["Remark"].isNull())
			createdUsersItemObject.remark = createResultNodeCreatedUserscreatedUsersItem["Remark"].asString();
		if(!createResultNodeCreatedUserscreatedUsersItem["RealNickName"].isNull())
			createdUsersItemObject.realNickName = createResultNodeCreatedUserscreatedUsersItem["RealNickName"].asString();
		createResult_.createdUsers.push_back(createdUsersItemObject);
	}
	auto allFailedUsersNode = createResultNode["FailedUsers"]["failedUsersItem"];
	for (auto createResultNodeFailedUsersfailedUsersItem : allFailedUsersNode)
	{
		CreateResult::FailedUsersItem failedUsersItemObject;
		if(!createResultNodeFailedUsersfailedUsersItem["EndUserId"].isNull())
			failedUsersItemObject.endUserId = createResultNodeFailedUsersfailedUsersItem["EndUserId"].asString();
		if(!createResultNodeFailedUsersfailedUsersItem["Email"].isNull())
			failedUsersItemObject.email = createResultNodeFailedUsersfailedUsersItem["Email"].asString();
		if(!createResultNodeFailedUsersfailedUsersItem["Phone"].isNull())
			failedUsersItemObject.phone = createResultNodeFailedUsersfailedUsersItem["Phone"].asString();
		if(!createResultNodeFailedUsersfailedUsersItem["ErrorCode"].isNull())
			failedUsersItemObject.errorCode = createResultNodeFailedUsersfailedUsersItem["ErrorCode"].asString();
		if(!createResultNodeFailedUsersfailedUsersItem["ErrorMessage"].isNull())
			failedUsersItemObject.errorMessage = createResultNodeFailedUsersfailedUsersItem["ErrorMessage"].asString();
		createResult_.failedUsers.push_back(failedUsersItemObject);
	}
	if(!value["AllSucceed"].isNull())
		allSucceed_ = value["AllSucceed"].asString() == "true";

}

bool CreateUsersResult::getAllSucceed()const
{
	return allSucceed_;
}

CreateUsersResult::CreateResult CreateUsersResult::getCreateResult()const
{
	return createResult_;
}

