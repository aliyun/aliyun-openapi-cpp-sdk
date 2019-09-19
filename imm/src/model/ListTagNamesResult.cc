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

#include <alibabacloud/imm/model/ListTagNamesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

ListTagNamesResult::ListTagNamesResult() :
	ServiceResult()
{}

ListTagNamesResult::ListTagNamesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTagNamesResult::~ListTagNamesResult()
{}

void ListTagNamesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTagsNode = value["Tags"]["TagsItem"];
	for (auto valueTagsTagsItem : allTagsNode)
	{
		TagsItem tagsObject;
		if(!valueTagsTagsItem["TagName"].isNull())
			tagsObject.tagName = valueTagsTagsItem["TagName"].asString();
		if(!valueTagsTagsItem["Num"].isNull())
			tagsObject.num = std::stoi(valueTagsTagsItem["Num"].asString());
		tags_.push_back(tagsObject);
	}
	if(!value["NextMarker"].isNull())
		nextMarker_ = value["NextMarker"].asString();

}

std::string ListTagNamesResult::getNextMarker()const
{
	return nextMarker_;
}

std::vector<ListTagNamesResult::TagsItem> ListTagNamesResult::getTags()const
{
	return tags_;
}

