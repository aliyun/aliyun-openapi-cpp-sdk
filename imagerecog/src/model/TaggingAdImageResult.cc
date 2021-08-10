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

#include <alibabacloud/imagerecog/model/TaggingAdImageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imagerecog;
using namespace AlibabaCloud::Imagerecog::Model;

TaggingAdImageResult::TaggingAdImageResult() :
	ServiceResult()
{}

TaggingAdImageResult::TaggingAdImageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

TaggingAdImageResult::~TaggingAdImageResult()
{}

void TaggingAdImageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TagInfo"].isNull())
		data_.tagInfo = dataNode["TagInfo"].asString();
	auto allTagsNode = dataNode["Tags"]["tagsItem"];
	for (auto dataNodeTagstagsItem : allTagsNode)
	{
		Data::TagsItem tagsItemObject;
		if(!dataNodeTagstagsItem["Value"].isNull())
			tagsItemObject.value = dataNodeTagstagsItem["Value"].asString();
		if(!dataNodeTagstagsItem["Confidence"].isNull())
			tagsItemObject.confidence = std::stof(dataNodeTagstagsItem["Confidence"].asString());
		data_.tags.push_back(tagsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string TaggingAdImageResult::getMessage()const
{
	return message_;
}

TaggingAdImageResult::Data TaggingAdImageResult::getData()const
{
	return data_;
}

std::string TaggingAdImageResult::getCode()const
{
	return code_;
}

