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

#include <alibabacloud/sas/model/DescribePropertyUsageNewestResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribePropertyUsageNewestResult::DescribePropertyUsageNewestResult() :
	ServiceResult()
{}

DescribePropertyUsageNewestResult::DescribePropertyUsageNewestResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePropertyUsageNewestResult::~DescribePropertyUsageNewestResult()
{}

void DescribePropertyUsageNewestResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNewestStatisticItemsNode = value["NewestStatisticItems"]["NewestStatisticItem"];
	for (auto valueNewestStatisticItemsNewestStatisticItem : allNewestStatisticItemsNode)
	{
		NewestStatisticItem newestStatisticItemsObject;
		if(!valueNewestStatisticItemsNewestStatisticItem["Name"].isNull())
			newestStatisticItemsObject.name = valueNewestStatisticItemsNewestStatisticItem["Name"].asString();
		if(!valueNewestStatisticItemsNewestStatisticItem["Create"].isNull())
			newestStatisticItemsObject.create = std::stol(valueNewestStatisticItemsNewestStatisticItem["Create"].asString());
		newestStatisticItems_.push_back(newestStatisticItemsObject);
	}
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["ItemCount"].isNull())
		itemCount_ = std::stoi(value["ItemCount"].asString());

}

std::vector<DescribePropertyUsageNewestResult::NewestStatisticItem> DescribePropertyUsageNewestResult::getNewestStatisticItems()const
{
	return newestStatisticItems_;
}

std::string DescribePropertyUsageNewestResult::getType()const
{
	return type_;
}

int DescribePropertyUsageNewestResult::getItemCount()const
{
	return itemCount_;
}

