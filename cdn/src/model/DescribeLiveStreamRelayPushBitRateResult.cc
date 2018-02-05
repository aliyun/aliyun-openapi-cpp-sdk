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

#include <alibabacloud/cdn/model/DescribeLiveStreamRelayPushBitRateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeLiveStreamRelayPushBitRateResult::DescribeLiveStreamRelayPushBitRateResult() :
	ServiceResult()
{}

DescribeLiveStreamRelayPushBitRateResult::DescribeLiveStreamRelayPushBitRateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStreamRelayPushBitRateResult::~DescribeLiveStreamRelayPushBitRateResult()
{}

void DescribeLiveStreamRelayPushBitRateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allRelayPushBitRateModelList = value["RelayPushBitRateModelList"]["RelayPushBitRateModel"];
	for (auto value : allRelayPushBitRateModelList)
	{
		RelayPushBitRateModel relayPushBitRateModelListObject;
		if(!value["Time"].isNull())
			relayPushBitRateModelListObject.time = value["Time"].asString();
		if(!value["VedioFrame"].isNull())
			relayPushBitRateModelListObject.vedioFrame = value["VedioFrame"].asString();
		if(!value["VedioTimstamp"].isNull())
			relayPushBitRateModelListObject.vedioTimstamp = value["VedioTimstamp"].asString();
		if(!value["AudioFrame"].isNull())
			relayPushBitRateModelListObject.audioFrame = value["AudioFrame"].asString();
		if(!value["AudioTimstamp"].isNull())
			relayPushBitRateModelListObject.audioTimstamp = value["AudioTimstamp"].asString();
		if(!value["RelayDomain"].isNull())
			relayPushBitRateModelListObject.relayDomain = value["RelayDomain"].asString();
		relayPushBitRateModelList_.push_back(relayPushBitRateModelListObject);
	}

}

std::vector<DescribeLiveStreamRelayPushBitRateResult::RelayPushBitRateModel> DescribeLiveStreamRelayPushBitRateResult::getRelayPushBitRateModelList()const
{
	return relayPushBitRateModelList_;
}

