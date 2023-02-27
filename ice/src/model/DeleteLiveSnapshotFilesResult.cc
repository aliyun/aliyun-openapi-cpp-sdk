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

#include <alibabacloud/ice/model/DeleteLiveSnapshotFilesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

DeleteLiveSnapshotFilesResult::DeleteLiveSnapshotFilesResult() :
	ServiceResult()
{}

DeleteLiveSnapshotFilesResult::DeleteLiveSnapshotFilesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteLiveSnapshotFilesResult::~DeleteLiveSnapshotFilesResult()
{}

void DeleteLiveSnapshotFilesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDeleteFileResultListNode = value["DeleteFileResultList"]["DeleteFileResultListItem"];
	for (auto valueDeleteFileResultListDeleteFileResultListItem : allDeleteFileResultListNode)
	{
		DeleteFileResultListItem deleteFileResultListObject;
		if(!valueDeleteFileResultListDeleteFileResultListItem["Result"].isNull())
			deleteFileResultListObject.result = valueDeleteFileResultListDeleteFileResultListItem["Result"].asString();
		if(!valueDeleteFileResultListDeleteFileResultListItem["CreateTimestamp"].isNull())
			deleteFileResultListObject.createTimestamp = std::stol(valueDeleteFileResultListDeleteFileResultListItem["CreateTimestamp"].asString());
		deleteFileResultList_.push_back(deleteFileResultListObject);
	}

}

std::vector<DeleteLiveSnapshotFilesResult::DeleteFileResultListItem> DeleteLiveSnapshotFilesResult::getDeleteFileResultList()const
{
	return deleteFileResultList_;
}

