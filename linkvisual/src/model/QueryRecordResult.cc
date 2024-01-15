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

#include <alibabacloud/linkvisual/model/QueryRecordResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

QueryRecordResult::QueryRecordResult() :
	ServiceResult()
{}

QueryRecordResult::QueryRecordResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryRecordResult::~QueryRecordResult()
{}

void QueryRecordResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Page"].isNull())
		data_.page = std::stoi(dataNode["Page"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	auto allListNode = dataNode["List"]["ListItem"];
	for (auto dataNodeListListItem : allListNode)
	{
		Data::ListItem listItemObject;
		if(!dataNodeListListItem["SnapshotUrl"].isNull())
			listItemObject.snapshotUrl = dataNodeListListItem["SnapshotUrl"].asString();
		if(!dataNodeListListItem["EndTime"].isNull())
			listItemObject.endTime = dataNodeListListItem["EndTime"].asString();
		if(!dataNodeListListItem["EventType"].isNull())
			listItemObject.eventType = std::stoi(dataNodeListListItem["EventType"].asString());
		if(!dataNodeListListItem["RecordType"].isNull())
			listItemObject.recordType = std::stoi(dataNodeListListItem["RecordType"].asString());
		if(!dataNodeListListItem["StreamType"].isNull())
			listItemObject.streamType = std::stoi(dataNodeListListItem["StreamType"].asString());
		if(!dataNodeListListItem["BeginTime"].isNull())
			listItemObject.beginTime = dataNodeListListItem["BeginTime"].asString();
		if(!dataNodeListListItem["FileName"].isNull())
			listItemObject.fileName = dataNodeListListItem["FileName"].asString();
		if(!dataNodeListListItem["VideoFrameNumber"].isNull())
			listItemObject.videoFrameNumber = std::stoi(dataNodeListListItem["VideoFrameNumber"].asString());
		if(!dataNodeListListItem["FileSize"].isNull())
			listItemObject.fileSize = std::stoi(dataNodeListListItem["FileSize"].asString());
		data_.list.push_back(listItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

QueryRecordResult::Data QueryRecordResult::getData()const
{
	return data_;
}

std::string QueryRecordResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryRecordResult::getCode()const
{
	return code_;
}

bool QueryRecordResult::getSuccess()const
{
	return success_;
}

