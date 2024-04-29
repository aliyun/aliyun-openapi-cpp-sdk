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

#include <alibabacloud/live/model/DescribeLivePushProxyUsageDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLivePushProxyUsageDataResult::DescribeLivePushProxyUsageDataResult() :
	ServiceResult()
{}

DescribeLivePushProxyUsageDataResult::DescribeLivePushProxyUsageDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLivePushProxyUsageDataResult::~DescribeLivePushProxyUsageDataResult()
{}

void DescribeLivePushProxyUsageDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPushProxyDataNode = value["PushProxyData"]["PushProxyDataItem"];
	for (auto valuePushProxyDataPushProxyDataItem : allPushProxyDataNode)
	{
		PushProxyDataItem pushProxyDataObject;
		if(!valuePushProxyDataPushProxyDataItem["DomainName"].isNull())
			pushProxyDataObject.domainName = valuePushProxyDataPushProxyDataItem["DomainName"].asString();
		if(!valuePushProxyDataPushProxyDataItem["Region"].isNull())
			pushProxyDataObject.region = valuePushProxyDataPushProxyDataItem["Region"].asString();
		if(!valuePushProxyDataPushProxyDataItem["StreamCount"].isNull())
			pushProxyDataObject.streamCount = std::stol(valuePushProxyDataPushProxyDataItem["StreamCount"].asString());
		if(!valuePushProxyDataPushProxyDataItem["TimeStamp"].isNull())
			pushProxyDataObject.timeStamp = valuePushProxyDataPushProxyDataItem["TimeStamp"].asString();
		pushProxyData_.push_back(pushProxyDataObject);
	}
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();

}

std::string DescribeLivePushProxyUsageDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeLivePushProxyUsageDataResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeLivePushProxyUsageDataResult::PushProxyDataItem> DescribeLivePushProxyUsageDataResult::getPushProxyData()const
{
	return pushProxyData_;
}

