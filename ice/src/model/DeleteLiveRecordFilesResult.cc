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

#include <alibabacloud/ice/model/DeleteLiveRecordFilesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

DeleteLiveRecordFilesResult::DeleteLiveRecordFilesResult() :
	ServiceResult()
{}

DeleteLiveRecordFilesResult::DeleteLiveRecordFilesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteLiveRecordFilesResult::~DeleteLiveRecordFilesResult()
{}

void DeleteLiveRecordFilesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDeleteFileInfoListNode = value["DeleteFileInfoList"]["DeleteFileInfo"];
	for (auto valueDeleteFileInfoListDeleteFileInfo : allDeleteFileInfoListNode)
	{
		DeleteFileInfo deleteFileInfoListObject;
		if(!valueDeleteFileInfoListDeleteFileInfo["Code"].isNull())
			deleteFileInfoListObject.code = valueDeleteFileInfoListDeleteFileInfo["Code"].asString();
		if(!valueDeleteFileInfoListDeleteFileInfo["Message"].isNull())
			deleteFileInfoListObject.message = valueDeleteFileInfoListDeleteFileInfo["Message"].asString();
		if(!valueDeleteFileInfoListDeleteFileInfo["RecordId"].isNull())
			deleteFileInfoListObject.recordId = valueDeleteFileInfoListDeleteFileInfo["RecordId"].asString();
		deleteFileInfoList_.push_back(deleteFileInfoListObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DeleteLiveRecordFilesResult::getMessage()const
{
	return message_;
}

std::vector<DeleteLiveRecordFilesResult::DeleteFileInfo> DeleteLiveRecordFilesResult::getDeleteFileInfoList()const
{
	return deleteFileInfoList_;
}

