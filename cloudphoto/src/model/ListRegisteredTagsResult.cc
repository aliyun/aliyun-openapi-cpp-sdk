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

#include <alibabacloud/cloudphoto/model/ListRegisteredTagsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudPhoto;
using namespace AlibabaCloud::CloudPhoto::Model;

ListRegisteredTagsResult::ListRegisteredTagsResult() :
	ServiceResult()
{}

ListRegisteredTagsResult::ListRegisteredTagsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRegisteredTagsResult::~ListRegisteredTagsResult()
{}

void ListRegisteredTagsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allRegisteredTags = value["RegisteredTags"]["RegisteredTag"];
	for (auto value : allRegisteredTags)
	{
		RegisteredTag registeredTagsObject;
		if(!value["TagKey"].isNull())
			registeredTagsObject.tagKey = value["TagKey"].asString();
		auto allTagValues = value["TagValues"]["TagValue"];
		for (auto value : allTagValues)
		{
			RegisteredTag::TagValue tagValuesObject;
			if(!value["Lang"].isNull())
				tagValuesObject.lang = value["Lang"].asString();
			if(!value["Text"].isNull())
				tagValuesObject.text = value["Text"].asString();
			registeredTagsObject.tagValues.push_back(tagValuesObject);
		}
		registeredTags_.push_back(registeredTagsObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Action"].isNull())
		action_ = value["Action"].asString();

}

std::string ListRegisteredTagsResult::getAction()const
{
	return action_;
}

std::string ListRegisteredTagsResult::getMessage()const
{
	return message_;
}

std::vector<ListRegisteredTagsResult::RegisteredTag> ListRegisteredTagsResult::getRegisteredTags()const
{
	return registeredTags_;
}

std::string ListRegisteredTagsResult::getCode()const
{
	return code_;
}

