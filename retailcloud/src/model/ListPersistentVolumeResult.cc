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

#include <alibabacloud/retailcloud/model/ListPersistentVolumeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

ListPersistentVolumeResult::ListPersistentVolumeResult() :
	ServiceResult()
{}

ListPersistentVolumeResult::ListPersistentVolumeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPersistentVolumeResult::~ListPersistentVolumeResult()
{}

void ListPersistentVolumeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["PersistentVolumeDetail"];
	for (auto valueDataPersistentVolumeDetail : allDataNode)
	{
		PersistentVolumeDetail dataObject;
		if(!valueDataPersistentVolumeDetail["Name"].isNull())
			dataObject.name = valueDataPersistentVolumeDetail["Name"].asString();
		if(!valueDataPersistentVolumeDetail["Capacity"].isNull())
			dataObject.capacity = valueDataPersistentVolumeDetail["Capacity"].asString();
		if(!valueDataPersistentVolumeDetail["AccessModes"].isNull())
			dataObject.accessModes = valueDataPersistentVolumeDetail["AccessModes"].asString();
		if(!valueDataPersistentVolumeDetail["ReclaimPolicy"].isNull())
			dataObject.reclaimPolicy = valueDataPersistentVolumeDetail["ReclaimPolicy"].asString();
		if(!valueDataPersistentVolumeDetail["Status"].isNull())
			dataObject.status = valueDataPersistentVolumeDetail["Status"].asString();
		if(!valueDataPersistentVolumeDetail["PvcName"].isNull())
			dataObject.pvcName = valueDataPersistentVolumeDetail["PvcName"].asString();
		if(!valueDataPersistentVolumeDetail["MountDir"].isNull())
			dataObject.mountDir = valueDataPersistentVolumeDetail["MountDir"].asString();
		if(!valueDataPersistentVolumeDetail["StorageClass"].isNull())
			dataObject.storageClass = valueDataPersistentVolumeDetail["StorageClass"].asString();
		if(!valueDataPersistentVolumeDetail["Reason"].isNull())
			dataObject.reason = valueDataPersistentVolumeDetail["Reason"].asString();
		if(!valueDataPersistentVolumeDetail["CreateTime"].isNull())
			dataObject.createTime = valueDataPersistentVolumeDetail["CreateTime"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["ErrMsg"].isNull())
		errMsg_ = value["ErrMsg"].asString();

}

long ListPersistentVolumeResult::getTotalCount()const
{
	return totalCount_;
}

int ListPersistentVolumeResult::getPageSize()const
{
	return pageSize_;
}

int ListPersistentVolumeResult::getPageNumber()const
{
	return pageNumber_;
}

std::string ListPersistentVolumeResult::getErrMsg()const
{
	return errMsg_;
}

std::vector<ListPersistentVolumeResult::PersistentVolumeDetail> ListPersistentVolumeResult::getData()const
{
	return data_;
}

int ListPersistentVolumeResult::getCode()const
{
	return code_;
}

