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

#include <alibabacloud/vod/model/DescribePlayUserAvgResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

DescribePlayUserAvgResult::DescribePlayUserAvgResult() :
	ServiceResult()
{}

DescribePlayUserAvgResult::DescribePlayUserAvgResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePlayUserAvgResult::~DescribePlayUserAvgResult()
{}

void DescribePlayUserAvgResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allUserPlayStatisAvgs = value["UserPlayStatisAvgs"]["UserPlayStatisAvg"];
	for (auto value : allUserPlayStatisAvgs)
	{
		UserPlayStatisAvg userPlayStatisAvgsObject;
		if(!value["Date"].isNull())
			userPlayStatisAvgsObject.date = value["Date"].asString();
		if(!value["AvgPlayDuration"].isNull())
			userPlayStatisAvgsObject.avgPlayDuration = value["AvgPlayDuration"].asString();
		if(!value["AvgPlayCount"].isNull())
			userPlayStatisAvgsObject.avgPlayCount = value["AvgPlayCount"].asString();
		userPlayStatisAvgs_.push_back(userPlayStatisAvgsObject);
	}

}

std::vector<DescribePlayUserAvgResult::UserPlayStatisAvg> DescribePlayUserAvgResult::getUserPlayStatisAvgs()const
{
	return userPlayStatisAvgs_;
}

