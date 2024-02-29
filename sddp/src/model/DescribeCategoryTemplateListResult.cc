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

#include <alibabacloud/sddp/model/DescribeCategoryTemplateListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribeCategoryTemplateListResult::DescribeCategoryTemplateListResult() :
	ServiceResult()
{}

DescribeCategoryTemplateListResult::DescribeCategoryTemplateListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCategoryTemplateListResult::~DescribeCategoryTemplateListResult()
{}

void DescribeCategoryTemplateListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Template"];
	for (auto valueItemsTemplate : allItemsNode)
	{
		_Template itemsObject;
		if(!valueItemsTemplate["CurrentRiskLevel"].isNull())
			itemsObject.currentRiskLevel = std::stoi(valueItemsTemplate["CurrentRiskLevel"].asString());
		if(!valueItemsTemplate["Status"].isNull())
			itemsObject.status = std::stoi(valueItemsTemplate["Status"].asString());
		if(!valueItemsTemplate["Type"].isNull())
			itemsObject.type = std::stoi(valueItemsTemplate["Type"].asString());
		if(!valueItemsTemplate["SupportEdit"].isNull())
			itemsObject.supportEdit = std::stoi(valueItemsTemplate["SupportEdit"].asString());
		if(!valueItemsTemplate["MaxCategoryLevel"].isNull())
			itemsObject.maxCategoryLevel = std::stoi(valueItemsTemplate["MaxCategoryLevel"].asString());
		if(!valueItemsTemplate["Name"].isNull())
			itemsObject.name = valueItemsTemplate["Name"].asString();
		if(!valueItemsTemplate["MaxRiskLevel"].isNull())
			itemsObject.maxRiskLevel = std::stoi(valueItemsTemplate["MaxRiskLevel"].asString());
		if(!valueItemsTemplate["Id"].isNull())
			itemsObject.id = std::stol(valueItemsTemplate["Id"].asString());
		if(!valueItemsTemplate["Description"].isNull())
			itemsObject.description = valueItemsTemplate["Description"].asString();
		if(!valueItemsTemplate["GmtCreate"].isNull())
			itemsObject.gmtCreate = std::stol(valueItemsTemplate["GmtCreate"].asString());
		if(!valueItemsTemplate["GmtModified"].isNull())
			itemsObject.gmtModified = std::stol(valueItemsTemplate["GmtModified"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeCategoryTemplateListResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeCategoryTemplateListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeCategoryTemplateListResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeCategoryTemplateListResult::_Template> DescribeCategoryTemplateListResult::getItems()const
{
	return items_;
}

