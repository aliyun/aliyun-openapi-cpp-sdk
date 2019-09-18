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
	auto allOrderList = value["OrderList"]["Order"];
	for (auto value : allOrderList)
	{
		Order orderListObject;
		if(!value["Id"].isNull())
			orderListObject.id = std::stol(value["Id"].asString());
		if(!value["SourceType"].isNull())
			orderListObject.sourceType = value["SourceType"].asString();
		if(!value["CertType"].isNull())
			orderListObject.certType = value["CertType"].asString();
		if(!value["InstanceId"].isNull())
			orderListObject.instanceId = value["InstanceId"].asString();
		if(!value["Year"].isNull())
			orderListObject.year = std::stol(value["Year"].asString());
		if(!value["OrderId"].isNull())
			orderListObject.orderId = std::stol(value["OrderId"].asString());
		if(!value["OrderType"].isNull())
			orderListObject.orderType = value["OrderType"].asString();
		if(!value["BrandName"].isNull())
			orderListObject.brandName = value["BrandName"].asString();
		if(!value["BuyDate"].isNull())
			orderListObject.buyDate = std::stol(value["BuyDate"].asString());
		if(!value["StatusCode"].isNull())
			orderListObject.statusCode = value["StatusCode"].asString();
		if(!value["Domain"].isNull())
			orderListObject.domain = value["Domain"].asString();
		if(!value["ProductAliasName"].isNull())
			orderListObject.productAliasName = value["ProductAliasName"].asString();
		if(!value["DomainCount"].isNull())
			orderListObject.domainCount = std::stoi(value["DomainCount"].asString());
		if(!value["WildDomainCount"].isNull())
			orderListObject.wildDomainCount = std::stoi(value["WildDomainCount"].asString());
		if(!value["VerifyStatus"].isNull())
			orderListObject.verifyStatus = std::stoi(value["VerifyStatus"].asString());
		if(!value["MaybeIssueDate"].isNull())
			orderListObject.maybeIssueDate = std::stol(value["MaybeIssueDate"].asString());
		if(!value["BeforeDate"].isNull())
			orderListObject.beforeDate = std::stol(value["BeforeDate"].asString());
		if(!value["AfterDate"].isNull())
			orderListObject.afterDate = std::stol(value["AfterDate"].asString());
		if(!value["ShowCancel"].isNull())
			orderListObject.showCancel = value["ShowCancel"].asString() == "true";
		if(!value["ShowRefund"].isNull())
			orderListObject.showRefund = value["ShowRefund"].asString() == "true";
		if(!value["PartnerOrderId"].isNull())
			orderListObject.partnerOrderId = value["PartnerOrderId"].asString();
		if(!value["IsFree"].isNull())
			orderListObject.isFree = value["IsFree"].asString() == "true";
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

