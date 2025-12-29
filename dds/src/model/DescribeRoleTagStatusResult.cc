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

#include <alibabacloud/dds/model/DescribeRoleTagStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

DescribeRoleTagStatusResult::DescribeRoleTagStatusResult() :
	ServiceResult()
{}

DescribeRoleTagStatusResult::DescribeRoleTagStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRoleTagStatusResult::~DescribeRoleTagStatusResult()
{}

void DescribeRoleTagStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["RoleTagStatus"].isNull())
		roleTagStatus_ = value["RoleTagStatus"].asString();
	if(!value["ShardRoleTagStatus"].isNull())
		shardRoleTagStatus_ = value["ShardRoleTagStatus"].asString();

}

std::string DescribeRoleTagStatusResult::getShardRoleTagStatus()const
{
	return shardRoleTagStatus_;
}

std::string DescribeRoleTagStatusResult::getRoleTagStatus()const
{
	return roleTagStatus_;
}

