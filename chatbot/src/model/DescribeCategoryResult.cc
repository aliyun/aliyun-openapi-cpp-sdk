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

#include <alibabacloud/chatbot/model/DescribeCategoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Chatbot;
using namespace AlibabaCloud::Chatbot::Model;

DescribeCategoryResult::DescribeCategoryResult() :
	ServiceResult()
{}

DescribeCategoryResult::DescribeCategoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCategoryResult::~DescribeCategoryResult()
{}

void DescribeCategoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ParentCategoryId"].isNull())
		parentCategoryId_ = std::stol(value["ParentCategoryId"].asString());
	if(!value["CategoryId"].isNull())
		categoryId_ = std::stol(value["CategoryId"].asString());
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();

}

long DescribeCategoryResult::getCategoryId()const
{
	return categoryId_;
}

long DescribeCategoryResult::getParentCategoryId()const
{
	return parentCategoryId_;
}

std::string DescribeCategoryResult::getName()const
{
	return name_;
}

