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

#include <alibabacloud/vod/model/DescribeMediaDistributionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

DescribeMediaDistributionResult::DescribeMediaDistributionResult() :
	ServiceResult()
{}

DescribeMediaDistributionResult::DescribeMediaDistributionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMediaDistributionResult::~DescribeMediaDistributionResult()
{}

void DescribeMediaDistributionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMediaDistributionListNode = value["MediaDistributionList"]["MediaDistribution"];
	for (auto valueMediaDistributionListMediaDistribution : allMediaDistributionListNode)
	{
		MediaDistribution mediaDistributionListObject;
		if(!valueMediaDistributionListMediaDistribution["StartTime"].isNull())
			mediaDistributionListObject.startTime = valueMediaDistributionListMediaDistribution["StartTime"].asString();
		if(!valueMediaDistributionListMediaDistribution["EndTime"].isNull())
			mediaDistributionListObject.endTime = valueMediaDistributionListMediaDistribution["EndTime"].asString();
		if(!valueMediaDistributionListMediaDistribution["Count"].isNull())
			mediaDistributionListObject.count = std::stol(valueMediaDistributionListMediaDistribution["Count"].asString());
		mediaDistributionList_.push_back(mediaDistributionListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

long DescribeMediaDistributionResult::getTotal()const
{
	return total_;
}

std::vector<DescribeMediaDistributionResult::MediaDistribution> DescribeMediaDistributionResult::getMediaDistributionList()const
{
	return mediaDistributionList_;
}

