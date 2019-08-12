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

#include <alibabacloud/live/model/DescribeHlsLiveStreamRealTimeBpsDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeHlsLiveStreamRealTimeBpsDataResult::DescribeHlsLiveStreamRealTimeBpsDataResult() :
	ServiceResult()
{}

DescribeHlsLiveStreamRealTimeBpsDataResult::DescribeHlsLiveStreamRealTimeBpsDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeHlsLiveStreamRealTimeBpsDataResult::~DescribeHlsLiveStreamRealTimeBpsDataResult()
{}

void DescribeHlsLiveStreamRealTimeBpsDataResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allUsageData = value["UsageData"]["UsageDataPerDomain"];
	for (auto value : allUsageData)
	{
		UsageDataPerDomain usageDataObject;
		if(!value["DomainName"].isNull())
			usageDataObject.domainName = value["DomainName"].asString();
		auto allStreamInfos = value["StreamInfos"]["StreamInfo"];
		for (auto value : allStreamInfos)
		{
			UsageDataPerDomain::StreamInfo streamInfosObject;
			if(!value["StreamName"].isNull())
				streamInfosObject.streamName = value["StreamName"].asString();
			auto allInfos = value["Infos"]["Info"];
			for (auto value : allInfos)
			{
				UsageDataPerDomain::StreamInfo::Info infosObject;
				if(!value["DownFlow"].isNull())
					infosObject.downFlow = std::stof(value["DownFlow"].asString());
				if(!value["Rate"].isNull())
					infosObject.rate = value["Rate"].asString();
				if(!value["Online"].isNull())
					infosObject.online = std::stof(value["Online"].asString());
				streamInfosObject.infos.push_back(infosObject);
			}
			usageDataObject.streamInfos.push_back(streamInfosObject);
		}
		usageData_.push_back(usageDataObject);
	}
	if(!value["Time"].isNull())
		time_ = value["Time"].asString();

}

std::vector<DescribeHlsLiveStreamRealTimeBpsDataResult::UsageDataPerDomain> DescribeHlsLiveStreamRealTimeBpsDataResult::getUsageData()const
{
	return usageData_;
}

std::string DescribeHlsLiveStreamRealTimeBpsDataResult::getTime()const
{
	return time_;
}

