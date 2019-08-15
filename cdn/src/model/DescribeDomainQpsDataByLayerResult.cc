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

#include <alibabacloud/cdn/model/DescribeDomainQpsDataByLayerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainQpsDataByLayerResult::DescribeDomainQpsDataByLayerResult() :
	ServiceResult()
{}

DescribeDomainQpsDataByLayerResult::DescribeDomainQpsDataByLayerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainQpsDataByLayerResult::~DescribeDomainQpsDataByLayerResult()
{}

void DescribeDomainQpsDataByLayerResult::parse(const std::string &payload)
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
	if(!value["Layer"].isNull())
		layer_ = value["Layer"].asString();

}

std::string DescribeDomainQpsDataByLayerResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDomainQpsDataByLayerResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDomainQpsDataByLayerResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDomainQpsDataByLayerResult::getDataInterval()const
{
	return dataInterval_;
}

std::vector<DescribeDomainQpsDataByLayerResult::DataModule> DescribeDomainQpsDataByLayerResult::getQpsDataInterval()const
{
	return qpsDataInterval_;
}

std::string DescribeDomainQpsDataByLayerResult::getLayer()const
{
	return layer_;
}

