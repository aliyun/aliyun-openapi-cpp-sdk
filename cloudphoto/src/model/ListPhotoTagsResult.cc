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

#include <alibabacloud/cloudphoto/model/ListPhotoTagsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudPhoto;
using namespace AlibabaCloud::CloudPhoto::Model;

ListPhotoTagsResult::ListPhotoTagsResult() :
	ServiceResult()
{}

ListPhotoTagsResult::ListPhotoTagsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPhotoTagsResult::~ListPhotoTagsResult()
{}

void ListPhotoTagsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allTags = value["Tags"]["Tag"];
	for (auto value : allTags)
	{
		Tag tagObject;
		tagObject.id = std::stol(value["Id"].asString());
		tagObject.isSubTag = std::stoi(value["IsSubTag"].asString());
		tagObject.name = value["Name"].asString();
		tagObject.parentTag = value["ParentTag"].asString();
		tags_.push_back(tagObject);
	}
	code_ = value["Code"].asString();
	message_ = value["Message"].asString();
	action_ = value["Action"].asString();

}

std::string ListPhotoTagsResult::getAction()const
{
	return action_;
}

void ListPhotoTagsResult::setAction(const std::string& action)
{
	action_ = action;
}

std::string ListPhotoTagsResult::getMessage()const
{
	return message_;
}

void ListPhotoTagsResult::setMessage(const std::string& message)
{
	message_ = message;
}

std::string ListPhotoTagsResult::getCode()const
{
	return code_;
}

void ListPhotoTagsResult::setCode(const std::string& code)
{
	code_ = code;
}

