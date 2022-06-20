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

#include <alibabacloud/sas/model/DescribePropertyUserItemResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribePropertyUserItemResult::DescribePropertyUserItemResult() :
	ServiceResult()
{}

DescribePropertyUserItemResult::DescribePropertyUserItemResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePropertyUserItemResult::~DescribePropertyUserItemResult()
{}

void DescribePropertyUserItemResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPropertyItemsNode = value["PropertyItems"]["PropertyUserItem"];
	for (auto valuePropertyItemsPropertyUserItem : allPropertyItemsNode)
	{
		PropertyUserItem propertyItemsObject;
		if(!valuePropertyItemsPropertyUserItem["User"].isNull())
			propertyItemsObject.user = valuePropertyItemsPropertyUserItem["User"].asString();
		if(!valuePropertyItemsPropertyUserItem["Count"].isNull())
			propertyItemsObject.count = std::stoi(valuePropertyItemsPropertyUserItem["Count"].asString());
		propertyItems_.push_back(propertyItemsObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());

}

DescribePropertyUserItemResult::PageInfo DescribePropertyUserItemResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<DescribePropertyUserItemResult::PropertyUserItem> DescribePropertyUserItemResult::getPropertyItems()const
{
	return propertyItems_;
}

