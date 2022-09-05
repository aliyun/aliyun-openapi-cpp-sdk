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

#include <alibabacloud/cdn/model/DescribeDomainHttpCodeDataByLayerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainHttpCodeDataByLayerResult::DescribeDomainHttpCodeDataByLayerResult() :
	ServiceResult()
{}

DescribeDomainHttpCodeDataByLayerResult::DescribeDomainHttpCodeDataByLayerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainHttpCodeDataByLayerResult::~DescribeDomainHttpCodeDataByLayerResult()
{}

void DescribeDomainHttpCodeDataByLayerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allHttpCodeDataIntervalNode = value["HttpCodeDataInterval"]["DataModule"];
	for (auto valueHttpCodeDataIntervalDataModule : allHttpCodeDataIntervalNode)
	{
		DataModule httpCodeDataIntervalObject;
		if(!valueHttpCodeDataIntervalDataModule["Value"].isNull())
			httpCodeDataIntervalObject.value = valueHttpCodeDataIntervalDataModule["Value"].asString();
		if(!valueHttpCodeDataIntervalDataModule["TimeStamp"].isNull())
			httpCodeDataIntervalObject.timeStamp = valueHttpCodeDataIntervalDataModule["TimeStamp"].asString();
		if(!valueHttpCodeDataIntervalDataModule["TotalValue"].isNull())
			httpCodeDataIntervalObject.totalValue = valueHttpCodeDataIntervalDataModule["TotalValue"].asString();
		httpCodeDataInterval_.push_back(httpCodeDataIntervalObject);
	}
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();

}

std::string DescribeDomainHttpCodeDataByLayerResult::getDataInterval()const
{
	return dataInterval_;
}

std::vector<DescribeDomainHttpCodeDataByLayerResult::DataModule> DescribeDomainHttpCodeDataByLayerResult::getHttpCodeDataInterval()const
{
	return httpCodeDataInterval_;
}

