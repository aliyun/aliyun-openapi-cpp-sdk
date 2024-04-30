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

#include <alibabacloud/dcdn/model/DescribeDcdnWafGeoInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnWafGeoInfoResult::DescribeDcdnWafGeoInfoResult() :
	ServiceResult()
{}

DescribeDcdnWafGeoInfoResult::DescribeDcdnWafGeoInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnWafGeoInfoResult::~DescribeDcdnWafGeoInfoResult()
{}

void DescribeDcdnWafGeoInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allContentNode = value["Content"]["GeoInfo"];
	for (auto valueContentGeoInfo : allContentNode)
	{
		GeoInfo contentObject;
		if(!valueContentGeoInfo["Type"].isNull())
			contentObject.type = valueContentGeoInfo["Type"].asString();
		auto allContinentsNode = valueContentGeoInfo["Continents"]["ContinentsItem"];
		for (auto valueContentGeoInfoContinentsContinentsItem : allContinentsNode)
		{
			GeoInfo::ContinentsItem continentsObject;
			if(!valueContentGeoInfoContinentsContinentsItem["Name"].isNull())
				continentsObject.name = valueContentGeoInfoContinentsContinentsItem["Name"].asString();
			auto allRegionsNode = valueContentGeoInfoContinentsContinentsItem["Regions"]["RegionsItem"];
			for (auto valueContentGeoInfoContinentsContinentsItemRegionsRegionsItem : allRegionsNode)
			{
				GeoInfo::ContinentsItem::RegionsItem regionsObject;
				if(!valueContentGeoInfoContinentsContinentsItemRegionsRegionsItem["Name"].isNull())
					regionsObject.name = valueContentGeoInfoContinentsContinentsItemRegionsRegionsItem["Name"].asString();
				if(!valueContentGeoInfoContinentsContinentsItemRegionsRegionsItem["Value"].isNull())
					regionsObject.value = valueContentGeoInfoContinentsContinentsItemRegionsRegionsItem["Value"].asString();
				continentsObject.regions.push_back(regionsObject);
			}
			contentObject.continents.push_back(continentsObject);
		}
		content_.push_back(contentObject);
	}

}

std::vector<DescribeDcdnWafGeoInfoResult::GeoInfo> DescribeDcdnWafGeoInfoResult::getContent()const
{
	return content_;
}

