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

#include <alibabacloud/cdn/model/DescribeLiveStreamFrameLossRatioResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeLiveStreamFrameLossRatioResult::DescribeLiveStreamFrameLossRatioResult() :
	ServiceResult()
{}

DescribeLiveStreamFrameLossRatioResult::DescribeLiveStreamFrameLossRatioResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStreamFrameLossRatioResult::~DescribeLiveStreamFrameLossRatioResult()
{}

void DescribeLiveStreamFrameLossRatioResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allFrameLossRatioInfos = value["FrameLossRatioInfos"]["FrameLossRatioInfo"];
	for (auto value : allFrameLossRatioInfos)
	{
		FrameLossRatioInfo frameLossRatioInfoObject;
		frameLossRatioInfoObject.streamUrl = value["StreamUrl"].asString();
		frameLossRatioInfoObject.frameLossRatio = std::stof(value["FrameLossRatio"].asString());
		frameLossRatioInfoObject.time = value["Time"].asString();
		frameLossRatioInfos_.push_back(frameLossRatioInfoObject);
	}

}

