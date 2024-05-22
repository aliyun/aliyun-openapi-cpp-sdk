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

#include <alibabacloud/polardbx/model/DescribeSecurityIpsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardbx;
using namespace AlibabaCloud::Polardbx::Model;

DescribeSecurityIpsResult::DescribeSecurityIpsResult() :
	ServiceResult()
{}

DescribeSecurityIpsResult::DescribeSecurityIpsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSecurityIpsResult::~DescribeSecurityIpsResult()
{}

void DescribeSecurityIpsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["DBInstanceName"].isNull())
		data_.dBInstanceName = dataNode["DBInstanceName"].asString();
	auto allGroupItemsNode = dataNode["GroupItems"]["GroupItem"];
	for (auto dataNodeGroupItemsGroupItem : allGroupItemsNode)
	{
		Data::GroupItem groupItemObject;
		if(!dataNodeGroupItemsGroupItem["GroupName"].isNull())
			groupItemObject.groupName = dataNodeGroupItemsGroupItem["GroupName"].asString();
		if(!dataNodeGroupItemsGroupItem["SecurityIPList"].isNull())
			groupItemObject.securityIPList = dataNodeGroupItemsGroupItem["SecurityIPList"].asString();
		data_.groupItems.push_back(groupItemObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeSecurityIpsResult::getMessage()const
{
	return message_;
}

DescribeSecurityIpsResult::Data DescribeSecurityIpsResult::getData()const
{
	return data_;
}

bool DescribeSecurityIpsResult::getSuccess()const
{
	return success_;
}

