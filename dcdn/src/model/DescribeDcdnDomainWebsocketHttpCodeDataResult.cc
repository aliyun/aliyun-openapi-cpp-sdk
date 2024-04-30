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
	auto allHttpCodeDataPerIntervalNode = value["HttpCodeDataPerInterval"]["DataModule"];
	for (auto valueHttpCodeDataPerIntervalDataModule : allHttpCodeDataPerIntervalNode)
	{
		DataModule httpCodeDataPerIntervalObject;
		if(!valueHttpCodeDataPerIntervalDataModule["TimeStamp"].isNull())
			httpCodeDataPerIntervalObject.timeStamp = valueHttpCodeDataPerIntervalDataModule["TimeStamp"].asString();
		auto allWebsocketHttpCodeNode = valueHttpCodeDataPerIntervalDataModule["WebsocketHttpCode"]["HttpCodeDataModule"];
		for (auto valueHttpCodeDataPerIntervalDataModuleWebsocketHttpCodeHttpCodeDataModule : allWebsocketHttpCodeNode)
		{
			DataModule::HttpCodeDataModule websocketHttpCodeObject;
			if(!valueHttpCodeDataPerIntervalDataModuleWebsocketHttpCodeHttpCodeDataModule["Code"].isNull())
				websocketHttpCodeObject.code = std::stoi(valueHttpCodeDataPerIntervalDataModuleWebsocketHttpCodeHttpCodeDataModule["Code"].asString());
			if(!valueHttpCodeDataPerIntervalDataModuleWebsocketHttpCodeHttpCodeDataModule["Proportion"].isNull())
				websocketHttpCodeObject.proportion = std::stof(valueHttpCodeDataPerIntervalDataModuleWebsocketHttpCodeHttpCodeDataModule["Proportion"].asString());
			if(!valueHttpCodeDataPerIntervalDataModuleWebsocketHttpCodeHttpCodeDataModule["Count"].isNull())
				websocketHttpCodeObject.count = std::stof(valueHttpCodeDataPerIntervalDataModuleWebsocketHttpCodeHttpCodeDataModule["Count"].asString());
			httpCodeDataPerIntervalObject.websocketHttpCode.push_back(websocketHttpCodeObject);
		}
		httpCodeDataPerInterval_.push_back(httpCodeDataPerIntervalObject);
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

std::vector<DescribeDcdnDomainWebsocketHttpCodeDataResult::DataModule> DescribeDcdnDomainWebsocketHttpCodeDataResult::getHttpCodeDataPerInterval()const
{
	return httpCodeDataPerInterval_;
}

