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

#include <alibabacloud/ecs/model/DescribeSnapshotsUsageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeSnapshotsUsageResult::DescribeSnapshotsUsageResult() :
	ServiceResult()
{}

DescribeSnapshotsUsageResult::DescribeSnapshotsUsageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSnapshotsUsageResult::~DescribeSnapshotsUsageResult()
{}

void DescribeSnapshotsUsageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["SnapshotSize"].isNull())
		snapshotSize_ = std::stol(value["SnapshotSize"].asString());
	if(!value["SnapshotCount"].isNull())
		snapshotCount_ = std::stoi(value["SnapshotCount"].asString());

}

int DescribeSnapshotsUsageResult::getSnapshotCount()const
{
	return snapshotCount_;
}

long DescribeSnapshotsUsageResult::getSnapshotSize()const
{
	return snapshotSize_;
}

