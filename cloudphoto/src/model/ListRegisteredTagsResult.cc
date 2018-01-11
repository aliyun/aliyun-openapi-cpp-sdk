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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allRegisteredTags = value["RegisteredTags"]["RegisteredTag"];
	for (auto value : allRegisteredTags)
	{
		RegisteredTag registeredTagObject;
		registeredTagObject.tagKey = value["TagKey"].asString();
		auto allTagValues = value["TagValues"]["TagValue"];
		for (auto value : allTagValues)
		{
			RegisteredTag::TagValue tagValueObject;
			tagValueObject.lang = value["Lang"].asString();
			tagValueObject.text = value["Text"].asString();
			registeredTagObject.tagValues.push_back(tagValueObject);
		}
		registeredTags_.push_back(registeredTagObject);
	}
	code_ = value["Code"].asString();
	message_ = value["Message"].asString();
	action_ = value["Action"].asString();

}

std::string ListRegisteredTagsResult::getAction()const
{
	return action_;
}

void ListRegisteredTagsResult::setAction(const std::string& action)
{
	action_ = action;
}

std::string ListRegisteredTagsResult::getMessage()const
{
	return message_;
}

void ListRegisteredTagsResult::setMessage(const std::string& message)
{
	message_ = message;
}

std::string ListRegisteredTagsResult::getCode()const
{
	return code_;
}

void ListRegisteredTagsResult::setCode(const std::string& code)
{
	code_ = code;
}

