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
	auto allBpsDataList = value["BpsDataList"]["BpsDataModel"];
	for (auto value : allBpsDataList)
	{
		BpsDataModel bpsDataModelObject;
		bpsDataModelObject.locationName = value["LocationName"].asString();
		bpsDataModelObject.ispName = value["IspName"].asString();
		bpsDataModelObject.bps = std::stol(value["Bps"].asString());
		bpsDataList_.push_back(bpsDataModelObject);
	}
	domainName_ = value["DomainName"].asString();
	timeStamp_ = value["TimeStamp"].asString();

}

std::string DescribeDomainBpsDataByTimeStampResult::getDomainName()const
{
	return domainName_;
}

void DescribeDomainBpsDataByTimeStampResult::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
}

std::string DescribeDomainBpsDataByTimeStampResult::getTimeStamp()const
{
	return timeStamp_;
}

void DescribeDomainBpsDataByTimeStampResult::setTimeStamp(const std::string& timeStamp)
{
	timeStamp_ = timeStamp;
}

