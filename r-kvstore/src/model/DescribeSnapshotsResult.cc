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

#include <alibabacloud/r-kvstore/model/DescribeSnapshotsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeSnapshotsResult::DescribeSnapshotsResult() :
	ServiceResult()
{}

DescribeSnapshotsResult::DescribeSnapshotsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSnapshotsResult::~DescribeSnapshotsResult()
{}

void DescribeSnapshotsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSnapshotsNode = value["Snapshots"]["Snapshot"];
	for (auto valueSnapshotsSnapshot : allSnapshotsNode)
	{
		Snapshot snapshotsObject;
		if(!valueSnapshotsSnapshot["SnapshotId"].isNull())
			snapshotsObject.snapshotId = valueSnapshotsSnapshot["SnapshotId"].asString();
		if(!valueSnapshotsSnapshot["SnapshotName"].isNull())
			snapshotsObject.snapshotName = valueSnapshotsSnapshot["SnapshotName"].asString();
		if(!valueSnapshotsSnapshot["InstanceId"].isNull())
			snapshotsObject.instanceId = valueSnapshotsSnapshot["InstanceId"].asString();
		if(!valueSnapshotsSnapshot["CreateTime"].isNull())
			snapshotsObject.createTime = valueSnapshotsSnapshot["CreateTime"].asString();
		if(!valueSnapshotsSnapshot["Memory"].isNull())
			snapshotsObject.memory = std::stol(valueSnapshotsSnapshot["Memory"].asString());
		if(!valueSnapshotsSnapshot["RdbSize"].isNull())
			snapshotsObject.rdbSize = std::stol(valueSnapshotsSnapshot["RdbSize"].asString());
		if(!valueSnapshotsSnapshot["Status"].isNull())
			snapshotsObject.status = valueSnapshotsSnapshot["Status"].asString();
		if(!valueSnapshotsSnapshot["Type"].isNull())
			snapshotsObject.type = valueSnapshotsSnapshot["Type"].asString();
		if(!valueSnapshotsSnapshot["OssDownloadInPath"].isNull())
			snapshotsObject.ossDownloadInPath = valueSnapshotsSnapshot["OssDownloadInPath"].asString();
		if(!valueSnapshotsSnapshot["OssDownloadOutPath"].isNull())
			snapshotsObject.ossDownloadOutPath = valueSnapshotsSnapshot["OssDownloadOutPath"].asString();
		snapshots_.push_back(snapshotsObject);
	}

}

std::vector<DescribeSnapshotsResult::Snapshot> DescribeSnapshotsResult::getSnapshots()const
{
	return snapshots_;
}

