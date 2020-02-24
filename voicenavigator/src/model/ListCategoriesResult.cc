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

#include <alibabacloud/voicenavigator/model/ListCategoriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::VoiceNavigator;
using namespace AlibabaCloud::VoiceNavigator::Model;

ListCategoriesResult::ListCategoriesResult() :
	ServiceResult()
{}

ListCategoriesResult::ListCategoriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCategoriesResult::~ListCategoriesResult()
{}

void ListCategoriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCategoriesNode = value["Categories"]["Category"];
	for (auto valueCategoriesCategory : allCategoriesNode)
	{
		Category categoriesObject;
		if(!valueCategoriesCategory["InstanceId"].isNull())
			categoriesObject.instanceId = valueCategoriesCategory["InstanceId"].asString();
		if(!valueCategoriesCategory["Name"].isNull())
			categoriesObject.name = valueCategoriesCategory["Name"].asString();
		if(!valueCategoriesCategory["CategoryId"].isNull())
			categoriesObject.categoryId = valueCategoriesCategory["CategoryId"].asString();
		if(!valueCategoriesCategory["Level"].isNull())
			categoriesObject.level = std::stol(valueCategoriesCategory["Level"].asString());
		if(!valueCategoriesCategory["PreviousSiblingId"].isNull())
			categoriesObject.previousSiblingId = valueCategoriesCategory["PreviousSiblingId"].asString();
		if(!valueCategoriesCategory["NextSiblingId"].isNull())
			categoriesObject.nextSiblingId = valueCategoriesCategory["NextSiblingId"].asString();
		if(!valueCategoriesCategory["ParentId"].isNull())
			categoriesObject.parentId = valueCategoriesCategory["ParentId"].asString();
		categories_.push_back(categoriesObject);
	}

}

std::vector<ListCategoriesResult::Category> ListCategoriesResult::getCategories()const
{
	return categories_;
}

