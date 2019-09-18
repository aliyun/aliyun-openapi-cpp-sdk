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

#include <alibabacloud/csb/model/FindOrderedListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CSB;
using namespace AlibabaCloud::CSB::Model;

FindOrderedListResult::FindOrderedListResult() :
	ServiceResult()
{}

FindOrderedListResult::FindOrderedListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

FindOrderedListResult::~FindOrderedListResult()
{}

void FindOrderedListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stoi(dataNode["CurrentPage"].asString());
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	auto allOrderList = value["OrderList"]["Order"];
	for (auto value : allOrderList)
	{
		Data::Order orderObject;
		if(!value["Alias"].isNull())
			orderObject.alias = value["Alias"].asString();
		if(!value["ProjectName"].isNull())
			orderObject.projectName = value["ProjectName"].asString();
		if(!value["ServiceName"].isNull())
			orderObject.serviceName = value["ServiceName"].asString();
		if(!value["ServiceVersion"].isNull())
			orderObject.serviceVersion = value["ServiceVersion"].asString();
		if(!value["OrderStatus"].isNull())
			orderObject.orderStatus = std::stoi(value["OrderStatus"].asString());
		if(!value["AliveOrderCount"].isNull())
			orderObject.aliveOrderCount = std::stoi(value["AliveOrderCount"].asString());
		if(!value["GmtCreate"].isNull())
			orderObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["MaxRT"].isNull())
			orderObject.maxRT = std::stoi(value["MaxRT"].asString());
		if(!value["MinRT"].isNull())
			orderObject.minRT = std::stoi(value["MinRT"].asString());
		if(!value["ServiceId"].isNull())
			orderObject.serviceId = value["ServiceId"].asString();
		if(!value["ServiceStatus"].isNull())
			orderObject.serviceStatus = std::stoi(value["ServiceStatus"].asString());
		auto allErrorTypeCatagoryList = value["ErrorTypeCatagoryList"]["ErrorTypeCatagory"];
		for (auto value : allErrorTypeCatagoryList)
		{
			Data::Order::ErrorTypeCatagory errorTypeCatagoryListObject;
			if(!value["Name"].isNull())
				errorTypeCatagoryListObject.name = value["Name"].asString();
			if(!value["Total"].isNull())
				errorTypeCatagoryListObject.total = std::stol(value["Total"].asString());
			if(!value["ErrorNum"].isNull())
				errorTypeCatagoryListObject.errorNum = std::stol(value["ErrorNum"].asString());
			orderObject.errorTypeCatagoryList.push_back(errorTypeCatagoryListObject);
		}
		auto allOrders = value["Orders"]["Order"];
		for (auto value : allOrders)
		{
			Data::Order::Order1 ordersObject;
			if(!value["Alias"].isNull())
				ordersObject.alias = value["Alias"].asString();
			if(!value["ApproveComments"].isNull())
				ordersObject.approveComments = value["ApproveComments"].asString();
			if(!value["CsbId"].isNull())
				ordersObject.csbId = std::stol(value["CsbId"].asString());
			if(!value["GmtCreate"].isNull())
				ordersObject.gmtCreate = std::stol(value["GmtCreate"].asString());
			if(!value["GmtModified"].isNull())
				ordersObject.gmtModified = std::stol(value["GmtModified"].asString());
			if(!value["GroupName"].isNull())
				ordersObject.groupName = value["GroupName"].asString();
			if(!value["Id"].isNull())
				ordersObject.id = std::stol(value["Id"].asString());
			if(!value["ProjectName"].isNull())
				ordersObject.projectName = value["ProjectName"].asString();
			if(!value["ServiceId"].isNull())
				ordersObject.serviceId = std::stol(value["ServiceId"].asString());
			if(!value["ServiceName"].isNull())
				ordersObject.serviceName = value["ServiceName"].asString();
			if(!value["ServiceStatus"].isNull())
				ordersObject.serviceStatus = std::stoi(value["ServiceStatus"].asString());
			if(!value["ServiceVersion"].isNull())
				ordersObject.serviceVersion = value["ServiceVersion"].asString();
			if(!value["StatisticName"].isNull())
				ordersObject.statisticName = value["StatisticName"].asString();
			if(!value["Status"].isNull())
				ordersObject.status = std::stoi(value["Status"].asString());
			if(!value["UserId"].isNull())
				ordersObject.userId = value["UserId"].asString();
			auto slaInfoNode = value["SlaInfo"];
			if(!slaInfoNode["Qph"].isNull())
				ordersObject.slaInfo.qph = slaInfoNode["Qph"].asString();
			if(!slaInfoNode["Qps"].isNull())
				ordersObject.slaInfo.qps = slaInfoNode["Qps"].asString();
			auto total2Node = value["Total"];
			if(!total2Node["ErrorNum"].isNull())
				ordersObject.total2.errorNum = std::stoi(total2Node["ErrorNum"].asString());
			if(!total2Node["Total"].isNull())
				ordersObject.total2.total = std::stoi(total2Node["Total"].asString());
			orderObject.orders.push_back(ordersObject);
		}
		auto totalNode = value["Total"];
		if(!totalNode["ErrorNum"].isNull())
			orderObject.total.errorNum = std::stoi(totalNode["ErrorNum"].asString());
		if(!totalNode["Total"].isNull())
			orderObject.total.total = std::stoi(totalNode["Total"].asString());
		data_.orderList.push_back(orderObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string FindOrderedListResult::getMessage()const
{
	return message_;
}

FindOrderedListResult::Data FindOrderedListResult::getData()const
{
	return data_;
}

int FindOrderedListResult::getCode()const
{
	return code_;
}

