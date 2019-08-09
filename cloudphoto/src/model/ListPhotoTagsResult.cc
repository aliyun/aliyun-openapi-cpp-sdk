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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allTags = value["Tags"]["Tag"];
	for (auto value : allTags)
	{
		Tag tagsObject;
		if(!value["Id"].isNull())
			tagsObject.id = std::stol(value["Id"].asString());
		if(!value["IdStr"].isNull())
			tagsObject.idStr = value["IdStr"].asString();
		if(!value["IsSubTag"].isNull())
			tagsObject.isSubTag = value["IsSubTag"].asString() == "true";
		if(!value["Name"].isNull())
			tagsObject.name = value["Name"].asString();
		if(!value["ParentTag"].isNull())
			tagsObject.parentTag = value["ParentTag"].asString();
		tags_.push_back(tagsObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Action"].isNull())
		action_ = value["Action"].asString();

}

std::string ListPhotoTagsResult::getAction()const
{
	return action_;
}

std::string ListPhotoTagsResult::getMessage()const
{
	return message_;
}

std::string ListPhotoTagsResult::getCode()const
{
	return code_;
}

std::vector<ListPhotoTagsResult::Tag> ListPhotoTagsResult::getTags()const
{
	return tags_;
}

