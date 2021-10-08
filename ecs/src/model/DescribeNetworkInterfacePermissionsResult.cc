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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNetworkInterfacePermissionsNode = value["NetworkInterfacePermissions"]["NetworkInterfacePermission"];
	for (auto valueNetworkInterfacePermissionsNetworkInterfacePermission : allNetworkInterfacePermissionsNode)
	{
		NetworkInterfacePermission networkInterfacePermissionsObject;
		if(!valueNetworkInterfacePermissionsNetworkInterfacePermission["Permission"].isNull())
			networkInterfacePermissionsObject.permission = valueNetworkInterfacePermissionsNetworkInterfacePermission["Permission"].asString();
		if(!valueNetworkInterfacePermissionsNetworkInterfacePermission["NetworkInterfaceId"].isNull())
			networkInterfacePermissionsObject.networkInterfaceId = valueNetworkInterfacePermissionsNetworkInterfacePermission["NetworkInterfaceId"].asString();
		if(!valueNetworkInterfacePermissionsNetworkInterfacePermission["AccountId"].isNull())
			networkInterfacePermissionsObject.accountId = std::stol(valueNetworkInterfacePermissionsNetworkInterfacePermission["AccountId"].asString());
		if(!valueNetworkInterfacePermissionsNetworkInterfacePermission["NetworkInterfacePermissionId"].isNull())
			networkInterfacePermissionsObject.networkInterfacePermissionId = valueNetworkInterfacePermissionsNetworkInterfacePermission["NetworkInterfacePermissionId"].asString();
		if(!valueNetworkInterfacePermissionsNetworkInterfacePermission["ServiceName"].isNull())
			networkInterfacePermissionsObject.serviceName = valueNetworkInterfacePermissionsNetworkInterfacePermission["ServiceName"].asString();
		if(!valueNetworkInterfacePermissionsNetworkInterfacePermission["PermissionState"].isNull())
			networkInterfacePermissionsObject.permissionState = valueNetworkInterfacePermissionsNetworkInterfacePermission["PermissionState"].asString();
		networkInterfacePermissions_.push_back(networkInterfacePermissionsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

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

