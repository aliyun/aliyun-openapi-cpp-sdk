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

#include <alibabacloud/ice/model/DescribePlayListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

DescribePlayListResult::DescribePlayListResult() :
	ServiceResult()
{}

DescribePlayListResult::DescribePlayListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePlayListResult::~DescribePlayListResult()
{}

void DescribePlayListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPlayListNode = value["PlayList"]["Data"];
	for (auto valuePlayListData : allPlayListNode)
	{
		Data playListObject;
		if(!valuePlayListData["Status"].isNull())
			playListObject.status = valuePlayListData["Status"].asString();
		if(!valuePlayListData["VideoId"].isNull())
			playListObject.videoId = valuePlayListData["VideoId"].asString();
		if(!valuePlayListData["StuckDuration"].isNull())
			playListObject.stuckDuration = valuePlayListData["StuckDuration"].asString();
		if(!valuePlayListData["PlayDuration"].isNull())
			playListObject.playDuration = valuePlayListData["PlayDuration"].asString();
		if(!valuePlayListData["FirstFrameDuration"].isNull())
			playListObject.firstFrameDuration = valuePlayListData["FirstFrameDuration"].asString();
		if(!valuePlayListData["TraceId"].isNull())
			playListObject.traceId = valuePlayListData["TraceId"].asString();
		if(!valuePlayListData["PlayType"].isNull())
			playListObject.playType = valuePlayListData["PlayType"].asString();
		if(!valuePlayListData["SessionId"].isNull())
			playListObject.sessionId = valuePlayListData["SessionId"].asString();
		if(!valuePlayListData["VideoDuration"].isNull())
			playListObject.videoDuration = valuePlayListData["VideoDuration"].asString();
		if(!valuePlayListData["PlayTs"].isNull())
			playListObject.playTs = valuePlayListData["PlayTs"].asString();
		playList_.push_back(playListObject);
	}
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stol(value["TotalNum"].asString());
	if(!value["PageNum"].isNull())
		pageNum_ = std::stol(value["PageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

}

std::vector<DescribePlayListResult::Data> DescribePlayListResult::getPlayList()const
{
	return playList_;
}

long DescribePlayListResult::getTotalNum()const
{
	return totalNum_;
}

long DescribePlayListResult::getPageNum()const
{
	return pageNum_;
}

long DescribePlayListResult::getPageSize()const
{
	return pageSize_;
}

