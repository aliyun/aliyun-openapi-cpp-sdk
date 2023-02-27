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

#include <alibabacloud/ice/model/GetCategoriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

GetCategoriesResult::GetCategoriesResult() :
	ServiceResult()
{}

GetCategoriesResult::GetCategoriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCategoriesResult::~GetCategoriesResult()
{}

void GetCategoriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSubCategoriesNode = value["SubCategories"]["Category"];
	for (auto valueSubCategoriesCategory : allSubCategoriesNode)
	{
		Category subCategoriesObject;
		if(!valueSubCategoriesCategory["Type"].isNull())
			subCategoriesObject.type = valueSubCategoriesCategory["Type"].asString();
		if(!valueSubCategoriesCategory["CateName"].isNull())
			subCategoriesObject.cateName = valueSubCategoriesCategory["CateName"].asString();
		if(!valueSubCategoriesCategory["ParentId"].isNull())
			subCategoriesObject.parentId = std::stol(valueSubCategoriesCategory["ParentId"].asString());
		if(!valueSubCategoriesCategory["CateId"].isNull())
			subCategoriesObject.cateId = std::stol(valueSubCategoriesCategory["CateId"].asString());
		if(!valueSubCategoriesCategory["SubTotal"].isNull())
			subCategoriesObject.subTotal = std::stol(valueSubCategoriesCategory["SubTotal"].asString());
		if(!valueSubCategoriesCategory["Level"].isNull())
			subCategoriesObject.level = std::stol(valueSubCategoriesCategory["Level"].asString());
		subCategories_.push_back(subCategoriesObject);
	}
	auto category1Node = value["Category"];
	if(!category1Node["Type"].isNull())
		category1_.type = category1Node["Type"].asString();
	if(!category1Node["CateName"].isNull())
		category1_.cateName = category1Node["CateName"].asString();
	if(!category1Node["ParentId"].isNull())
		category1_.parentId = std::stol(category1Node["ParentId"].asString());
	if(!category1Node["CateId"].isNull())
		category1_.cateId = std::stol(category1Node["CateId"].asString());
	if(!category1Node["GrandId"].isNull())
		category1_.grandId = std::stol(category1Node["GrandId"].asString());
	if(!category1Node["Level"].isNull())
		category1_.level = std::stol(category1Node["Level"].asString());
	if(!value["SubTotal"].isNull())
		subTotal_ = std::stol(value["SubTotal"].asString());

}

GetCategoriesResult::Category1 GetCategoriesResult::getCategory1()const
{
	return category1_;
}

std::vector<GetCategoriesResult::Category> GetCategoriesResult::getSubCategories()const
{
	return subCategories_;
}

long GetCategoriesResult::getSubTotal()const
{
	return subTotal_;
}

