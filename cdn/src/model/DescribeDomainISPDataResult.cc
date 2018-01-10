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

#include <alibabacloud/cdn/model/DescribeDomainISPDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainISPDataResult::DescribeDomainISPDataResult() :
	ServiceResult()
{}

DescribeDomainISPDataResult::DescribeDomainISPDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainISPDataResult::~DescribeDomainISPDataResult()
{}

void DescribeDomainISPDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allValue = value["Value"]["ISPProportionData"];
	for (auto value : allValue)
	{
		ISPProportionData iSPProportionDataObject;
		iSPProportionDataObject.iSP = value["ISP"].asString();
		iSPProportionDataObject.proportion = value["Proportion"].asString();
		iSPProportionDataObject.ispEname = value["IspEname"].asString();
		iSPProportionDataObject.avgObjectSize = value["AvgObjectSize"].asString();
		iSPProportionDataObject.avgResponseTime = value["AvgResponseTime"].asString();
		iSPProportionDataObject.bps = value["Bps"].asString();
		iSPProportionDataObject.byteHitRate = value["ByteHitRate"].asString();
		iSPProportionDataObject.qps = value["Qps"].asString();
		iSPProportionDataObject.reqErrRate = value["ReqErrRate"].asString();
		iSPProportionDataObject.reqHitRate = value["ReqHitRate"].asString();
		iSPProportionDataObject.avgResponseRate = value["AvgResponseRate"].asString();
		iSPProportionDataObject.totalBytes = value["TotalBytes"].asString();
		iSPProportionDataObject.bytesProportion = value["BytesProportion"].asString();
		iSPProportionDataObject.totalQuery = value["TotalQuery"].asString();
		value_.push_back(iSPProportionDataObject);
	}
	domainName_ = value["DomainName"].asString();
	dataInterval_ = value["DataInterval"].asString();
	startTime_ = value["StartTime"].asString();
	endTime_ = value["EndTime"].asString();

}

std::string DescribeDomainISPDataResult::getEndTime()const
{
	return endTime_;
}

void DescribeDomainISPDataResult::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
}

std::string DescribeDomainISPDataResult::getDomainName()const
{
	return domainName_;
}

void DescribeDomainISPDataResult::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
}

std::string DescribeDomainISPDataResult::getDataInterval()const
{
	return dataInterval_;
}

void DescribeDomainISPDataResult::setDataInterval(const std::string& dataInterval)
{
	dataInterval_ = dataInterval;
}

std::string DescribeDomainISPDataResult::getStartTime()const
{
	return startTime_;
}

void DescribeDomainISPDataResult::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
}

