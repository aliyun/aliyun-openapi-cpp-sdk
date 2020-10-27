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

#include <alibabacloud/cloudesl/model/DescribeItemsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

DescribeItemsResult::DescribeItemsResult() :
	ServiceResult()
{}

DescribeItemsResult::DescribeItemsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeItemsResult::~DescribeItemsResult()
{}

void DescribeItemsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["ItemInfo"];
	for (auto valueItemsItemInfo : allItemsNode)
	{
		ItemInfo itemsObject;
		if(!valueItemsItemInfo["CompanyId"].isNull())
			itemsObject.companyId = valueItemsItemInfo["CompanyId"].asString();
		if(!valueItemsItemInfo["StoreId"].isNull())
			itemsObject.storeId = valueItemsItemInfo["StoreId"].asString();
		if(!valueItemsItemInfo["PriceUnit"].isNull())
			itemsObject.priceUnit = valueItemsItemInfo["PriceUnit"].asString();
		if(!valueItemsItemInfo["ActionPrice"].isNull())
			itemsObject.actionPrice = std::stoi(valueItemsItemInfo["ActionPrice"].asString());
		if(!valueItemsItemInfo["ItemBarCode"].isNull())
			itemsObject.itemBarCode = valueItemsItemInfo["ItemBarCode"].asString();
		if(!valueItemsItemInfo["ItemTitle"].isNull())
			itemsObject.itemTitle = valueItemsItemInfo["ItemTitle"].asString();
		if(!valueItemsItemInfo["ItemId"].isNull())
			itemsObject.itemId = std::stol(valueItemsItemInfo["ItemId"].asString());
		if(!valueItemsItemInfo["ModelNumber"].isNull())
			itemsObject.modelNumber = valueItemsItemInfo["ModelNumber"].asString();
		if(!valueItemsItemInfo["BrandName"].isNull())
			itemsObject.brandName = valueItemsItemInfo["BrandName"].asString();
		if(!valueItemsItemInfo["SaleSpec"].isNull())
			itemsObject.saleSpec = valueItemsItemInfo["SaleSpec"].asString();
		if(!valueItemsItemInfo["CategoryName"].isNull())
			itemsObject.categoryName = valueItemsItemInfo["CategoryName"].asString();
		if(!valueItemsItemInfo["Rank"].isNull())
			itemsObject.rank = valueItemsItemInfo["Rank"].asString();
		if(!valueItemsItemInfo["EnergyEfficiency"].isNull())
			itemsObject.energyEfficiency = valueItemsItemInfo["EnergyEfficiency"].asString();
		if(!valueItemsItemInfo["SkuId"].isNull())
			itemsObject.skuId = valueItemsItemInfo["SkuId"].asString();
		if(!valueItemsItemInfo["PromotionStart"].isNull())
			itemsObject.promotionStart = valueItemsItemInfo["PromotionStart"].asString();
		if(!valueItemsItemInfo["PromotionEnd"].isNull())
			itemsObject.promotionEnd = valueItemsItemInfo["PromotionEnd"].asString();
		if(!valueItemsItemInfo["PromotionText"].isNull())
			itemsObject.promotionText = valueItemsItemInfo["PromotionText"].asString();
		if(!valueItemsItemInfo["PromotionReason"].isNull())
			itemsObject.promotionReason = valueItemsItemInfo["PromotionReason"].asString();
		if(!valueItemsItemInfo["BePromotion"].isNull())
			itemsObject.bePromotion = valueItemsItemInfo["BePromotion"].asString() == "true";
		if(!valueItemsItemInfo["ItemQrCode"].isNull())
			itemsObject.itemQrCode = valueItemsItemInfo["ItemQrCode"].asString();
		if(!valueItemsItemInfo["OriginalPrice"].isNull())
			itemsObject.originalPrice = std::stoi(valueItemsItemInfo["OriginalPrice"].asString());
		if(!valueItemsItemInfo["MemberPrice"].isNull())
			itemsObject.memberPrice = std::stoi(valueItemsItemInfo["MemberPrice"].asString());
		if(!valueItemsItemInfo["SuggestPrice"].isNull())
			itemsObject.suggestPrice = std::stoi(valueItemsItemInfo["SuggestPrice"].asString());
		if(!valueItemsItemInfo["ItemShortTitle"].isNull())
			itemsObject.itemShortTitle = valueItemsItemInfo["ItemShortTitle"].asString();
		if(!valueItemsItemInfo["OptionGroups"].isNull())
			itemsObject.optionGroups = valueItemsItemInfo["OptionGroups"].asString();
		if(!valueItemsItemInfo["ProductionPlace"].isNull())
			itemsObject.productionPlace = valueItemsItemInfo["ProductionPlace"].asString();
		if(!valueItemsItemInfo["PositionCode"].isNull())
			itemsObject.positionCode = valueItemsItemInfo["PositionCode"].asString();
		if(!valueItemsItemInfo["ExtraAttribute"].isNull())
			itemsObject.extraAttribute = valueItemsItemInfo["ExtraAttribute"].asString();
		if(!valueItemsItemInfo["BeSourceCode"].isNull())
			itemsObject.beSourceCode = valueItemsItemInfo["BeSourceCode"].asString() == "true";
		if(!valueItemsItemInfo["SourceCode"].isNull())
			itemsObject.sourceCode = valueItemsItemInfo["SourceCode"].asString();
		if(!valueItemsItemInfo["ForestFirstId"].isNull())
			itemsObject.forestFirstId = valueItemsItemInfo["ForestFirstId"].asString();
		if(!valueItemsItemInfo["ForestSecondId"].isNull())
			itemsObject.forestSecondId = valueItemsItemInfo["ForestSecondId"].asString();
		if(!valueItemsItemInfo["CustomizeFeatureA"].isNull())
			itemsObject.customizeFeatureA = valueItemsItemInfo["CustomizeFeatureA"].asString();
		if(!valueItemsItemInfo["CustomizeFeatureB"].isNull())
			itemsObject.customizeFeatureB = valueItemsItemInfo["CustomizeFeatureB"].asString();
		if(!valueItemsItemInfo["CustomizeFeatureC"].isNull())
			itemsObject.customizeFeatureC = valueItemsItemInfo["CustomizeFeatureC"].asString();
		if(!valueItemsItemInfo["CustomizeFeatureD"].isNull())
			itemsObject.customizeFeatureD = valueItemsItemInfo["CustomizeFeatureD"].asString();
		if(!valueItemsItemInfo["CustomizeFeatureE"].isNull())
			itemsObject.customizeFeatureE = valueItemsItemInfo["CustomizeFeatureE"].asString();
		if(!valueItemsItemInfo["CustomizeFeatureF"].isNull())
			itemsObject.customizeFeatureF = valueItemsItemInfo["CustomizeFeatureF"].asString();
		if(!valueItemsItemInfo["CustomizeFeatureG"].isNull())
			itemsObject.customizeFeatureG = valueItemsItemInfo["CustomizeFeatureG"].asString();
		if(!valueItemsItemInfo["CustomizeFeatureH"].isNull())
			itemsObject.customizeFeatureH = valueItemsItemInfo["CustomizeFeatureH"].asString();
		if(!valueItemsItemInfo["CustomizeFeatureI"].isNull())
			itemsObject.customizeFeatureI = valueItemsItemInfo["CustomizeFeatureI"].asString();
		if(!valueItemsItemInfo["CustomizeFeatureJ"].isNull())
			itemsObject.customizeFeatureJ = valueItemsItemInfo["CustomizeFeatureJ"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeItemsResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeItemsResult::getMessage()const
{
	return message_;
}

int DescribeItemsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeItemsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeItemsResult::ItemInfo> DescribeItemsResult::getItems()const
{
	return items_;
}

std::string DescribeItemsResult::getErrorCode()const
{
	return errorCode_;
}

bool DescribeItemsResult::getSuccess()const
{
	return success_;
}

