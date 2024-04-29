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

#include <alibabacloud/live/model/DescribeLiveStreamsNotifyRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveStreamsNotifyRecordsResult::DescribeLiveStreamsNotifyRecordsResult() :
	ServiceResult()
{}

DescribeLiveStreamsNotifyRecordsResult::DescribeLiveStreamsNotifyRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStreamsNotifyRecordsResult::~DescribeLiveStreamsNotifyRecordsResult()
{}

void DescribeLiveStreamsNotifyRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNotifyRecordsInfoNode = value["NotifyRecordsInfo"]["LiveStreamNotifyRecordsInfo"];
	for (auto valueNotifyRecordsInfoLiveStreamNotifyRecordsInfo : allNotifyRecordsInfoNode)
	{
		LiveStreamNotifyRecordsInfo notifyRecordsInfoObject;
		if(!valueNotifyRecordsInfoLiveStreamNotifyRecordsInfo["AppName"].isNull())
			notifyRecordsInfoObject.appName = valueNotifyRecordsInfoLiveStreamNotifyRecordsInfo["AppName"].asString();
		if(!valueNotifyRecordsInfoLiveStreamNotifyRecordsInfo["Description"].isNull())
			notifyRecordsInfoObject.description = valueNotifyRecordsInfoLiveStreamNotifyRecordsInfo["Description"].asString();
		if(!valueNotifyRecordsInfoLiveStreamNotifyRecordsInfo["DomainName"].isNull())
			notifyRecordsInfoObject.domainName = valueNotifyRecordsInfoLiveStreamNotifyRecordsInfo["DomainName"].asString();
		if(!valueNotifyRecordsInfoLiveStreamNotifyRecordsInfo["NotifyContent"].isNull())
			notifyRecordsInfoObject.notifyContent = valueNotifyRecordsInfoLiveStreamNotifyRecordsInfo["NotifyContent"].asString();
		if(!valueNotifyRecordsInfoLiveStreamNotifyRecordsInfo["NotifyResult"].isNull())
			notifyRecordsInfoObject.notifyResult = valueNotifyRecordsInfoLiveStreamNotifyRecordsInfo["NotifyResult"].asString();
		if(!valueNotifyRecordsInfoLiveStreamNotifyRecordsInfo["NotifyTime"].isNull())
			notifyRecordsInfoObject.notifyTime = valueNotifyRecordsInfoLiveStreamNotifyRecordsInfo["NotifyTime"].asString();
		if(!valueNotifyRecordsInfoLiveStreamNotifyRecordsInfo["NotifyType"].isNull())
			notifyRecordsInfoObject.notifyType = valueNotifyRecordsInfoLiveStreamNotifyRecordsInfo["NotifyType"].asString();
		if(!valueNotifyRecordsInfoLiveStreamNotifyRecordsInfo["NotifyUrl"].isNull())
			notifyRecordsInfoObject.notifyUrl = valueNotifyRecordsInfoLiveStreamNotifyRecordsInfo["NotifyUrl"].asString();
		if(!valueNotifyRecordsInfoLiveStreamNotifyRecordsInfo["StreamName"].isNull())
			notifyRecordsInfoObject.streamName = valueNotifyRecordsInfoLiveStreamNotifyRecordsInfo["StreamName"].asString();
		notifyRecordsInfo_.push_back(notifyRecordsInfoObject);
	}
	if(!value["PageNum"].isNull())
		pageNum_ = std::stoi(value["PageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stoi(value["TotalNum"].asString());
	if(!value["TotalPage"].isNull())
		totalPage_ = std::stoi(value["TotalPage"].asString());

}

std::vector<DescribeLiveStreamsNotifyRecordsResult::LiveStreamNotifyRecordsInfo> DescribeLiveStreamsNotifyRecordsResult::getNotifyRecordsInfo()const
{
	return notifyRecordsInfo_;
}

int DescribeLiveStreamsNotifyRecordsResult::getTotalNum()const
{
	return totalNum_;
}

int DescribeLiveStreamsNotifyRecordsResult::getPageNum()const
{
	return pageNum_;
}

int DescribeLiveStreamsNotifyRecordsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeLiveStreamsNotifyRecordsResult::getTotalPage()const
{
	return totalPage_;
}

