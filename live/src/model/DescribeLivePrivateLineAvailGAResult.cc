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

#include <alibabacloud/live/model/DescribeLivePrivateLineAvailGAResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLivePrivateLineAvailGAResult::DescribeLivePrivateLineAvailGAResult() :
	ServiceResult()
{}

DescribeLivePrivateLineAvailGAResult::DescribeLivePrivateLineAvailGAResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLivePrivateLineAvailGAResult::~DescribeLivePrivateLineAvailGAResult()
{}

void DescribeLivePrivateLineAvailGAResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLivePrivateLineAvailGAsNode = value["LivePrivateLineAvailGAs"]["LivePrivateLineAvailGA"];
	for (auto valueLivePrivateLineAvailGAsLivePrivateLineAvailGA : allLivePrivateLineAvailGAsNode)
	{
		LivePrivateLineAvailGA livePrivateLineAvailGAsObject;
		if(!valueLivePrivateLineAvailGAsLivePrivateLineAvailGA["AccelerationArea"].isNull())
			livePrivateLineAvailGAsObject.accelerationArea = valueLivePrivateLineAvailGAsLivePrivateLineAvailGA["AccelerationArea"].asString();
		if(!valueLivePrivateLineAvailGAsLivePrivateLineAvailGA["AccelerationType"].isNull())
			livePrivateLineAvailGAsObject.accelerationType = valueLivePrivateLineAvailGAsLivePrivateLineAvailGA["AccelerationType"].asString();
		if(!valueLivePrivateLineAvailGAsLivePrivateLineAvailGA["AppName"].isNull())
			livePrivateLineAvailGAsObject.appName = valueLivePrivateLineAvailGAsLivePrivateLineAvailGA["AppName"].asString();
		if(!valueLivePrivateLineAvailGAsLivePrivateLineAvailGA["BindingStatus"].isNull())
			livePrivateLineAvailGAsObject.bindingStatus = valueLivePrivateLineAvailGAsLivePrivateLineAvailGA["BindingStatus"].asString();
		if(!valueLivePrivateLineAvailGAsLivePrivateLineAvailGA["DomainName"].isNull())
			livePrivateLineAvailGAsObject.domainName = valueLivePrivateLineAvailGAsLivePrivateLineAvailGA["DomainName"].asString();
		if(!valueLivePrivateLineAvailGAsLivePrivateLineAvailGA["IP"].isNull())
			livePrivateLineAvailGAsObject.iP = valueLivePrivateLineAvailGAsLivePrivateLineAvailGA["IP"].asString();
		if(!valueLivePrivateLineAvailGAsLivePrivateLineAvailGA["InstanceId"].isNull())
			livePrivateLineAvailGAsObject.instanceId = valueLivePrivateLineAvailGAsLivePrivateLineAvailGA["InstanceId"].asString();
		if(!valueLivePrivateLineAvailGAsLivePrivateLineAvailGA["Status"].isNull())
			livePrivateLineAvailGAsObject.status = valueLivePrivateLineAvailGAsLivePrivateLineAvailGA["Status"].asString();
		if(!valueLivePrivateLineAvailGAsLivePrivateLineAvailGA["StreamName"].isNull())
			livePrivateLineAvailGAsObject.streamName = valueLivePrivateLineAvailGAsLivePrivateLineAvailGA["StreamName"].asString();
		if(!valueLivePrivateLineAvailGAsLivePrivateLineAvailGA["Uid"].isNull())
			livePrivateLineAvailGAsObject.uid = valueLivePrivateLineAvailGAsLivePrivateLineAvailGA["Uid"].asString();
		if(!valueLivePrivateLineAvailGAsLivePrivateLineAvailGA["VideoCenter"].isNull())
			livePrivateLineAvailGAsObject.videoCenter = valueLivePrivateLineAvailGAsLivePrivateLineAvailGA["VideoCenter"].asString();
		livePrivateLineAvailGAs_.push_back(livePrivateLineAvailGAsObject);
	}

}

std::vector<DescribeLivePrivateLineAvailGAResult::LivePrivateLineAvailGA> DescribeLivePrivateLineAvailGAResult::getLivePrivateLineAvailGAs()const
{
	return livePrivateLineAvailGAs_;
}

