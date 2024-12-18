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

#include <alibabacloud/selectdb/model/DescribeSecurityIPListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Selectdb;
using namespace AlibabaCloud::Selectdb::Model;

DescribeSecurityIPListResult::DescribeSecurityIPListResult() :
	ServiceResult()
{}

DescribeSecurityIPListResult::DescribeSecurityIPListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSecurityIPListResult::~DescribeSecurityIPListResult()
{}

void DescribeSecurityIPListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGroupItemsNode = value["GroupItems"]["GroupItemsItem"];
	for (auto valueGroupItemsGroupItemsItem : allGroupItemsNode)
	{
		GroupItemsItem groupItemsObject;
		if(!valueGroupItemsGroupItemsItem["GroupName"].isNull())
			groupItemsObject.groupName = valueGroupItemsGroupItemsItem["GroupName"].asString();
		if(!valueGroupItemsGroupItemsItem["AecurityIPType"].isNull())
			groupItemsObject.aecurityIPType = valueGroupItemsGroupItemsItem["AecurityIPType"].asString();
		if(!valueGroupItemsGroupItemsItem["GroupTag"].isNull())
			groupItemsObject.groupTag = valueGroupItemsGroupItemsItem["GroupTag"].asString();
		if(!valueGroupItemsGroupItemsItem["SecurityIPList"].isNull())
			groupItemsObject.securityIPList = valueGroupItemsGroupItemsItem["SecurityIPList"].asString();
		if(!valueGroupItemsGroupItemsItem["WhitelistNetType"].isNull())
			groupItemsObject.whitelistNetType = valueGroupItemsGroupItemsItem["WhitelistNetType"].asString();
		groupItems_.push_back(groupItemsObject);
	}
	if(!value["DBInstanceName"].isNull())
		dBInstanceName_ = value["DBInstanceName"].asString();

}

std::vector<DescribeSecurityIPListResult::GroupItemsItem> DescribeSecurityIPListResult::getGroupItems()const
{
	return groupItems_;
}

std::string DescribeSecurityIPListResult::getDBInstanceName()const
{
	return dBInstanceName_;
}

