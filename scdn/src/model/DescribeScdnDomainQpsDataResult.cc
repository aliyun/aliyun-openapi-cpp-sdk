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

#include <alibabacloud/scdn/model/DescribeScdnDomainQpsDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scdn;
using namespace AlibabaCloud::Scdn::Model;

DescribeScdnDomainQpsDataResult::DescribeScdnDomainQpsDataResult() :
	ServiceResult()
{}

DescribeScdnDomainQpsDataResult::DescribeScdnDomainQpsDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScdnDomainQpsDataResult::~DescribeScdnDomainQpsDataResult()
{}

void DescribeScdnDomainQpsDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allQpsDataPerIntervalNode = value["QpsDataPerInterval"]["DataModule"];
	for (auto valueQpsDataPerIntervalDataModule : allQpsDataPerIntervalNode)
	{
		DataModule qpsDataPerIntervalObject;
		if(!valueQpsDataPerIntervalDataModule["HttpsAccValue"].isNull())
			qpsDataPerIntervalObject.httpsAccValue = valueQpsDataPerIntervalDataModule["HttpsAccValue"].asString();
		if(!valueQpsDataPerIntervalDataModule["QpsValue"].isNull())
			qpsDataPerIntervalObject.qpsValue = valueQpsDataPerIntervalDataModule["QpsValue"].asString();
		if(!valueQpsDataPerIntervalDataModule["AccValue"].isNull())
			qpsDataPerIntervalObject.accValue = valueQpsDataPerIntervalDataModule["AccValue"].asString();
		if(!valueQpsDataPerIntervalDataModule["HttpQpsValue"].isNull())
			qpsDataPerIntervalObject.httpQpsValue = valueQpsDataPerIntervalDataModule["HttpQpsValue"].asString();
		if(!valueQpsDataPerIntervalDataModule["TimeStamp"].isNull())
			qpsDataPerIntervalObject.timeStamp = valueQpsDataPerIntervalDataModule["TimeStamp"].asString();
		if(!valueQpsDataPerIntervalDataModule["HttpsQpsValue"].isNull())
			qpsDataPerIntervalObject.httpsQpsValue = valueQpsDataPerIntervalDataModule["HttpsQpsValue"].asString();
		if(!valueQpsDataPerIntervalDataModule["HttpAccValue"].isNull())
			qpsDataPerIntervalObject.httpAccValue = valueQpsDataPerIntervalDataModule["HttpAccValue"].asString();
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

std::vector<DescribeScdnDomainQpsDataResult::DataModule> DescribeScdnDomainQpsDataResult::getQpsDataPerInterval()const
{
	return qpsDataPerInterval_;
}

std::string DescribeScdnDomainQpsDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeScdnDomainQpsDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeScdnDomainQpsDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeScdnDomainQpsDataResult::getDataInterval()const
{
	return dataInterval_;
}

