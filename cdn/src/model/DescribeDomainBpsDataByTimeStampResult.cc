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

#include <alibabacloud/cdn/model/DescribeDomainBpsDataByTimeStampResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainBpsDataByTimeStampResult::DescribeDomainBpsDataByTimeStampResult() :
	ServiceResult()
{}

DescribeDomainBpsDataByTimeStampResult::DescribeDomainBpsDataByTimeStampResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainBpsDataByTimeStampResult::~DescribeDomainBpsDataByTimeStampResult()
{}

void DescribeDomainBpsDataByTimeStampResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBpsDataListNode = value["BpsDataList"]["BpsDataModel"];
	for (auto valueBpsDataListBpsDataModel : allBpsDataListNode)
	{
		BpsDataModel bpsDataListObject;
		if(!valueBpsDataListBpsDataModel["LocationName"].isNull())
			bpsDataListObject.locationName = valueBpsDataListBpsDataModel["LocationName"].asString();
		if(!valueBpsDataListBpsDataModel["TimeStamp"].isNull())
			bpsDataListObject.timeStamp = valueBpsDataListBpsDataModel["TimeStamp"].asString();
		if(!valueBpsDataListBpsDataModel["IspName"].isNull())
			bpsDataListObject.ispName = valueBpsDataListBpsDataModel["IspName"].asString();
		if(!valueBpsDataListBpsDataModel["Bps"].isNull())
			bpsDataListObject.bps = std::stol(valueBpsDataListBpsDataModel["Bps"].asString());
		bpsDataList_.push_back(bpsDataListObject);
	}
	if(!value["TimeStamp"].isNull())
		timeStamp_ = value["TimeStamp"].asString();
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();

}

std::vector<DescribeDomainBpsDataByTimeStampResult::BpsDataModel> DescribeDomainBpsDataByTimeStampResult::getBpsDataList()const
{
	return bpsDataList_;
}

std::string DescribeDomainBpsDataByTimeStampResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDomainBpsDataByTimeStampResult::getTimeStamp()const
{
	return timeStamp_;
}

