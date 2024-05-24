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

#include <alibabacloud/live/model/DescribeLiveStreamMergeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveStreamMergeResult::DescribeLiveStreamMergeResult() :
	ServiceResult()
{}

DescribeLiveStreamMergeResult::DescribeLiveStreamMergeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStreamMergeResult::~DescribeLiveStreamMergeResult()
{}

void DescribeLiveStreamMergeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLiveStreamMergeListNode = value["LiveStreamMergeList"]["LiveStreamMerge"];
	for (auto valueLiveStreamMergeListLiveStreamMerge : allLiveStreamMergeListNode)
	{
		LiveStreamMerge liveStreamMergeListObject;
		if(!valueLiveStreamMergeListLiveStreamMerge["AppName"].isNull())
			liveStreamMergeListObject.appName = valueLiveStreamMergeListLiveStreamMerge["AppName"].asString();
		if(!valueLiveStreamMergeListLiveStreamMerge["AppUsing"].isNull())
			liveStreamMergeListObject.appUsing = valueLiveStreamMergeListLiveStreamMerge["AppUsing"].asString();
		if(!valueLiveStreamMergeListLiveStreamMerge["DomainName"].isNull())
			liveStreamMergeListObject.domainName = valueLiveStreamMergeListLiveStreamMerge["DomainName"].asString();
		if(!valueLiveStreamMergeListLiveStreamMerge["EndTime"].isNull())
			liveStreamMergeListObject.endTime = valueLiveStreamMergeListLiveStreamMerge["EndTime"].asString();
		if(!valueLiveStreamMergeListLiveStreamMerge["ExtraInAppStreams"].isNull())
			liveStreamMergeListObject.extraInAppStreams = valueLiveStreamMergeListLiveStreamMerge["ExtraInAppStreams"].asString();
		if(!valueLiveStreamMergeListLiveStreamMerge["InAppName1"].isNull())
			liveStreamMergeListObject.inAppName1 = valueLiveStreamMergeListLiveStreamMerge["InAppName1"].asString();
		if(!valueLiveStreamMergeListLiveStreamMerge["InAppName2"].isNull())
			liveStreamMergeListObject.inAppName2 = valueLiveStreamMergeListLiveStreamMerge["InAppName2"].asString();
		if(!valueLiveStreamMergeListLiveStreamMerge["InStreamName1"].isNull())
			liveStreamMergeListObject.inStreamName1 = valueLiveStreamMergeListLiveStreamMerge["InStreamName1"].asString();
		if(!valueLiveStreamMergeListLiveStreamMerge["InStreamName2"].isNull())
			liveStreamMergeListObject.inStreamName2 = valueLiveStreamMergeListLiveStreamMerge["InStreamName2"].asString();
		if(!valueLiveStreamMergeListLiveStreamMerge["Protocol"].isNull())
			liveStreamMergeListObject.protocol = valueLiveStreamMergeListLiveStreamMerge["Protocol"].asString();
		if(!valueLiveStreamMergeListLiveStreamMerge["StartTime"].isNull())
			liveStreamMergeListObject.startTime = valueLiveStreamMergeListLiveStreamMerge["StartTime"].asString();
		if(!valueLiveStreamMergeListLiveStreamMerge["StreamName"].isNull())
			liveStreamMergeListObject.streamName = valueLiveStreamMergeListLiveStreamMerge["StreamName"].asString();
		if(!valueLiveStreamMergeListLiveStreamMerge["StreamUsing"].isNull())
			liveStreamMergeListObject.streamUsing = valueLiveStreamMergeListLiveStreamMerge["StreamUsing"].asString();
		liveStreamMergeList_.push_back(liveStreamMergeListObject);
	}

}

std::vector<DescribeLiveStreamMergeResult::LiveStreamMerge> DescribeLiveStreamMergeResult::getLiveStreamMergeList()const
{
	return liveStreamMergeList_;
}

