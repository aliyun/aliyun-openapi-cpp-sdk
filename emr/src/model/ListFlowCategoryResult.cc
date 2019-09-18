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
	auto allCategories = value["Categories"]["Category"];
	for (auto value : allCategories)
	{
		Category categoriesObject;
		if(!value["Id"].isNull())
			categoriesObject.id = value["Id"].asString();
		if(!value["GmtCreate"].isNull())
			categoriesObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["GmtModified"].isNull())
			categoriesObject.gmtModified = std::stol(value["GmtModified"].asString());
		if(!value["Name"].isNull())
			categoriesObject.name = value["Name"].asString();
		if(!value["ParentId"].isNull())
			categoriesObject.parentId = value["ParentId"].asString();
		if(!value["Type"].isNull())
			categoriesObject.type = value["Type"].asString();
		if(!value["CategoryType"].isNull())
			categoriesObject.categoryType = value["CategoryType"].asString();
		if(!value["ObjectType"].isNull())
			categoriesObject.objectType = value["ObjectType"].asString();
		if(!value["ObjectId"].isNull())
			categoriesObject.objectId = value["ObjectId"].asString();
		if(!value["ProjectId"].isNull())
			categoriesObject.projectId = value["ProjectId"].asString();
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

