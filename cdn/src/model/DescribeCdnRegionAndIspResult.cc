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

#include <alibabacloud/cdn/model/DescribeCdnRegionAndIspResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeCdnRegionAndIspResult::DescribeCdnRegionAndIspResult() :
	ServiceResult()
{}

DescribeCdnRegionAndIspResult::DescribeCdnRegionAndIspResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCdnRegionAndIspResult::~DescribeCdnRegionAndIspResult()
{}

void DescribeCdnRegionAndIspResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRegionsNode = value["Regions"]["Region"];
	for (auto valueRegionsRegion : allRegionsNode)
	{
		Region regionsObject;
		if(!valueRegionsRegion["NameEn"].isNull())
			regionsObject.nameEn = valueRegionsRegion["NameEn"].asString();
		if(!valueRegionsRegion["NameZh"].isNull())
			regionsObject.nameZh = valueRegionsRegion["NameZh"].asString();
		regions_.push_back(regionsObject);
	}
	auto allIspsNode = value["Isps"]["Isp"];
	for (auto valueIspsIsp : allIspsNode)
	{
		Isp ispsObject;
		if(!valueIspsIsp["NameEn"].isNull())
			ispsObject.nameEn = valueIspsIsp["NameEn"].asString();
		if(!valueIspsIsp["NameZh"].isNull())
			ispsObject.nameZh = valueIspsIsp["NameZh"].asString();
		isps_.push_back(ispsObject);
	}

}

std::vector<DescribeCdnRegionAndIspResult::Region> DescribeCdnRegionAndIspResult::getRegions()const
{
	return regions_;
}

std::vector<DescribeCdnRegionAndIspResult::Isp> DescribeCdnRegionAndIspResult::getIsps()const
{
	return isps_;
}

