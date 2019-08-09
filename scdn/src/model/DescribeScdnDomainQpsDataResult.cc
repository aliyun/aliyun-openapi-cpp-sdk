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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allQpsDataPerInterval = value["QpsDataPerInterval"]["DataModule"];
	for (auto value : allQpsDataPerInterval)
	{
		DataModule qpsDataPerIntervalObject;
		if(!value["TimeStamp"].isNull())
			qpsDataPerIntervalObject.timeStamp = value["TimeStamp"].asString();
		if(!value["QpsValue"].isNull())
			qpsDataPerIntervalObject.qpsValue = value["QpsValue"].asString();
		if(!value["HttpQpsValue"].isNull())
			qpsDataPerIntervalObject.httpQpsValue = value["HttpQpsValue"].asString();
		if(!value["HttpsQpsValue"].isNull())
			qpsDataPerIntervalObject.httpsQpsValue = value["HttpsQpsValue"].asString();
		if(!value["AccValue"].isNull())
			qpsDataPerIntervalObject.accValue = value["AccValue"].asString();
		if(!value["HttpAccValue"].isNull())
			qpsDataPerIntervalObject.httpAccValue = value["HttpAccValue"].asString();
		if(!value["HttpsAccValue"].isNull())
			qpsDataPerIntervalObject.httpsAccValue = value["HttpsAccValue"].asString();
		qpsDataPerInterval_.push_back(qpsDataPerIntervalObject);
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

