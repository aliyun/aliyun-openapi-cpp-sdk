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

#include <alibabacloud/cbn/model/DescribeCenInterRegionBandwidthLimitsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

DescribeCenInterRegionBandwidthLimitsResult::DescribeCenInterRegionBandwidthLimitsResult() :
	ServiceResult()
{}

DescribeCenInterRegionBandwidthLimitsResult::DescribeCenInterRegionBandwidthLimitsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCenInterRegionBandwidthLimitsResult::~DescribeCenInterRegionBandwidthLimitsResult()
{}

void DescribeCenInterRegionBandwidthLimitsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCenInterRegionBandwidthLimitsNode = value["CenInterRegionBandwidthLimits"]["CenInterRegionBandwidthLimit"];
	for (auto valueCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit : allCenInterRegionBandwidthLimitsNode)
	{
		CenInterRegionBandwidthLimit cenInterRegionBandwidthLimitsObject;
		if(!valueCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit["TransitRouterAttachmentId"].isNull())
			cenInterRegionBandwidthLimitsObject.transitRouterAttachmentId = valueCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit["TransitRouterAttachmentId"].asString();
		if(!valueCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit["Status"].isNull())
			cenInterRegionBandwidthLimitsObject.status = valueCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit["Status"].asString();
		if(!valueCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit["BandwidthPackageId"].isNull())
			cenInterRegionBandwidthLimitsObject.bandwidthPackageId = valueCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit["BandwidthPackageId"].asString();
		if(!valueCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit["OppositeRegionId"].isNull())
			cenInterRegionBandwidthLimitsObject.oppositeRegionId = valueCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit["OppositeRegionId"].asString();
		if(!valueCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit["GeographicSpanId"].isNull())
			cenInterRegionBandwidthLimitsObject.geographicSpanId = valueCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit["GeographicSpanId"].asString();
		if(!valueCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit["CenId"].isNull())
			cenInterRegionBandwidthLimitsObject.cenId = valueCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit["CenId"].asString();
		if(!valueCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit["LocalRegionId"].isNull())
			cenInterRegionBandwidthLimitsObject.localRegionId = valueCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit["LocalRegionId"].asString();
		if(!valueCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit["BandwidthLimit"].isNull())
			cenInterRegionBandwidthLimitsObject.bandwidthLimit = std::stol(valueCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit["BandwidthLimit"].asString());
		cenInterRegionBandwidthLimits_.push_back(cenInterRegionBandwidthLimitsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeCenInterRegionBandwidthLimitsResult::CenInterRegionBandwidthLimit> DescribeCenInterRegionBandwidthLimitsResult::getCenInterRegionBandwidthLimits()const
{
	return cenInterRegionBandwidthLimits_;
}

int DescribeCenInterRegionBandwidthLimitsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeCenInterRegionBandwidthLimitsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeCenInterRegionBandwidthLimitsResult::getPageNumber()const
{
	return pageNumber_;
}

