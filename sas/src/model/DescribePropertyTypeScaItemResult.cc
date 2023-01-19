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

#include <alibabacloud/sas/model/DescribePropertyTypeScaItemResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribePropertyTypeScaItemResult::DescribePropertyTypeScaItemResult() :
	ServiceResult()
{}

DescribePropertyTypeScaItemResult::DescribePropertyTypeScaItemResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePropertyTypeScaItemResult::~DescribePropertyTypeScaItemResult()
{}

void DescribePropertyTypeScaItemResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPropertyTypeItemsNode = value["PropertyTypeItems"]["PropertyTypeItemsItem"];
	for (auto valuePropertyTypeItemsPropertyTypeItemsItem : allPropertyTypeItemsNode)
	{
		PropertyTypeItemsItem propertyTypeItemsObject;
		if(!valuePropertyTypeItemsPropertyTypeItemsItem["Type"].isNull())
			propertyTypeItemsObject.type = valuePropertyTypeItemsPropertyTypeItemsItem["Type"].asString();
		if(!valuePropertyTypeItemsPropertyTypeItemsItem["Name"].isNull())
			propertyTypeItemsObject.name = valuePropertyTypeItemsPropertyTypeItemsItem["Name"].asString();
		propertyTypeItems_.push_back(propertyTypeItemsObject);
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

DescribePropertyTypeScaItemResult::PageInfo DescribePropertyTypeScaItemResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<DescribePropertyTypeScaItemResult::PropertyTypeItemsItem> DescribePropertyTypeScaItemResult::getPropertyTypeItems()const
{
	return propertyTypeItems_;
}

