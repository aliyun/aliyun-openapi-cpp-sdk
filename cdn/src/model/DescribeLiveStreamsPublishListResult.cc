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
	auto allPublishInfo = value["PublishInfo"]["LiveStreamPublishInfo"];
	for (auto value : allPublishInfo)
	{
		LiveStreamPublishInfo liveStreamPublishInfoObject;
		liveStreamPublishInfoObject.domainName = value["DomainName"].asString();
		liveStreamPublishInfoObject.appName = value["AppName"].asString();
		liveStreamPublishInfoObject.streamName = value["StreamName"].asString();
		liveStreamPublishInfoObject.streamUrl = value["StreamUrl"].asString();
		liveStreamPublishInfoObject.publishTime = value["PublishTime"].asString();
		liveStreamPublishInfoObject.stopTime = value["StopTime"].asString();
		liveStreamPublishInfoObject.publishUrl = value["PublishUrl"].asString();
		liveStreamPublishInfoObject.clientAddr = value["ClientAddr"].asString();
		liveStreamPublishInfoObject.edgeNodeAddr = value["EdgeNodeAddr"].asString();
		publishInfo_.push_back(liveStreamPublishInfoObject);
	}

}

