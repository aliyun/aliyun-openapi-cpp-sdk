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

#include <alibabacloud/vs/model/DescribeParentPlatformDevicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

DescribeParentPlatformDevicesResult::DescribeParentPlatformDevicesResult() :
	ServiceResult()
{}

DescribeParentPlatformDevicesResult::DescribeParentPlatformDevicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeParentPlatformDevicesResult::~DescribeParentPlatformDevicesResult()
{}

void DescribeParentPlatformDevicesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDevicesNode = value["Devices"]["Device"];
	for (auto valueDevicesDevice : allDevicesNode)
	{
		Device devicesObject;
		if(!valueDevicesDevice["Id"].isNull())
			devicesObject.id = valueDevicesDevice["Id"].asString();
		if(!valueDevicesDevice["Name"].isNull())
			devicesObject.name = valueDevicesDevice["Name"].asString();
		if(!valueDevicesDevice["GbId"].isNull())
			devicesObject.gbId = valueDevicesDevice["GbId"].asString();
		if(!valueDevicesDevice["GroupId"].isNull())
			devicesObject.groupId = valueDevicesDevice["GroupId"].asString();
		if(!valueDevicesDevice["ParentId"].isNull())
			devicesObject.parentId = valueDevicesDevice["ParentId"].asString();
		devices_.push_back(devicesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNum"].isNull())
		pageNum_ = std::stol(value["PageNum"].asString());
	if(!value["PageCount"].isNull())
		pageCount_ = std::stol(value["PageCount"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long DescribeParentPlatformDevicesResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeParentPlatformDevicesResult::getPageSize()const
{
	return pageSize_;
}

long DescribeParentPlatformDevicesResult::getPageNum()const
{
	return pageNum_;
}

long DescribeParentPlatformDevicesResult::getPageCount()const
{
	return pageCount_;
}

std::vector<DescribeParentPlatformDevicesResult::Device> DescribeParentPlatformDevicesResult::getDevices()const
{
	return devices_;
}

