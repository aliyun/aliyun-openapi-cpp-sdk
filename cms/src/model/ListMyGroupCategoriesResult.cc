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

#include <alibabacloud/cms/model/ListMyGroupCategoriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

ListMyGroupCategoriesResult::ListMyGroupCategoriesResult() :
	ServiceResult()
{}

ListMyGroupCategoriesResult::ListMyGroupCategoriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMyGroupCategoriesResult::~ListMyGroupCategoriesResult()
{}

void ListMyGroupCategoriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allCategory = value["Category"];
	for (auto value : allCategory)
	{
		Category categoryObject;
		if(!value["GroupId"].isNull())
			categoryObject.groupId = std::stol(value["GroupId"].asString());
		auto allCategoryItems = value["CategoryItems"]["CategoryItem"];
		for (auto value : allCategoryItems)
		{
			Category::CategoryItem categoryItemObject;
			if(!value["Category"].isNull())
				categoryItemObject.category = value["Category"].asString();
			if(!value["Count"].isNull())
				categoryItemObject.count = std::stoi(value["Count"].asString());
			categoryObject.categoryItems.push_back(categoryItemObject);
		}
		category_.push_back(categoryObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

std::vector<ListMyGroupCategoriesResult::Category> ListMyGroupCategoriesResult::getCategory()const
{
	return category_;
}

int ListMyGroupCategoriesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListMyGroupCategoriesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListMyGroupCategoriesResult::getSuccess()const
{
	return success_;
}

