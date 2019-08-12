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

#include <alibabacloud/imm/model/ListSetTagsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

ListSetTagsResult::ListSetTagsResult() :
	ServiceResult()
{}

ListSetTagsResult::ListSetTagsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSetTagsResult::~ListSetTagsResult()
{}

void ListSetTagsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allTags = value["Tags"]["TagsItem"];
	for (auto value : allTags)
	{
		TagsItem tagsObject;
		if(!value["TagName"].isNull())
			tagsObject.tagName = value["TagName"].asString();
		if(!value["TagCount"].isNull())
			tagsObject.tagCount = std::stoi(value["TagCount"].asString());
		tags_.push_back(tagsObject);
	}
	if(!value["SetId"].isNull())
		setId_ = value["SetId"].asString();

}

std::string ListSetTagsResult::getSetId()const
{
	return setId_;
}

std::vector<ListSetTagsResult::TagsItem> ListSetTagsResult::getTags()const
{
	return tags_;
}

