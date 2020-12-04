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

#include <alibabacloud/green/model/DescribeOssIncrementOverviewResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeOssIncrementOverviewResult::DescribeOssIncrementOverviewResult() :
	ServiceResult()
{}

DescribeOssIncrementOverviewResult::DescribeOssIncrementOverviewResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOssIncrementOverviewResult::~DescribeOssIncrementOverviewResult()
{}

void DescribeOssIncrementOverviewResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ImageCount"].isNull())
		imageCount_ = std::stoi(value["ImageCount"].asString());
	if(!value["VideoCount"].isNull())
		videoCount_ = std::stoi(value["VideoCount"].asString());
	if(!value["VideoFrameCount"].isNull())
		videoFrameCount_ = std::stoi(value["VideoFrameCount"].asString());
	if(!value["PornUnhandleCount"].isNull())
		pornUnhandleCount_ = std::stoi(value["PornUnhandleCount"].asString());
	if(!value["TerrorismUnhandleCount"].isNull())
		terrorismUnhandleCount_ = std::stoi(value["TerrorismUnhandleCount"].asString());
	if(!value["AdUnhandleCount"].isNull())
		adUnhandleCount_ = std::stoi(value["AdUnhandleCount"].asString());
	if(!value["LiveUnhandleCount"].isNull())
		liveUnhandleCount_ = std::stoi(value["LiveUnhandleCount"].asString());
	if(!value["VoiceAntispamUnhandleCount"].isNull())
		voiceAntispamUnhandleCount_ = std::stoi(value["VoiceAntispamUnhandleCount"].asString());
	if(!value["AudioCount"].isNull())
		audioCount_ = std::stoi(value["AudioCount"].asString());

}

int DescribeOssIncrementOverviewResult::getImageCount()const
{
	return imageCount_;
}

int DescribeOssIncrementOverviewResult::getVideoCount()const
{
	return videoCount_;
}

int DescribeOssIncrementOverviewResult::getVoiceAntispamUnhandleCount()const
{
	return voiceAntispamUnhandleCount_;
}

int DescribeOssIncrementOverviewResult::getPornUnhandleCount()const
{
	return pornUnhandleCount_;
}

int DescribeOssIncrementOverviewResult::getLiveUnhandleCount()const
{
	return liveUnhandleCount_;
}

int DescribeOssIncrementOverviewResult::getAudioCount()const
{
	return audioCount_;
}

int DescribeOssIncrementOverviewResult::getVideoFrameCount()const
{
	return videoFrameCount_;
}

int DescribeOssIncrementOverviewResult::getTerrorismUnhandleCount()const
{
	return terrorismUnhandleCount_;
}

int DescribeOssIncrementOverviewResult::getAdUnhandleCount()const
{
	return adUnhandleCount_;
}

