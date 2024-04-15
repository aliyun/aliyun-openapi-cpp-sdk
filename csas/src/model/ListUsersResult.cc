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

#include <alibabacloud/csas/model/ListUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

ListUsersResult::ListUsersResult() :
	ServiceResult()
{}

ListUsersResult::ListUsersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUsersResult::~ListUsersResult()
{}

void ListUsersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUsersNode = value["Users"]["dataList"];
	for (auto valueUsersdataList : allUsersNode)
	{
		DataList usersObject;
		if(!valueUsersdataList["Username"].isNull())
			usersObject.username = valueUsersdataList["Username"].asString();
		if(!valueUsersdataList["SaseUserId"].isNull())
			usersObject.saseUserId = valueUsersdataList["SaseUserId"].asString();
		if(!valueUsersdataList["Department"].isNull())
			usersObject.department = valueUsersdataList["Department"].asString();
		if(!valueUsersdataList["Email"].isNull())
			usersObject.email = valueUsersdataList["Email"].asString();
		if(!valueUsersdataList["Phone"].isNull())
			usersObject.phone = valueUsersdataList["Phone"].asString();
		if(!valueUsersdataList["Status"].isNull())
			usersObject.status = valueUsersdataList["Status"].asString();
		if(!valueUsersdataList["IdpName"].isNull())
			usersObject.idpName = valueUsersdataList["IdpName"].asString();
		users_.push_back(usersObject);
	}
	if(!value["TotalNum"].isNull())
		totalNum_ = value["TotalNum"].asString();

}

std::string ListUsersResult::getTotalNum()const
{
	return totalNum_;
}

std::vector<ListUsersResult::DataList> ListUsersResult::getUsers()const
{
	return users_;
}

