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

#include <alibabacloud/ccc/model/RestoreArchivedRecordingsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

RestoreArchivedRecordingsResult::RestoreArchivedRecordingsResult() :
	ServiceResult()
{}

RestoreArchivedRecordingsResult::RestoreArchivedRecordingsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RestoreArchivedRecordingsResult::~RestoreArchivedRecordingsResult()
{}

void RestoreArchivedRecordingsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["RecordingRestoreDetail"];
	for (auto valueDataRecordingRestoreDetail : allDataNode)
	{
		RecordingRestoreDetail dataObject;
		if(!valueDataRecordingRestoreDetail["Exists"].isNull())
			dataObject.exists = valueDataRecordingRestoreDetail["Exists"].asString();
		if(!valueDataRecordingRestoreDetail["ContactId"].isNull())
			dataObject.contactId = valueDataRecordingRestoreDetail["ContactId"].asString();
		if(!valueDataRecordingRestoreDetail["Status"].isNull())
			dataObject.status = valueDataRecordingRestoreDetail["Status"].asString();
		if(!valueDataRecordingRestoreDetail["StorageType"].isNull())
			dataObject.storageType = valueDataRecordingRestoreDetail["StorageType"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string RestoreArchivedRecordingsResult::getMessage()const
{
	return message_;
}

int RestoreArchivedRecordingsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<RestoreArchivedRecordingsResult::RecordingRestoreDetail> RestoreArchivedRecordingsResult::getData()const
{
	return data_;
}

std::string RestoreArchivedRecordingsResult::getCode()const
{
	return code_;
}

