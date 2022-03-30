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

#include <alibabacloud/live/model/DescribeToutiaoLivePublishResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeToutiaoLivePublishResult::DescribeToutiaoLivePublishResult() :
	ServiceResult()
{}

DescribeToutiaoLivePublishResult::DescribeToutiaoLivePublishResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeToutiaoLivePublishResult::~DescribeToutiaoLivePublishResult()
{}

void DescribeToutiaoLivePublishResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allContentNode = value["Content"]["ContentItem"];
	for (auto valueContentContentItem : allContentNode)
	{
		ContentItem contentObject;
		if(!valueContentContentItem["Domain"].isNull())
			contentObject.domain = valueContentContentItem["Domain"].asString();
		if(!valueContentContentItem["StreamName"].isNull())
			contentObject.streamName = valueContentContentItem["StreamName"].asString();
		if(!valueContentContentItem["App"].isNull())
			contentObject.app = valueContentContentItem["App"].asString();
		if(!valueContentContentItem["Fps"].isNull())
			contentObject.fps = std::stof(valueContentContentItem["Fps"].asString());
		if(!valueContentContentItem["Flr"].isNull())
			contentObject.flr = std::stof(valueContentContentItem["Flr"].asString());
		if(!valueContentContentItem["Timestamp"].isNull())
			contentObject.timestamp = std::stol(valueContentContentItem["Timestamp"].asString());
		if(!valueContentContentItem["Bitrate"].isNull())
			contentObject.bitrate = std::stof(valueContentContentItem["Bitrate"].asString());
		if(!valueContentContentItem["BwDiff"].isNull())
			contentObject.bwDiff = std::stof(valueContentContentItem["BwDiff"].asString());
		if(!valueContentContentItem["CdnName"].isNull())
			contentObject.cdnName = valueContentContentItem["CdnName"].asString();
		content_.push_back(contentObject);
	}
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();

}

std::string DescribeToutiaoLivePublishResult::getDescription()const
{
	return description_;
}

std::vector<DescribeToutiaoLivePublishResult::ContentItem> DescribeToutiaoLivePublishResult::getContent()const
{
	return content_;
}

