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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainWebsocketHttpCodeDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnDomainWebsocketHttpCodeDataResult::DescribeDcdnDomainWebsocketHttpCodeDataResult() :
	ServiceResult()
{}

DescribeDcdnDomainWebsocketHttpCodeDataResult::DescribeDcdnDomainWebsocketHttpCodeDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnDomainWebsocketHttpCodeDataResult::~DescribeDcdnDomainWebsocketHttpCodeDataResult()
{}

void DescribeDcdnDomainWebsocketHttpCodeDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataPerInterval = value["DataPerInterval"]["DataModule"];
	for (auto value : allDataPerInterval)
	{
		DataModule dataPerIntervalObject;
		if(!value["TimeStamp"].isNull())
			dataPerIntervalObject.timeStamp = value["TimeStamp"].asString();
		auto allWebsocketHttpCodeDataPerInterval = value["WebsocketHttpCodeDataPerInterval"]["HttpCodeDataModule"];
		for (auto value : allWebsocketHttpCodeDataPerInterval)
		{
			DataModule::HttpCodeDataModule websocketHttpCodeDataPerIntervalObject;
			if(!value["Code"].isNull())
				websocketHttpCodeDataPerIntervalObject.code = std::stoi(value["Code"].asString());
			if(!value["Proportion"].isNull())
				websocketHttpCodeDataPerIntervalObject.proportion = std::stof(value["Proportion"].asString());
			if(!value["Count"].isNull())
				websocketHttpCodeDataPerIntervalObject.count = std::stof(value["Count"].asString());
			dataPerIntervalObject.websocketHttpCodeDataPerInterval.push_back(websocketHttpCodeDataPerIntervalObject);
		}
		dataPerInterval_.push_back(dataPerIntervalObject);
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

std::string DescribeDcdnDomainWebsocketHttpCodeDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDcdnDomainWebsocketHttpCodeDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDcdnDomainWebsocketHttpCodeDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDcdnDomainWebsocketHttpCodeDataResult::getDataInterval()const
{
	return dataInterval_;
}

std::vector<DescribeDcdnDomainWebsocketHttpCodeDataResult::DataModule> DescribeDcdnDomainWebsocketHttpCodeDataResult::getDataPerInterval()const
{
	return dataPerInterval_;
}

