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

#include <alibabacloud/sas-api/model/DescribeThreatTypeLinesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas_api;
using namespace AlibabaCloud::Sas_api::Model;

DescribeThreatTypeLinesResult::DescribeThreatTypeLinesResult() :
	ServiceResult()
{}

DescribeThreatTypeLinesResult::DescribeThreatTypeLinesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeThreatTypeLinesResult::~DescribeThreatTypeLinesResult()
{}

void DescribeThreatTypeLinesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Item"];
	for (auto valueItemsItem : allItemsNode)
	{
		Item itemsObject;
		if(!valueItemsItem["Data"].isNull())
			itemsObject.data = std::stof(valueItemsItem["Data"].asString());
		if(!valueItemsItem["Id"].isNull())
			itemsObject.id = valueItemsItem["Id"].asString();
		if(!valueItemsItem["Name"].isNull())
			itemsObject.name = valueItemsItem["Name"].asString();
		items_.push_back(itemsObject);
	}
	auto allCategories = value["Categories"]["CategoriesItem"];
	for (const auto &item : allCategories)
		categories_.push_back(item.asString());

}

std::vector<std::string> DescribeThreatTypeLinesResult::getCategories()const
{
	return categories_;
}

std::vector<DescribeThreatTypeLinesResult::Item> DescribeThreatTypeLinesResult::getItems()const
{
	return items_;
}

