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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allValue = value["Value"]["RegionProportionData"];
	for (auto value : allValue)
	{
		RegionProportionData valueObject;
		if(!value["Region"].isNull())
			valueObject.region = value["Region"].asString();
		if(!value["Proportion"].isNull())
			valueObject.proportion = value["Proportion"].asString();
		if(!value["RegionEname"].isNull())
			valueObject.regionEname = value["RegionEname"].asString();
		if(!value["AvgObjectSize"].isNull())
			valueObject.avgObjectSize = value["AvgObjectSize"].asString();
		if(!value["AvgResponseTime"].isNull())
			valueObject.avgResponseTime = value["AvgResponseTime"].asString();
		if(!value["Bps"].isNull())
			valueObject.bps = value["Bps"].asString();
		if(!value["Qps"].isNull())
			valueObject.qps = value["Qps"].asString();
		if(!value["AvgResponseRate"].isNull())
			valueObject.avgResponseRate = value["AvgResponseRate"].asString();
		if(!value["ReqErrRate"].isNull())
			valueObject.reqErrRate = value["ReqErrRate"].asString();
		if(!value["TotalBytes"].isNull())
			valueObject.totalBytes = value["TotalBytes"].asString();
		if(!value["BytesProportion"].isNull())
			valueObject.bytesProportion = value["BytesProportion"].asString();
		if(!value["TotalQuery"].isNull())
			valueObject.totalQuery = value["TotalQuery"].asString();
		value_.push_back(valueObject);
	}
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();

}

std::string DescribeDomainRegionDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDomainRegionDataResult::getDomainName()const
{
	return domainName_;
}

std::vector<DescribeDomainRegionDataResult::RegionProportionData> DescribeDomainRegionDataResult::getValue()const
{
	return value_;
}

std::string DescribeDomainRegionDataResult::getDataInterval()const
{
	return dataInterval_;
}

std::string DescribeDomainRegionDataResult::getStartTime()const
{
	return startTime_;
}

