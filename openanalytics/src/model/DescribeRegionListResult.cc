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

#include <alibabacloud/openanalytics/model/DescribeRegionListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Openanalytics;
using namespace AlibabaCloud::Openanalytics::Model;

DescribeRegionListResult::DescribeRegionListResult() :
	ServiceResult()
{}

DescribeRegionListResult::DescribeRegionListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRegionListResult::~DescribeRegionListResult()
{}

void DescribeRegionListResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allRegionList = value["RegionList"]["RegionListItem"];
	for (auto value : allRegionList)
	{
		RegionListItem regionListObject;
		if(!value["regionID"].isNull())
			regionListObject.regionID = value["regionID"].asString();
		regionList_.push_back(regionListObject);
	}
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();

}

std::vector<DescribeRegionListResult::RegionListItem> DescribeRegionListResult::getRegionList()const
{
	return regionList_;
}

std::string DescribeRegionListResult::getRegionId()const
{
	return regionId_;
}

