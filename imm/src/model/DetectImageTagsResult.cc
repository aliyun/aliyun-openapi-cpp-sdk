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

#include <alibabacloud/imm/model/DetectImageTagsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

DetectImageTagsResult::DetectImageTagsResult() :
	ServiceResult()
{}

DetectImageTagsResult::DetectImageTagsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DetectImageTagsResult::~DetectImageTagsResult()
{}

void DetectImageTagsResult::parse(const std::string &payload)
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
		if(!value["TagConfidence"].isNull())
			tagsObject.tagConfidence = std::stof(value["TagConfidence"].asString());
		if(!value["TagLevel"].isNull())
			tagsObject.tagLevel = std::stoi(value["TagLevel"].asString());
		if(!value["ParentTagName"].isNull())
			tagsObject.parentTagName = value["ParentTagName"].asString();
		if(!value["ParentTagEnName"].isNull())
			tagsObject.parentTagEnName = value["ParentTagEnName"].asString();
		if(!value["TagEnName"].isNull())
			tagsObject.tagEnName = value["TagEnName"].asString();
		tags_.push_back(tagsObject);
	}
	if(!value["ImageUri"].isNull())
		imageUri_ = value["ImageUri"].asString();

}

std::string DetectImageTagsResult::getImageUri()const
{
	return imageUri_;
}

std::vector<DetectImageTagsResult::TagsItem> DetectImageTagsResult::getTags()const
{
	return tags_;
}

