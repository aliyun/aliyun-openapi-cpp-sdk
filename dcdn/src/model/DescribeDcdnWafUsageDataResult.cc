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

#include <alibabacloud/dcdn/model/DescribeDcdnWafUsageDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnWafUsageDataResult::DescribeDcdnWafUsageDataResult() :
	ServiceResult()
{}

DescribeDcdnWafUsageDataResult::DescribeDcdnWafUsageDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnWafUsageDataResult::~DescribeDcdnWafUsageDataResult()
{}

void DescribeDcdnWafUsageDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allWafUsageDataNode = value["WafUsageData"]["WafUsageDataItem"];
	for (auto valueWafUsageDataWafUsageDataItem : allWafUsageDataNode)
	{
		WafUsageDataItem wafUsageDataObject;
		if(!valueWafUsageDataWafUsageDataItem["ObserveCnt"].isNull())
			wafUsageDataObject.observeCnt = std::stol(valueWafUsageDataWafUsageDataItem["ObserveCnt"].asString());
		if(!valueWafUsageDataWafUsageDataItem["Domain"].isNull())
			wafUsageDataObject.domain = valueWafUsageDataWafUsageDataItem["Domain"].asString();
		if(!valueWafUsageDataWafUsageDataItem["BlockCnt"].isNull())
			wafUsageDataObject.blockCnt = std::stol(valueWafUsageDataWafUsageDataItem["BlockCnt"].asString());
		if(!valueWafUsageDataWafUsageDataItem["AccessCnt"].isNull())
			wafUsageDataObject.accessCnt = std::stol(valueWafUsageDataWafUsageDataItem["AccessCnt"].asString());
		if(!valueWafUsageDataWafUsageDataItem["TimeStamp"].isNull())
			wafUsageDataObject.timeStamp = valueWafUsageDataWafUsageDataItem["TimeStamp"].asString();
		if(!valueWafUsageDataWafUsageDataItem["SecCu"].isNull())
			wafUsageDataObject.secCu = std::stol(valueWafUsageDataWafUsageDataItem["SecCu"].asString());
		wafUsageData_.push_back(wafUsageDataObject);
	}
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();

}

std::string DescribeDcdnWafUsageDataResult::getEndTime()const
{
	return endTime_;
}

std::vector<DescribeDcdnWafUsageDataResult::WafUsageDataItem> DescribeDcdnWafUsageDataResult::getWafUsageData()const
{
	return wafUsageData_;
}

std::string DescribeDcdnWafUsageDataResult::getStartTime()const
{
	return startTime_;
}

