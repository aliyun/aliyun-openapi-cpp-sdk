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

#include <alibabacloud/ehpc/model/ListSecurityGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ListSecurityGroupsResult::ListSecurityGroupsResult() :
	ServiceResult()
{}

ListSecurityGroupsResult::ListSecurityGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSecurityGroupsResult::~ListSecurityGroupsResult()
{}

void ListSecurityGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSecurityGroups = value["SecurityGroups"]["SecurityGroup"];
	for (const auto &item : allSecurityGroups)
		securityGroups_.push_back(item.asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<std::string> ListSecurityGroupsResult::getSecurityGroups()const
{
	return securityGroups_;
}

int ListSecurityGroupsResult::getTotalCount()const
{
	return totalCount_;
}

