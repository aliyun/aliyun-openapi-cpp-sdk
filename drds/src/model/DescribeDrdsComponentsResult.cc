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

#include <alibabacloud/drds/model/DescribeDrdsComponentsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeDrdsComponentsResult::DescribeDrdsComponentsResult() :
	ServiceResult()
{}

DescribeDrdsComponentsResult::DescribeDrdsComponentsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDrdsComponentsResult::~DescribeDrdsComponentsResult()
{}

void DescribeDrdsComponentsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDrdsComponentsNode = value["DrdsComponents"]["DrdsComponent"];
	for (auto valueDrdsComponentsDrdsComponent : allDrdsComponentsNode)
	{
		DrdsComponent drdsComponentsObject;
		if(!valueDrdsComponentsDrdsComponent["RegionId"].isNull())
			drdsComponentsObject.regionId = valueDrdsComponentsDrdsComponent["RegionId"].asString();
		if(!valueDrdsComponentsDrdsComponent["RegionName"].isNull())
			drdsComponentsObject.regionName = valueDrdsComponentsDrdsComponent["RegionName"].asString();
		auto allDrdsAzoneInfosNode = allDrdsComponentsNode["DrdsAzoneInfos"]["DrdsAzoneInfo"];
		for (auto allDrdsComponentsNodeDrdsAzoneInfosDrdsAzoneInfo : allDrdsAzoneInfosNode)
		{
			DrdsComponent::DrdsAzoneInfo drdsAzoneInfosObject;
			if(!allDrdsComponentsNodeDrdsAzoneInfosDrdsAzoneInfo["ZoneId"].isNull())
				drdsAzoneInfosObject.zoneId = allDrdsComponentsNodeDrdsAzoneInfosDrdsAzoneInfo["ZoneId"].asString();
			if(!allDrdsComponentsNodeDrdsAzoneInfosDrdsAzoneInfo["ZoneName"].isNull())
				drdsAzoneInfosObject.zoneName = allDrdsComponentsNodeDrdsAzoneInfosDrdsAzoneInfo["ZoneName"].asString();
			if(!allDrdsComponentsNodeDrdsAzoneInfosDrdsAzoneInfo["SupportVpc"].isNull())
				drdsAzoneInfosObject.supportVpc = allDrdsComponentsNodeDrdsAzoneInfosDrdsAzoneInfo["SupportVpc"].asString() == "true";
			if(!allDrdsComponentsNodeDrdsAzoneInfosDrdsAzoneInfo["SupportClassic"].isNull())
				drdsAzoneInfosObject.supportClassic = allDrdsComponentsNodeDrdsAzoneInfosDrdsAzoneInfo["SupportClassic"].asString() == "true";
			drdsComponentsObject.drdsAzoneInfos.push_back(drdsAzoneInfosObject);
		}
		auto allDrdsSeriesListNode = allDrdsComponentsNode["DrdsSeriesList"]["DrdsSeries"];
		for (auto allDrdsComponentsNodeDrdsSeriesListDrdsSeries : allDrdsSeriesListNode)
		{
			DrdsComponent::DrdsSeries drdsSeriesListObject;
			if(!allDrdsComponentsNodeDrdsSeriesListDrdsSeries["SeriesName"].isNull())
				drdsSeriesListObject.seriesName = allDrdsComponentsNodeDrdsSeriesListDrdsSeries["SeriesName"].asString();
			if(!allDrdsComponentsNodeDrdsSeriesListDrdsSeries["Series"].isNull())
				drdsSeriesListObject.series = allDrdsComponentsNodeDrdsSeriesListDrdsSeries["Series"].asString();
			auto allSpecs = value["Specs"]["Spec"];
			for (auto value : allSpecs)
				drdsSeriesListObject.specs.push_back(value.asString());
			drdsComponentsObject.drdsSeriesList.push_back(drdsSeriesListObject);
		}
		auto allMysqlVersions = value["MysqlVersions"]["MysqlVersion"];
		for (auto value : allMysqlVersions)
			drdsComponentsObject.mysqlVersions.push_back(value.asString());
		drdsComponents_.push_back(drdsComponentsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeDrdsComponentsResult::DrdsComponent> DescribeDrdsComponentsResult::getDrdsComponents()const
{
	return drdsComponents_;
}

bool DescribeDrdsComponentsResult::getSuccess()const
{
	return success_;
}

