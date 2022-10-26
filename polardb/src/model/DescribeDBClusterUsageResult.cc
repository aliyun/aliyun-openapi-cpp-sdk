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

#include <alibabacloud/polardb/model/DescribeDBClusterUsageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeDBClusterUsageResult::DescribeDBClusterUsageResult() :
	ServiceResult()
{}

DescribeDBClusterUsageResult::DescribeDBClusterUsageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClusterUsageResult::~DescribeDBClusterUsageResult()
{}

void DescribeDBClusterUsageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["DataLevel1BackupChainSize"].isNull())
		dataLevel1BackupChainSize_ = std::stol(value["DataLevel1BackupChainSize"].asString());
	if(!value["StorageUsed"].isNull())
		storageUsed_ = std::stol(value["StorageUsed"].asString());
	if(!value["SQLSize"].isNull())
		sQLSize_ = std::stol(value["SQLSize"].asString());
	if(!value["InodeTotal"].isNull())
		inodeTotal_ = std::stol(value["InodeTotal"].asString());
	if(!value["InodeUsed"].isNull())
		inodeUsed_ = std::stol(value["InodeUsed"].asString());
	if(!value["BlktagTotal"].isNull())
		blktagTotal_ = std::stol(value["BlktagTotal"].asString());
	if(!value["BlktagUsed"].isNull())
		blktagUsed_ = std::stol(value["BlktagUsed"].asString());

}

long DescribeDBClusterUsageResult::getBlktagTotal()const
{
	return blktagTotal_;
}

long DescribeDBClusterUsageResult::getDataLevel1BackupChainSize()const
{
	return dataLevel1BackupChainSize_;
}

long DescribeDBClusterUsageResult::getSQLSize()const
{
	return sQLSize_;
}

long DescribeDBClusterUsageResult::getInodeUsed()const
{
	return inodeUsed_;
}

long DescribeDBClusterUsageResult::getStorageUsed()const
{
	return storageUsed_;
}

long DescribeDBClusterUsageResult::getInodeTotal()const
{
	return inodeTotal_;
}

long DescribeDBClusterUsageResult::getBlktagUsed()const
{
	return blktagUsed_;
}

