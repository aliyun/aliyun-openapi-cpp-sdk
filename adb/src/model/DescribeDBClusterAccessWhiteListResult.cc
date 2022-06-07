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

#include <alibabacloud/adb/model/DescribeDBClusterAccessWhiteListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeDBClusterAccessWhiteListResult::DescribeDBClusterAccessWhiteListResult() :
	ServiceResult()
{}

DescribeDBClusterAccessWhiteListResult::DescribeDBClusterAccessWhiteListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClusterAccessWhiteListResult::~DescribeDBClusterAccessWhiteListResult()
{}

void DescribeDBClusterAccessWhiteListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["IPArray"];
	for (auto valueItemsIPArray : allItemsNode)
	{
		IPArray itemsObject;
		if(!valueItemsIPArray["DBClusterIPArrayAttribute"].isNull())
			itemsObject.dBClusterIPArrayAttribute = valueItemsIPArray["DBClusterIPArrayAttribute"].asString();
		if(!valueItemsIPArray["SecurityIPList"].isNull())
			itemsObject.securityIPList = valueItemsIPArray["SecurityIPList"].asString();
		if(!valueItemsIPArray["DBClusterIPArrayName"].isNull())
			itemsObject.dBClusterIPArrayName = valueItemsIPArray["DBClusterIPArrayName"].asString();
		items_.push_back(itemsObject);
	}

}

std::vector<DescribeDBClusterAccessWhiteListResult::IPArray> DescribeDBClusterAccessWhiteListResult::getItems()const
{
	return items_;
}

