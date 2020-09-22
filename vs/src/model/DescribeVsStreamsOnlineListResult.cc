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

#include <alibabacloud/vs/model/DescribeVsStreamsOnlineListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

DescribeVsStreamsOnlineListResult::DescribeVsStreamsOnlineListResult() :
	ServiceResult()
{}

DescribeVsStreamsOnlineListResult::DescribeVsStreamsOnlineListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVsStreamsOnlineListResult::~DescribeVsStreamsOnlineListResult()
{}

void DescribeVsStreamsOnlineListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOnlineInfoNode = value["OnlineInfo"]["LiveStreamOnlineInfo"];
	for (auto valueOnlineInfoLiveStreamOnlineInfo : allOnlineInfoNode)
	{
		LiveStreamOnlineInfo onlineInfoObject;
		if(!valueOnlineInfoLiveStreamOnlineInfo["DomainName"].isNull())
			onlineInfoObject.domainName = valueOnlineInfoLiveStreamOnlineInfo["DomainName"].asString();
		if(!valueOnlineInfoLiveStreamOnlineInfo["AppName"].isNull())
			onlineInfoObject.appName = valueOnlineInfoLiveStreamOnlineInfo["AppName"].asString();
		if(!valueOnlineInfoLiveStreamOnlineInfo["StreamName"].isNull())
			onlineInfoObject.streamName = valueOnlineInfoLiveStreamOnlineInfo["StreamName"].asString();
		if(!valueOnlineInfoLiveStreamOnlineInfo["PublishTime"].isNull())
			onlineInfoObject.publishTime = valueOnlineInfoLiveStreamOnlineInfo["PublishTime"].asString();
		if(!valueOnlineInfoLiveStreamOnlineInfo["PublishUrl"].isNull())
			onlineInfoObject.publishUrl = valueOnlineInfoLiveStreamOnlineInfo["PublishUrl"].asString();
		if(!valueOnlineInfoLiveStreamOnlineInfo["PublishDomain"].isNull())
			onlineInfoObject.publishDomain = valueOnlineInfoLiveStreamOnlineInfo["PublishDomain"].asString();
		if(!valueOnlineInfoLiveStreamOnlineInfo["PublishType"].isNull())
			onlineInfoObject.publishType = valueOnlineInfoLiveStreamOnlineInfo["PublishType"].asString();
		if(!valueOnlineInfoLiveStreamOnlineInfo["Transcoded"].isNull())
			onlineInfoObject.transcoded = valueOnlineInfoLiveStreamOnlineInfo["Transcoded"].asString();
		if(!valueOnlineInfoLiveStreamOnlineInfo["TranscodeId"].isNull())
			onlineInfoObject.transcodeId = valueOnlineInfoLiveStreamOnlineInfo["TranscodeId"].asString();
		onlineInfo_.push_back(onlineInfoObject);
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

int DescribeVsStreamsOnlineListResult::getTotalNum()const
{
	return totalNum_;
}

int DescribeVsStreamsOnlineListResult::getPageNum()const
{
	return pageNum_;
}

int DescribeVsStreamsOnlineListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeVsStreamsOnlineListResult::getTotalPage()const
{
	return totalPage_;
}

std::vector<DescribeVsStreamsOnlineListResult::LiveStreamOnlineInfo> DescribeVsStreamsOnlineListResult::getOnlineInfo()const
{
	return onlineInfo_;
}

