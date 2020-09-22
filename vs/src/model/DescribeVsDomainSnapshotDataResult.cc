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

#include <alibabacloud/vs/model/DescribeVsDomainSnapshotDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

DescribeVsDomainSnapshotDataResult::DescribeVsDomainSnapshotDataResult() :
	ServiceResult()
{}

DescribeVsDomainSnapshotDataResult::DescribeVsDomainSnapshotDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVsDomainSnapshotDataResult::~DescribeVsDomainSnapshotDataResult()
{}

void DescribeVsDomainSnapshotDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSnapshotDataPerIntervalNode = value["SnapshotDataPerInterval"]["DataModule"];
	for (auto valueSnapshotDataPerIntervalDataModule : allSnapshotDataPerIntervalNode)
	{
		DataModule snapshotDataPerIntervalObject;
		if(!valueSnapshotDataPerIntervalDataModule["TimeStamp"].isNull())
			snapshotDataPerIntervalObject.timeStamp = valueSnapshotDataPerIntervalDataModule["TimeStamp"].asString();
		if(!valueSnapshotDataPerIntervalDataModule["SnapshotValue"].isNull())
			snapshotDataPerIntervalObject.snapshotValue = valueSnapshotDataPerIntervalDataModule["SnapshotValue"].asString();
		snapshotDataPerInterval_.push_back(snapshotDataPerIntervalObject);
	}
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();

}

std::vector<DescribeVsDomainSnapshotDataResult::DataModule> DescribeVsDomainSnapshotDataResult::getSnapshotDataPerInterval()const
{
	return snapshotDataPerInterval_;
}

std::string DescribeVsDomainSnapshotDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeVsDomainSnapshotDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeVsDomainSnapshotDataResult::getStartTime()const
{
	return startTime_;
}

