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

#include <alibabacloud/vs/model/DescribePurchasedDevicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

DescribePurchasedDevicesResult::DescribePurchasedDevicesResult() :
	ServiceResult()
{}

DescribePurchasedDevicesResult::DescribePurchasedDevicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePurchasedDevicesResult::~DescribePurchasedDevicesResult()
{}

void DescribePurchasedDevicesResult::parse(const std::string &payload)
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
		if(!valueDevicesDevice["Description"].isNull())
			devicesObject.description = valueDevicesDevice["Description"].asString();
		if(!valueDevicesDevice["Type"].isNull())
			devicesObject.type = valueDevicesDevice["Type"].asString();
		if(!valueDevicesDevice["SubType"].isNull())
			devicesObject.subType = valueDevicesDevice["SubType"].asString();
		if(!valueDevicesDevice["RegisterCode"].isNull())
			devicesObject.registerCode = valueDevicesDevice["RegisterCode"].asString();
		if(!valueDevicesDevice["Vendor"].isNull())
			devicesObject.vendor = valueDevicesDevice["Vendor"].asString();
		if(!valueDevicesDevice["OrderId"].isNull())
			devicesObject.orderId = valueDevicesDevice["OrderId"].asString();
		if(!valueDevicesDevice["Region"].isNull())
			devicesObject.region = valueDevicesDevice["Region"].asString();
		if(!valueDevicesDevice["GroupId"].isNull())
			devicesObject.groupId = valueDevicesDevice["GroupId"].asString();
		if(!valueDevicesDevice["GroupName"].isNull())
			devicesObject.groupName = valueDevicesDevice["GroupName"].asString();
		if(!valueDevicesDevice["CreatedTime"].isNull())
			devicesObject.createdTime = valueDevicesDevice["CreatedTime"].asString();
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

long DescribePurchasedDevicesResult::getTotalCount()const
{
	return totalCount_;
}

long DescribePurchasedDevicesResult::getPageSize()const
{
	return pageSize_;
}

long DescribePurchasedDevicesResult::getPageNum()const
{
	return pageNum_;
}

long DescribePurchasedDevicesResult::getPageCount()const
{
	return pageCount_;
}

std::vector<DescribePurchasedDevicesResult::Device> DescribePurchasedDevicesResult::getDevices()const
{
	return devices_;
}

