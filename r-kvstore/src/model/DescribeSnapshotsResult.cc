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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allSnapshots = value["Snapshots"]["Snapshot"];
	for (auto value : allSnapshots)
	{
		Snapshot snapshotsObject;
		if(!value["SnapshotId"].isNull())
			snapshotsObject.snapshotId = value["SnapshotId"].asString();
		if(!value["SnapshotName"].isNull())
			snapshotsObject.snapshotName = value["SnapshotName"].asString();
		if(!value["InstanceId"].isNull())
			snapshotsObject.instanceId = value["InstanceId"].asString();
		if(!value["CreateTime"].isNull())
			snapshotsObject.createTime = value["CreateTime"].asString();
		if(!value["Memory"].isNull())
			snapshotsObject.memory = std::stol(value["Memory"].asString());
		if(!value["RdbSize"].isNull())
			snapshotsObject.rdbSize = std::stol(value["RdbSize"].asString());
		if(!value["Status"].isNull())
			snapshotsObject.status = value["Status"].asString();
		if(!value["Type"].isNull())
			snapshotsObject.type = value["Type"].asString();
		if(!value["OssDownloadInPath"].isNull())
			snapshotsObject.ossDownloadInPath = value["OssDownloadInPath"].asString();
		if(!value["OssDownloadOutPath"].isNull())
			snapshotsObject.ossDownloadOutPath = value["OssDownloadOutPath"].asString();
		snapshots_.push_back(snapshotsObject);
	}

}

std::vector<DescribeSnapshotsResult::Snapshot> DescribeSnapshotsResult::getSnapshots()const
{
	return snapshots_;
}

