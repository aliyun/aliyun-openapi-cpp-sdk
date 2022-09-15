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

#include <alibabacloud/live/model/DeleteLiveStreamRecordIndexFilesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DeleteLiveStreamRecordIndexFilesResult::DeleteLiveStreamRecordIndexFilesResult() :
	ServiceResult()
{}

DeleteLiveStreamRecordIndexFilesResult::DeleteLiveStreamRecordIndexFilesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteLiveStreamRecordIndexFilesResult::~DeleteLiveStreamRecordIndexFilesResult()
{}

void DeleteLiveStreamRecordIndexFilesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRecordDeleteInfoListNode = value["RecordDeleteInfoList"]["RecordDeleteInfo"];
	for (auto valueRecordDeleteInfoListRecordDeleteInfo : allRecordDeleteInfoListNode)
	{
		RecordDeleteInfo recordDeleteInfoListObject;
		if(!valueRecordDeleteInfoListRecordDeleteInfo["Message"].isNull())
			recordDeleteInfoListObject.message = valueRecordDeleteInfoListRecordDeleteInfo["Message"].asString();
		if(!valueRecordDeleteInfoListRecordDeleteInfo["RecordId"].isNull())
			recordDeleteInfoListObject.recordId = valueRecordDeleteInfoListRecordDeleteInfo["RecordId"].asString();
		recordDeleteInfoList_.push_back(recordDeleteInfoListObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::vector<DeleteLiveStreamRecordIndexFilesResult::RecordDeleteInfo> DeleteLiveStreamRecordIndexFilesResult::getRecordDeleteInfoList()const
{
	return recordDeleteInfoList_;
}

std::string DeleteLiveStreamRecordIndexFilesResult::getMessage()const
{
	return message_;
}

std::string DeleteLiveStreamRecordIndexFilesResult::getCode()const
{
	return code_;
}

