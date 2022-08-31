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

#include <alibabacloud/scdn/model/DescribeScdnDomainHttpCodeDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scdn;
using namespace AlibabaCloud::Scdn::Model;

DescribeScdnDomainHttpCodeDataResult::DescribeScdnDomainHttpCodeDataResult() :
	ServiceResult()
{}

DescribeScdnDomainHttpCodeDataResult::DescribeScdnDomainHttpCodeDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScdnDomainHttpCodeDataResult::~DescribeScdnDomainHttpCodeDataResult()
{}

void DescribeScdnDomainHttpCodeDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataPerIntervalNode = value["DataPerInterval"]["DataModule"];
	for (auto valueDataPerIntervalDataModule : allDataPerIntervalNode)
	{
		DataModule dataPerIntervalObject;
		if(!valueDataPerIntervalDataModule["TimeStamp"].isNull())
			dataPerIntervalObject.timeStamp = valueDataPerIntervalDataModule["TimeStamp"].asString();
		auto allHttpCodeDataPerIntervalNode = valueDataPerIntervalDataModule["HttpCodeDataPerInterval"]["HttpCodeDataModule"];
		for (auto valueDataPerIntervalDataModuleHttpCodeDataPerIntervalHttpCodeDataModule : allHttpCodeDataPerIntervalNode)
		{
			DataModule::HttpCodeDataModule httpCodeDataPerIntervalObject;
			if(!valueDataPerIntervalDataModuleHttpCodeDataPerIntervalHttpCodeDataModule["Code"].isNull())
				httpCodeDataPerIntervalObject.code = valueDataPerIntervalDataModuleHttpCodeDataPerIntervalHttpCodeDataModule["Code"].asString();
			if(!valueDataPerIntervalDataModuleHttpCodeDataPerIntervalHttpCodeDataModule["Proportion"].isNull())
				httpCodeDataPerIntervalObject.proportion = valueDataPerIntervalDataModuleHttpCodeDataPerIntervalHttpCodeDataModule["Proportion"].asString();
			if(!valueDataPerIntervalDataModuleHttpCodeDataPerIntervalHttpCodeDataModule["Count"].isNull())
				httpCodeDataPerIntervalObject.count = valueDataPerIntervalDataModuleHttpCodeDataPerIntervalHttpCodeDataModule["Count"].asString();
			dataPerIntervalObject.httpCodeDataPerInterval.push_back(httpCodeDataPerIntervalObject);
		}
		dataPerInterval_.push_back(dataPerIntervalObject);
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

std::string DescribeScdnDomainHttpCodeDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeScdnDomainHttpCodeDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeScdnDomainHttpCodeDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeScdnDomainHttpCodeDataResult::getDataInterval()const
{
	return dataInterval_;
}

std::vector<DescribeScdnDomainHttpCodeDataResult::DataModule> DescribeScdnDomainHttpCodeDataResult::getDataPerInterval()const
{
	return dataPerInterval_;
}

