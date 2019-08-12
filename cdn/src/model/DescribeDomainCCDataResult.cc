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

#include <alibabacloud/cdn/model/DescribeDomainCCDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainCCDataResult::DescribeDomainCCDataResult() :
	ServiceResult()
{}

DescribeDomainCCDataResult::DescribeDomainCCDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainCCDataResult::~DescribeDomainCCDataResult()
{}

void DescribeDomainCCDataResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allCCDataList = value["CCDataList"]["CCDatas"];
	for (auto value : allCCDataList)
	{
		CCDatas cCDataListObject;
		if(!value["TimeStamp"].isNull())
			cCDataListObject.timeStamp = value["TimeStamp"].asString();
		if(!value["Count"].isNull())
			cCDataListObject.count = value["Count"].asString();
		cCDataList_.push_back(cCDataListObject);
	}
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();

}

std::vector<DescribeDomainCCDataResult::CCDatas> DescribeDomainCCDataResult::getCCDataList()const
{
	return cCDataList_;
}

std::string DescribeDomainCCDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDomainCCDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDomainCCDataResult::getDataInterval()const
{
	return dataInterval_;
}

std::string DescribeDomainCCDataResult::getStartTime()const
{
	return startTime_;
}

