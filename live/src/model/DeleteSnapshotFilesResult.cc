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

#include <alibabacloud/live/model/DeleteSnapshotFilesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DeleteSnapshotFilesResult::DeleteSnapshotFilesResult() :
	ServiceResult()
{}

DeleteSnapshotFilesResult::DeleteSnapshotFilesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteSnapshotFilesResult::~DeleteSnapshotFilesResult()
{}

void DeleteSnapshotFilesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSnapshotDeleteInfoListNode = value["SnapshotDeleteInfoList"]["SnapshotDeleteInfo"];
	for (auto valueSnapshotDeleteInfoListSnapshotDeleteInfo : allSnapshotDeleteInfoListNode)
	{
		SnapshotDeleteInfo snapshotDeleteInfoListObject;
		if(!valueSnapshotDeleteInfoListSnapshotDeleteInfo["CreateTimestamp"].isNull())
			snapshotDeleteInfoListObject.createTimestamp = std::stol(valueSnapshotDeleteInfoListSnapshotDeleteInfo["CreateTimestamp"].asString());
		if(!valueSnapshotDeleteInfoListSnapshotDeleteInfo["Message"].isNull())
			snapshotDeleteInfoListObject.message = valueSnapshotDeleteInfoListSnapshotDeleteInfo["Message"].asString();
		snapshotDeleteInfoList_.push_back(snapshotDeleteInfoListObject);
	}
	if(!value["FailureCount"].isNull())
		failureCount_ = std::stoi(value["FailureCount"].asString());
	if(!value["SuccessCount"].isNull())
		successCount_ = std::stoi(value["SuccessCount"].asString());

}

std::vector<DeleteSnapshotFilesResult::SnapshotDeleteInfo> DeleteSnapshotFilesResult::getSnapshotDeleteInfoList()const
{
	return snapshotDeleteInfoList_;
}

int DeleteSnapshotFilesResult::getFailureCount()const
{
	return failureCount_;
}

int DeleteSnapshotFilesResult::getSuccessCount()const
{
	return successCount_;
}

