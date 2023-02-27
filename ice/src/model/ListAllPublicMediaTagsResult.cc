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

#include <alibabacloud/ice/model/ListAllPublicMediaTagsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

ListAllPublicMediaTagsResult::ListAllPublicMediaTagsResult() :
	ServiceResult()
{}

ListAllPublicMediaTagsResult::ListAllPublicMediaTagsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAllPublicMediaTagsResult::~ListAllPublicMediaTagsResult()
{}

void ListAllPublicMediaTagsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMediaTagListNode = value["MediaTagList"]["mediaTag"];
	for (auto valueMediaTagListmediaTag : allMediaTagListNode)
	{
		MediaTag mediaTagListObject;
		if(!valueMediaTagListmediaTag["MediaTagId"].isNull())
			mediaTagListObject.mediaTagId = valueMediaTagListmediaTag["MediaTagId"].asString();
		if(!valueMediaTagListmediaTag["MediaTagNameChinese"].isNull())
			mediaTagListObject.mediaTagNameChinese = valueMediaTagListmediaTag["MediaTagNameChinese"].asString();
		if(!valueMediaTagListmediaTag["MediaTagNameEnglish"].isNull())
			mediaTagListObject.mediaTagNameEnglish = valueMediaTagListmediaTag["MediaTagNameEnglish"].asString();
		auto allOptionsNode = valueMediaTagListmediaTag["Options"]["option"];
		for (auto valueMediaTagListmediaTagOptionsoption : allOptionsNode)
		{
			MediaTag::Option optionsObject;
			if(!valueMediaTagListmediaTagOptionsoption["OptionId"].isNull())
				optionsObject.optionId = valueMediaTagListmediaTagOptionsoption["OptionId"].asString();
			if(!valueMediaTagListmediaTagOptionsoption["OptionEnglishName"].isNull())
				optionsObject.optionEnglishName = valueMediaTagListmediaTagOptionsoption["OptionEnglishName"].asString();
			if(!valueMediaTagListmediaTagOptionsoption["OptionChineseName"].isNull())
				optionsObject.optionChineseName = valueMediaTagListmediaTagOptionsoption["OptionChineseName"].asString();
			mediaTagListObject.options.push_back(optionsObject);
		}
		mediaTagList_.push_back(mediaTagListObject);
	}

}

std::vector<ListAllPublicMediaTagsResult::MediaTag> ListAllPublicMediaTagsResult::getMediaTagList()const
{
	return mediaTagList_;
}

