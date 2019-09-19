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

#include <alibabacloud/cas/model/DescribeOrderListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

DescribeOrderListResult::DescribeOrderListResult() :
	ServiceResult()
{}

DescribeOrderListResult::DescribeOrderListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOrderListResult::~DescribeOrderListResult()
{}

void DescribeOrderListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOrderListNode = value["OrderList"]["Order"];
	for (auto valueOrderListOrder : allOrderListNode)
	{
		Order orderListObject;
		if(!valueOrderListOrder["Id"].isNull())
			orderListObject.id = std::stol(valueOrderListOrder["Id"].asString());
		if(!valueOrderListOrder["SourceType"].isNull())
			orderListObject.sourceType = valueOrderListOrder["SourceType"].asString();
		if(!valueOrderListOrder["CertType"].isNull())
			orderListObject.certType = valueOrderListOrder["CertType"].asString();
		if(!valueOrderListOrder["InstanceId"].isNull())
			orderListObject.instanceId = valueOrderListOrder["InstanceId"].asString();
		if(!valueOrderListOrder["Year"].isNull())
			orderListObject.year = std::stol(valueOrderListOrder["Year"].asString());
		if(!valueOrderListOrder["OrderId"].isNull())
			orderListObject.orderId = std::stol(valueOrderListOrder["OrderId"].asString());
		if(!valueOrderListOrder["OrderType"].isNull())
			orderListObject.orderType = valueOrderListOrder["OrderType"].asString();
		if(!valueOrderListOrder["BrandName"].isNull())
			orderListObject.brandName = valueOrderListOrder["BrandName"].asString();
		if(!valueOrderListOrder["BuyDate"].isNull())
			orderListObject.buyDate = std::stol(valueOrderListOrder["BuyDate"].asString());
		if(!valueOrderListOrder["StatusCode"].isNull())
			orderListObject.statusCode = valueOrderListOrder["StatusCode"].asString();
		if(!valueOrderListOrder["Domain"].isNull())
			orderListObject.domain = valueOrderListOrder["Domain"].asString();
		if(!valueOrderListOrder["ProductAliasName"].isNull())
			orderListObject.productAliasName = valueOrderListOrder["ProductAliasName"].asString();
		if(!valueOrderListOrder["DomainCount"].isNull())
			orderListObject.domainCount = std::stoi(valueOrderListOrder["DomainCount"].asString());
		if(!valueOrderListOrder["WildDomainCount"].isNull())
			orderListObject.wildDomainCount = std::stoi(valueOrderListOrder["WildDomainCount"].asString());
		if(!valueOrderListOrder["VerifyStatus"].isNull())
			orderListObject.verifyStatus = std::stoi(valueOrderListOrder["VerifyStatus"].asString());
		if(!valueOrderListOrder["MaybeIssueDate"].isNull())
			orderListObject.maybeIssueDate = std::stol(valueOrderListOrder["MaybeIssueDate"].asString());
		if(!valueOrderListOrder["BeforeDate"].isNull())
			orderListObject.beforeDate = std::stol(valueOrderListOrder["BeforeDate"].asString());
		if(!valueOrderListOrder["AfterDate"].isNull())
			orderListObject.afterDate = std::stol(valueOrderListOrder["AfterDate"].asString());
		if(!valueOrderListOrder["ShowCancel"].isNull())
			orderListObject.showCancel = valueOrderListOrder["ShowCancel"].asString() == "true";
		if(!valueOrderListOrder["ShowRefund"].isNull())
			orderListObject.showRefund = valueOrderListOrder["ShowRefund"].asString() == "true";
		if(!valueOrderListOrder["PartnerOrderId"].isNull())
			orderListObject.partnerOrderId = valueOrderListOrder["PartnerOrderId"].asString();
		if(!valueOrderListOrder["IsFree"].isNull())
			orderListObject.isFree = valueOrderListOrder["IsFree"].asString() == "true";
		orderList_.push_back(orderListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["ShowSize"].isNull())
		showSize_ = std::stoi(value["ShowSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());

}

int DescribeOrderListResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeOrderListResult::getCurrentPage()const
{
	return currentPage_;
}

int DescribeOrderListResult::getShowSize()const
{
	return showSize_;
}

std::vector<DescribeOrderListResult::Order> DescribeOrderListResult::getOrderList()const
{
	return orderList_;
}

