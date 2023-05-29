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

#include <alibabacloud/market/model/DescribeInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Market;
using namespace AlibabaCloud::Market::Model;

DescribeInstancesResult::DescribeInstancesResult() :
	ServiceResult()
{}

DescribeInstancesResult::DescribeInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstancesResult::~DescribeInstancesResult()
{}

void DescribeInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceItemsNode = value["InstanceItems"]["InstanceItem"];
	for (auto valueInstanceItemsInstanceItem : allInstanceItemsNode)
	{
		InstanceItem instanceItemsObject;
		if(!valueInstanceItemsInstanceItem["Status"].isNull())
			instanceItemsObject.status = valueInstanceItemsInstanceItem["Status"].asString();
		if(!valueInstanceItemsInstanceItem["AppJson"].isNull())
			instanceItemsObject.appJson = valueInstanceItemsInstanceItem["AppJson"].asString();
		if(!valueInstanceItemsInstanceItem["ApiJson"].isNull())
			instanceItemsObject.apiJson = valueInstanceItemsInstanceItem["ApiJson"].asString();
		if(!valueInstanceItemsInstanceItem["ProductName"].isNull())
			instanceItemsObject.productName = valueInstanceItemsInstanceItem["ProductName"].asString();
		if(!valueInstanceItemsInstanceItem["ImageJson"].isNull())
			instanceItemsObject.imageJson = valueInstanceItemsInstanceItem["ImageJson"].asString();
		if(!valueInstanceItemsInstanceItem["InstanceId"].isNull())
			instanceItemsObject.instanceId = std::stol(valueInstanceItemsInstanceItem["InstanceId"].asString());
		if(!valueInstanceItemsInstanceItem["ExtendJson"].isNull())
			instanceItemsObject.extendJson = valueInstanceItemsInstanceItem["ExtendJson"].asString();
		if(!valueInstanceItemsInstanceItem["BeganOn"].isNull())
			instanceItemsObject.beganOn = std::stol(valueInstanceItemsInstanceItem["BeganOn"].asString());
		if(!valueInstanceItemsInstanceItem["ProductType"].isNull())
			instanceItemsObject.productType = valueInstanceItemsInstanceItem["ProductType"].asString();
		if(!valueInstanceItemsInstanceItem["HostJson"].isNull())
			instanceItemsObject.hostJson = valueInstanceItemsInstanceItem["HostJson"].asString();
		if(!valueInstanceItemsInstanceItem["ProductSkuCode"].isNull())
			instanceItemsObject.productSkuCode = valueInstanceItemsInstanceItem["ProductSkuCode"].asString();
		if(!valueInstanceItemsInstanceItem["CreatedOn"].isNull())
			instanceItemsObject.createdOn = std::stol(valueInstanceItemsInstanceItem["CreatedOn"].asString());
		if(!valueInstanceItemsInstanceItem["IdaasJson"].isNull())
			instanceItemsObject.idaasJson = valueInstanceItemsInstanceItem["IdaasJson"].asString();
		if(!valueInstanceItemsInstanceItem["EndOn"].isNull())
			instanceItemsObject.endOn = std::stol(valueInstanceItemsInstanceItem["EndOn"].asString());
		if(!valueInstanceItemsInstanceItem["OrderId"].isNull())
			instanceItemsObject.orderId = std::stol(valueInstanceItemsInstanceItem["OrderId"].asString());
		if(!valueInstanceItemsInstanceItem["ProductCode"].isNull())
			instanceItemsObject.productCode = valueInstanceItemsInstanceItem["ProductCode"].asString();
		if(!valueInstanceItemsInstanceItem["SupplierName"].isNull())
			instanceItemsObject.supplierName = valueInstanceItemsInstanceItem["SupplierName"].asString();
		instanceItems_.push_back(instanceItemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeInstancesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeInstancesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeInstancesResult::InstanceItem> DescribeInstancesResult::getInstanceItems()const
{
	return instanceItems_;
}

