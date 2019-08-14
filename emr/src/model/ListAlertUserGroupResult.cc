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

#include <alibabacloud/emr/model/ListAlertUserGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListAlertUserGroupResult::ListAlertUserGroupResult() :
	ServiceResult()
{}

ListAlertUserGroupResult::ListAlertUserGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAlertUserGroupResult::~ListAlertUserGroupResult()
{}

void ListAlertUserGroupResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allAlertUserGroupList = value["AlertUserGroupList"]["Group"];
	for (auto value : allAlertUserGroupList)
	{
		Group alertUserGroupListObject;
		if(!value["Id"].isNull())
			alertUserGroupListObject.id = std::stol(value["Id"].asString());
		if(!value["GmtCreate"].isNull())
			alertUserGroupListObject.gmtCreate = value["GmtCreate"].asString();
		if(!value["GmtModified"].isNull())
			alertUserGroupListObject.gmtModified = value["GmtModified"].asString();
		if(!value["BizId"].isNull())
			alertUserGroupListObject.bizId = value["BizId"].asString();
		if(!value["Name"].isNull())
			alertUserGroupListObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			alertUserGroupListObject.description = value["Description"].asString();
		auto allUserList = value["UserList"]["UserInfo"];
		for (auto value : allUserList)
		{
			Group::UserInfo userListObject;
			if(!value["UserId"].isNull())
				userListObject.userId = value["UserId"].asString();
			if(!value["UserName"].isNull())
				userListObject.userName = value["UserName"].asString();
			if(!value["EnableSMS"].isNull())
				userListObject.enableSMS = value["EnableSMS"].asString() == "true";
			if(!value["EnableEmail"].isNull())
				userListObject.enableEmail = value["EnableEmail"].asString() == "true";
			alertUserGroupListObject.userList.push_back(userListObject);
		}
		alertUserGroupList_.push_back(alertUserGroupListObject);
	}

}

std::vector<ListAlertUserGroupResult::Group> ListAlertUserGroupResult::getAlertUserGroupList()const
{
	return alertUserGroupList_;
}

