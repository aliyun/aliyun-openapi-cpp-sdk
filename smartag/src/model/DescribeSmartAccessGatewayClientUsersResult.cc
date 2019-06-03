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

#include <alibabacloud/smartag/model/DescribeSmartAccessGatewayClientUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeSmartAccessGatewayClientUsersResult::DescribeSmartAccessGatewayClientUsersResult() :
	ServiceResult()
{}

DescribeSmartAccessGatewayClientUsersResult::DescribeSmartAccessGatewayClientUsersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSmartAccessGatewayClientUsersResult::~DescribeSmartAccessGatewayClientUsersResult()
{}

void DescribeSmartAccessGatewayClientUsersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allUsers = value["Users"]["User"];
	for (auto value : allUsers)
	{
		User usersObject;
		if(!value["ClientIp"].isNull())
			usersObject.clientIp = value["ClientIp"].asString();
		if(!value["UserMail"].isNull())
			usersObject.userMail = value["UserMail"].asString();
		if(!value["UserName"].isNull())
			usersObject.userName = value["UserName"].asString();
		if(!value["Bandwidth"].isNull())
			usersObject.bandwidth = std::stoi(value["Bandwidth"].asString());
		users_.push_back(usersObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNo"].isNull())
		pageNo_ = std::stoi(value["PageNo"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeSmartAccessGatewayClientUsersResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeSmartAccessGatewayClientUsersResult::getPageSize()const
{
	return pageSize_;
}

int DescribeSmartAccessGatewayClientUsersResult::getPageNo()const
{
	return pageNo_;
}

std::vector<DescribeSmartAccessGatewayClientUsersResult::User> DescribeSmartAccessGatewayClientUsersResult::getUsers()const
{
	return users_;
}

