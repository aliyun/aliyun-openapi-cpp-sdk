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

#include <alibabacloud/cdn/model/DescribeLiveStreamOnlineBpsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeLiveStreamOnlineBpsResult::DescribeLiveStreamOnlineBpsResult() :
	ServiceResult()
{}

DescribeLiveStreamOnlineBpsResult::DescribeLiveStreamOnlineBpsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStreamOnlineBpsResult::~DescribeLiveStreamOnlineBpsResult()
{}

void DescribeLiveStreamOnlineBpsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allLiveStreamOnlineBpsInfos = value["LiveStreamOnlineBpsInfos"]["LiveStreamOnlineBpsInfo"];
	for (auto value : allLiveStreamOnlineBpsInfos)
	{
		LiveStreamOnlineBpsInfo liveStreamOnlineBpsInfoObject;
		liveStreamOnlineBpsInfoObject.streamUrl = value["StreamUrl"].asString();
		liveStreamOnlineBpsInfoObject.upBps = std::stof(value["UpBps"].asString());
		liveStreamOnlineBpsInfoObject.downBps = std::stof(value["DownBps"].asString());
		liveStreamOnlineBpsInfoObject.time = value["Time"].asString();
		liveStreamOnlineBpsInfos_.push_back(liveStreamOnlineBpsInfoObject);
	}
	totalUserNumber_ = std::stol(value["TotalUserNumber"].asString());
	flvBps_ = std::stof(value["FlvBps"].asString());
	hlsBps_ = std::stof(value["HlsBps"].asString());

}

float DescribeLiveStreamOnlineBpsResult::getHlsBps()const
{
	return hlsBps_;
}

void DescribeLiveStreamOnlineBpsResult::setHlsBps(float hlsBps)
{
	hlsBps_ = hlsBps;
}

long DescribeLiveStreamOnlineBpsResult::getTotalUserNumber()const
{
	return totalUserNumber_;
}

void DescribeLiveStreamOnlineBpsResult::setTotalUserNumber(long totalUserNumber)
{
	totalUserNumber_ = totalUserNumber;
}

float DescribeLiveStreamOnlineBpsResult::getFlvBps()const
{
	return flvBps_;
}

void DescribeLiveStreamOnlineBpsResult::setFlvBps(float flvBps)
{
	flvBps_ = flvBps;
}

