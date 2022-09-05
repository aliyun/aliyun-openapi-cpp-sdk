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

#include <alibabacloud/cdn/model/DescribeBlockedRegionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeBlockedRegionsResult::DescribeBlockedRegionsResult() :
	ServiceResult()
{}

DescribeBlockedRegionsResult::DescribeBlockedRegionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBlockedRegionsResult::~DescribeBlockedRegionsResult()
{}

void DescribeBlockedRegionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInfoListNode = value["InfoList"]["InfoItem"];
	for (auto valueInfoListInfoItem : allInfoListNode)
	{
		InfoItem infoListObject;
		if(!valueInfoListInfoItem["CountriesAndRegions"].isNull())
			infoListObject.countriesAndRegions = valueInfoListInfoItem["CountriesAndRegions"].asString();
		if(!valueInfoListInfoItem["Continent"].isNull())
			infoListObject.continent = valueInfoListInfoItem["Continent"].asString();
		if(!valueInfoListInfoItem["CountriesAndRegionsName"].isNull())
			infoListObject.countriesAndRegionsName = valueInfoListInfoItem["CountriesAndRegionsName"].asString();
		infoList_.push_back(infoListObject);
	}

}

std::vector<DescribeBlockedRegionsResult::InfoItem> DescribeBlockedRegionsResult::getInfoList()const
{
	return infoList_;
}

