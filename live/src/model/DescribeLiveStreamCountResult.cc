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

#include <alibabacloud/live/model/DescribeLiveStreamCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveStreamCountResult::DescribeLiveStreamCountResult() :
	ServiceResult()
{}

DescribeLiveStreamCountResult::DescribeLiveStreamCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStreamCountResult::~DescribeLiveStreamCountResult()
{}

void DescribeLiveStreamCountResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allStreamCountInfos = value["StreamCountInfos"]["StreamCountInfo"];
	for (auto value : allStreamCountInfos)
	{
		StreamCountInfo streamCountInfosObject;
		if(!value["Count"].isNull())
			streamCountInfosObject.count = std::stol(value["Count"].asString());
		if(!value["Limit"].isNull())
			streamCountInfosObject.limit = std::stol(value["Limit"].asString());
		if(!value["Type"].isNull())
			streamCountInfosObject.type = value["Type"].asString();
		auto allStreamCountDetails = value["StreamCountDetails"]["StreamCountDetail"];
		for (auto value : allStreamCountDetails)
		{
			StreamCountInfo::StreamCountDetail streamCountDetailsObject;
			if(!value["Format"].isNull())
				streamCountDetailsObject.format = value["Format"].asString();
			if(!value["VideoDataRate"].isNull())
				streamCountDetailsObject.videoDataRate = std::stol(value["VideoDataRate"].asString());
			if(!value["Count"].isNull())
				streamCountDetailsObject.count = std::stol(value["Count"].asString());
			streamCountInfosObject.streamCountDetails.push_back(streamCountDetailsObject);
		}
		streamCountInfos_.push_back(streamCountInfosObject);
	}

}

std::vector<DescribeLiveStreamCountResult::StreamCountInfo> DescribeLiveStreamCountResult::getStreamCountInfos()const
{
	return streamCountInfos_;
}

