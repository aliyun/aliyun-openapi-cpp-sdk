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

#include <alibabacloud/ens/model/DescribeDiskIopsListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeDiskIopsListResult::DescribeDiskIopsListResult() :
	ServiceResult()
{}

DescribeDiskIopsListResult::DescribeDiskIopsListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDiskIopsListResult::~DescribeDiskIopsListResult()
{}

void DescribeDiskIopsListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDiskIopsListNode = value["DiskIopsList"]["DiskIops"];
	for (auto valueDiskIopsListDiskIops : allDiskIopsListNode)
	{
		DiskIops diskIopsListObject;
		if(!valueDiskIopsListDiskIops["DiskId"].isNull())
			diskIopsListObject.diskId = valueDiskIopsListDiskIops["DiskId"].asString();
		if(!valueDiskIopsListDiskIops["RegionId"].isNull())
			diskIopsListObject.regionId = valueDiskIopsListDiskIops["RegionId"].asString();
		if(!valueDiskIopsListDiskIops["ReadBytes"].isNull())
			diskIopsListObject.readBytes = std::stol(valueDiskIopsListDiskIops["ReadBytes"].asString());
		if(!valueDiskIopsListDiskIops["ReadLatency"].isNull())
			diskIopsListObject.readLatency = std::stol(valueDiskIopsListDiskIops["ReadLatency"].asString());
		if(!valueDiskIopsListDiskIops["ReadOps"].isNull())
			diskIopsListObject.readOps = std::stol(valueDiskIopsListDiskIops["ReadOps"].asString());
		if(!valueDiskIopsListDiskIops["WriteBytes"].isNull())
			diskIopsListObject.writeBytes = std::stol(valueDiskIopsListDiskIops["WriteBytes"].asString());
		if(!valueDiskIopsListDiskIops["WriteLatency"].isNull())
			diskIopsListObject.writeLatency = std::stol(valueDiskIopsListDiskIops["WriteLatency"].asString());
		if(!valueDiskIopsListDiskIops["WriteOps"].isNull())
			diskIopsListObject.writeOps = std::stol(valueDiskIopsListDiskIops["WriteOps"].asString());
		if(!valueDiskIopsListDiskIops["BizTime"].isNull())
			diskIopsListObject.bizTime = valueDiskIopsListDiskIops["BizTime"].asString();
		diskIopsList_.push_back(diskIopsListObject);
	}

}

std::vector<DescribeDiskIopsListResult::DiskIops> DescribeDiskIopsListResult::getDiskIopsList()const
{
	return diskIopsList_;
}

