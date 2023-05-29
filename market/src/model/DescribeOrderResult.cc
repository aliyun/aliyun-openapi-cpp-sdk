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

#include <alibabacloud/market/model/DescribeOrderResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Market;
using namespace AlibabaCloud::Market::Model;

DescribeOrderResult::DescribeOrderResult() :
	ServiceResult()
{}

DescribeOrderResult::DescribeOrderResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOrderResult::~DescribeOrderResult()
{}

void DescribeOrderResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSupplierTelephones = value["SupplierTelephones"]["Telephone"];
	for (const auto &item : allSupplierTelephones)
		supplierTelephones_.push_back(item.asString());
	auto allInstanceIds = value["InstanceIds"]["InstanceId"];
	for (const auto &item : allInstanceIds)
		instanceIds_.push_back(item.asString());
	if(!value["ProductName"].isNull())
		productName_ = value["ProductName"].asString();
	if(!value["SupplierCompanyName"].isNull())
		supplierCompanyName_ = value["SupplierCompanyName"].asString();
	if(!value["OriginalPrice"].isNull())
		originalPrice_ = std::stof(value["OriginalPrice"].asString());
	if(!value["AliUid"].isNull())
		aliUid_ = std::stol(value["AliUid"].asString());
	if(!value["CouponPrice"].isNull())
		couponPrice_ = std::stof(value["CouponPrice"].asString());
	if(!value["AccountQuantity"].isNull())
		accountQuantity_ = std::stol(value["AccountQuantity"].asString());
	if(!value["PeriodType"].isNull())
		periodType_ = value["PeriodType"].asString();
	if(!value["PayStatus"].isNull())
		payStatus_ = value["PayStatus"].asString();
	if(!value["PaymentPrice"].isNull())
		paymentPrice_ = std::stof(value["PaymentPrice"].asString());
	if(!value["OrderStatus"].isNull())
		orderStatus_ = value["OrderStatus"].asString();
	if(!value["ProductSkuCode"].isNull())
		productSkuCode_ = value["ProductSkuCode"].asString();
	if(!value["PaidOn"].isNull())
		paidOn_ = std::stol(value["PaidOn"].asString());
	if(!value["Components"].isNull())
		components_ = value["Components"].asString();
	if(!value["CreatedOn"].isNull())
		createdOn_ = std::stol(value["CreatedOn"].asString());
	if(!value["OrderType"].isNull())
		orderType_ = value["OrderType"].asString();
	if(!value["TotalPrice"].isNull())
		totalPrice_ = std::stof(value["TotalPrice"].asString());
	if(!value["Quantity"].isNull())
		quantity_ = std::stoi(value["Quantity"].asString());
	if(!value["OrderId"].isNull())
		orderId_ = std::stol(value["OrderId"].asString());
	if(!value["ProductCode"].isNull())
		productCode_ = value["ProductCode"].asString();

}

long DescribeOrderResult::getPaidOn()const
{
	return paidOn_;
}

float DescribeOrderResult::getCouponPrice()const
{
	return couponPrice_;
}

std::string DescribeOrderResult::getPeriodType()const
{
	return periodType_;
}

float DescribeOrderResult::getOriginalPrice()const
{
	return originalPrice_;
}

std::string DescribeOrderResult::getPayStatus()const
{
	return payStatus_;
}

std::string DescribeOrderResult::getProductName()const
{
	return productName_;
}

std::string DescribeOrderResult::getProductCode()const
{
	return productCode_;
}

std::string DescribeOrderResult::getSupplierCompanyName()const
{
	return supplierCompanyName_;
}

int DescribeOrderResult::getQuantity()const
{
	return quantity_;
}

long DescribeOrderResult::getOrderId()const
{
	return orderId_;
}

std::vector<std::string> DescribeOrderResult::getSupplierTelephones()const
{
	return supplierTelephones_;
}

std::string DescribeOrderResult::getComponents()const
{
	return components_;
}

std::string DescribeOrderResult::getOrderStatus()const
{
	return orderStatus_;
}

std::string DescribeOrderResult::getOrderType()const
{
	return orderType_;
}

float DescribeOrderResult::getTotalPrice()const
{
	return totalPrice_;
}

std::string DescribeOrderResult::getProductSkuCode()const
{
	return productSkuCode_;
}

float DescribeOrderResult::getPaymentPrice()const
{
	return paymentPrice_;
}

long DescribeOrderResult::getCreatedOn()const
{
	return createdOn_;
}

std::vector<std::string> DescribeOrderResult::getInstanceIds()const
{
	return instanceIds_;
}

long DescribeOrderResult::getAccountQuantity()const
{
	return accountQuantity_;
}

long DescribeOrderResult::getAliUid()const
{
	return aliUid_;
}

