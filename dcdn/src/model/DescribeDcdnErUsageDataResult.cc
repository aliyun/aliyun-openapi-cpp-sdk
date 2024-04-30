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

#include <alibabacloud/dcdn/model/DescribeDcdnErUsageDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnErUsageDataResult::DescribeDcdnErUsageDataResult() :
	ServiceResult()
{}

DescribeDcdnErUsageDataResult::DescribeDcdnErUsageDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnErUsageDataResult::~DescribeDcdnErUsageDataResult()
{}

void DescribeDcdnErUsageDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allErAccDataNode = value["ErAccData"]["ErAccItem"];
	for (auto valueErAccDataErAccItem : allErAccDataNode)
	{
		ErAccItem erAccDataObject;
		if(!valueErAccDataErAccItem["ErAcc"].isNull())
			erAccDataObject.erAcc = std::stol(valueErAccDataErAccItem["ErAcc"].asString());
		if(!valueErAccDataErAccItem["TimeStamp"].isNull())
			erAccDataObject.timeStamp = valueErAccDataErAccItem["TimeStamp"].asString();
		if(!valueErAccDataErAccItem["Spec"].isNull())
			erAccDataObject.spec = valueErAccDataErAccItem["Spec"].asString();
		if(!valueErAccDataErAccItem["Routine"].isNull())
			erAccDataObject.routine = valueErAccDataErAccItem["Routine"].asString();
		erAccData_.push_back(erAccDataObject);
	}
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();

}

std::string DescribeDcdnErUsageDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDcdnErUsageDataResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeDcdnErUsageDataResult::ErAccItem> DescribeDcdnErUsageDataResult::getErAccData()const
{
	return erAccData_;
}

