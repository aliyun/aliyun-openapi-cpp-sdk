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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainRealTimeQpsDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnDomainRealTimeQpsDataResult::DescribeDcdnDomainRealTimeQpsDataResult() :
	ServiceResult()
{}

DescribeDcdnDomainRealTimeQpsDataResult::DescribeDcdnDomainRealTimeQpsDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnDomainRealTimeQpsDataResult::~DescribeDcdnDomainRealTimeQpsDataResult()
{}

void DescribeDcdnDomainRealTimeQpsDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["QpsModel"];
	for (auto value : allData)
	{
		QpsModel dataObject;
		if(!value["Qps"].isNull())
			dataObject.qps = std::stof(value["Qps"].asString());
		if(!value["TimeStamp"].isNull())
			dataObject.timeStamp = value["TimeStamp"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<DescribeDcdnDomainRealTimeQpsDataResult::QpsModel> DescribeDcdnDomainRealTimeQpsDataResult::getData()const
{
	return data_;
}

