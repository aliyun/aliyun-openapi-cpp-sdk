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

#include <alibabacloud/cdn/model/DescribeLiveStreamFrameAndBitRateByDomainResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeLiveStreamFrameAndBitRateByDomainResult::DescribeLiveStreamFrameAndBitRateByDomainResult() :
	ServiceResult()
{}

DescribeLiveStreamFrameAndBitRateByDomainResult::DescribeLiveStreamFrameAndBitRateByDomainResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStreamFrameAndBitRateByDomainResult::~DescribeLiveStreamFrameAndBitRateByDomainResult()
{}

void DescribeLiveStreamFrameAndBitRateByDomainResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allFrameRateAndBitRateInfos = value["FrameRateAndBitRateInfos"]["FrameRateAndBitRateInfo"];
	for (auto value : allFrameRateAndBitRateInfos)
	{
		FrameRateAndBitRateInfo frameRateAndBitRateInfoObject;
		frameRateAndBitRateInfoObject.streamUrl = value["StreamUrl"].asString();
		frameRateAndBitRateInfoObject.videoFrameRate = std::stof(value["VideoFrameRate"].asString());
		frameRateAndBitRateInfoObject.audioFrameRate = std::stof(value["AudioFrameRate"].asString());
		frameRateAndBitRateInfoObject.bitRate = std::stof(value["BitRate"].asString());
		frameRateAndBitRateInfoObject.time = value["Time"].asString();
		frameRateAndBitRateInfos_.push_back(frameRateAndBitRateInfoObject);
	}
	count_ = std::stol(value["Count"].asString());
	pageNumber_ = std::stol(value["pageNumber"].asString());
	pageSize_ = std::stol(value["pageSize"].asString());

}

long DescribeLiveStreamFrameAndBitRateByDomainResult::getPageSize()const
{
	return pageSize_;
}

void DescribeLiveStreamFrameAndBitRateByDomainResult::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
}

long DescribeLiveStreamFrameAndBitRateByDomainResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeLiveStreamFrameAndBitRateByDomainResult::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
}

long DescribeLiveStreamFrameAndBitRateByDomainResult::getCount()const
{
	return count_;
}

void DescribeLiveStreamFrameAndBitRateByDomainResult::setCount(long count)
{
	count_ = count;
}

