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
	auto allOrderList = value["OrderList"]["Order"];
	for (auto value : allOrderList)
	{
		Data::Order orderObject;
		if(!value["OrderId"].isNull())
			orderObject.orderId = value["OrderId"].asString();
		if(!value["ProductCode"].isNull())
			orderObject.productCode = value["ProductCode"].asString();
		if(!value["ProductType"].isNull())
			orderObject.productType = value["ProductType"].asString();
		if(!value["SubscriptionType"].isNull())
			orderObject.subscriptionType = value["SubscriptionType"].asString();
		if(!value["OrderType"].isNull())
			orderObject.orderType = value["OrderType"].asString();
		if(!value["CreateTime"].isNull())
			orderObject.createTime = value["CreateTime"].asString();
		if(!value["PaymentTime"].isNull())
			orderObject.paymentTime = value["PaymentTime"].asString();
		if(!value["PaymentStatus"].isNull())
			orderObject.paymentStatus = value["PaymentStatus"].asString();
		if(!value["PretaxGrossAmount"].isNull())
			orderObject.pretaxGrossAmount = value["PretaxGrossAmount"].asString();
		if(!value["PretaxAmount"].isNull())
			orderObject.pretaxAmount = value["PretaxAmount"].asString();
		if(!value["Currency"].isNull())
			orderObject.currency = value["Currency"].asString();
		if(!value["PretaxAmountLocal"].isNull())
			orderObject.pretaxAmountLocal = value["PretaxAmountLocal"].asString();
		if(!value["Tax"].isNull())
			orderObject.tax = value["Tax"].asString();
		if(!value["AfterTaxAmount"].isNull())
			orderObject.afterTaxAmount = value["AfterTaxAmount"].asString();
		if(!value["PaymentCurrency"].isNull())
			orderObject.paymentCurrency = value["PaymentCurrency"].asString();
		if(!value["RelatedOrderId"].isNull())
			orderObject.relatedOrderId = value["RelatedOrderId"].asString();
		data_.orderList.push_back(orderObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

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

