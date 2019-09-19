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

#include <alibabacloud/scdn/model/DescribeScdnDomainRealTimeBpsDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scdn;
using namespace AlibabaCloud::Scdn::Model;

DescribeScdnDomainRealTimeBpsDataResult::DescribeScdnDomainRealTimeBpsDataResult() :
	ServiceResult()
{}

DescribeScdnDomainRealTimeBpsDataResult::DescribeScdnDomainRealTimeBpsDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScdnDomainRealTimeBpsDataResult::~DescribeScdnDomainRealTimeBpsDataResult()
{}

void DescribeScdnDomainRealTimeBpsDataResult::parse(const std::string &payload)
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

std::vector<DescribeScdnDomainRealTimeBpsDataResult::BpsModel> DescribeScdnDomainRealTimeBpsDataResult::getData()const
{
	return data_;
}

