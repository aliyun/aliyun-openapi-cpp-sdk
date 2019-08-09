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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto categoryNode = value["Category"];
	if(!categoryNode["GroupId"].isNull())
		category_.groupId = std::stol(categoryNode["GroupId"].asString());
	auto allCategoryItems = value["CategoryItems"]["CategoryItem"];
	for (auto value : allCategoryItems)
	{
		Category::CategoryItem categoryItemObject;
		if(!value["Category"].isNull())
			categoryItemObject.category = value["Category"].asString();
		if(!value["Count"].isNull())
			categoryItemObject.count = std::stoi(value["Count"].asString());
		category_.categoryItems.push_back(categoryItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

ListMyGroupCategoriesResult::Category ListMyGroupCategoriesResult::getCategory()const
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

