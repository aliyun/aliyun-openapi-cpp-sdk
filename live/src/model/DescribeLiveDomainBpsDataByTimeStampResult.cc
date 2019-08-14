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

#include <alibabacloud/live/model/DescribeLiveDomainBpsDataByTimeStampResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveDomainBpsDataByTimeStampResult::DescribeLiveDomainBpsDataByTimeStampResult() :
	ServiceResult()
{}

DescribeLiveDomainBpsDataByTimeStampResult::DescribeLiveDomainBpsDataByTimeStampResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveDomainBpsDataByTimeStampResult::~DescribeLiveDomainBpsDataByTimeStampResult()
{}

void DescribeLiveDomainBpsDataByTimeStampResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allBpsDataList = value["BpsDataList"]["BpsDataModel"];
	for (auto value : allBpsDataList)
	{
		BpsDataModel bpsDataListObject;
		if(!value["TimeStamp"].isNull())
			bpsDataListObject.timeStamp = value["TimeStamp"].asString();
		if(!value["LocationName"].isNull())
			bpsDataListObject.locationName = value["LocationName"].asString();
		if(!value["IspName"].isNull())
			bpsDataListObject.ispName = value["IspName"].asString();
		if(!value["Bps"].isNull())
			bpsDataListObject.bps = std::stol(value["Bps"].asString());
		bpsDataList_.push_back(bpsDataListObject);
	}
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["TimeStamp"].isNull())
		timeStamp_ = value["TimeStamp"].asString();

}

std::vector<DescribeLiveDomainBpsDataByTimeStampResult::BpsDataModel> DescribeLiveDomainBpsDataByTimeStampResult::getBpsDataList()const
{
	return bpsDataList_;
}

std::string DescribeLiveDomainBpsDataByTimeStampResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeLiveDomainBpsDataByTimeStampResult::getTimeStamp()const
{
	return timeStamp_;
}

