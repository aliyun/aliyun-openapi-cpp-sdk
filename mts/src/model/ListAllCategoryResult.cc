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

#include <alibabacloud/mts/model/ListAllCategoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

ListAllCategoryResult::ListAllCategoryResult() :
	ServiceResult()
{}

ListAllCategoryResult::ListAllCategoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAllCategoryResult::~ListAllCategoryResult()
{}

void ListAllCategoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCategoryList = value["CategoryList"]["Category"];
	for (auto value : allCategoryList)
	{
		Category categoryListObject;
		if(!value["CateId"].isNull())
			categoryListObject.cateId = value["CateId"].asString();
		if(!value["CateName"].isNull())
			categoryListObject.cateName = value["CateName"].asString();
		if(!value["ParentId"].isNull())
			categoryListObject.parentId = value["ParentId"].asString();
		if(!value["Level"].isNull())
			categoryListObject.level = value["Level"].asString();
		categoryList_.push_back(categoryListObject);
	}

}

std::vector<ListAllCategoryResult::Category> ListAllCategoryResult::getCategoryList()const
{
	return categoryList_;
}

