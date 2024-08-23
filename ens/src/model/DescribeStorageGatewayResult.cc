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

#include <alibabacloud/ens/model/DescribeStorageGatewayResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeStorageGatewayResult::DescribeStorageGatewayResult() :
	ServiceResult()
{}

DescribeStorageGatewayResult::DescribeStorageGatewayResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeStorageGatewayResult::~DescribeStorageGatewayResult()
{}

void DescribeStorageGatewayResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStorageGatewaysNode = value["StorageGateways"]["StorageGatewaysItem"];
	for (auto valueStorageGatewaysStorageGatewaysItem : allStorageGatewaysNode)
	{
		StorageGatewaysItem storageGatewaysObject;
		if(!valueStorageGatewaysStorageGatewaysItem["EnsRegionId"].isNull())
			storageGatewaysObject.ensRegionId = valueStorageGatewaysStorageGatewaysItem["EnsRegionId"].asString();
		if(!valueStorageGatewaysStorageGatewaysItem["StorageGatewayId"].isNull())
			storageGatewaysObject.storageGatewayId = valueStorageGatewaysStorageGatewaysItem["StorageGatewayId"].asString();
		if(!valueStorageGatewaysStorageGatewaysItem["StorageGatewayName"].isNull())
			storageGatewaysObject.storageGatewayName = valueStorageGatewaysStorageGatewaysItem["StorageGatewayName"].asString();
		if(!valueStorageGatewaysStorageGatewaysItem["StorageGatewayType"].isNull())
			storageGatewaysObject.storageGatewayType = std::stoi(valueStorageGatewaysStorageGatewaysItem["StorageGatewayType"].asString());
		if(!valueStorageGatewaysStorageGatewaysItem["ServiceIp"].isNull())
			storageGatewaysObject.serviceIp = valueStorageGatewaysStorageGatewaysItem["ServiceIp"].asString();
		if(!valueStorageGatewaysStorageGatewaysItem["CreationTime"].isNull())
			storageGatewaysObject.creationTime = valueStorageGatewaysStorageGatewaysItem["CreationTime"].asString();
		if(!valueStorageGatewaysStorageGatewaysItem["Status"].isNull())
			storageGatewaysObject.status = valueStorageGatewaysStorageGatewaysItem["Status"].asString();
		if(!valueStorageGatewaysStorageGatewaysItem["Description"].isNull())
			storageGatewaysObject.description = valueStorageGatewaysStorageGatewaysItem["Description"].asString();
		if(!valueStorageGatewaysStorageGatewaysItem["VpcId"].isNull())
			storageGatewaysObject.vpcId = valueStorageGatewaysStorageGatewaysItem["VpcId"].asString();
		if(!valueStorageGatewaysStorageGatewaysItem["CidrBlock"].isNull())
			storageGatewaysObject.cidrBlock = valueStorageGatewaysStorageGatewaysItem["CidrBlock"].asString();
		storageGateways_.push_back(storageGatewaysObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeStorageGatewayResult::StorageGatewaysItem> DescribeStorageGatewayResult::getStorageGateways()const
{
	return storageGateways_;
}

int DescribeStorageGatewayResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeStorageGatewayResult::getPageSize()const
{
	return pageSize_;
}

int DescribeStorageGatewayResult::getPageNumber()const
{
	return pageNumber_;
}

