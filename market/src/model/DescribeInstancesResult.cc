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
	auto allInstanceItems = value["InstanceItems"]["InstanceItem"];
	for (auto value : allInstanceItems)
	{
		InstanceItem instanceItemsObject;
		if(!value["InstanceId"].isNull())
			instanceItemsObject.instanceId = std::stol(value["InstanceId"].asString());
		if(!value["OrderId"].isNull())
			instanceItemsObject.orderId = std::stol(value["OrderId"].asString());
		if(!value["SupplierName"].isNull())
			instanceItemsObject.supplierName = value["SupplierName"].asString();
		if(!value["ProductCode"].isNull())
			instanceItemsObject.productCode = value["ProductCode"].asString();
		if(!value["ProductSkuCode"].isNull())
			instanceItemsObject.productSkuCode = value["ProductSkuCode"].asString();
		if(!value["ProductName"].isNull())
			instanceItemsObject.productName = value["ProductName"].asString();
		if(!value["ProductType"].isNull())
			instanceItemsObject.productType = value["ProductType"].asString();
		if(!value["Status"].isNull())
			instanceItemsObject.status = value["Status"].asString();
		if(!value["BeganOn"].isNull())
			instanceItemsObject.beganOn = std::stol(value["BeganOn"].asString());
		if(!value["EndOn"].isNull())
			instanceItemsObject.endOn = std::stol(value["EndOn"].asString());
		if(!value["CreatedOn"].isNull())
			instanceItemsObject.createdOn = std::stol(value["CreatedOn"].asString());
		if(!value["ExtendJson"].isNull())
			instanceItemsObject.extendJson = value["ExtendJson"].asString();
		if(!value["HostJson"].isNull())
			instanceItemsObject.hostJson = value["HostJson"].asString();
		if(!value["AppJson"].isNull())
			instanceItemsObject.appJson = value["AppJson"].asString();
		if(!value["ApiJson"].isNull())
			instanceItemsObject.apiJson = value["ApiJson"].asString();
		if(!value["ImageJson"].isNull())
			instanceItemsObject.imageJson = value["ImageJson"].asString();
		if(!value["IdaasJson"].isNull())
			instanceItemsObject.idaasJson = value["IdaasJson"].asString();
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

