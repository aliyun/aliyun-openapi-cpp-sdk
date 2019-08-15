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

#include <alibabacloud/cdn/model/DescribeDomainQpsDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainQpsDataResult::DescribeDomainQpsDataResult() :
	ServiceResult()
{}

DescribeDomainQpsDataResult::DescribeDomainQpsDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainQpsDataResult::~DescribeDomainQpsDataResult()
{}

void DescribeDomainQpsDataResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allQpsDataInterval = value["QpsDataInterval"]["DataModule"];
	for (auto value : allQpsDataInterval)
	{
		DataModule qpsDataIntervalObject;
		if(!value["TimeStamp"].isNull())
			qpsDataIntervalObject.timeStamp = value["TimeStamp"].asString();
		if(!value["Value"].isNull())
			qpsDataIntervalObject.value = value["Value"].asString();
		if(!value["DomesticValue"].isNull())
			qpsDataIntervalObject.domesticValue = value["DomesticValue"].asString();
		if(!value["OverseasValue"].isNull())
			qpsDataIntervalObject.overseasValue = value["OverseasValue"].asString();
		if(!value["AccValue"].isNull())
			qpsDataIntervalObject.accValue = value["AccValue"].asString();
		if(!value["AccDomesticValue"].isNull())
			qpsDataIntervalObject.accDomesticValue = value["AccDomesticValue"].asString();
		if(!value["AccOverseasValue"].isNull())
			qpsDataIntervalObject.accOverseasValue = value["AccOverseasValue"].asString();
		if(!value["HttpsValue"].isNull())
			qpsDataIntervalObject.httpsValue = value["HttpsValue"].asString();
		if(!value["HttpsDomesticValue"].isNull())
			qpsDataIntervalObject.httpsDomesticValue = value["HttpsDomesticValue"].asString();
		if(!value["HttpsOverseasValue"].isNull())
			qpsDataIntervalObject.httpsOverseasValue = value["HttpsOverseasValue"].asString();
		if(!value["HttpsAccValue"].isNull())
			qpsDataIntervalObject.httpsAccValue = value["HttpsAccValue"].asString();
		if(!value["HttpsAccDomesticValue"].isNull())
			qpsDataIntervalObject.httpsAccDomesticValue = value["HttpsAccDomesticValue"].asString();
		if(!value["HttpsAccOverseasValue"].isNull())
			qpsDataIntervalObject.httpsAccOverseasValue = value["HttpsAccOverseasValue"].asString();
		qpsDataInterval_.push_back(qpsDataIntervalObject);
	}
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();

}

std::string DescribeDomainQpsDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDomainQpsDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDomainQpsDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDomainQpsDataResult::getDataInterval()const
{
	return dataInterval_;
}

std::vector<DescribeDomainQpsDataResult::DataModule> DescribeDomainQpsDataResult::getQpsDataInterval()const
{
	return qpsDataInterval_;
}

