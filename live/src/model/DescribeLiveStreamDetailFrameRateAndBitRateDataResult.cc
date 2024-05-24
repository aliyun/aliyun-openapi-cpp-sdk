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

#include <alibabacloud/live/model/DescribeLiveStreamDetailFrameRateAndBitRateDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveStreamDetailFrameRateAndBitRateDataResult::DescribeLiveStreamDetailFrameRateAndBitRateDataResult() :
	ServiceResult()
{}

DescribeLiveStreamDetailFrameRateAndBitRateDataResult::DescribeLiveStreamDetailFrameRateAndBitRateDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStreamDetailFrameRateAndBitRateDataResult::~DescribeLiveStreamDetailFrameRateAndBitRateDataResult()
{}

void DescribeLiveStreamDetailFrameRateAndBitRateDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFrameRateAndBitRateInfosNode = value["FrameRateAndBitRateInfos"]["frabr"];
	for (auto valueFrameRateAndBitRateInfosfrabr : allFrameRateAndBitRateInfosNode)
	{
		Frabr frameRateAndBitRateInfosObject;
		if(!valueFrameRateAndBitRateInfosfrabr["AudioBitRate"].isNull())
			frameRateAndBitRateInfosObject.audioBitRate = std::stof(valueFrameRateAndBitRateInfosfrabr["AudioBitRate"].asString());
		if(!valueFrameRateAndBitRateInfosfrabr["AudioFrameRate"].isNull())
			frameRateAndBitRateInfosObject.audioFrameRate = std::stof(valueFrameRateAndBitRateInfosfrabr["AudioFrameRate"].asString());
		if(!valueFrameRateAndBitRateInfosfrabr["BitRate"].isNull())
			frameRateAndBitRateInfosObject.bitRate = std::stof(valueFrameRateAndBitRateInfosfrabr["BitRate"].asString());
		if(!valueFrameRateAndBitRateInfosfrabr["StreamUrl"].isNull())
			frameRateAndBitRateInfosObject.streamUrl = valueFrameRateAndBitRateInfosfrabr["StreamUrl"].asString();
		if(!valueFrameRateAndBitRateInfosfrabr["Time"].isNull())
			frameRateAndBitRateInfosObject.time = valueFrameRateAndBitRateInfosfrabr["Time"].asString();
		if(!valueFrameRateAndBitRateInfosfrabr["VideoBitRate"].isNull())
			frameRateAndBitRateInfosObject.videoBitRate = std::stof(valueFrameRateAndBitRateInfosfrabr["VideoBitRate"].asString());
		if(!valueFrameRateAndBitRateInfosfrabr["VideoFrameRate"].isNull())
			frameRateAndBitRateInfosObject.videoFrameRate = std::stof(valueFrameRateAndBitRateInfosfrabr["VideoFrameRate"].asString());
		frameRateAndBitRateInfos_.push_back(frameRateAndBitRateInfosObject);
	}

}

std::vector<DescribeLiveStreamDetailFrameRateAndBitRateDataResult::Frabr> DescribeLiveStreamDetailFrameRateAndBitRateDataResult::getFrameRateAndBitRateInfos()const
{
	return frameRateAndBitRateInfos_;
}

