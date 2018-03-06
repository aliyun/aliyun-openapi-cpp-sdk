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
		Tag tagsObject;
		if(!value["Id"].isNull())
			tagsObject.id = std::stol(value["Id"].asString());
		if(!value["IdStr"].isNull())
			tagsObject.idStr = value["IdStr"].asString();
		if(!value["Name"].isNull())
			tagsObject.name = value["Name"].asString();
		if(!value["IsSubTag"].isNull())
			tagsObject.isSubTag = value["IsSubTag"].asString() == "true";
		if(!value["ParentTag"].isNull())
			tagsObject.parentTag = value["ParentTag"].asString();
		auto allCover = value["Cover"];
		for (auto value : allCover)
		{
			Tag::Cover coverObject;
			if(!value["Id"].isNull())
				coverObject.id = std::stol(value["Id"].asString());
			if(!value["IdStr"].isNull())
				coverObject.idStr = value["IdStr"].asString();
			if(!value["Title"].isNull())
				coverObject.title = value["Title"].asString();
			if(!value["FileId"].isNull())
				coverObject.fileId = value["FileId"].asString();
			if(!value["State"].isNull())
				coverObject.state = value["State"].asString();
			if(!value["Md5"].isNull())
				coverObject.md5 = value["Md5"].asString();
			if(!value["IsVideo"].isNull())
				coverObject.isVideo = value["IsVideo"].asString() == "true";
			if(!value["Remark"].isNull())
				coverObject.remark = value["Remark"].asString();
			if(!value["Width"].isNull())
				coverObject.width = std::stol(value["Width"].asString());
			if(!value["Height"].isNull())
				coverObject.height = std::stol(value["Height"].asString());
			if(!value["Ctime"].isNull())
				coverObject.ctime = std::stol(value["Ctime"].asString());
			if(!value["Mtime"].isNull())
				coverObject.mtime = std::stol(value["Mtime"].asString());
			tagsObject.cover.push_back(coverObject);
		}
		tags_.push_back(tagsObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Action"].isNull())
		action_ = value["Action"].asString();

}

std::string ListTagsResult::getAction()const
{
	return action_;
}

std::string ListTagsResult::getMessage()const
{
	return message_;
}

std::string ListTagsResult::getCode()const
{
	return code_;
}

std::vector<ListTagsResult::Tag> ListTagsResult::getTags()const
{
	return tags_;
}

