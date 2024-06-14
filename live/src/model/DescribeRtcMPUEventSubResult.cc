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

#include <alibabacloud/live/model/DescribeRtcMPUEventSubResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeRtcMPUEventSubResult::DescribeRtcMPUEventSubResult() :
	ServiceResult()
{}

DescribeRtcMPUEventSubResult::DescribeRtcMPUEventSubResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRtcMPUEventSubResult::~DescribeRtcMPUEventSubResult()
{}

void DescribeRtcMPUEventSubResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto subInfoNode = value["SubInfo"];
	if(!subInfoNode["SubId"].isNull())
		subInfo_.subId = subInfoNode["SubId"].asString();
	if(!subInfoNode["AppId"].isNull())
		subInfo_.appId = subInfoNode["AppId"].asString();
	if(!subInfoNode["ChannelIds"].isNull())
		subInfo_.channelIds = subInfoNode["ChannelIds"].asString();
	if(!subInfoNode["CreateTime"].isNull())
		subInfo_.createTime = subInfoNode["CreateTime"].asString();
	if(!subInfoNode["CallbackUrl"].isNull())
		subInfo_.callbackUrl = subInfoNode["CallbackUrl"].asString();

}

DescribeRtcMPUEventSubResult::SubInfo DescribeRtcMPUEventSubResult::getSubInfo()const
{
	return subInfo_;
}

