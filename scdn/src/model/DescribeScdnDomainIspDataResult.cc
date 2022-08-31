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

#include <alibabacloud/scdn/model/DescribeScdnDomainIspDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scdn;
using namespace AlibabaCloud::Scdn::Model;

DescribeScdnDomainIspDataResult::DescribeScdnDomainIspDataResult() :
	ServiceResult()
{}

DescribeScdnDomainIspDataResult::DescribeScdnDomainIspDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScdnDomainIspDataResult::~DescribeScdnDomainIspDataResult()
{}

void DescribeScdnDomainIspDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allValueNode = value["Value"]["ISPProportionData"];
	for (auto valueValueISPProportionData : allValueNode)
	{
		ISPProportionData valueObject;
		if(!valueValueISPProportionData["TotalQuery"].isNull())
			valueObject.totalQuery = valueValueISPProportionData["TotalQuery"].asString();
		if(!valueValueISPProportionData["TotalBytes"].isNull())
			valueObject.totalBytes = valueValueISPProportionData["TotalBytes"].asString();
		if(!valueValueISPProportionData["AvgResponseRate"].isNull())
			valueObject.avgResponseRate = valueValueISPProportionData["AvgResponseRate"].asString();
		if(!valueValueISPProportionData["AvgResponseTime"].isNull())
			valueObject.avgResponseTime = valueValueISPProportionData["AvgResponseTime"].asString();
		if(!valueValueISPProportionData["ReqErrRate"].isNull())
			valueObject.reqErrRate = valueValueISPProportionData["ReqErrRate"].asString();
		if(!valueValueISPProportionData["AvgObjectSize"].isNull())
			valueObject.avgObjectSize = valueValueISPProportionData["AvgObjectSize"].asString();
		if(!valueValueISPProportionData["Bps"].isNull())
			valueObject.bps = valueValueISPProportionData["Bps"].asString();
		if(!valueValueISPProportionData["Qps"].isNull())
			valueObject.qps = valueValueISPProportionData["Qps"].asString();
		if(!valueValueISPProportionData["Proportion"].isNull())
			valueObject.proportion = valueValueISPProportionData["Proportion"].asString();
		if(!valueValueISPProportionData["IspEname"].isNull())
			valueObject.ispEname = valueValueISPProportionData["IspEname"].asString();
		if(!valueValueISPProportionData["ISP"].isNull())
			valueObject.iSP = valueValueISPProportionData["ISP"].asString();
		if(!valueValueISPProportionData["BytesProportion"].isNull())
			valueObject.bytesProportion = valueValueISPProportionData["BytesProportion"].asString();
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

std::string DescribeScdnDomainIspDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeScdnDomainIspDataResult::getDomainName()const
{
	return domainName_;
}

std::vector<DescribeScdnDomainIspDataResult::ISPProportionData> DescribeScdnDomainIspDataResult::getValue()const
{
	return value_;
}

std::string DescribeScdnDomainIspDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeScdnDomainIspDataResult::getDataInterval()const
{
	return dataInterval_;
}

