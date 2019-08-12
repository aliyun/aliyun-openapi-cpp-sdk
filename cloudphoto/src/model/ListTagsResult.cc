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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
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
		auto coverNode = value["Cover"];
		if(!coverNode["Id"].isNull())
			tagsObject.cover.id = std::stol(coverNode["Id"].asString());
		if(!coverNode["IdStr"].isNull())
			tagsObject.cover.idStr = coverNode["IdStr"].asString();
		if(!coverNode["Title"].isNull())
			tagsObject.cover.title = coverNode["Title"].asString();
		if(!coverNode["FileId"].isNull())
			tagsObject.cover.fileId = coverNode["FileId"].asString();
		if(!coverNode["State"].isNull())
			tagsObject.cover.state = coverNode["State"].asString();
		if(!coverNode["Md5"].isNull())
			tagsObject.cover.md5 = coverNode["Md5"].asString();
		if(!coverNode["IsVideo"].isNull())
			tagsObject.cover.isVideo = coverNode["IsVideo"].asString() == "true";
		if(!coverNode["Remark"].isNull())
			tagsObject.cover.remark = coverNode["Remark"].asString();
		if(!coverNode["Width"].isNull())
			tagsObject.cover.width = std::stol(coverNode["Width"].asString());
		if(!coverNode["Height"].isNull())
			tagsObject.cover.height = std::stol(coverNode["Height"].asString());
		if(!coverNode["Ctime"].isNull())
			tagsObject.cover.ctime = std::stol(coverNode["Ctime"].asString());
		if(!coverNode["Mtime"].isNull())
			tagsObject.cover.mtime = std::stol(coverNode["Mtime"].asString());
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

