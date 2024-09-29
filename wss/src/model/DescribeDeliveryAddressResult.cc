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

#include <alibabacloud/wss/model/DescribeDeliveryAddressResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Wss;
using namespace AlibabaCloud::Wss::Model;

DescribeDeliveryAddressResult::DescribeDeliveryAddressResult() :
	ServiceResult()
{}

DescribeDeliveryAddressResult::DescribeDeliveryAddressResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDeliveryAddressResult::~DescribeDeliveryAddressResult()
{}

void DescribeDeliveryAddressResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAddressesNode = value["Addresses"]["Address"];
	for (auto valueAddressesAddress : allAddressesNode)
	{
		Address addressesObject;
		if(!valueAddressesAddress["PostalCode"].isNull())
			addressesObject.postalCode = valueAddressesAddress["PostalCode"].asString();
		if(!valueAddressesAddress["Contacts"].isNull())
			addressesObject.contacts = valueAddressesAddress["Contacts"].asString();
		if(!valueAddressesAddress["Mobile"].isNull())
			addressesObject.mobile = valueAddressesAddress["Mobile"].asString();
		if(!valueAddressesAddress["DefaultAddress"].isNull())
			addressesObject.defaultAddress = valueAddressesAddress["DefaultAddress"].asString() == "true";
		if(!valueAddressesAddress["Detail"].isNull())
			addressesObject.detail = valueAddressesAddress["Detail"].asString();
		auto provinceNode = value["Province"];
		if(!provinceNode["ProvinceId"].isNull())
			addressesObject.province.provinceId = std::stol(provinceNode["ProvinceId"].asString());
		if(!provinceNode["ProvinceName"].isNull())
			addressesObject.province.provinceName = provinceNode["ProvinceName"].asString();
		auto cityNode = value["City"];
		if(!cityNode["CityId"].isNull())
			addressesObject.city.cityId = std::stol(cityNode["CityId"].asString());
		if(!cityNode["CityName"].isNull())
			addressesObject.city.cityName = cityNode["CityName"].asString();
		auto areaNode = value["Area"];
		if(!areaNode["AreaName"].isNull())
			addressesObject.area.areaName = areaNode["AreaName"].asString();
		if(!areaNode["AreaId"].isNull())
			addressesObject.area.areaId = std::stol(areaNode["AreaId"].asString());
		auto townNode = value["Town"];
		if(!townNode["TownName"].isNull())
			addressesObject.town.townName = townNode["TownName"].asString();
		if(!townNode["TownId"].isNull())
			addressesObject.town.townId = std::stol(townNode["TownId"].asString());
		addresses_.push_back(addressesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeDeliveryAddressResult::Address> DescribeDeliveryAddressResult::getAddresses()const
{
	return addresses_;
}

int DescribeDeliveryAddressResult::getTotalCount()const
{
	return totalCount_;
}

