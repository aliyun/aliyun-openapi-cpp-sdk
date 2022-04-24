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

#include <alibabacloud/bssopenapi/model/DescribeSplitItemBillResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

DescribeSplitItemBillResult::DescribeSplitItemBillResult() :
	ServiceResult()
{}

DescribeSplitItemBillResult::DescribeSplitItemBillResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSplitItemBillResult::~DescribeSplitItemBillResult()
{}

void DescribeSplitItemBillResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["NextToken"].isNull())
		data_.nextToken = dataNode["NextToken"].asString();
	if(!dataNode["BillingCycle"].isNull())
		data_.billingCycle = dataNode["BillingCycle"].asString();
	if(!dataNode["MaxResults"].isNull())
		data_.maxResults = std::stoi(dataNode["MaxResults"].asString());
	if(!dataNode["AccountID"].isNull())
		data_.accountID = dataNode["AccountID"].asString();
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	if(!dataNode["AccountName"].isNull())
		data_.accountName = dataNode["AccountName"].asString();
	auto allItemsNode = dataNode["Items"]["Item"];
	for (auto dataNodeItemsItem : allItemsNode)
	{
		Data::Item itemObject;
		if(!dataNodeItemsItem["SplitAccountID"].isNull())
			itemObject.splitAccountID = dataNodeItemsItem["SplitAccountID"].asString();
		if(!dataNodeItemsItem["BillAccountName"].isNull())
			itemObject.billAccountName = dataNodeItemsItem["BillAccountName"].asString();
		if(!dataNodeItemsItem["SubscriptionType"].isNull())
			itemObject.subscriptionType = dataNodeItemsItem["SubscriptionType"].asString();
		if(!dataNodeItemsItem["InstanceSpec"].isNull())
			itemObject.instanceSpec = dataNodeItemsItem["InstanceSpec"].asString();
		if(!dataNodeItemsItem["DeductedByCoupons"].isNull())
			itemObject.deductedByCoupons = std::stof(dataNodeItemsItem["DeductedByCoupons"].asString());
		if(!dataNodeItemsItem["Region"].isNull())
			itemObject.region = dataNodeItemsItem["Region"].asString();
		if(!dataNodeItemsItem["OutstandingAmount"].isNull())
			itemObject.outstandingAmount = std::stof(dataNodeItemsItem["OutstandingAmount"].asString());
		if(!dataNodeItemsItem["PipCode"].isNull())
			itemObject.pipCode = dataNodeItemsItem["PipCode"].asString();
		if(!dataNodeItemsItem["CommodityCode"].isNull())
			itemObject.commodityCode = dataNodeItemsItem["CommodityCode"].asString();
		if(!dataNodeItemsItem["NickName"].isNull())
			itemObject.nickName = dataNodeItemsItem["NickName"].asString();
		if(!dataNodeItemsItem["ProductDetail"].isNull())
			itemObject.productDetail = dataNodeItemsItem["ProductDetail"].asString();
		if(!dataNodeItemsItem["Usage"].isNull())
			itemObject.usage = dataNodeItemsItem["Usage"].asString();
		if(!dataNodeItemsItem["IntranetIP"].isNull())
			itemObject.intranetIP = dataNodeItemsItem["IntranetIP"].asString();
		if(!dataNodeItemsItem["UsageUnit"].isNull())
			itemObject.usageUnit = dataNodeItemsItem["UsageUnit"].asString();
		if(!dataNodeItemsItem["SplitCommodityCode"].isNull())
			itemObject.splitCommodityCode = dataNodeItemsItem["SplitCommodityCode"].asString();
		if(!dataNodeItemsItem["BillAccountID"].isNull())
			itemObject.billAccountID = dataNodeItemsItem["BillAccountID"].asString();
		if(!dataNodeItemsItem["ProductType"].isNull())
			itemObject.productType = dataNodeItemsItem["ProductType"].asString();
		if(!dataNodeItemsItem["DeductedByResourcePackage"].isNull())
			itemObject.deductedByResourcePackage = dataNodeItemsItem["DeductedByResourcePackage"].asString();
		if(!dataNodeItemsItem["PaymentAmount"].isNull())
			itemObject.paymentAmount = std::stof(dataNodeItemsItem["PaymentAmount"].asString());
		if(!dataNodeItemsItem["SplitBillingCycle"].isNull())
			itemObject.splitBillingCycle = dataNodeItemsItem["SplitBillingCycle"].asString();
		if(!dataNodeItemsItem["ServicePeriod"].isNull())
			itemObject.servicePeriod = dataNodeItemsItem["ServicePeriod"].asString();
		if(!dataNodeItemsItem["SplitItemName"].isNull())
			itemObject.splitItemName = dataNodeItemsItem["SplitItemName"].asString();
		if(!dataNodeItemsItem["ListPrice"].isNull())
			itemObject.listPrice = dataNodeItemsItem["ListPrice"].asString();
		if(!dataNodeItemsItem["Zone"].isNull())
			itemObject.zone = dataNodeItemsItem["Zone"].asString();
		if(!dataNodeItemsItem["PretaxGrossAmount"].isNull())
			itemObject.pretaxGrossAmount = std::stof(dataNodeItemsItem["PretaxGrossAmount"].asString());
		if(!dataNodeItemsItem["CashAmount"].isNull())
			itemObject.cashAmount = std::stof(dataNodeItemsItem["CashAmount"].asString());
		if(!dataNodeItemsItem["InstanceConfig"].isNull())
			itemObject.instanceConfig = dataNodeItemsItem["InstanceConfig"].asString();
		if(!dataNodeItemsItem["BillingDate"].isNull())
			itemObject.billingDate = dataNodeItemsItem["BillingDate"].asString();
		if(!dataNodeItemsItem["InternetIP"].isNull())
			itemObject.internetIP = dataNodeItemsItem["InternetIP"].asString();
		if(!dataNodeItemsItem["Item"].isNull())
			itemObject.item = dataNodeItemsItem["Item"].asString();
		if(!dataNodeItemsItem["SplitItemID"].isNull())
			itemObject.splitItemID = dataNodeItemsItem["SplitItemID"].asString();
		if(!dataNodeItemsItem["InstanceID"].isNull())
			itemObject.instanceID = dataNodeItemsItem["InstanceID"].asString();
		if(!dataNodeItemsItem["Tag"].isNull())
			itemObject.tag = dataNodeItemsItem["Tag"].asString();
		if(!dataNodeItemsItem["Currency"].isNull())
			itemObject.currency = dataNodeItemsItem["Currency"].asString();
		if(!dataNodeItemsItem["DeductedByCashCoupons"].isNull())
			itemObject.deductedByCashCoupons = std::stof(dataNodeItemsItem["DeductedByCashCoupons"].asString());
		if(!dataNodeItemsItem["BizType"].isNull())
			itemObject.bizType = dataNodeItemsItem["BizType"].asString();
		if(!dataNodeItemsItem["BillingItem"].isNull())
			itemObject.billingItem = dataNodeItemsItem["BillingItem"].asString();
		if(!dataNodeItemsItem["BillingItemCode"].isNull())
			itemObject.billingItemCode = dataNodeItemsItem["BillingItemCode"].asString();
		if(!dataNodeItemsItem["CostUnit"].isNull())
			itemObject.costUnit = dataNodeItemsItem["CostUnit"].asString();
		if(!dataNodeItemsItem["ListPriceUnit"].isNull())
			itemObject.listPriceUnit = dataNodeItemsItem["ListPriceUnit"].asString();
		if(!dataNodeItemsItem["ResourceGroup"].isNull())
			itemObject.resourceGroup = dataNodeItemsItem["ResourceGroup"].asString();
		if(!dataNodeItemsItem["PretaxAmount"].isNull())
			itemObject.pretaxAmount = std::stof(dataNodeItemsItem["PretaxAmount"].asString());
		if(!dataNodeItemsItem["ServicePeriodUnit"].isNull())
			itemObject.servicePeriodUnit = dataNodeItemsItem["ServicePeriodUnit"].asString();
		if(!dataNodeItemsItem["SplitBillingDate"].isNull())
			itemObject.splitBillingDate = dataNodeItemsItem["SplitBillingDate"].asString();
		if(!dataNodeItemsItem["ProductName"].isNull())
			itemObject.productName = dataNodeItemsItem["ProductName"].asString();
		if(!dataNodeItemsItem["SplitProductDetail"].isNull())
			itemObject.splitProductDetail = dataNodeItemsItem["SplitProductDetail"].asString();
		if(!dataNodeItemsItem["AdjustAmount"].isNull())
			itemObject.adjustAmount = std::stof(dataNodeItemsItem["AdjustAmount"].asString());
		if(!dataNodeItemsItem["OwnerID"].isNull())
			itemObject.ownerID = dataNodeItemsItem["OwnerID"].asString();
		if(!dataNodeItemsItem["DeductedByPrepaidCard"].isNull())
			itemObject.deductedByPrepaidCard = std::stof(dataNodeItemsItem["DeductedByPrepaidCard"].asString());
		if(!dataNodeItemsItem["InvoiceDiscount"].isNull())
			itemObject.invoiceDiscount = std::stof(dataNodeItemsItem["InvoiceDiscount"].asString());
		if(!dataNodeItemsItem["SplitAccountName"].isNull())
			itemObject.splitAccountName = dataNodeItemsItem["SplitAccountName"].asString();
		if(!dataNodeItemsItem["BillingType"].isNull())
			itemObject.billingType = dataNodeItemsItem["BillingType"].asString();
		if(!dataNodeItemsItem["ProductCode"].isNull())
			itemObject.productCode = dataNodeItemsItem["ProductCode"].asString();
		if(!dataNodeItemsItem["ItemName"].isNull())
			itemObject.itemName = dataNodeItemsItem["ItemName"].asString();
		data_.items.push_back(itemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeSplitItemBillResult::getMessage()const
{
	return message_;
}

DescribeSplitItemBillResult::Data DescribeSplitItemBillResult::getData()const
{
	return data_;
}

std::string DescribeSplitItemBillResult::getCode()const
{
	return code_;
}

bool DescribeSplitItemBillResult::getSuccess()const
{
	return success_;
}

