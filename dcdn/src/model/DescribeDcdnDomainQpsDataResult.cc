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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainQpsDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnDomainQpsDataResult::DescribeDcdnDomainQpsDataResult() :
	ServiceResult()
{}

DescribeDcdnDomainQpsDataResult::DescribeDcdnDomainQpsDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnDomainQpsDataResult::~DescribeDcdnDomainQpsDataResult()
{}

void DescribeDcdnDomainQpsDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allQpsDataPerIntervalNode = value["QpsDataPerInterval"]["DataModule"];
	for (auto valueQpsDataPerIntervalDataModule : allQpsDataPerIntervalNode)
	{
		DataModule qpsDataPerIntervalObject;
		if(!valueQpsDataPerIntervalDataModule["DynamicHttpsAcc"].isNull())
			qpsDataPerIntervalObject.dynamicHttpsAcc = std::stof(valueQpsDataPerIntervalDataModule["DynamicHttpsAcc"].asString());
		if(!valueQpsDataPerIntervalDataModule["DynamicHttpAcc"].isNull())
			qpsDataPerIntervalObject.dynamicHttpAcc = std::stof(valueQpsDataPerIntervalDataModule["DynamicHttpAcc"].asString());
		if(!valueQpsDataPerIntervalDataModule["Qps"].isNull())
			qpsDataPerIntervalObject.qps = std::stof(valueQpsDataPerIntervalDataModule["Qps"].asString());
		if(!valueQpsDataPerIntervalDataModule["StaticHttpsAcc"].isNull())
			qpsDataPerIntervalObject.staticHttpsAcc = std::stof(valueQpsDataPerIntervalDataModule["StaticHttpsAcc"].asString());
		if(!valueQpsDataPerIntervalDataModule["StaticHttpQps"].isNull())
			qpsDataPerIntervalObject.staticHttpQps = std::stof(valueQpsDataPerIntervalDataModule["StaticHttpQps"].asString());
		if(!valueQpsDataPerIntervalDataModule["StaticHttpAcc"].isNull())
			qpsDataPerIntervalObject.staticHttpAcc = std::stof(valueQpsDataPerIntervalDataModule["StaticHttpAcc"].asString());
		if(!valueQpsDataPerIntervalDataModule["DynamicHttpsQps"].isNull())
			qpsDataPerIntervalObject.dynamicHttpsQps = std::stof(valueQpsDataPerIntervalDataModule["DynamicHttpsQps"].asString());
		if(!valueQpsDataPerIntervalDataModule["Acc"].isNull())
			qpsDataPerIntervalObject.acc = std::stof(valueQpsDataPerIntervalDataModule["Acc"].asString());
		if(!valueQpsDataPerIntervalDataModule["StaticHttpsQps"].isNull())
			qpsDataPerIntervalObject.staticHttpsQps = std::stof(valueQpsDataPerIntervalDataModule["StaticHttpsQps"].asString());
		if(!valueQpsDataPerIntervalDataModule["DynamicHttpQps"].isNull())
			qpsDataPerIntervalObject.dynamicHttpQps = std::stof(valueQpsDataPerIntervalDataModule["DynamicHttpQps"].asString());
		if(!valueQpsDataPerIntervalDataModule["TimeStamp"].isNull())
			qpsDataPerIntervalObject.timeStamp = valueQpsDataPerIntervalDataModule["TimeStamp"].asString();
		qpsDataPerInterval_.push_back(qpsDataPerIntervalObject);
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

std::vector<DescribeDcdnDomainQpsDataResult::DataModule> DescribeDcdnDomainQpsDataResult::getQpsDataPerInterval()const
{
	return qpsDataPerInterval_;
}

std::string DescribeDcdnDomainQpsDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDcdnDomainQpsDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDcdnDomainQpsDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDcdnDomainQpsDataResult::getDataInterval()const
{
	return dataInterval_;
}

