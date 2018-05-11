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

#include <alibabacloud/cdn/model/DescribeLiveStreamRelayPushDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeLiveStreamRelayPushDataResult::DescribeLiveStreamRelayPushDataResult() :
	ServiceResult()
{}

DescribeLiveStreamRelayPushDataResult::DescribeLiveStreamRelayPushDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStreamRelayPushDataResult::~DescribeLiveStreamRelayPushDataResult()
{}

void DescribeLiveStreamRelayPushDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allRelayPushDetailModelList = value["RelayPushDetailModelList"]["RelayPushDetailModel"];
	for (auto value : allRelayPushDetailModelList)
	{
		RelayPushDetailModel relayPushDetailModelListObject;
		if(!value["Time"].isNull())
			relayPushDetailModelListObject.time = value["Time"].asString();
		if(!value["Stream"].isNull())
			relayPushDetailModelListObject.stream = value["Stream"].asString();
		if(!value["FrameRate"].isNull())
			relayPushDetailModelListObject.frameRate = std::stof(value["FrameRate"].asString());
		if(!value["BitRate"].isNull())
			relayPushDetailModelListObject.bitRate = std::stof(value["BitRate"].asString());
		if(!value["FrameLossRate"].isNull())
			relayPushDetailModelListObject.frameLossRate = std::stof(value["FrameLossRate"].asString());
		if(!value["ServerAddr"].isNull())
			relayPushDetailModelListObject.serverAddr = value["ServerAddr"].asString();
		if(!value["ClientAddr"].isNull())
			relayPushDetailModelListObject.clientAddr = value["ClientAddr"].asString();
		relayPushDetailModelList_.push_back(relayPushDetailModelListObject);
	}

}

std::vector<DescribeLiveStreamRelayPushDataResult::RelayPushDetailModel> DescribeLiveStreamRelayPushDataResult::getRelayPushDetailModelList()const
{
	return relayPushDetailModelList_;
}

