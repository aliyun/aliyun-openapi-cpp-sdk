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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainIspDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnDomainIspDataResult::DescribeDcdnDomainIspDataResult() :
	ServiceResult()
{}

DescribeDcdnDomainIspDataResult::DescribeDcdnDomainIspDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnDomainIspDataResult::~DescribeDcdnDomainIspDataResult()
{}

void DescribeDcdnDomainIspDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allValueNode = value["Value"]["IspProportionData"];
	for (auto valueValueIspProportionData : allValueNode)
	{
		IspProportionData valueObject;
		if(!valueValueIspProportionData["Qps"].isNull())
			valueObject.qps = valueValueIspProportionData["Qps"].asString();
		if(!valueValueIspProportionData["TotalQuery"].isNull())
			valueObject.totalQuery = valueValueIspProportionData["TotalQuery"].asString();
		if(!valueValueIspProportionData["TotalBytes"].isNull())
			valueObject.totalBytes = valueValueIspProportionData["TotalBytes"].asString();
		if(!valueValueIspProportionData["AvgResponseRate"].isNull())
			valueObject.avgResponseRate = valueValueIspProportionData["AvgResponseRate"].asString();
		if(!valueValueIspProportionData["AvgResponseTime"].isNull())
			valueObject.avgResponseTime = valueValueIspProportionData["AvgResponseTime"].asString();
		if(!valueValueIspProportionData["Proportion"].isNull())
			valueObject.proportion = valueValueIspProportionData["Proportion"].asString();
		if(!valueValueIspProportionData["AvgObjectSize"].isNull())
			valueObject.avgObjectSize = valueValueIspProportionData["AvgObjectSize"].asString();
		if(!valueValueIspProportionData["IspEname"].isNull())
			valueObject.ispEname = valueValueIspProportionData["IspEname"].asString();
		if(!valueValueIspProportionData["Bps"].isNull())
			valueObject.bps = valueValueIspProportionData["Bps"].asString();
		if(!valueValueIspProportionData["Isp"].isNull())
			valueObject.isp = valueValueIspProportionData["Isp"].asString();
		if(!valueValueIspProportionData["BytesProportion"].isNull())
			valueObject.bytesProportion = valueValueIspProportionData["BytesProportion"].asString();
		value_.push_back(valueObject);
	}
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();

}

std::string DescribeDcdnDomainIspDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDcdnDomainIspDataResult::getDomainName()const
{
	return domainName_;
}

std::vector<DescribeDcdnDomainIspDataResult::IspProportionData> DescribeDcdnDomainIspDataResult::getValue()const
{
	return value_;
}

std::string DescribeDcdnDomainIspDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDcdnDomainIspDataResult::getDataInterval()const
{
	return dataInterval_;
}

