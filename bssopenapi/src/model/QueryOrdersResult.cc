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

#include <alibabacloud/bssopenapi/model/QueryOrdersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QueryOrdersResult::QueryOrdersResult() :
	ServiceResult()
{}

QueryOrdersResult::QueryOrdersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryOrdersResult::~QueryOrdersResult()
{}

void QueryOrdersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["HostName"].isNull())
		data_.hostName = dataNode["HostName"].asString();
	if(!dataNode["PageNum"].isNull())
		data_.pageNum = std::stoi(dataNode["PageNum"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	auto allOrderListNode = dataNode["OrderList"]["Order"];
	for (auto dataNodeOrderListOrder : allOrderListNode)
	{
		Data::Order orderObject;
		if(!dataNodeOrderListOrder["PretaxAmount"].isNull())
			orderObject.pretaxAmount = dataNodeOrderListOrder["PretaxAmount"].asString();
		if(!dataNodeOrderListOrder["CommodityCode"].isNull())
			orderObject.commodityCode = dataNodeOrderListOrder["CommodityCode"].asString();
		if(!dataNodeOrderListOrder["RelatedOrderId"].isNull())
			orderObject.relatedOrderId = dataNodeOrderListOrder["RelatedOrderId"].asString();
		if(!dataNodeOrderListOrder["CreateTime"].isNull())
			orderObject.createTime = dataNodeOrderListOrder["CreateTime"].asString();
		if(!dataNodeOrderListOrder["Currency"].isNull())
			orderObject.currency = dataNodeOrderListOrder["Currency"].asString();
		if(!dataNodeOrderListOrder["SubscriptionType"].isNull())
			orderObject.subscriptionType = dataNodeOrderListOrder["SubscriptionType"].asString();
		if(!dataNodeOrderListOrder["PaymentCurrency"].isNull())
			orderObject.paymentCurrency = dataNodeOrderListOrder["PaymentCurrency"].asString();
		if(!dataNodeOrderListOrder["ProductType"].isNull())
			orderObject.productType = dataNodeOrderListOrder["ProductType"].asString();
		if(!dataNodeOrderListOrder["AfterTaxAmount"].isNull())
			orderObject.afterTaxAmount = dataNodeOrderListOrder["AfterTaxAmount"].asString();
		if(!dataNodeOrderListOrder["PaymentTime"].isNull())
			orderObject.paymentTime = dataNodeOrderListOrder["PaymentTime"].asString();
		if(!dataNodeOrderListOrder["PretaxGrossAmount"].isNull())
			orderObject.pretaxGrossAmount = dataNodeOrderListOrder["PretaxGrossAmount"].asString();
		if(!dataNodeOrderListOrder["OrderType"].isNull())
			orderObject.orderType = dataNodeOrderListOrder["OrderType"].asString();
		if(!dataNodeOrderListOrder["PaymentStatus"].isNull())
			orderObject.paymentStatus = dataNodeOrderListOrder["PaymentStatus"].asString();
		if(!dataNodeOrderListOrder["OrderId"].isNull())
			orderObject.orderId = dataNodeOrderListOrder["OrderId"].asString();
		if(!dataNodeOrderListOrder["Tax"].isNull())
			orderObject.tax = dataNodeOrderListOrder["Tax"].asString();
		if(!dataNodeOrderListOrder["PretaxAmountLocal"].isNull())
			orderObject.pretaxAmountLocal = dataNodeOrderListOrder["PretaxAmountLocal"].asString();
		if(!dataNodeOrderListOrder["ProductCode"].isNull())
			orderObject.productCode = dataNodeOrderListOrder["ProductCode"].asString();
		data_.orderList.push_back(orderObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryOrdersResult::getMessage()const
{
	return message_;
}

QueryOrdersResult::Data QueryOrdersResult::getData()const
{
	return data_;
}

std::string QueryOrdersResult::getCode()const
{
	return code_;
}

bool QueryOrdersResult::getSuccess()const
{
	return success_;
}

