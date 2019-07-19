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

#include <alibabacloud/bssopenapi/model/QueryInstanceBillResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QueryInstanceBillResult::QueryInstanceBillResult() :
	ServiceResult()
{}

QueryInstanceBillResult::QueryInstanceBillResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryInstanceBillResult::~QueryInstanceBillResult()
{}

void QueryInstanceBillResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["BillingCycle"].isNull())
		data_.billingCycle = dataNode["BillingCycle"].asString();
	if(!dataNode["AccountID"].isNull())
		data_.accountID = dataNode["AccountID"].asString();
	if(!dataNode["AccountName"].isNull())
		data_.accountName = dataNode["AccountName"].asString();
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	if(!dataNode["PageNum"].isNull())
		data_.pageNum = std::stoi(dataNode["PageNum"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	auto allItems = value["Items"]["Item"];
	for (auto value : allItems)
	{
		Data::Item itemObject;
		if(!value["InstanceID"].isNull())
			itemObject.instanceID = value["InstanceID"].asString();
		if(!value["BillingType"].isNull())
			itemObject.billingType = value["BillingType"].asString();
		if(!value["CostUnit"].isNull())
			itemObject.costUnit = value["CostUnit"].asString();
		if(!value["ProductCode"].isNull())
			itemObject.productCode = value["ProductCode"].asString();
		if(!value["ProductType"].isNull())
			itemObject.productType = value["ProductType"].asString();
		if(!value["SubscriptionType"].isNull())
			itemObject.subscriptionType = value["SubscriptionType"].asString();
		if(!value["ProductName"].isNull())
			itemObject.productName = value["ProductName"].asString();
		if(!value["ProductDetail"].isNull())
			itemObject.productDetail = value["ProductDetail"].asString();
		if(!value["OwnerID"].isNull())
			itemObject.ownerID = std::stol(value["OwnerID"].asString());
		if(!value["BillingItem"].isNull())
			itemObject.billingItem = value["BillingItem"].asString();
		if(!value["ListPrice"].isNull())
			itemObject.listPrice = std::stof(value["ListPrice"].asString());
		if(!value["ListPriceUnit"].isNull())
			itemObject.listPriceUnit = value["ListPriceUnit"].asString();
		if(!value["Usage"].isNull())
			itemObject.usage = std::stof(value["Usage"].asString());
		if(!value["UsageUnit"].isNull())
			itemObject.usageUnit = value["UsageUnit"].asString();
		if(!value["DeductedByResourcePackage"].isNull())
			itemObject.deductedByResourcePackage = std::stof(value["DeductedByResourcePackage"].asString());
		if(!value["PretaxGrossAmount"].isNull())
			itemObject.pretaxGrossAmount = std::stof(value["PretaxGrossAmount"].asString());
		if(!value["InvoiceDiscount"].isNull())
			itemObject.invoiceDiscount = std::stof(value["InvoiceDiscount"].asString());
		if(!value["DeductedByCoupons"].isNull())
			itemObject.deductedByCoupons = std::stof(value["DeductedByCoupons"].asString());
		if(!value["PretaxAmount"].isNull())
			itemObject.pretaxAmount = std::stof(value["PretaxAmount"].asString());
		if(!value["DeductedByCashCoupons"].isNull())
			itemObject.deductedByCashCoupons = std::stof(value["DeductedByCashCoupons"].asString());
		if(!value["DeductedByPrepaidCard"].isNull())
			itemObject.deductedByPrepaidCard = std::stof(value["DeductedByPrepaidCard"].asString());
		if(!value["PaymentAmount"].isNull())
			itemObject.paymentAmount = std::stof(value["PaymentAmount"].asString());
		if(!value["OutstandingAmount"].isNull())
			itemObject.outstandingAmount = std::stof(value["OutstandingAmount"].asString());
		if(!value["Currency"].isNull())
			itemObject.currency = value["Currency"].asString();
		if(!value["NickName"].isNull())
			itemObject.nickName = value["NickName"].asString();
		if(!value["ResourceGroup"].isNull())
			itemObject.resourceGroup = value["ResourceGroup"].asString();
		if(!value["Tag"].isNull())
			itemObject.tag = value["Tag"].asString();
		if(!value["InstanceConfig"].isNull())
			itemObject.instanceConfig = value["InstanceConfig"].asString();
		if(!value["InstanceSpec"].isNull())
			itemObject.instanceSpec = value["InstanceSpec"].asString();
		if(!value["InternetIP"].isNull())
			itemObject.internetIP = value["InternetIP"].asString();
		if(!value["IntranetIP"].isNull())
			itemObject.intranetIP = value["IntranetIP"].asString();
		if(!value["Region"].isNull())
			itemObject.region = value["Region"].asString();
		if(!value["Zone"].isNull())
			itemObject.zone = value["Zone"].asString();
		if(!value["Item"].isNull())
			itemObject.item = value["Item"].asString();
		data_.items.push_back(itemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryInstanceBillResult::getMessage()const
{
	return message_;
}

QueryInstanceBillResult::Data QueryInstanceBillResult::getData()const
{
	return data_;
}

std::string QueryInstanceBillResult::getCode()const
{
	return code_;
}

bool QueryInstanceBillResult::getSuccess()const
{
	return success_;
}

