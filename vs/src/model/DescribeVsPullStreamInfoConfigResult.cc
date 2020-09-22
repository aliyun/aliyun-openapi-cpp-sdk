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

#include <alibabacloud/vs/model/DescribeVsPullStreamInfoConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

DescribeVsPullStreamInfoConfigResult::DescribeVsPullStreamInfoConfigResult() :
	ServiceResult()
{}

DescribeVsPullStreamInfoConfigResult::DescribeVsPullStreamInfoConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVsPullStreamInfoConfigResult::~DescribeVsPullStreamInfoConfigResult()
{}

void DescribeVsPullStreamInfoConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLiveAppRecordListNode = value["LiveAppRecordList"]["LiveAppRecord"];
	for (auto valueLiveAppRecordListLiveAppRecord : allLiveAppRecordListNode)
	{
		LiveAppRecord liveAppRecordListObject;
		if(!valueLiveAppRecordListLiveAppRecord["DomainName"].isNull())
			liveAppRecordListObject.domainName = valueLiveAppRecordListLiveAppRecord["DomainName"].asString();
		if(!valueLiveAppRecordListLiveAppRecord["AppName"].isNull())
			liveAppRecordListObject.appName = valueLiveAppRecordListLiveAppRecord["AppName"].asString();
		if(!valueLiveAppRecordListLiveAppRecord["StreamName"].isNull())
			liveAppRecordListObject.streamName = valueLiveAppRecordListLiveAppRecord["StreamName"].asString();
		if(!valueLiveAppRecordListLiveAppRecord["SourceUrl"].isNull())
			liveAppRecordListObject.sourceUrl = valueLiveAppRecordListLiveAppRecord["SourceUrl"].asString();
		if(!valueLiveAppRecordListLiveAppRecord["StartTime"].isNull())
			liveAppRecordListObject.startTime = valueLiveAppRecordListLiveAppRecord["StartTime"].asString();
		if(!valueLiveAppRecordListLiveAppRecord["EndTime"].isNull())
			liveAppRecordListObject.endTime = valueLiveAppRecordListLiveAppRecord["EndTime"].asString();
		liveAppRecordList_.push_back(liveAppRecordListObject);
	}

}

std::vector<DescribeVsPullStreamInfoConfigResult::LiveAppRecord> DescribeVsPullStreamInfoConfigResult::getLiveAppRecordList()const
{
	return liveAppRecordList_;
}

