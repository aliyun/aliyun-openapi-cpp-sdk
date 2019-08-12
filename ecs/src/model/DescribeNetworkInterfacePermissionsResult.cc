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

#include <alibabacloud/ecs/model/DescribeNetworkInterfacePermissionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeNetworkInterfacePermissionsResult::DescribeNetworkInterfacePermissionsResult() :
	ServiceResult()
{}

DescribeNetworkInterfacePermissionsResult::DescribeNetworkInterfacePermissionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNetworkInterfacePermissionsResult::~DescribeNetworkInterfacePermissionsResult()
{}

void DescribeNetworkInterfacePermissionsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allNetworkInterfacePermissions = value["NetworkInterfacePermissions"]["NetworkInterfacePermission"];
	for (auto value : allNetworkInterfacePermissions)
	{
		NetworkInterfacePermission networkInterfacePermissionsObject;
		if(!value["AccountId"].isNull())
			networkInterfacePermissionsObject.accountId = std::stol(value["AccountId"].asString());
		if(!value["ServiceName"].isNull())
			networkInterfacePermissionsObject.serviceName = value["ServiceName"].asString();
		if(!value["NetworkInterfaceId"].isNull())
			networkInterfacePermissionsObject.networkInterfaceId = value["NetworkInterfaceId"].asString();
		if(!value["NetworkInterfacePermissionId"].isNull())
			networkInterfacePermissionsObject.networkInterfacePermissionId = value["NetworkInterfacePermissionId"].asString();
		if(!value["Permission"].isNull())
			networkInterfacePermissionsObject.permission = value["Permission"].asString();
		if(!value["PermissionState"].isNull())
			networkInterfacePermissionsObject.permissionState = value["PermissionState"].asString();
		networkInterfacePermissions_.push_back(networkInterfacePermissionsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeNetworkInterfacePermissionsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeNetworkInterfacePermissionsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeNetworkInterfacePermissionsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeNetworkInterfacePermissionsResult::NetworkInterfacePermission> DescribeNetworkInterfacePermissionsResult::getNetworkInterfacePermissions()const
{
	return networkInterfacePermissions_;
}

