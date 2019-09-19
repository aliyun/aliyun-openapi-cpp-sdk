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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainRealTimeByteHitRateDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnDomainRealTimeByteHitRateDataResult::DescribeDcdnDomainRealTimeByteHitRateDataResult() :
	ServiceResult()
{}

DescribeDcdnDomainRealTimeByteHitRateDataResult::DescribeDcdnDomainRealTimeByteHitRateDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnDomainRealTimeByteHitRateDataResult::~DescribeDcdnDomainRealTimeByteHitRateDataResult()
{}

void DescribeDcdnDomainRealTimeByteHitRateDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["ByteHitRateDataModel"];
	for (auto valueDataByteHitRateDataModel : allDataNode)
	{
		ByteHitRateDataModel dataObject;
		if(!valueDataByteHitRateDataModel["ByteHitRate"].isNull())
			dataObject.byteHitRate = std::stof(valueDataByteHitRateDataModel["ByteHitRate"].asString());
		if(!valueDataByteHitRateDataModel["TimeStamp"].isNull())
			dataObject.timeStamp = valueDataByteHitRateDataModel["TimeStamp"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<DescribeDcdnDomainRealTimeByteHitRateDataResult::ByteHitRateDataModel> DescribeDcdnDomainRealTimeByteHitRateDataResult::getData()const
{
	return data_;
}

