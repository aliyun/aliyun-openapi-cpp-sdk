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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainIpaConnDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnDomainIpaConnDataResult::DescribeDcdnDomainIpaConnDataResult() :
	ServiceResult()
{}

DescribeDcdnDomainIpaConnDataResult::DescribeDcdnDomainIpaConnDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnDomainIpaConnDataResult::~DescribeDcdnDomainIpaConnDataResult()
{}

void DescribeDcdnDomainIpaConnDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allConnectionDataPerIntervalNode = value["ConnectionDataPerInterval"]["DataModule"];
	for (auto valueConnectionDataPerIntervalDataModule : allConnectionDataPerIntervalNode)
	{
		DataModule connectionDataPerIntervalObject;
		if(!valueConnectionDataPerIntervalDataModule["TimeStamp"].isNull())
			connectionDataPerIntervalObject.timeStamp = valueConnectionDataPerIntervalDataModule["TimeStamp"].asString();
		if(!valueConnectionDataPerIntervalDataModule["Domain"].isNull())
			connectionDataPerIntervalObject.domain = valueConnectionDataPerIntervalDataModule["Domain"].asString();
		if(!valueConnectionDataPerIntervalDataModule["Connections"].isNull())
			connectionDataPerIntervalObject.connections = std::stol(valueConnectionDataPerIntervalDataModule["Connections"].asString());
		connectionDataPerInterval_.push_back(connectionDataPerIntervalObject);
	}
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();

}

std::vector<DescribeDcdnDomainIpaConnDataResult::DataModule> DescribeDcdnDomainIpaConnDataResult::getConnectionDataPerInterval()const
{
	return connectionDataPerInterval_;
}

std::string DescribeDcdnDomainIpaConnDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDcdnDomainIpaConnDataResult::getStartTime()const
{
	return startTime_;
}

