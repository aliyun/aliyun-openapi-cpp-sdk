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

#include <alibabacloud/sas/model/DescribePropertyPortItemResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribePropertyPortItemResult::DescribePropertyPortItemResult() :
	ServiceResult()
{}

DescribePropertyPortItemResult::DescribePropertyPortItemResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePropertyPortItemResult::~DescribePropertyPortItemResult()
{}

void DescribePropertyPortItemResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPropertyItemsNode = value["PropertyItems"]["PropertyItem"];
	for (auto valuePropertyItemsPropertyItem : allPropertyItemsNode)
	{
		PropertyItem propertyItemsObject;
		if(!valuePropertyItemsPropertyItem["Port"].isNull())
			propertyItemsObject.port = valuePropertyItemsPropertyItem["Port"].asString();
		if(!valuePropertyItemsPropertyItem["Count"].isNull())
			propertyItemsObject.count = std::stoi(valuePropertyItemsPropertyItem["Count"].asString());
		if(!valuePropertyItemsPropertyItem["Proto"].isNull())
			propertyItemsObject.proto = valuePropertyItemsPropertyItem["Proto"].asString();
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

DescribePropertyPortItemResult::PageInfo DescribePropertyPortItemResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<DescribePropertyPortItemResult::PropertyItem> DescribePropertyPortItemResult::getPropertyItems()const
{
	return propertyItems_;
}

