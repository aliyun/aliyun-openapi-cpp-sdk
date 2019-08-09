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

#include <alibabacloud/cas/model/ListTagKeysResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

ListTagKeysResult::ListTagKeysResult() :
	ServiceResult()
{}

ListTagKeysResult::ListTagKeysResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTagKeysResult::~ListTagKeysResult()
{}

void ListTagKeysResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allTagKeys = value["TagKeys"]["TagKey"];
	for (auto value : allTagKeys)
	{
		TagKey tagKeysObject;
		if(!value["TagKey"].isNull())
			tagKeysObject.tagKey = value["TagKey"].asString();
		if(!value["TagCount"].isNull())
			tagKeysObject.tagCount = std::stoi(value["TagCount"].asString());
		tagKeys_.push_back(tagKeysObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListTagKeysResult::getTotalCount()const
{
	return totalCount_;
}

int ListTagKeysResult::getPageSize()const
{
	return pageSize_;
}

int ListTagKeysResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<ListTagKeysResult::TagKey> ListTagKeysResult::getTagKeys()const
{
	return tagKeys_;
}

