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

#include <alibabacloud/cdn/model/DescribeDomainRealTimeBpsDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainRealTimeBpsDataResult::DescribeDomainRealTimeBpsDataResult() :
	ServiceResult()
{}

DescribeDomainRealTimeBpsDataResult::DescribeDomainRealTimeBpsDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainRealTimeBpsDataResult::~DescribeDomainRealTimeBpsDataResult()
{}

void DescribeDomainRealTimeBpsDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["BpsModel"];
	for (auto valueDataBpsModel : allDataNode)
	{
		BpsModel dataObject;
		if(!valueDataBpsModel["Bps"].isNull())
			dataObject.bps = std::stof(valueDataBpsModel["Bps"].asString());
		if(!valueDataBpsModel["TimeStamp"].isNull())
			dataObject.timeStamp = valueDataBpsModel["TimeStamp"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<DescribeDomainRealTimeBpsDataResult::BpsModel> DescribeDomainRealTimeBpsDataResult::getData()const
{
	return data_;
}

