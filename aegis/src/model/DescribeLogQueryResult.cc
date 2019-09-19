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

#include <alibabacloud/aegis/model/DescribeLogQueryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeLogQueryResult::DescribeLogQueryResult() :
	ServiceResult()
{}

DescribeLogQueryResult::DescribeLogQueryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLogQueryResult::~DescribeLogQueryResult()
{}

void DescribeLogQueryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allQueryItemsNode = value["QueryItems"]["QueryItemsItem"];
	for (auto valueQueryItemsQueryItemsItem : allQueryItemsNode)
	{
		QueryItemsItem queryItemsObject;
		if(!valueQueryItemsQueryItemsItem["QueryDetail"].isNull())
			queryItemsObject.queryDetail = valueQueryItemsQueryItemsItem["QueryDetail"].asString();
		if(!valueQueryItemsQueryItemsItem["QueryName"].isNull())
			queryItemsObject.queryName = valueQueryItemsQueryItemsItem["QueryName"].asString();
		if(!valueQueryItemsQueryItemsItem["Conditions"].isNull())
			queryItemsObject.conditions = valueQueryItemsQueryItemsItem["Conditions"].asString();
		queryItems_.push_back(queryItemsObject);
	}
	if(!value["ListTotal"].isNull())
		listTotal_ = std::stoi(value["ListTotal"].asString());

}

int DescribeLogQueryResult::getListTotal()const
{
	return listTotal_;
}

std::vector<DescribeLogQueryResult::QueryItemsItem> DescribeLogQueryResult::getQueryItems()const
{
	return queryItems_;
}

