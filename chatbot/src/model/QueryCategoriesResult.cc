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

#include <alibabacloud/chatbot/model/QueryCategoriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Chatbot;
using namespace AlibabaCloud::Chatbot::Model;

QueryCategoriesResult::QueryCategoriesResult() :
	ServiceResult()
{}

QueryCategoriesResult::QueryCategoriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryCategoriesResult::~QueryCategoriesResult()
{}

void QueryCategoriesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allCategories = value["Categories"]["Category"];
	for (auto value : allCategories)
	{
		Category categoriesObject;
		if(!value["CategoryId"].isNull())
			categoriesObject.categoryId = std::stol(value["CategoryId"].asString());
		if(!value["ParentCategoryId"].isNull())
			categoriesObject.parentCategoryId = std::stol(value["ParentCategoryId"].asString());
		if(!value["Name"].isNull())
			categoriesObject.name = value["Name"].asString();
		auto allChildrens = value["Childrens"]["Children"];
		for (auto value : allChildrens)
			categoriesObject.childrens.push_back(value.asString());
		categories_.push_back(categoriesObject);
	}

}

std::vector<QueryCategoriesResult::Category> QueryCategoriesResult::getCategories()const
{
	return categories_;
}

