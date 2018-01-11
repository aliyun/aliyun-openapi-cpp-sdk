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

#include <alibabacloud/cloudphoto/model/ListTagsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudPhoto;
using namespace AlibabaCloud::CloudPhoto::Model;

ListTagsResult::ListTagsResult() :
	ServiceResult()
{}

ListTagsResult::ListTagsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTagsResult::~ListTagsResult()
{}

void ListTagsResult::parse(const std::string &payload)
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
		tagObject.name = value["Name"].asString();
		tagObject.isSubTag = std::stoi(value["IsSubTag"].asString());
		tagObject.parentTag = value["ParentTag"].asString();
		auto allCover = value["Cover"];
		for (auto value : allCover)
		{
			Tag::Cover coverObject;
			coverObject.id = std::stol(value["Id"].asString());
			coverObject.title = value["Title"].asString();
			coverObject.fileId = value["FileId"].asString();
			coverObject.state = value["State"].asString();
			coverObject.md5 = value["Md5"].asString();
			coverObject.isVideo = std::stoi(value["IsVideo"].asString());
			coverObject.remark = value["Remark"].asString();
			coverObject.width = std::stol(value["Width"].asString());
			coverObject.height = std::stol(value["Height"].asString());
			coverObject.ctime = std::stol(value["Ctime"].asString());
			coverObject.mtime = std::stol(value["Mtime"].asString());
			tagObject.cover.push_back(coverObject);
		}
		tags_.push_back(tagObject);
	}
	code_ = value["Code"].asString();
	message_ = value["Message"].asString();
	action_ = value["Action"].asString();

}

std::string ListTagsResult::getAction()const
{
	return action_;
}

void ListTagsResult::setAction(const std::string& action)
{
	action_ = action;
}

std::string ListTagsResult::getMessage()const
{
	return message_;
}

void ListTagsResult::setMessage(const std::string& message)
{
	message_ = message;
}

std::string ListTagsResult::getCode()const
{
	return code_;
}

void ListTagsResult::setCode(const std::string& code)
{
	code_ = code;
}

