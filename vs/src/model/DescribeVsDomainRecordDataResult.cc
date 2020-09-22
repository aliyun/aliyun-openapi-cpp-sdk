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

#include <alibabacloud/vs/model/DescribeVsDomainRecordDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

DescribeVsDomainRecordDataResult::DescribeVsDomainRecordDataResult() :
	ServiceResult()
{}

DescribeVsDomainRecordDataResult::DescribeVsDomainRecordDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVsDomainRecordDataResult::~DescribeVsDomainRecordDataResult()
{}

void DescribeVsDomainRecordDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRecordDataPerIntervalNode = value["RecordDataPerInterval"]["DataModule"];
	for (auto valueRecordDataPerIntervalDataModule : allRecordDataPerIntervalNode)
	{
		DataModule recordDataPerIntervalObject;
		if(!valueRecordDataPerIntervalDataModule["TimeStamp"].isNull())
			recordDataPerIntervalObject.timeStamp = valueRecordDataPerIntervalDataModule["TimeStamp"].asString();
		if(!valueRecordDataPerIntervalDataModule["RecordValue"].isNull())
			recordDataPerIntervalObject.recordValue = valueRecordDataPerIntervalDataModule["RecordValue"].asString();
		recordDataPerInterval_.push_back(recordDataPerIntervalObject);
	}
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();

}

std::string DescribeVsDomainRecordDataResult::getEndTime()const
{
	return endTime_;
}

std::vector<DescribeVsDomainRecordDataResult::DataModule> DescribeVsDomainRecordDataResult::getRecordDataPerInterval()const
{
	return recordDataPerInterval_;
}

std::string DescribeVsDomainRecordDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeVsDomainRecordDataResult::getStartTime()const
{
	return startTime_;
}

