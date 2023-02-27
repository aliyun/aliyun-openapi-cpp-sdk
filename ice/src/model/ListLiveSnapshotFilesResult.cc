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

#include <alibabacloud/ice/model/ListLiveSnapshotFilesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

ListLiveSnapshotFilesResult::ListLiveSnapshotFilesResult() :
	ServiceResult()
{}

ListLiveSnapshotFilesResult::ListLiveSnapshotFilesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLiveSnapshotFilesResult::~ListLiveSnapshotFilesResult()
{}

void ListLiveSnapshotFilesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFileListNode = value["FileList"]["Snapshot"];
	for (auto valueFileListSnapshot : allFileListNode)
	{
		Snapshot fileListObject;
		if(!valueFileListSnapshot["OssEndpoint"].isNull())
			fileListObject.ossEndpoint = valueFileListSnapshot["OssEndpoint"].asString();
		if(!valueFileListSnapshot["OssBucket"].isNull())
			fileListObject.ossBucket = valueFileListSnapshot["OssBucket"].asString();
		if(!valueFileListSnapshot["OssObject"].isNull())
			fileListObject.ossObject = valueFileListSnapshot["OssObject"].asString();
		if(!valueFileListSnapshot["CreateTime"].isNull())
			fileListObject.createTime = valueFileListSnapshot["CreateTime"].asString();
		if(!valueFileListSnapshot["CreateTimestamp"].isNull())
			fileListObject.createTimestamp = std::stol(valueFileListSnapshot["CreateTimestamp"].asString());
		if(!valueFileListSnapshot["IsOverlay"].isNull())
			fileListObject.isOverlay = valueFileListSnapshot["IsOverlay"].asString() == "true";
		fileList_.push_back(fileListObject);
	}
	if(!value["NextStartTime"].isNull())
		nextStartTime_ = value["NextStartTime"].asString();

}

std::vector<ListLiveSnapshotFilesResult::Snapshot> ListLiveSnapshotFilesResult::getFileList()const
{
	return fileList_;
}

std::string ListLiveSnapshotFilesResult::getNextStartTime()const
{
	return nextStartTime_;
}

