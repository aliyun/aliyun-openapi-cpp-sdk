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

#include <alibabacloud/cdn/model/DescribeDomainSrcQpsDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainSrcQpsDataResult::DescribeDomainSrcQpsDataResult() :
	ServiceResult()
{}

DescribeDomainSrcQpsDataResult::DescribeDomainSrcQpsDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainSrcQpsDataResult::~DescribeDomainSrcQpsDataResult()
{}

void DescribeDomainSrcQpsDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSrcQpsDataPerIntervalNode = value["SrcQpsDataPerInterval"]["DataModule"];
	for (auto valueSrcQpsDataPerIntervalDataModule : allSrcQpsDataPerIntervalNode)
	{
		DataModule srcQpsDataPerIntervalObject;
		if(!valueSrcQpsDataPerIntervalDataModule["Value"].isNull())
			srcQpsDataPerIntervalObject.value = valueSrcQpsDataPerIntervalDataModule["Value"].asString();
		if(!valueSrcQpsDataPerIntervalDataModule["TimeStamp"].isNull())
			srcQpsDataPerIntervalObject.timeStamp = valueSrcQpsDataPerIntervalDataModule["TimeStamp"].asString();
		srcQpsDataPerInterval_.push_back(srcQpsDataPerIntervalObject);
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

std::string DescribeDomainSrcQpsDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDomainSrcQpsDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDomainSrcQpsDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDomainSrcQpsDataResult::getDataInterval()const
{
	return dataInterval_;
}

std::vector<DescribeDomainSrcQpsDataResult::DataModule> DescribeDomainSrcQpsDataResult::getSrcQpsDataPerInterval()const
{
	return srcQpsDataPerInterval_;
}

