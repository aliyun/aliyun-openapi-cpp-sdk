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

#include <alibabacloud/cbn/model/DescribeCenBandwidthPackagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

DescribeCenBandwidthPackagesResult::DescribeCenBandwidthPackagesResult() :
	ServiceResult()
{}

DescribeCenBandwidthPackagesResult::DescribeCenBandwidthPackagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCenBandwidthPackagesResult::~DescribeCenBandwidthPackagesResult()
{}

void DescribeCenBandwidthPackagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCenBandwidthPackages = value["CenBandwidthPackages"]["CenBandwidthPackage"];
	for (auto value : allCenBandwidthPackages)
	{
		CenBandwidthPackage cenBandwidthPackagesObject;
		if(!value["CenBandwidthPackageId"].isNull())
			cenBandwidthPackagesObject.cenBandwidthPackageId = value["CenBandwidthPackageId"].asString();
		if(!value["Name"].isNull())
			cenBandwidthPackagesObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			cenBandwidthPackagesObject.description = value["Description"].asString();
		if(!value["Bandwidth"].isNull())
			cenBandwidthPackagesObject.bandwidth = std::stol(value["Bandwidth"].asString());
		if(!value["BandwidthPackageChargeType"].isNull())
			cenBandwidthPackagesObject.bandwidthPackageChargeType = value["BandwidthPackageChargeType"].asString();
		if(!value["GeographicRegionAId"].isNull())
			cenBandwidthPackagesObject.geographicRegionAId = value["GeographicRegionAId"].asString();
		if(!value["GeographicRegionBId"].isNull())
			cenBandwidthPackagesObject.geographicRegionBId = value["GeographicRegionBId"].asString();
		if(!value["GeographicSpanId"].isNull())
			cenBandwidthPackagesObject.geographicSpanId = value["GeographicSpanId"].asString();
		if(!value["BusinessStatus"].isNull())
			cenBandwidthPackagesObject.businessStatus = value["BusinessStatus"].asString();
		if(!value["CreationTime"].isNull())
			cenBandwidthPackagesObject.creationTime = value["CreationTime"].asString();
		if(!value["ExpiredTime"].isNull())
			cenBandwidthPackagesObject.expiredTime = value["ExpiredTime"].asString();
		if(!value["Status"].isNull())
			cenBandwidthPackagesObject.status = value["Status"].asString();
		if(!value["IsCrossBorder"].isNull())
			cenBandwidthPackagesObject.isCrossBorder = value["IsCrossBorder"].asString() == "true";
		if(!value["TypeFor95"].isNull())
			cenBandwidthPackagesObject.typeFor95 = value["TypeFor95"].asString();
		if(!value["Ratio"].isNull())
			cenBandwidthPackagesObject.ratio = value["Ratio"].asString();
		if(!value["HasReservationData"].isNull())
			cenBandwidthPackagesObject.hasReservationData = value["HasReservationData"].asString();
		if(!value["ReservationBandwidth"].isNull())
			cenBandwidthPackagesObject.reservationBandwidth = value["ReservationBandwidth"].asString();
		if(!value["ReservationInternetChargeType"].isNull())
			cenBandwidthPackagesObject.reservationInternetChargeType = value["ReservationInternetChargeType"].asString();
		if(!value["ReservationActiveTime"].isNull())
			cenBandwidthPackagesObject.reservationActiveTime = value["ReservationActiveTime"].asString();
		if(!value["ReservationOrderType"].isNull())
			cenBandwidthPackagesObject.reservationOrderType = value["ReservationOrderType"].asString();
		auto allOrginInterRegionBandwidthLimits = value["OrginInterRegionBandwidthLimits"]["OrginInterRegionBandwidthLimit"];
		for (auto value : allOrginInterRegionBandwidthLimits)
		{
			CenBandwidthPackage::OrginInterRegionBandwidthLimit orginInterRegionBandwidthLimitsObject;
			if(!value["LocalRegionId"].isNull())
				orginInterRegionBandwidthLimitsObject.localRegionId = value["LocalRegionId"].asString();
			if(!value["OppositeRegionId"].isNull())
				orginInterRegionBandwidthLimitsObject.oppositeRegionId = value["OppositeRegionId"].asString();
			if(!value["GeographicSpanId"].isNull())
				orginInterRegionBandwidthLimitsObject.geographicSpanId = value["GeographicSpanId"].asString();
			if(!value["BandwidthLimit"].isNull())
				orginInterRegionBandwidthLimitsObject.bandwidthLimit = value["BandwidthLimit"].asString();
			cenBandwidthPackagesObject.orginInterRegionBandwidthLimits.push_back(orginInterRegionBandwidthLimitsObject);
		}
		auto allCenIds = value["CenIds"]["CenId"];
		for (auto value : allCenIds)
			cenBandwidthPackagesObject.cenIds.push_back(value.asString());
		cenBandwidthPackages_.push_back(cenBandwidthPackagesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeCenBandwidthPackagesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeCenBandwidthPackagesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeCenBandwidthPackagesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeCenBandwidthPackagesResult::CenBandwidthPackage> DescribeCenBandwidthPackagesResult::getCenBandwidthPackages()const
{
	return cenBandwidthPackages_;
}

