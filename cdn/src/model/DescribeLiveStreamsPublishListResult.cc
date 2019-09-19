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

#include <alibabacloud/cdn/model/DescribeLiveStreamsPublishListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeLiveStreamsPublishListResult::DescribeLiveStreamsPublishListResult() :
	ServiceResult()
{}

DescribeLiveStreamsPublishListResult::DescribeLiveStreamsPublishListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStreamsPublishListResult::~DescribeLiveStreamsPublishListResult()
{}

void DescribeLiveStreamsPublishListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPublishInfoNode = value["PublishInfo"]["LiveStreamPublishInfo"];
	for (auto valuePublishInfoLiveStreamPublishInfo : allPublishInfoNode)
	{
		LiveStreamPublishInfo publishInfoObject;
		if(!valuePublishInfoLiveStreamPublishInfo["DomainName"].isNull())
			publishInfoObject.domainName = valuePublishInfoLiveStreamPublishInfo["DomainName"].asString();
		if(!valuePublishInfoLiveStreamPublishInfo["AppName"].isNull())
			publishInfoObject.appName = valuePublishInfoLiveStreamPublishInfo["AppName"].asString();
		if(!valuePublishInfoLiveStreamPublishInfo["StreamName"].isNull())
			publishInfoObject.streamName = valuePublishInfoLiveStreamPublishInfo["StreamName"].asString();
		if(!valuePublishInfoLiveStreamPublishInfo["StreamUrl"].isNull())
			publishInfoObject.streamUrl = valuePublishInfoLiveStreamPublishInfo["StreamUrl"].asString();
		if(!valuePublishInfoLiveStreamPublishInfo["PublishTime"].isNull())
			publishInfoObject.publishTime = valuePublishInfoLiveStreamPublishInfo["PublishTime"].asString();
		if(!valuePublishInfoLiveStreamPublishInfo["StopTime"].isNull())
			publishInfoObject.stopTime = valuePublishInfoLiveStreamPublishInfo["StopTime"].asString();
		if(!valuePublishInfoLiveStreamPublishInfo["PublishUrl"].isNull())
			publishInfoObject.publishUrl = valuePublishInfoLiveStreamPublishInfo["PublishUrl"].asString();
		if(!valuePublishInfoLiveStreamPublishInfo["ClientAddr"].isNull())
			publishInfoObject.clientAddr = valuePublishInfoLiveStreamPublishInfo["ClientAddr"].asString();
		if(!valuePublishInfoLiveStreamPublishInfo["EdgeNodeAddr"].isNull())
			publishInfoObject.edgeNodeAddr = valuePublishInfoLiveStreamPublishInfo["EdgeNodeAddr"].asString();
		publishInfo_.push_back(publishInfoObject);
	}

}

std::vector<DescribeLiveStreamsPublishListResult::LiveStreamPublishInfo> DescribeLiveStreamsPublishListResult::getPublishInfo()const
{
	return publishInfo_;
}

