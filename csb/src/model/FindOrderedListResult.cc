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
	auto allOrderListNode = dataNode["OrderList"]["Order"];
	for (auto dataNodeOrderListOrder : allOrderListNode)
	{
		Data::Order orderObject;
		if(!dataNodeOrderListOrder["Alias"].isNull())
			orderObject.alias = dataNodeOrderListOrder["Alias"].asString();
		if(!dataNodeOrderListOrder["ProjectName"].isNull())
			orderObject.projectName = dataNodeOrderListOrder["ProjectName"].asString();
		if(!dataNodeOrderListOrder["ServiceName"].isNull())
			orderObject.serviceName = dataNodeOrderListOrder["ServiceName"].asString();
		if(!dataNodeOrderListOrder["ServiceVersion"].isNull())
			orderObject.serviceVersion = dataNodeOrderListOrder["ServiceVersion"].asString();
		if(!dataNodeOrderListOrder["OrderStatus"].isNull())
			orderObject.orderStatus = std::stoi(dataNodeOrderListOrder["OrderStatus"].asString());
		if(!dataNodeOrderListOrder["AliveOrderCount"].isNull())
			orderObject.aliveOrderCount = std::stoi(dataNodeOrderListOrder["AliveOrderCount"].asString());
		if(!dataNodeOrderListOrder["GmtCreate"].isNull())
			orderObject.gmtCreate = std::stol(dataNodeOrderListOrder["GmtCreate"].asString());
		if(!dataNodeOrderListOrder["MaxRT"].isNull())
			orderObject.maxRT = std::stoi(dataNodeOrderListOrder["MaxRT"].asString());
		if(!dataNodeOrderListOrder["MinRT"].isNull())
			orderObject.minRT = std::stoi(dataNodeOrderListOrder["MinRT"].asString());
		if(!dataNodeOrderListOrder["ServiceId"].isNull())
			orderObject.serviceId = dataNodeOrderListOrder["ServiceId"].asString();
		if(!dataNodeOrderListOrder["ServiceStatus"].isNull())
			orderObject.serviceStatus = std::stoi(dataNodeOrderListOrder["ServiceStatus"].asString());
		auto allErrorTypeCatagoryListNode = allOrderListNode["ErrorTypeCatagoryList"]["ErrorTypeCatagory"];
		for (auto allOrderListNodeErrorTypeCatagoryListErrorTypeCatagory : allErrorTypeCatagoryListNode)
		{
			Data::Order::ErrorTypeCatagory errorTypeCatagoryListObject;
			if(!allOrderListNodeErrorTypeCatagoryListErrorTypeCatagory["Name"].isNull())
				errorTypeCatagoryListObject.name = allOrderListNodeErrorTypeCatagoryListErrorTypeCatagory["Name"].asString();
			if(!allOrderListNodeErrorTypeCatagoryListErrorTypeCatagory["Total"].isNull())
				errorTypeCatagoryListObject.total = std::stol(allOrderListNodeErrorTypeCatagoryListErrorTypeCatagory["Total"].asString());
			if(!allOrderListNodeErrorTypeCatagoryListErrorTypeCatagory["ErrorNum"].isNull())
				errorTypeCatagoryListObject.errorNum = std::stol(allOrderListNodeErrorTypeCatagoryListErrorTypeCatagory["ErrorNum"].asString());
			orderObject.errorTypeCatagoryList.push_back(errorTypeCatagoryListObject);
		}
		auto allOrdersNode = allOrderListNode["Orders"]["Order"];
		for (auto allOrderListNodeOrdersOrder : allOrdersNode)
		{
			Data::Order::Order1 ordersObject;
			if(!allOrderListNodeOrdersOrder["Alias"].isNull())
				ordersObject.alias = allOrderListNodeOrdersOrder["Alias"].asString();
			if(!allOrderListNodeOrdersOrder["ApproveComments"].isNull())
				ordersObject.approveComments = allOrderListNodeOrdersOrder["ApproveComments"].asString();
			if(!allOrderListNodeOrdersOrder["CsbId"].isNull())
				ordersObject.csbId = std::stol(allOrderListNodeOrdersOrder["CsbId"].asString());
			if(!allOrderListNodeOrdersOrder["GmtCreate"].isNull())
				ordersObject.gmtCreate = std::stol(allOrderListNodeOrdersOrder["GmtCreate"].asString());
			if(!allOrderListNodeOrdersOrder["GmtModified"].isNull())
				ordersObject.gmtModified = std::stol(allOrderListNodeOrdersOrder["GmtModified"].asString());
			if(!allOrderListNodeOrdersOrder["GroupName"].isNull())
				ordersObject.groupName = allOrderListNodeOrdersOrder["GroupName"].asString();
			if(!allOrderListNodeOrdersOrder["Id"].isNull())
				ordersObject.id = std::stol(allOrderListNodeOrdersOrder["Id"].asString());
			if(!allOrderListNodeOrdersOrder["ProjectName"].isNull())
				ordersObject.projectName = allOrderListNodeOrdersOrder["ProjectName"].asString();
			if(!allOrderListNodeOrdersOrder["ServiceId"].isNull())
				ordersObject.serviceId = std::stol(allOrderListNodeOrdersOrder["ServiceId"].asString());
			if(!allOrderListNodeOrdersOrder["ServiceName"].isNull())
				ordersObject.serviceName = allOrderListNodeOrdersOrder["ServiceName"].asString();
			if(!allOrderListNodeOrdersOrder["ServiceStatus"].isNull())
				ordersObject.serviceStatus = std::stoi(allOrderListNodeOrdersOrder["ServiceStatus"].asString());
			if(!allOrderListNodeOrdersOrder["ServiceVersion"].isNull())
				ordersObject.serviceVersion = allOrderListNodeOrdersOrder["ServiceVersion"].asString();
			if(!allOrderListNodeOrdersOrder["StatisticName"].isNull())
				ordersObject.statisticName = allOrderListNodeOrdersOrder["StatisticName"].asString();
			if(!allOrderListNodeOrdersOrder["Status"].isNull())
				ordersObject.status = std::stoi(allOrderListNodeOrdersOrder["Status"].asString());
			if(!allOrderListNodeOrdersOrder["UserId"].isNull())
				ordersObject.userId = allOrderListNodeOrdersOrder["UserId"].asString();
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

