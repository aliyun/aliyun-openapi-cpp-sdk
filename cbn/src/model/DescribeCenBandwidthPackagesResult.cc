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
	auto allCenBandwidthPackagesNode = value["CenBandwidthPackages"]["CenBandwidthPackage"];
	for (auto valueCenBandwidthPackagesCenBandwidthPackage : allCenBandwidthPackagesNode)
	{
		CenBandwidthPackage cenBandwidthPackagesObject;
		if(!valueCenBandwidthPackagesCenBandwidthPackage["ReservationActiveTime"].isNull())
			cenBandwidthPackagesObject.reservationActiveTime = valueCenBandwidthPackagesCenBandwidthPackage["ReservationActiveTime"].asString();
		if(!valueCenBandwidthPackagesCenBandwidthPackage["Status"].isNull())
			cenBandwidthPackagesObject.status = valueCenBandwidthPackagesCenBandwidthPackage["Status"].asString();
		if(!valueCenBandwidthPackagesCenBandwidthPackage["CreationTime"].isNull())
			cenBandwidthPackagesObject.creationTime = valueCenBandwidthPackagesCenBandwidthPackage["CreationTime"].asString();
		if(!valueCenBandwidthPackagesCenBandwidthPackage["ReservationOrderType"].isNull())
			cenBandwidthPackagesObject.reservationOrderType = valueCenBandwidthPackagesCenBandwidthPackage["ReservationOrderType"].asString();
		if(!valueCenBandwidthPackagesCenBandwidthPackage["BandwidthPackageChargeType"].isNull())
			cenBandwidthPackagesObject.bandwidthPackageChargeType = valueCenBandwidthPackagesCenBandwidthPackage["BandwidthPackageChargeType"].asString();
		if(!valueCenBandwidthPackagesCenBandwidthPackage["CenBandwidthPackageId"].isNull())
			cenBandwidthPackagesObject.cenBandwidthPackageId = valueCenBandwidthPackagesCenBandwidthPackage["CenBandwidthPackageId"].asString();
		if(!valueCenBandwidthPackagesCenBandwidthPackage["ReservationInternetChargeType"].isNull())
			cenBandwidthPackagesObject.reservationInternetChargeType = valueCenBandwidthPackagesCenBandwidthPackage["ReservationInternetChargeType"].asString();
		if(!valueCenBandwidthPackagesCenBandwidthPackage["Ratio"].isNull())
			cenBandwidthPackagesObject.ratio = valueCenBandwidthPackagesCenBandwidthPackage["Ratio"].asString();
		if(!valueCenBandwidthPackagesCenBandwidthPackage["GeographicRegionAId"].isNull())
			cenBandwidthPackagesObject.geographicRegionAId = valueCenBandwidthPackagesCenBandwidthPackage["GeographicRegionAId"].asString();
		if(!valueCenBandwidthPackagesCenBandwidthPackage["TypeFor95"].isNull())
			cenBandwidthPackagesObject.typeFor95 = valueCenBandwidthPackagesCenBandwidthPackage["TypeFor95"].asString();
		if(!valueCenBandwidthPackagesCenBandwidthPackage["Bandwidth"].isNull())
			cenBandwidthPackagesObject.bandwidth = std::stol(valueCenBandwidthPackagesCenBandwidthPackage["Bandwidth"].asString());
		if(!valueCenBandwidthPackagesCenBandwidthPackage["Description"].isNull())
			cenBandwidthPackagesObject.description = valueCenBandwidthPackagesCenBandwidthPackage["Description"].asString();
		if(!valueCenBandwidthPackagesCenBandwidthPackage["ExpiredTime"].isNull())
			cenBandwidthPackagesObject.expiredTime = valueCenBandwidthPackagesCenBandwidthPackage["ExpiredTime"].asString();
		if(!valueCenBandwidthPackagesCenBandwidthPackage["ReservationBandwidth"].isNull())
			cenBandwidthPackagesObject.reservationBandwidth = valueCenBandwidthPackagesCenBandwidthPackage["ReservationBandwidth"].asString();
		if(!valueCenBandwidthPackagesCenBandwidthPackage["GeographicSpanId"].isNull())
			cenBandwidthPackagesObject.geographicSpanId = valueCenBandwidthPackagesCenBandwidthPackage["GeographicSpanId"].asString();
		if(!valueCenBandwidthPackagesCenBandwidthPackage["GeographicRegionBId"].isNull())
			cenBandwidthPackagesObject.geographicRegionBId = valueCenBandwidthPackagesCenBandwidthPackage["GeographicRegionBId"].asString();
		if(!valueCenBandwidthPackagesCenBandwidthPackage["ResourceGroupId"].isNull())
			cenBandwidthPackagesObject.resourceGroupId = valueCenBandwidthPackagesCenBandwidthPackage["ResourceGroupId"].asString();
		if(!valueCenBandwidthPackagesCenBandwidthPackage["IsCrossBorder"].isNull())
			cenBandwidthPackagesObject.isCrossBorder = valueCenBandwidthPackagesCenBandwidthPackage["IsCrossBorder"].asString() == "true";
		if(!valueCenBandwidthPackagesCenBandwidthPackage["BusinessStatus"].isNull())
			cenBandwidthPackagesObject.businessStatus = valueCenBandwidthPackagesCenBandwidthPackage["BusinessStatus"].asString();
		if(!valueCenBandwidthPackagesCenBandwidthPackage["Name"].isNull())
			cenBandwidthPackagesObject.name = valueCenBandwidthPackagesCenBandwidthPackage["Name"].asString();
		if(!valueCenBandwidthPackagesCenBandwidthPackage["HasReservationData"].isNull())
			cenBandwidthPackagesObject.hasReservationData = valueCenBandwidthPackagesCenBandwidthPackage["HasReservationData"].asString();
		if(!valueCenBandwidthPackagesCenBandwidthPackage["ServiceType"].isNull())
			cenBandwidthPackagesObject.serviceType = valueCenBandwidthPackagesCenBandwidthPackage["ServiceType"].asString();
		auto allOrginInterRegionBandwidthLimitsNode = valueCenBandwidthPackagesCenBandwidthPackage["OrginInterRegionBandwidthLimits"]["OrginInterRegionBandwidthLimit"];
		for (auto valueCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit : allOrginInterRegionBandwidthLimitsNode)
		{
			CenBandwidthPackage::OrginInterRegionBandwidthLimit orginInterRegionBandwidthLimitsObject;
			if(!valueCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit["BandwidthLimit"].isNull())
				orginInterRegionBandwidthLimitsObject.bandwidthLimit = valueCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit["BandwidthLimit"].asString();
			if(!valueCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit["OppositeRegionId"].isNull())
				orginInterRegionBandwidthLimitsObject.oppositeRegionId = valueCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit["OppositeRegionId"].asString();
			if(!valueCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit["GeographicSpanId"].isNull())
				orginInterRegionBandwidthLimitsObject.geographicSpanId = valueCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit["GeographicSpanId"].asString();
			if(!valueCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit["LocalRegionId"].isNull())
				orginInterRegionBandwidthLimitsObject.localRegionId = valueCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit["LocalRegionId"].asString();
			cenBandwidthPackagesObject.orginInterRegionBandwidthLimits.push_back(orginInterRegionBandwidthLimitsObject);
		}
		auto allTagsNode = valueCenBandwidthPackagesCenBandwidthPackage["Tags"]["Tag"];
		for (auto valueCenBandwidthPackagesCenBandwidthPackageTagsTag : allTagsNode)
		{
			CenBandwidthPackage::Tag tagsObject;
			if(!valueCenBandwidthPackagesCenBandwidthPackageTagsTag["Key"].isNull())
				tagsObject.key = valueCenBandwidthPackagesCenBandwidthPackageTagsTag["Key"].asString();
			if(!valueCenBandwidthPackagesCenBandwidthPackageTagsTag["Value"].isNull())
				tagsObject.value = valueCenBandwidthPackagesCenBandwidthPackageTagsTag["Value"].asString();
			cenBandwidthPackagesObject.tags.push_back(tagsObject);
		}
		auto allCenIds = value["CenIds"]["CenId"];
		for (auto value : allCenIds)
			cenBandwidthPackagesObject.cenIds.push_back(value.asString());
		cenBandwidthPackages_.push_back(cenBandwidthPackagesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

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

