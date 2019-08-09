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

#include <alibabacloud/live/model/DescribeLiveStreamsControlHistoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveStreamsControlHistoryResult::DescribeLiveStreamsControlHistoryResult() :
	ServiceResult()
{}

DescribeLiveStreamsControlHistoryResult::DescribeLiveStreamsControlHistoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStreamsControlHistoryResult::~DescribeLiveStreamsControlHistoryResult()
{}

void DescribeLiveStreamsControlHistoryResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allControlInfo = value["ControlInfo"]["LiveStreamControlInfo"];
	for (auto value : allControlInfo)
	{
		LiveStreamControlInfo controlInfoObject;
		if(!value["StreamName"].isNull())
			controlInfoObject.streamName = value["StreamName"].asString();
		if(!value["ClientIP"].isNull())
			controlInfoObject.clientIP = value["ClientIP"].asString();
		if(!value["Action"].isNull())
			controlInfoObject.action = value["Action"].asString();
		if(!value["TimeStamp"].isNull())
			controlInfoObject.timeStamp = value["TimeStamp"].asString();
		controlInfo_.push_back(controlInfoObject);
	}

}

std::vector<DescribeLiveStreamsControlHistoryResult::LiveStreamControlInfo> DescribeLiveStreamsControlHistoryResult::getControlInfo()const
{
	return controlInfo_;
}

