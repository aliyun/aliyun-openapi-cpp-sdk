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

#include <alibabacloud/retailcloud/model/ListPersistentVolumeClaimResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

ListPersistentVolumeClaimResult::ListPersistentVolumeClaimResult() :
	ServiceResult()
{}

ListPersistentVolumeClaimResult::ListPersistentVolumeClaimResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPersistentVolumeClaimResult::~ListPersistentVolumeClaimResult()
{}

void ListPersistentVolumeClaimResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["PersistentVolumeClaimDetail"];
	for (auto valueDataPersistentVolumeClaimDetail : allDataNode)
	{
		PersistentVolumeClaimDetail dataObject;
		if(!valueDataPersistentVolumeClaimDetail["Name"].isNull())
			dataObject.name = valueDataPersistentVolumeClaimDetail["Name"].asString();
		if(!valueDataPersistentVolumeClaimDetail["Capacity"].isNull())
			dataObject.capacity = valueDataPersistentVolumeClaimDetail["Capacity"].asString();
		if(!valueDataPersistentVolumeClaimDetail["AccessModes"].isNull())
			dataObject.accessModes = valueDataPersistentVolumeClaimDetail["AccessModes"].asString();
		if(!valueDataPersistentVolumeClaimDetail["Status"].isNull())
			dataObject.status = valueDataPersistentVolumeClaimDetail["Status"].asString();
		if(!valueDataPersistentVolumeClaimDetail["StorageClass"].isNull())
			dataObject.storageClass = valueDataPersistentVolumeClaimDetail["StorageClass"].asString();
		if(!valueDataPersistentVolumeClaimDetail["VolumeName"].isNull())
			dataObject.volumeName = valueDataPersistentVolumeClaimDetail["VolumeName"].asString();
		if(!valueDataPersistentVolumeClaimDetail["CreateTime"].isNull())
			dataObject.createTime = valueDataPersistentVolumeClaimDetail["CreateTime"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();

}

long ListPersistentVolumeClaimResult::getTotalCount()const
{
	return totalCount_;
}

int ListPersistentVolumeClaimResult::getPageSize()const
{
	return pageSize_;
}

int ListPersistentVolumeClaimResult::getPageNumber()const
{
	return pageNumber_;
}

std::string ListPersistentVolumeClaimResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<ListPersistentVolumeClaimResult::PersistentVolumeClaimDetail> ListPersistentVolumeClaimResult::getData()const
{
	return data_;
}

int ListPersistentVolumeClaimResult::getCode()const
{
	return code_;
}

