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

#include <alibabacloud/ens/model/DescribeDisksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeDisksResult::DescribeDisksResult() :
	ServiceResult()
{}

DescribeDisksResult::DescribeDisksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDisksResult::~DescribeDisksResult()
{}

void DescribeDisksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDisksNode = value["Disks"]["DisksItem"];
	for (auto valueDisksDisksItem : allDisksNode)
	{
		DisksItem disksObject;
		if(!valueDisksDisksItem["Category"].isNull())
			disksObject.category = valueDisksDisksItem["Category"].asString();
		if(!valueDisksDisksItem["CreationTime"].isNull())
			disksObject.creationTime = valueDisksDisksItem["CreationTime"].asString();
		if(!valueDisksDisksItem["DiskChargeType"].isNull())
			disksObject.diskChargeType = valueDisksDisksItem["DiskChargeType"].asString();
		if(!valueDisksDisksItem["DiskId"].isNull())
			disksObject.diskId = valueDisksDisksItem["DiskId"].asString();
		if(!valueDisksDisksItem["DiskName"].isNull())
			disksObject.diskName = valueDisksDisksItem["DiskName"].asString();
		if(!valueDisksDisksItem["EnsRegionId"].isNull())
			disksObject.ensRegionId = valueDisksDisksItem["EnsRegionId"].asString();
		if(!valueDisksDisksItem["InstanceId"].isNull())
			disksObject.instanceId = valueDisksDisksItem["InstanceId"].asString();
		if(!valueDisksDisksItem["InstanceName"].isNull())
			disksObject.instanceName = valueDisksDisksItem["InstanceName"].asString();
		if(!valueDisksDisksItem["Description"].isNull())
			disksObject.description = valueDisksDisksItem["Description"].asString();
		if(!valueDisksDisksItem["Size"].isNull())
			disksObject.size = std::stoi(valueDisksDisksItem["Size"].asString());
		if(!valueDisksDisksItem["Status"].isNull())
			disksObject.status = valueDisksDisksItem["Status"].asString();
		if(!valueDisksDisksItem["Type"].isNull())
			disksObject.type = valueDisksDisksItem["Type"].asString();
		if(!valueDisksDisksItem["Portable"].isNull())
			disksObject.portable = valueDisksDisksItem["Portable"].asString() == "true";
		if(!valueDisksDisksItem["SnapshotId"].isNull())
			disksObject.snapshotId = valueDisksDisksItem["SnapshotId"].asString();
		if(!valueDisksDisksItem["SerialId"].isNull())
			disksObject.serialId = valueDisksDisksItem["SerialId"].asString();
		if(!valueDisksDisksItem["Encrypted"].isNull())
			disksObject.encrypted = valueDisksDisksItem["Encrypted"].asString() == "true";
		if(!valueDisksDisksItem["EncryptedKeyId"].isNull())
			disksObject.encryptedKeyId = valueDisksDisksItem["EncryptedKeyId"].asString();
		if(!valueDisksDisksItem["DeleteWithInstance"].isNull())
			disksObject.deleteWithInstance = valueDisksDisksItem["DeleteWithInstance"].asString() == "true";
		disks_.push_back(disksObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDisksResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDisksResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDisksResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDisksResult::DisksItem> DescribeDisksResult::getDisks()const
{
	return disks_;
}

int DescribeDisksResult::getCode()const
{
	return code_;
}

