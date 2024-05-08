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

#include <alibabacloud/vod/model/DescribeVodMediaPlayDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

DescribeVodMediaPlayDataResult::DescribeVodMediaPlayDataResult() :
	ServiceResult()
{}

DescribeVodMediaPlayDataResult::DescribeVodMediaPlayDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVodMediaPlayDataResult::~DescribeVodMediaPlayDataResult()
{}

void DescribeVodMediaPlayDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allQoeInfoListNode = value["QoeInfoList"]["Data"];
	for (auto valueQoeInfoListData : allQoeInfoListNode)
	{
		Data qoeInfoListObject;
		if(!valueQoeInfoListData["VideoTitle"].isNull())
			qoeInfoListObject.videoTitle = valueQoeInfoListData["VideoTitle"].asString();
		if(!valueQoeInfoListData["VideoDuration"].isNull())
			qoeInfoListObject.videoDuration = std::stof(valueQoeInfoListData["VideoDuration"].asString());
		if(!valueQoeInfoListData["MediaId"].isNull())
			qoeInfoListObject.mediaId = valueQoeInfoListData["MediaId"].asString();
		if(!valueQoeInfoListData["DAU"].isNull())
			qoeInfoListObject.dAU = std::stof(valueQoeInfoListData["DAU"].asString());
		if(!valueQoeInfoListData["PlaySuccessVv"].isNull())
			qoeInfoListObject.playSuccessVv = std::stof(valueQoeInfoListData["PlaySuccessVv"].asString());
		if(!valueQoeInfoListData["PlayDurationPerUv"].isNull())
			qoeInfoListObject.playDurationPerUv = std::stof(valueQoeInfoListData["PlayDurationPerUv"].asString());
		if(!valueQoeInfoListData["PlayDuration"].isNull())
			qoeInfoListObject.playDuration = std::stof(valueQoeInfoListData["PlayDuration"].asString());
		if(!valueQoeInfoListData["PlayPerVv"].isNull())
			qoeInfoListObject.playPerVv = std::stof(valueQoeInfoListData["PlayPerVv"].asString());
		qoeInfoList_.push_back(qoeInfoListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNo"].isNull())
		pageNo_ = std::stol(value["PageNo"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

}

long DescribeVodMediaPlayDataResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeVodMediaPlayDataResult::getPageSize()const
{
	return pageSize_;
}

std::vector<DescribeVodMediaPlayDataResult::Data> DescribeVodMediaPlayDataResult::getQoeInfoList()const
{
	return qoeInfoList_;
}

long DescribeVodMediaPlayDataResult::getPageNo()const
{
	return pageNo_;
}

