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

#include <alibabacloud/bssopenapi/model/DescribeProductAmortizedCostByConsumePeriodResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

DescribeProductAmortizedCostByConsumePeriodResult::DescribeProductAmortizedCostByConsumePeriodResult() :
	ServiceResult()
{}

DescribeProductAmortizedCostByConsumePeriodResult::DescribeProductAmortizedCostByConsumePeriodResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeProductAmortizedCostByConsumePeriodResult::~DescribeProductAmortizedCostByConsumePeriodResult()
{}

void DescribeProductAmortizedCostByConsumePeriodResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["NextToken"].isNull())
		data_.nextToken = dataNode["NextToken"].asString();
	if(!dataNode["AccountID"].isNull())
		data_.accountID = dataNode["AccountID"].asString();
	if(!dataNode["AccountName"].isNull())
		data_.accountName = dataNode["AccountName"].asString();
	if(!dataNode["MaxResults"].isNull())
		data_.maxResults = std::stoi(dataNode["MaxResults"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	auto allItemsNode = dataNode["Items"]["Item"];
	for (auto dataNodeItemsItem : allItemsNode)
	{
		Data::Item itemObject;
		if(!dataNodeItemsItem["ConsumePeriod"].isNull())
			itemObject.consumePeriod = dataNodeItemsItem["ConsumePeriod"].asString();
		if(!dataNodeItemsItem["AmortizationStatus"].isNull())
			itemObject.amortizationStatus = dataNodeItemsItem["AmortizationStatus"].asString();
		if(!dataNodeItemsItem["AmortizationPeriod"].isNull())
			itemObject.amortizationPeriod = dataNodeItemsItem["AmortizationPeriod"].asString();
		if(!dataNodeItemsItem["BillAccountID"].isNull())
			itemObject.billAccountID = std::stol(dataNodeItemsItem["BillAccountID"].asString());
		if(!dataNodeItemsItem["BillAccountName"].isNull())
			itemObject.billAccountName = dataNodeItemsItem["BillAccountName"].asString();
		if(!dataNodeItemsItem["BillOwnerID"].isNull())
			itemObject.billOwnerID = std::stol(dataNodeItemsItem["BillOwnerID"].asString());
		if(!dataNodeItemsItem["BillOwnerName"].isNull())
			itemObject.billOwnerName = dataNodeItemsItem["BillOwnerName"].asString();
		if(!dataNodeItemsItem["ProductCode"].isNull())
			itemObject.productCode = dataNodeItemsItem["ProductCode"].asString();
		if(!dataNodeItemsItem["ProductName"].isNull())
			itemObject.productName = dataNodeItemsItem["ProductName"].asString();
		if(!dataNodeItemsItem["ProductDetailCode"].isNull())
			itemObject.productDetailCode = dataNodeItemsItem["ProductDetailCode"].asString();
		if(!dataNodeItemsItem["ProductDetail"].isNull())
			itemObject.productDetail = dataNodeItemsItem["ProductDetail"].asString();
		if(!dataNodeItemsItem["BizType"].isNull())
			itemObject.bizType = dataNodeItemsItem["BizType"].asString();
		if(!dataNodeItemsItem["SubscriptionType"].isNull())
			itemObject.subscriptionType = dataNodeItemsItem["SubscriptionType"].asString();
		if(!dataNodeItemsItem["PretaxGrossAmount"].isNull())
			itemObject.pretaxGrossAmount = dataNodeItemsItem["PretaxGrossAmount"].asString();
		if(!dataNodeItemsItem["InvoiceDiscount"].isNull())
			itemObject.invoiceDiscount = dataNodeItemsItem["InvoiceDiscount"].asString();
		if(!dataNodeItemsItem["RoundDownDiscount"].isNull())
			itemObject.roundDownDiscount = dataNodeItemsItem["RoundDownDiscount"].asString();
		if(!dataNodeItemsItem["PretaxAmount"].isNull())
			itemObject.pretaxAmount = dataNodeItemsItem["PretaxAmount"].asString();
		if(!dataNodeItemsItem["DeductedByCashCoupons"].isNull())
			itemObject.deductedByCashCoupons = dataNodeItemsItem["DeductedByCashCoupons"].asString();
		if(!dataNodeItemsItem["DeductedByCoupons"].isNull())
			itemObject.deductedByCoupons = dataNodeItemsItem["DeductedByCoupons"].asString();
		if(!dataNodeItemsItem["DeductedByPrepaidCard"].isNull())
			itemObject.deductedByPrepaidCard = dataNodeItemsItem["DeductedByPrepaidCard"].asString();
		if(!dataNodeItemsItem["ExpenditureAmount"].isNull())
			itemObject.expenditureAmount = dataNodeItemsItem["ExpenditureAmount"].asString();
		if(!dataNodeItemsItem["PreviouslyAmortizedPretaxGrossAmount"].isNull())
			itemObject.previouslyAmortizedPretaxGrossAmount = dataNodeItemsItem["PreviouslyAmortizedPretaxGrossAmount"].asString();
		if(!dataNodeItemsItem["PreviouslyAmortizedInvoiceDiscount"].isNull())
			itemObject.previouslyAmortizedInvoiceDiscount = dataNodeItemsItem["PreviouslyAmortizedInvoiceDiscount"].asString();
		if(!dataNodeItemsItem["PreviouslyAmortizedRoundDownDiscount"].isNull())
			itemObject.previouslyAmortizedRoundDownDiscount = dataNodeItemsItem["PreviouslyAmortizedRoundDownDiscount"].asString();
		if(!dataNodeItemsItem["PreviouslyAmortizedPretaxAmount"].isNull())
			itemObject.previouslyAmortizedPretaxAmount = dataNodeItemsItem["PreviouslyAmortizedPretaxAmount"].asString();
		if(!dataNodeItemsItem["PreviouslyAmortizedDeductedByCashCoupons"].isNull())
			itemObject.previouslyAmortizedDeductedByCashCoupons = dataNodeItemsItem["PreviouslyAmortizedDeductedByCashCoupons"].asString();
		if(!dataNodeItemsItem["PreviouslyAmortizedDeductedByCoupons"].isNull())
			itemObject.previouslyAmortizedDeductedByCoupons = dataNodeItemsItem["PreviouslyAmortizedDeductedByCoupons"].asString();
		if(!dataNodeItemsItem["PreviouslyAmortizedDeductedByPrepaidCard"].isNull())
			itemObject.previouslyAmortizedDeductedByPrepaidCard = dataNodeItemsItem["PreviouslyAmortizedDeductedByPrepaidCard"].asString();
		if(!dataNodeItemsItem["PreviouslyAmortizedExpenditureAmount"].isNull())
			itemObject.previouslyAmortizedExpenditureAmount = dataNodeItemsItem["PreviouslyAmortizedExpenditureAmount"].asString();
		if(!dataNodeItemsItem["CurrentAmortizationPretaxGrossAmount"].isNull())
			itemObject.currentAmortizationPretaxGrossAmount = dataNodeItemsItem["CurrentAmortizationPretaxGrossAmount"].asString();
		if(!dataNodeItemsItem["CurrentAmortizationInvoiceDiscount"].isNull())
			itemObject.currentAmortizationInvoiceDiscount = dataNodeItemsItem["CurrentAmortizationInvoiceDiscount"].asString();
		if(!dataNodeItemsItem["CurrentAmortizationRoundDownDiscount"].isNull())
			itemObject.currentAmortizationRoundDownDiscount = dataNodeItemsItem["CurrentAmortizationRoundDownDiscount"].asString();
		if(!dataNodeItemsItem["CurrentAmortizationPretaxAmount"].isNull())
			itemObject.currentAmortizationPretaxAmount = dataNodeItemsItem["CurrentAmortizationPretaxAmount"].asString();
		if(!dataNodeItemsItem["CurrentAmortizationDeductedByCashCoupons"].isNull())
			itemObject.currentAmortizationDeductedByCashCoupons = dataNodeItemsItem["CurrentAmortizationDeductedByCashCoupons"].asString();
		if(!dataNodeItemsItem["CurrentAmortizationDeductedByCoupons"].isNull())
			itemObject.currentAmortizationDeductedByCoupons = dataNodeItemsItem["CurrentAmortizationDeductedByCoupons"].asString();
		if(!dataNodeItemsItem["CurrentAmortizationDeductedByPrepaidCard"].isNull())
			itemObject.currentAmortizationDeductedByPrepaidCard = dataNodeItemsItem["CurrentAmortizationDeductedByPrepaidCard"].asString();
		if(!dataNodeItemsItem["CurrentAmortizationExpenditureAmount"].isNull())
			itemObject.currentAmortizationExpenditureAmount = dataNodeItemsItem["CurrentAmortizationExpenditureAmount"].asString();
		if(!dataNodeItemsItem["RemainingAmortizationPretaxGrossAmount"].isNull())
			itemObject.remainingAmortizationPretaxGrossAmount = dataNodeItemsItem["RemainingAmortizationPretaxGrossAmount"].asString();
		if(!dataNodeItemsItem["RemainingAmortizationInvoiceDiscount"].isNull())
			itemObject.remainingAmortizationInvoiceDiscount = dataNodeItemsItem["RemainingAmortizationInvoiceDiscount"].asString();
		if(!dataNodeItemsItem["RemainingAmortizationRoundDownDiscount"].isNull())
			itemObject.remainingAmortizationRoundDownDiscount = dataNodeItemsItem["RemainingAmortizationRoundDownDiscount"].asString();
		if(!dataNodeItemsItem["RemainingAmortizationPretaxAmount"].isNull())
			itemObject.remainingAmortizationPretaxAmount = dataNodeItemsItem["RemainingAmortizationPretaxAmount"].asString();
		if(!dataNodeItemsItem["RemainingAmortizationDeductedByCashCoupons"].isNull())
			itemObject.remainingAmortizationDeductedByCashCoupons = dataNodeItemsItem["RemainingAmortizationDeductedByCashCoupons"].asString();
		if(!dataNodeItemsItem["RemainingAmortizationDeductedByCoupons"].isNull())
			itemObject.remainingAmortizationDeductedByCoupons = dataNodeItemsItem["RemainingAmortizationDeductedByCoupons"].asString();
		if(!dataNodeItemsItem["RemainingAmortizationDeductedByPrepaidCard"].isNull())
			itemObject.remainingAmortizationDeductedByPrepaidCard = dataNodeItemsItem["RemainingAmortizationDeductedByPrepaidCard"].asString();
		if(!dataNodeItemsItem["RemainingAmortizationExpenditureAmount"].isNull())
			itemObject.remainingAmortizationExpenditureAmount = dataNodeItemsItem["RemainingAmortizationExpenditureAmount"].asString();
		data_.items.push_back(itemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeProductAmortizedCostByConsumePeriodResult::getMessage()const
{
	return message_;
}

DescribeProductAmortizedCostByConsumePeriodResult::Data DescribeProductAmortizedCostByConsumePeriodResult::getData()const
{
	return data_;
}

std::string DescribeProductAmortizedCostByConsumePeriodResult::getCode()const
{
	return code_;
}

bool DescribeProductAmortizedCostByConsumePeriodResult::getSuccess()const
{
	return success_;
}

