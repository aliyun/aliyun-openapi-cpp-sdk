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

#include <alibabacloud/cdn/model/DescribeDomainRegionDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainRegionDataResult::DescribeDomainRegionDataResult() :
	ServiceResult()
{}

DescribeDomainRegionDataResult::DescribeDomainRegionDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainRegionDataResult::~DescribeDomainRegionDataResult()
{}

void DescribeDomainRegionDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allValue = value["Value"]["RegionProportionData"];
	for (auto value : allValue)
	{
		RegionProportionData regionProportionDataObject;
		regionProportionDataObject.region = value["Region"].asString();
		regionProportionDataObject.proportion = value["Proportion"].asString();
		regionProportionDataObject.regionEname = value["RegionEname"].asString();
		regionProportionDataObject.avgObjectSize = value["AvgObjectSize"].asString();
		regionProportionDataObject.avgResponseTime = value["AvgResponseTime"].asString();
		regionProportionDataObject.bps = value["Bps"].asString();
		regionProportionDataObject.byteHitRate = value["ByteHitRate"].asString();
		regionProportionDataObject.qps = value["Qps"].asString();
		regionProportionDataObject.reqErrRate = value["ReqErrRate"].asString();
		regionProportionDataObject.reqHitRate = value["ReqHitRate"].asString();
		regionProportionDataObject.avgResponseRate = value["AvgResponseRate"].asString();
		regionProportionDataObject.totalBytes = value["TotalBytes"].asString();
		regionProportionDataObject.bytesProportion = value["BytesProportion"].asString();
		regionProportionDataObject.totalQuery = value["TotalQuery"].asString();
		value_.push_back(regionProportionDataObject);
	}
	domainName_ = value["DomainName"].asString();
	dataInterval_ = value["DataInterval"].asString();
	startTime_ = value["StartTime"].asString();
	endTime_ = value["EndTime"].asString();

}

std::string DescribeDomainRegionDataResult::getEndTime()const
{
	return endTime_;
}

void DescribeDomainRegionDataResult::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
}

std::string DescribeDomainRegionDataResult::getDomainName()const
{
	return domainName_;
}

void DescribeDomainRegionDataResult::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
}

std::string DescribeDomainRegionDataResult::getDataInterval()const
{
	return dataInterval_;
}

void DescribeDomainRegionDataResult::setDataInterval(const std::string& dataInterval)
{
	dataInterval_ = dataInterval;
}

std::string DescribeDomainRegionDataResult::getStartTime()const
{
	return startTime_;
}

void DescribeDomainRegionDataResult::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
}

