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

#include <alibabacloud/companyreg/model/QueryBookkeepingCommoditiesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

QueryBookkeepingCommoditiesResult::QueryBookkeepingCommoditiesResult() :
	ServiceResult()
{}

QueryBookkeepingCommoditiesResult::QueryBookkeepingCommoditiesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryBookkeepingCommoditiesResult::~QueryBookkeepingCommoditiesResult()
{}

void QueryBookkeepingCommoditiesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["BookkeepingCommodity"];
	for (auto valueDataBookkeepingCommodity : allDataNode)
	{
		BookkeepingCommodity dataObject;
		if(!valueDataBookkeepingCommodity["TopOrgCode"].isNull())
			dataObject.topOrgCode = valueDataBookkeepingCommodity["TopOrgCode"].asString();
		if(!valueDataBookkeepingCommodity["CommodityCode"].isNull())
			dataObject.commodityCode = valueDataBookkeepingCommodity["CommodityCode"].asString();
		if(!valueDataBookkeepingCommodity["CommodityName"].isNull())
			dataObject.commodityName = valueDataBookkeepingCommodity["CommodityName"].asString();
		if(!valueDataBookkeepingCommodity["SpecCode"].isNull())
			dataObject.specCode = valueDataBookkeepingCommodity["SpecCode"].asString();
		if(!valueDataBookkeepingCommodity["PackageVersionCode"].isNull())
			dataObject.packageVersionCode = valueDataBookkeepingCommodity["PackageVersionCode"].asString();
		if(!valueDataBookkeepingCommodity["PackageVersionValue"].isNull())
			dataObject.packageVersionValue = valueDataBookkeepingCommodity["PackageVersionValue"].asString();
		if(!valueDataBookkeepingCommodity["PackageVersionName"].isNull())
			dataObject.packageVersionName = valueDataBookkeepingCommodity["PackageVersionName"].asString();
		if(!valueDataBookkeepingCommodity["CityModuleCode"].isNull())
			dataObject.cityModuleCode = valueDataBookkeepingCommodity["CityModuleCode"].asString();
		if(!valueDataBookkeepingCommodity["CityModuleValue"].isNull())
			dataObject.cityModuleValue = valueDataBookkeepingCommodity["CityModuleValue"].asString();
		if(!valueDataBookkeepingCommodity["CityModuleName"].isNull())
			dataObject.cityModuleName = valueDataBookkeepingCommodity["CityModuleName"].asString();
		if(!valueDataBookkeepingCommodity["OrdTimeCode"].isNull())
			dataObject.ordTimeCode = valueDataBookkeepingCommodity["OrdTimeCode"].asString();
		if(!valueDataBookkeepingCommodity["OrdTimeValue"].isNull())
			dataObject.ordTimeValue = valueDataBookkeepingCommodity["OrdTimeValue"].asString();
		if(!valueDataBookkeepingCommodity["OrdTimeName"].isNull())
			dataObject.ordTimeName = valueDataBookkeepingCommodity["OrdTimeName"].asString();
		if(!valueDataBookkeepingCommodity["TopOrgName"].isNull())
			dataObject.topOrgName = valueDataBookkeepingCommodity["TopOrgName"].asString();
		if(!valueDataBookkeepingCommodity["ServiceModuleCode"].isNull())
			dataObject.serviceModuleCode = valueDataBookkeepingCommodity["ServiceModuleCode"].asString();
		if(!valueDataBookkeepingCommodity["ServiceModuleValue"].isNull())
			dataObject.serviceModuleValue = valueDataBookkeepingCommodity["ServiceModuleValue"].asString();
		if(!valueDataBookkeepingCommodity["ServiceModuleName"].isNull())
			dataObject.serviceModuleName = valueDataBookkeepingCommodity["ServiceModuleName"].asString();
		if(!valueDataBookkeepingCommodity["AreaType"].isNull())
			dataObject.areaType = valueDataBookkeepingCommodity["AreaType"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<QueryBookkeepingCommoditiesResult::BookkeepingCommodity> QueryBookkeepingCommoditiesResult::getData()const
{
	return data_;
}

