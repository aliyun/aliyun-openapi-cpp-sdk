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

#include <alibabacloud/live/model/DescribeLiveDomainRecordUsageDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveDomainRecordUsageDataResult::DescribeLiveDomainRecordUsageDataResult() :
	ServiceResult()
{}

DescribeLiveDomainRecordUsageDataResult::DescribeLiveDomainRecordUsageDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveDomainRecordUsageDataResult::~DescribeLiveDomainRecordUsageDataResult()
{}

void DescribeLiveDomainRecordUsageDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRecordUsageDataNode = value["RecordUsageData"]["DataModule"];
	for (auto valueRecordUsageDataDataModule : allRecordUsageDataNode)
	{
		DataModule recordUsageDataObject;
		if(!valueRecordUsageDataDataModule["Type"].isNull())
			recordUsageDataObject.type = valueRecordUsageDataDataModule["Type"].asString();
		if(!valueRecordUsageDataDataModule["Domain"].isNull())
			recordUsageDataObject.domain = valueRecordUsageDataDataModule["Domain"].asString();
		if(!valueRecordUsageDataDataModule["Region"].isNull())
			recordUsageDataObject.region = valueRecordUsageDataDataModule["Region"].asString();
		if(!valueRecordUsageDataDataModule["TimeStamp"].isNull())
			recordUsageDataObject.timeStamp = valueRecordUsageDataDataModule["TimeStamp"].asString();
		if(!valueRecordUsageDataDataModule["Duration"].isNull())
			recordUsageDataObject.duration = std::stol(valueRecordUsageDataDataModule["Duration"].asString());
		if(!valueRecordUsageDataDataModule["Count"].isNull())
			recordUsageDataObject.count = std::stol(valueRecordUsageDataDataModule["Count"].asString());
		recordUsageData_.push_back(recordUsageDataObject);
	}
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();

}

std::string DescribeLiveDomainRecordUsageDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeLiveDomainRecordUsageDataResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeLiveDomainRecordUsageDataResult::DataModule> DescribeLiveDomainRecordUsageDataResult::getRecordUsageData()const
{
	return recordUsageData_;
}

