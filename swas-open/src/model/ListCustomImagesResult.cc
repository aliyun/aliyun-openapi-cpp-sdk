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

#include <alibabacloud/swas-open/model/ListCustomImagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SWAS_OPEN;
using namespace AlibabaCloud::SWAS_OPEN::Model;

ListCustomImagesResult::ListCustomImagesResult() :
	ServiceResult()
{}

ListCustomImagesResult::ListCustomImagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCustomImagesResult::~ListCustomImagesResult()
{}

void ListCustomImagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCustomImagesNode = value["CustomImages"]["CustomImage"];
	for (auto valueCustomImagesCustomImage : allCustomImagesNode)
	{
		CustomImage customImagesObject;
		if(!valueCustomImagesCustomImage["CreationTime"].isNull())
			customImagesObject.creationTime = valueCustomImagesCustomImage["CreationTime"].asString();
		if(!valueCustomImagesCustomImage["DataSnapshotName"].isNull())
			customImagesObject.dataSnapshotName = valueCustomImagesCustomImage["DataSnapshotName"].asString();
		if(!valueCustomImagesCustomImage["SystemSnapshotId"].isNull())
			customImagesObject.systemSnapshotId = valueCustomImagesCustomImage["SystemSnapshotId"].asString();
		if(!valueCustomImagesCustomImage["InShare"].isNull())
			customImagesObject.inShare = valueCustomImagesCustomImage["InShare"].asString() == "true";
		if(!valueCustomImagesCustomImage["InstanceId"].isNull())
			customImagesObject.instanceId = valueCustomImagesCustomImage["InstanceId"].asString();
		if(!valueCustomImagesCustomImage["DataSnapshotId"].isNull())
			customImagesObject.dataSnapshotId = valueCustomImagesCustomImage["DataSnapshotId"].asString();
		if(!valueCustomImagesCustomImage["RegionId"].isNull())
			customImagesObject.regionId = valueCustomImagesCustomImage["RegionId"].asString();
		if(!valueCustomImagesCustomImage["SystemSnapshotName"].isNull())
			customImagesObject.systemSnapshotName = valueCustomImagesCustomImage["SystemSnapshotName"].asString();
		if(!valueCustomImagesCustomImage["Description"].isNull())
			customImagesObject.description = valueCustomImagesCustomImage["Description"].asString();
		if(!valueCustomImagesCustomImage["Name"].isNull())
			customImagesObject.name = valueCustomImagesCustomImage["Name"].asString();
		if(!valueCustomImagesCustomImage["ImageId"].isNull())
			customImagesObject.imageId = valueCustomImagesCustomImage["ImageId"].asString();
		if(!valueCustomImagesCustomImage["Status"].isNull())
			customImagesObject.status = valueCustomImagesCustomImage["Status"].asString();
		if(!valueCustomImagesCustomImage["InstanceName"].isNull())
			customImagesObject.instanceName = valueCustomImagesCustomImage["InstanceName"].asString();
		customImages_.push_back(customImagesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();

}

std::string ListCustomImagesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListCustomImagesResult::CustomImage> ListCustomImagesResult::getCustomImages()const
{
	return customImages_;
}

std::string ListCustomImagesResult::getPageSize()const
{
	return pageSize_;
}

std::string ListCustomImagesResult::getPageNumber()const
{
	return pageNumber_;
}

