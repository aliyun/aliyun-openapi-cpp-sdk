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

#include <alibabacloud/imagerecog/model/TaggingImageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imagerecog;
using namespace AlibabaCloud::Imagerecog::Model;

TaggingImageResult::TaggingImageResult() :
	ServiceResult()
{}

TaggingImageResult::TaggingImageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

TaggingImageResult::~TaggingImageResult()
{}

void TaggingImageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allTagsNode = dataNode["Tags"]["Tag"];
	for (auto dataNodeTagsTag : allTagsNode)
	{
		Data::Tag tagObject;
		if(!dataNodeTagsTag["Value"].isNull())
			tagObject.value = dataNodeTagsTag["Value"].asString();
		if(!dataNodeTagsTag["Confidence"].isNull())
			tagObject.confidence = std::stof(dataNodeTagsTag["Confidence"].asString());
		data_.tags.push_back(tagObject);
	}

}

TaggingImageResult::Data TaggingImageResult::getData()const
{
	return data_;
}

