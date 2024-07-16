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

#include <alibabacloud/swas-open/model/ListCustomImageShareAccountsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SWAS_OPEN;
using namespace AlibabaCloud::SWAS_OPEN::Model;

ListCustomImageShareAccountsResult::ListCustomImageShareAccountsResult() :
	ServiceResult()
{}

ListCustomImageShareAccountsResult::ListCustomImageShareAccountsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCustomImageShareAccountsResult::~ListCustomImageShareAccountsResult()
{}

void ListCustomImageShareAccountsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImageShareUsersNode = value["ImageShareUsers"]["ImageShareUser"];
	for (auto valueImageShareUsersImageShareUser : allImageShareUsersNode)
	{
		ImageShareUser imageShareUsersObject;
		if(!valueImageShareUsersImageShareUser["UserId"].isNull())
			imageShareUsersObject.userId = std::stol(valueImageShareUsersImageShareUser["UserId"].asString());
		if(!valueImageShareUsersImageShareUser["SharedTime"].isNull())
			imageShareUsersObject.sharedTime = valueImageShareUsersImageShareUser["SharedTime"].asString();
		imageShareUsers_.push_back(imageShareUsersObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListCustomImageShareAccountsResult::getTotalCount()const
{
	return totalCount_;
}

int ListCustomImageShareAccountsResult::getPageSize()const
{
	return pageSize_;
}

int ListCustomImageShareAccountsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListCustomImageShareAccountsResult::ImageShareUser> ListCustomImageShareAccountsResult::getImageShareUsers()const
{
	return imageShareUsers_;
}

