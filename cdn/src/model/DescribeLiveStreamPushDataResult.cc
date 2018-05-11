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

#include <alibabacloud/cdn/model/DescribeLiveStreamPushDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeLiveStreamPushDataResult::DescribeLiveStreamPushDataResult() :
	ServiceResult()
{}

DescribeLiveStreamPushDataResult::DescribeLiveStreamPushDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStreamPushDataResult::~DescribeLiveStreamPushDataResult()
{}

void DescribeLiveStreamPushDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allPushStreamModelList = value["PushStreamModelList"]["PushStreamModel"];
	for (auto value : allPushStreamModelList)
	{
		PushStreamModel pushStreamModelListObject;
		if(!value["Time"].isNull())
			pushStreamModelListObject.time = value["Time"].asString();
		if(!value["Stream"].isNull())
			pushStreamModelListObject.stream = value["Stream"].asString();
		if(!value["FrameRate"].isNull())
			pushStreamModelListObject.frameRate = std::stof(value["FrameRate"].asString());
		if(!value["BitRate"].isNull())
			pushStreamModelListObject.bitRate = std::stof(value["BitRate"].asString());
		if(!value["FrameLossRate"].isNull())
			pushStreamModelListObject.frameLossRate = std::stof(value["FrameLossRate"].asString());
		if(!value["ServerAddr"].isNull())
			pushStreamModelListObject.serverAddr = value["ServerAddr"].asString();
		if(!value["ClientAddr"].isNull())
			pushStreamModelListObject.clientAddr = value["ClientAddr"].asString();
		pushStreamModelList_.push_back(pushStreamModelListObject);
	}

}

std::vector<DescribeLiveStreamPushDataResult::PushStreamModel> DescribeLiveStreamPushDataResult::getPushStreamModelList()const
{
	return pushStreamModelList_;
}

