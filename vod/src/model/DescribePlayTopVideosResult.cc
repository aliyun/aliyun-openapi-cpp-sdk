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

#include <alibabacloud/vod/model/DescribePlayTopVideosResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

DescribePlayTopVideosResult::DescribePlayTopVideosResult() :
	ServiceResult()
{}

DescribePlayTopVideosResult::DescribePlayTopVideosResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePlayTopVideosResult::~DescribePlayTopVideosResult()
{}

void DescribePlayTopVideosResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTopPlayVideosNode = value["TopPlayVideos"]["TopPlayVideoStatis"];
	for (auto valueTopPlayVideosTopPlayVideoStatis : allTopPlayVideosNode)
	{
		TopPlayVideoStatis topPlayVideosObject;
		if(!valueTopPlayVideosTopPlayVideoStatis["Title"].isNull())
			topPlayVideosObject.title = valueTopPlayVideosTopPlayVideoStatis["Title"].asString();
		if(!valueTopPlayVideosTopPlayVideoStatis["VV"].isNull())
			topPlayVideosObject.vV = valueTopPlayVideosTopPlayVideoStatis["VV"].asString();
		if(!valueTopPlayVideosTopPlayVideoStatis["PlayDuration"].isNull())
			topPlayVideosObject.playDuration = valueTopPlayVideosTopPlayVideoStatis["PlayDuration"].asString();
		if(!valueTopPlayVideosTopPlayVideoStatis["VideoId"].isNull())
			topPlayVideosObject.videoId = valueTopPlayVideosTopPlayVideoStatis["VideoId"].asString();
		if(!valueTopPlayVideosTopPlayVideoStatis["UV"].isNull())
			topPlayVideosObject.uV = valueTopPlayVideosTopPlayVideoStatis["UV"].asString();
		topPlayVideos_.push_back(topPlayVideosObject);
	}
	if(!value["PageNo"].isNull())
		pageNo_ = std::stol(value["PageNo"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stol(value["TotalNum"].asString());

}

std::vector<DescribePlayTopVideosResult::TopPlayVideoStatis> DescribePlayTopVideosResult::getTopPlayVideos()const
{
	return topPlayVideos_;
}

long DescribePlayTopVideosResult::getTotalNum()const
{
	return totalNum_;
}

long DescribePlayTopVideosResult::getPageSize()const
{
	return pageSize_;
}

long DescribePlayTopVideosResult::getPageNo()const
{
	return pageNo_;
}

