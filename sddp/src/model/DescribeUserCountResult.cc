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

#include <alibabacloud/sddp/model/DescribeUserCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribeUserCountResult::DescribeUserCountResult() :
	ServiceResult()
{}

DescribeUserCountResult::DescribeUserCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUserCountResult::~DescribeUserCountResult()
{}

void DescribeUserCountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto userCountNode = value["UserCount"];
	if(!userCountNode["Authed"].isNull())
		userCount_.authed = userCountNode["Authed"].asString() == "true";
	if(!userCountNode["Buyed"].isNull())
		userCount_.buyed = userCountNode["Buyed"].asString() == "true";
	if(!userCountNode["AuthCount"].isNull())
		userCount_.authCount = std::stoi(userCountNode["AuthCount"].asString());
	if(!userCountNode["UnAuthCount"].isNull())
		userCount_.unAuthCount = std::stoi(userCountNode["UnAuthCount"].asString());
	if(!userCountNode["TotalAuthCount"].isNull())
		userCount_.totalAuthCount = std::stoi(userCountNode["TotalAuthCount"].asString());
	if(!userCountNode["WarnTotalCount"].isNull())
		userCount_.warnTotalCount = std::stol(userCountNode["WarnTotalCount"].asString());
	if(!userCountNode["SaleInstanceStatus"].isNull())
		userCount_.saleInstanceStatus = std::stoi(userCountNode["SaleInstanceStatus"].asString());
	if(!userCountNode["WarnAddCount"].isNull())
		userCount_.warnAddCount = std::stol(userCountNode["WarnAddCount"].asString());
	if(!userCountNode["SaleInstanceId"].isNull())
		userCount_.saleInstanceId = userCountNode["SaleInstanceId"].asString();

}

DescribeUserCountResult::UserCount DescribeUserCountResult::getUserCount()const
{
	return userCount_;
}

