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

#include <alibabacloud/aegis/model/DescribeHistogramResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeHistogramResult::DescribeHistogramResult() :
	ServiceResult()
{}

DescribeHistogramResult::DescribeHistogramResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeHistogramResult::~DescribeHistogramResult()
{}

void DescribeHistogramResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["ItemsItem"];
	for (auto valueItemsItemsItem : allItemsNode)
	{
		ItemsItem itemsObject;
		auto allData = value["Data"]["Data"];
		for (auto value : allData)
			itemsObject.data.push_back(value.asString());
		items_.push_back(itemsObject);
	}
	auto allCategories = value["Categories"]["Categories"];
	for (const auto &item : allCategories)
		categories_.push_back(item.asString());

}

std::vector<std::string> DescribeHistogramResult::getCategories()const
{
	return categories_;
}

std::vector<DescribeHistogramResult::ItemsItem> DescribeHistogramResult::getItems()const
{
	return items_;
}

