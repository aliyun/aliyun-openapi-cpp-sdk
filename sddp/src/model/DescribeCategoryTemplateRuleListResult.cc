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

#include <alibabacloud/sddp/model/DescribeCategoryTemplateRuleListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribeCategoryTemplateRuleListResult::DescribeCategoryTemplateRuleListResult() :
	ServiceResult()
{}

DescribeCategoryTemplateRuleListResult::DescribeCategoryTemplateRuleListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCategoryTemplateRuleListResult::~DescribeCategoryTemplateRuleListResult()
{}

void DescribeCategoryTemplateRuleListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["DataLimit"];
	for (auto valueItemsDataLimit : allItemsNode)
	{
		DataLimit itemsObject;
		if(!valueItemsDataLimit["Status"].isNull())
			itemsObject.status = std::stoi(valueItemsDataLimit["Status"].asString());
		if(!valueItemsDataLimit["IdentificationScope"].isNull())
			itemsObject.identificationScope = valueItemsDataLimit["IdentificationScope"].asString();
		if(!valueItemsDataLimit["RiskLevelId"].isNull())
			itemsObject.riskLevelId = std::stol(valueItemsDataLimit["RiskLevelId"].asString());
		if(!valueItemsDataLimit["ParentCategoryId"].isNull())
			itemsObject.parentCategoryId = std::stol(valueItemsDataLimit["ParentCategoryId"].asString());
		if(!valueItemsDataLimit["Description"].isNull())
			itemsObject.description = valueItemsDataLimit["Description"].asString();
		if(!valueItemsDataLimit["CustomType"].isNull())
			itemsObject.customType = std::stoi(valueItemsDataLimit["CustomType"].asString());
		if(!valueItemsDataLimit["IdentificationRuleIds"].isNull())
			itemsObject.identificationRuleIds = valueItemsDataLimit["IdentificationRuleIds"].asString();
		if(!valueItemsDataLimit["Name"].isNull())
			itemsObject.name = valueItemsDataLimit["Name"].asString();
		if(!valueItemsDataLimit["OrderNum"].isNull())
			itemsObject.orderNum = std::stoi(valueItemsDataLimit["OrderNum"].asString());
		if(!valueItemsDataLimit["TemplateId"].isNull())
			itemsObject.templateId = std::stol(valueItemsDataLimit["TemplateId"].asString());
		if(!valueItemsDataLimit["Id"].isNull())
			itemsObject.id = std::stol(valueItemsDataLimit["Id"].asString());
		if(!valueItemsDataLimit["CategoryLevel"].isNull())
			itemsObject.categoryLevel = std::stoi(valueItemsDataLimit["CategoryLevel"].asString());
		if(!valueItemsDataLimit["ParentModelId"].isNull())
			itemsObject.parentModelId = std::stol(valueItemsDataLimit["ParentModelId"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeCategoryTemplateRuleListResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeCategoryTemplateRuleListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeCategoryTemplateRuleListResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeCategoryTemplateRuleListResult::DataLimit> DescribeCategoryTemplateRuleListResult::getItems()const
{
	return items_;
}

