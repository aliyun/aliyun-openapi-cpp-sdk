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

#include <alibabacloud/swas-open/model/ListDisksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SWAS_OPEN;
using namespace AlibabaCloud::SWAS_OPEN::Model;

ListDisksResult::ListDisksResult() :
	ServiceResult()
{}

ListDisksResult::ListDisksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDisksResult::~ListDisksResult()
{}

void ListDisksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDisksNode = value["Disks"]["Disk"];
	for (auto valueDisksDisk : allDisksNode)
	{
		Disk disksObject;
		if(!valueDisksDisk["CreationTime"].isNull())
			disksObject.creationTime = valueDisksDisk["CreationTime"].asString();
		if(!valueDisksDisk["Status"].isNull())
			disksObject.status = valueDisksDisk["Status"].asString();
		if(!valueDisksDisk["Device"].isNull())
			disksObject.device = valueDisksDisk["Device"].asString();
		if(!valueDisksDisk["Size"].isNull())
			disksObject.size = std::stoi(valueDisksDisk["Size"].asString());
		if(!valueDisksDisk["DiskName"].isNull())
			disksObject.diskName = valueDisksDisk["DiskName"].asString();
		if(!valueDisksDisk["DiskChargeType"].isNull())
			disksObject.diskChargeType = valueDisksDisk["DiskChargeType"].asString();
		if(!valueDisksDisk["DiskType"].isNull())
			disksObject.diskType = valueDisksDisk["DiskType"].asString();
		if(!valueDisksDisk["Category"].isNull())
			disksObject.category = valueDisksDisk["Category"].asString();
		if(!valueDisksDisk["DiskId"].isNull())
			disksObject.diskId = valueDisksDisk["DiskId"].asString();
		if(!valueDisksDisk["InstanceId"].isNull())
			disksObject.instanceId = valueDisksDisk["InstanceId"].asString();
		if(!valueDisksDisk["RegionId"].isNull())
			disksObject.regionId = valueDisksDisk["RegionId"].asString();
		if(!valueDisksDisk["Remark"].isNull())
			disksObject.remark = valueDisksDisk["Remark"].asString();
		if(!valueDisksDisk["InstanceName"].isNull())
			disksObject.instanceName = valueDisksDisk["InstanceName"].asString();
		if(!valueDisksDisk["ResourceGroupId"].isNull())
			disksObject.resourceGroupId = valueDisksDisk["ResourceGroupId"].asString();
		auto allTagsNode = valueDisksDisk["Tags"]["tag"];
		for (auto valueDisksDiskTagstag : allTagsNode)
		{
			Disk::Tag tagsObject;
			if(!valueDisksDiskTagstag["Key"].isNull())
				tagsObject.key = valueDisksDiskTagstag["Key"].asString();
			if(!valueDisksDiskTagstag["Value"].isNull())
				tagsObject.value = valueDisksDiskTagstag["Value"].asString();
			disksObject.tags.push_back(tagsObject);
		}
		disks_.push_back(disksObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListDisksResult::getTotalCount()const
{
	return totalCount_;
}

int ListDisksResult::getPageSize()const
{
	return pageSize_;
}

int ListDisksResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListDisksResult::Disk> ListDisksResult::getDisks()const
{
	return disks_;
}

