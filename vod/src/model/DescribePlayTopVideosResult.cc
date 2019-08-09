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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allTopPlayVideos = value["TopPlayVideos"]["TopPlayVideoStatis"];
	for (auto value : allTopPlayVideos)
	{
		TopPlayVideoStatis topPlayVideosObject;
		if(!value["PlayDuration"].isNull())
			topPlayVideosObject.playDuration = value["PlayDuration"].asString();
		if(!value["VV"].isNull())
			topPlayVideosObject.vV = value["VV"].asString();
		if(!value["UV"].isNull())
			topPlayVideosObject.uV = value["UV"].asString();
		if(!value["VideoId"].isNull())
			topPlayVideosObject.videoId = value["VideoId"].asString();
		if(!value["Title"].isNull())
			topPlayVideosObject.title = value["Title"].asString();
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

