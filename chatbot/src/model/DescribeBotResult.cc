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

#include <alibabacloud/chatbot/model/DescribeBotResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Chatbot;
using namespace AlibabaCloud::Chatbot::Model;

DescribeBotResult::DescribeBotResult() :
	ServiceResult()
{}

DescribeBotResult::DescribeBotResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBotResult::~DescribeBotResult()
{}

void DescribeBotResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCategoriesNode = value["Categories"]["Category"];
	for (auto valueCategoriesCategory : allCategoriesNode)
	{
		Category categoriesObject;
		if(!valueCategoriesCategory["Name"].isNull())
			categoriesObject.name = valueCategoriesCategory["Name"].asString();
		if(!valueCategoriesCategory["CategoryId"].isNull())
			categoriesObject.categoryId = std::stol(valueCategoriesCategory["CategoryId"].asString());
		if(!valueCategoriesCategory["ParentCategoryId"].isNull())
			categoriesObject.parentCategoryId = std::stol(valueCategoriesCategory["ParentCategoryId"].asString());
		categories_.push_back(categoriesObject);
	}
	if(!value["TimeZone"].isNull())
		timeZone_ = value["TimeZone"].asString();
	if(!value["Avatar"].isNull())
		avatar_ = value["Avatar"].asString();
	if(!value["LanguageCode"].isNull())
		languageCode_ = value["LanguageCode"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Logo"].isNull())
		logo_ = value["Logo"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["Introduction"].isNull())
		introduction_ = value["Introduction"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();

}

std::string DescribeBotResult::getLanguageCode()const
{
	return languageCode_;
}

std::string DescribeBotResult::getTimeZone()const
{
	return timeZone_;
}

std::vector<DescribeBotResult::Category> DescribeBotResult::getCategories()const
{
	return categories_;
}

std::string DescribeBotResult::getInstanceId()const
{
	return instanceId_;
}

std::string DescribeBotResult::getIntroduction()const
{
	return introduction_;
}

std::string DescribeBotResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeBotResult::getAvatar()const
{
	return avatar_;
}

std::string DescribeBotResult::getName()const
{
	return name_;
}

std::string DescribeBotResult::getLogo()const
{
	return logo_;
}

