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

#include <alibabacloud/vod/model/DescribePlayVideoStatisResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

DescribePlayVideoStatisResult::DescribePlayVideoStatisResult() :
	ServiceResult()
{}

DescribePlayVideoStatisResult::DescribePlayVideoStatisResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePlayVideoStatisResult::~DescribePlayVideoStatisResult()
{}

void DescribePlayVideoStatisResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVideoPlayStatisDetails = value["VideoPlayStatisDetails"]["VideoPlayStatisDetail"];
	for (auto value : allVideoPlayStatisDetails)
	{
		VideoPlayStatisDetail videoPlayStatisDetailsObject;
		if(!value["Date"].isNull())
			videoPlayStatisDetailsObject.date = value["Date"].asString();
		if(!value["PlayDuration"].isNull())
			videoPlayStatisDetailsObject.playDuration = value["PlayDuration"].asString();
		if(!value["VV"].isNull())
			videoPlayStatisDetailsObject.vV = value["VV"].asString();
		if(!value["UV"].isNull())
			videoPlayStatisDetailsObject.uV = value["UV"].asString();
		if(!value["PlayRange"].isNull())
			videoPlayStatisDetailsObject.playRange = value["PlayRange"].asString();
		if(!value["Title"].isNull())
			videoPlayStatisDetailsObject.title = value["Title"].asString();
		videoPlayStatisDetails_.push_back(videoPlayStatisDetailsObject);
	}

}

std::vector<DescribePlayVideoStatisResult::VideoPlayStatisDetail> DescribePlayVideoStatisResult::getVideoPlayStatisDetails()const
{
	return videoPlayStatisDetails_;
}

