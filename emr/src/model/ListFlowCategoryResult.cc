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

#include <alibabacloud/emr/model/ListFlowCategoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListFlowCategoryResult::ListFlowCategoryResult() :
	ServiceResult()
{}

ListFlowCategoryResult::ListFlowCategoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFlowCategoryResult::~ListFlowCategoryResult()
{}

void ListFlowCategoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCategoriesNode = value["Categories"]["Category"];
	for (auto valueCategoriesCategory : allCategoriesNode)
	{
		Category categoriesObject;
		if(!valueCategoriesCategory["Id"].isNull())
			categoriesObject.id = valueCategoriesCategory["Id"].asString();
		if(!valueCategoriesCategory["GmtCreate"].isNull())
			categoriesObject.gmtCreate = std::stol(valueCategoriesCategory["GmtCreate"].asString());
		if(!valueCategoriesCategory["GmtModified"].isNull())
			categoriesObject.gmtModified = std::stol(valueCategoriesCategory["GmtModified"].asString());
		if(!valueCategoriesCategory["Name"].isNull())
			categoriesObject.name = valueCategoriesCategory["Name"].asString();
		if(!valueCategoriesCategory["ParentId"].isNull())
			categoriesObject.parentId = valueCategoriesCategory["ParentId"].asString();
		if(!valueCategoriesCategory["Type"].isNull())
			categoriesObject.type = valueCategoriesCategory["Type"].asString();
		if(!valueCategoriesCategory["CategoryType"].isNull())
			categoriesObject.categoryType = valueCategoriesCategory["CategoryType"].asString();
		if(!valueCategoriesCategory["ObjectType"].isNull())
			categoriesObject.objectType = valueCategoriesCategory["ObjectType"].asString();
		if(!valueCategoriesCategory["ObjectId"].isNull())
			categoriesObject.objectId = valueCategoriesCategory["ObjectId"].asString();
		if(!valueCategoriesCategory["ProjectId"].isNull())
			categoriesObject.projectId = valueCategoriesCategory["ProjectId"].asString();
		categories_.push_back(categoriesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int ListFlowCategoryResult::getPageSize()const
{
	return pageSize_;
}

std::vector<ListFlowCategoryResult::Category> ListFlowCategoryResult::getCategories()const
{
	return categories_;
}

int ListFlowCategoryResult::getPageNumber()const
{
	return pageNumber_;
}

int ListFlowCategoryResult::getTotal()const
{
	return total_;
}

