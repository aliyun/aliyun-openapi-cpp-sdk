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

#include <alibabacloud/datalake/model/DeregisterLocationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DataLake;
using namespace AlibabaCloud::DataLake::Model;

DeregisterLocationResult::DeregisterLocationResult() :
	ServiceResult()
{}

DeregisterLocationResult::DeregisterLocationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeregisterLocationResult::~DeregisterLocationResult()
{}

void DeregisterLocationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["LocationId"].isNull())
		data_.locationId = dataNode["LocationId"].asString();
	auto allStorageCollectTaskOperationResultListNode = dataNode["StorageCollectTaskOperationResultList"]["StorageCollectTaskOperationResultListItem"];
	for (auto dataNodeStorageCollectTaskOperationResultListStorageCollectTaskOperationResultListItem : allStorageCollectTaskOperationResultListNode)
	{
		Data::StorageCollectTaskOperationResultListItem storageCollectTaskOperationResultListItemObject;
		if(!dataNodeStorageCollectTaskOperationResultListStorageCollectTaskOperationResultListItem["Success"].isNull())
			storageCollectTaskOperationResultListItemObject.success = dataNodeStorageCollectTaskOperationResultListStorageCollectTaskOperationResultListItem["Success"].asString() == "true";
		if(!dataNodeStorageCollectTaskOperationResultListStorageCollectTaskOperationResultListItem["TaskId"].isNull())
			storageCollectTaskOperationResultListItemObject.taskId = dataNodeStorageCollectTaskOperationResultListStorageCollectTaskOperationResultListItem["TaskId"].asString();
		if(!dataNodeStorageCollectTaskOperationResultListStorageCollectTaskOperationResultListItem["TaskType"].isNull())
			storageCollectTaskOperationResultListItemObject.taskType = dataNodeStorageCollectTaskOperationResultListStorageCollectTaskOperationResultListItem["TaskType"].asString();
		if(!dataNodeStorageCollectTaskOperationResultListStorageCollectTaskOperationResultListItem["DlfCreated"].isNull())
			storageCollectTaskOperationResultListItemObject.dlfCreated = dataNodeStorageCollectTaskOperationResultListStorageCollectTaskOperationResultListItem["DlfCreated"].asString() == "true";
		if(!dataNodeStorageCollectTaskOperationResultListStorageCollectTaskOperationResultListItem["ErrCode"].isNull())
			storageCollectTaskOperationResultListItemObject.errCode = dataNodeStorageCollectTaskOperationResultListStorageCollectTaskOperationResultListItem["ErrCode"].asString();
		if(!dataNodeStorageCollectTaskOperationResultListStorageCollectTaskOperationResultListItem["ErrMessage"].isNull())
			storageCollectTaskOperationResultListItemObject.errMessage = dataNodeStorageCollectTaskOperationResultListStorageCollectTaskOperationResultListItem["ErrMessage"].asString();
		data_.storageCollectTaskOperationResultList.push_back(storageCollectTaskOperationResultListItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

DeregisterLocationResult::Data DeregisterLocationResult::getData()const
{
	return data_;
}

bool DeregisterLocationResult::getSuccess()const
{
	return success_;
}

