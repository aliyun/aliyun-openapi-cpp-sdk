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

#include <alibabacloud/live/model/DescribeLiveDomainFrameRateAndBitRateDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveDomainFrameRateAndBitRateDataResult::DescribeLiveDomainFrameRateAndBitRateDataResult() :
	ServiceResult()
{}

DescribeLiveDomainFrameRateAndBitRateDataResult::DescribeLiveDomainFrameRateAndBitRateDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveDomainFrameRateAndBitRateDataResult::~DescribeLiveDomainFrameRateAndBitRateDataResult()
{}

void DescribeLiveDomainFrameRateAndBitRateDataResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allFrameRateAndBitRateInfos = value["FrameRateAndBitRateInfos"]["FrameRateAndBitRateInfo"];
	for (auto value : allFrameRateAndBitRateInfos)
	{
		FrameRateAndBitRateInfo frameRateAndBitRateInfosObject;
		if(!value["AudioFrameRate"].isNull())
			frameRateAndBitRateInfosObject.audioFrameRate = std::stof(value["AudioFrameRate"].asString());
		if(!value["BitRate"].isNull())
			frameRateAndBitRateInfosObject.bitRate = std::stof(value["BitRate"].asString());
		if(!value["VideoFrameRate"].isNull())
			frameRateAndBitRateInfosObject.videoFrameRate = std::stof(value["VideoFrameRate"].asString());
		if(!value["StreamUrl"].isNull())
			frameRateAndBitRateInfosObject.streamUrl = value["StreamUrl"].asString();
		frameRateAndBitRateInfos_.push_back(frameRateAndBitRateInfosObject);
	}

}

std::vector<DescribeLiveDomainFrameRateAndBitRateDataResult::FrameRateAndBitRateInfo> DescribeLiveDomainFrameRateAndBitRateDataResult::getFrameRateAndBitRateInfos()const
{
	return frameRateAndBitRateInfos_;
}

