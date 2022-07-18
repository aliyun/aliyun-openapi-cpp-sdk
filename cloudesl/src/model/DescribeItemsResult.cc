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
		if(!valueItemsItemInfo["ActionPrice"].isNull())
			itemsObject.actionPrice = std::stoi(valueItemsItemInfo["ActionPrice"].asString());
		if(!valueItemsItemInfo["ItemTitle"].isNull())
			itemsObject.itemTitle = valueItemsItemInfo["ItemTitle"].asString();
		if(!valueItemsItemInfo["BrandName"].isNull())
			itemsObject.brandName = valueItemsItemInfo["BrandName"].asString();
		if(!valueItemsItemInfo["SourceCode"].isNull())
			itemsObject.sourceCode = valueItemsItemInfo["SourceCode"].asString();
		if(!valueItemsItemInfo["PriceUnit"].isNull())
			itemsObject.priceUnit = valueItemsItemInfo["PriceUnit"].asString();
		if(!valueItemsItemInfo["ForestFirstId"].isNull())
			itemsObject.forestFirstId = valueItemsItemInfo["ForestFirstId"].asString();
		if(!valueItemsItemInfo["CustomizeFeatureF"].isNull())
			itemsObject.customizeFeatureF = valueItemsItemInfo["CustomizeFeatureF"].asString();
		if(!valueItemsItemInfo["CustomizeFeatureA"].isNull())
			itemsObject.customizeFeatureA = valueItemsItemInfo["CustomizeFeatureA"].asString();
		if(!valueItemsItemInfo["CustomizeFeatureK"].isNull())
			itemsObject.customizeFeatureK = valueItemsItemInfo["CustomizeFeatureK"].asString();
		if(!valueItemsItemInfo["TemplateSceneId"].isNull())
			itemsObject.templateSceneId = valueItemsItemInfo["TemplateSceneId"].asString();
		if(!valueItemsItemInfo["CustomizeFeatureD"].isNull())
			itemsObject.customizeFeatureD = valueItemsItemInfo["CustomizeFeatureD"].asString();
		if(!valueItemsItemInfo["MemberPrice"].isNull())
			itemsObject.memberPrice = std::stoi(valueItemsItemInfo["MemberPrice"].asString());
		if(!valueItemsItemInfo["PromotionStart"].isNull())
			itemsObject.promotionStart = valueItemsItemInfo["PromotionStart"].asString();
		if(!valueItemsItemInfo["ModelNumber"].isNull())
			itemsObject.modelNumber = valueItemsItemInfo["ModelNumber"].asString();
		if(!valueItemsItemInfo["CategoryName"].isNull())
			itemsObject.categoryName = valueItemsItemInfo["CategoryName"].asString();
		if(!valueItemsItemInfo["CustomizeFeatureE"].isNull())
			itemsObject.customizeFeatureE = valueItemsItemInfo["CustomizeFeatureE"].asString();
		if(!valueItemsItemInfo["SuggestPrice"].isNull())
			itemsObject.suggestPrice = std::stoi(valueItemsItemInfo["SuggestPrice"].asString());
		if(!valueItemsItemInfo["SaleSpec"].isNull())
			itemsObject.saleSpec = valueItemsItemInfo["SaleSpec"].asString();
		if(!valueItemsItemInfo["PromotionText"].isNull())
			itemsObject.promotionText = valueItemsItemInfo["PromotionText"].asString();
		if(!valueItemsItemInfo["Rank"].isNull())
			itemsObject.rank = valueItemsItemInfo["Rank"].asString();
		if(!valueItemsItemInfo["PromotionReason"].isNull())
			itemsObject.promotionReason = valueItemsItemInfo["PromotionReason"].asString();
		if(!valueItemsItemInfo["CustomizeFeatureG"].isNull())
			itemsObject.customizeFeatureG = valueItemsItemInfo["CustomizeFeatureG"].asString();
		if(!valueItemsItemInfo["SalesPrice"].isNull())
			itemsObject.salesPrice = std::stoi(valueItemsItemInfo["SalesPrice"].asString());
		if(!valueItemsItemInfo["CustomizeFeatureH"].isNull())
			itemsObject.customizeFeatureH = valueItemsItemInfo["CustomizeFeatureH"].asString();
		if(!valueItemsItemInfo["OriginalPrice"].isNull())
			itemsObject.originalPrice = std::stoi(valueItemsItemInfo["OriginalPrice"].asString());
		if(!valueItemsItemInfo["GmtModified"].isNull())
			itemsObject.gmtModified = valueItemsItemInfo["GmtModified"].asString();
		if(!valueItemsItemInfo["CustomizeFeatureI"].isNull())
			itemsObject.customizeFeatureI = valueItemsItemInfo["CustomizeFeatureI"].asString();
		if(!valueItemsItemInfo["ProductionPlace"].isNull())
			itemsObject.productionPlace = valueItemsItemInfo["ProductionPlace"].asString();
		if(!valueItemsItemInfo["CustomizeFeatureB"].isNull())
			itemsObject.customizeFeatureB = valueItemsItemInfo["CustomizeFeatureB"].asString();
		if(!valueItemsItemInfo["ItemShortTitle"].isNull())
			itemsObject.itemShortTitle = valueItemsItemInfo["ItemShortTitle"].asString();
		if(!valueItemsItemInfo["CustomizeFeatureN"].isNull())
			itemsObject.customizeFeatureN = valueItemsItemInfo["CustomizeFeatureN"].asString();
		if(!valueItemsItemInfo["BeMember"].isNull())
			itemsObject.beMember = valueItemsItemInfo["BeMember"].asString() == "true";
		if(!valueItemsItemInfo["TaxFee"].isNull())
			itemsObject.taxFee = valueItemsItemInfo["TaxFee"].asString();
		if(!valueItemsItemInfo["InventoryStatus"].isNull())
			itemsObject.inventoryStatus = valueItemsItemInfo["InventoryStatus"].asString();
		if(!valueItemsItemInfo["SupplierName"].isNull())
			itemsObject.supplierName = valueItemsItemInfo["SupplierName"].asString();
		if(!valueItemsItemInfo["ItemPicUrl"].isNull())
			itemsObject.itemPicUrl = valueItemsItemInfo["ItemPicUrl"].asString();
		if(!valueItemsItemInfo["EnergyEfficiency"].isNull())
			itemsObject.energyEfficiency = valueItemsItemInfo["EnergyEfficiency"].asString();
		if(!valueItemsItemInfo["CustomizeFeatureL"].isNull())
			itemsObject.customizeFeatureL = valueItemsItemInfo["CustomizeFeatureL"].asString();
		if(!valueItemsItemInfo["CustomizeFeatureC"].isNull())
			itemsObject.customizeFeatureC = valueItemsItemInfo["CustomizeFeatureC"].asString();
		if(!valueItemsItemInfo["ItemId"].isNull())
			itemsObject.itemId = valueItemsItemInfo["ItemId"].asString();
		if(!valueItemsItemInfo["Manufacturer"].isNull())
			itemsObject.manufacturer = valueItemsItemInfo["Manufacturer"].asString();
		if(!valueItemsItemInfo["Material"].isNull())
			itemsObject.material = valueItemsItemInfo["Material"].asString();
		if(!valueItemsItemInfo["CustomizeFeatureO"].isNull())
			itemsObject.customizeFeatureO = valueItemsItemInfo["CustomizeFeatureO"].asString();
		if(!valueItemsItemInfo["CustomizeFeatureP"].isNull())
			itemsObject.customizeFeatureP = valueItemsItemInfo["CustomizeFeatureP"].asString();
		if(!valueItemsItemInfo["CustomizeFeatureQ"].isNull())
			itemsObject.customizeFeatureQ = valueItemsItemInfo["CustomizeFeatureQ"].asString();
		if(!valueItemsItemInfo["CustomizeFeatureR"].isNull())
			itemsObject.customizeFeatureR = valueItemsItemInfo["CustomizeFeatureR"].asString();
		if(!valueItemsItemInfo["CustomizeFeatureS"].isNull())
			itemsObject.customizeFeatureS = valueItemsItemInfo["CustomizeFeatureS"].asString();
		if(!valueItemsItemInfo["CustomizeFeatureT"].isNull())
			itemsObject.customizeFeatureT = valueItemsItemInfo["CustomizeFeatureT"].asString();
		if(!valueItemsItemInfo["CustomizeFeatureU"].isNull())
			itemsObject.customizeFeatureU = valueItemsItemInfo["CustomizeFeatureU"].asString();
		if(!valueItemsItemInfo["CustomizeFeatureV"].isNull())
			itemsObject.customizeFeatureV = valueItemsItemInfo["CustomizeFeatureV"].asString();
		if(!valueItemsItemInfo["CustomizeFeatureW"].isNull())
			itemsObject.customizeFeatureW = valueItemsItemInfo["CustomizeFeatureW"].asString();
		if(!valueItemsItemInfo["CustomizeFeatureX"].isNull())
			itemsObject.customizeFeatureX = valueItemsItemInfo["CustomizeFeatureX"].asString();
		if(!valueItemsItemInfo["CustomizeFeatureY"].isNull())
			itemsObject.customizeFeatureY = valueItemsItemInfo["CustomizeFeatureY"].asString();
		if(!valueItemsItemInfo["CustomizeFeatureZ"].isNull())
			itemsObject.customizeFeatureZ = valueItemsItemInfo["CustomizeFeatureZ"].asString();
		if(!valueItemsItemInfo["CustomizeFeatureJ"].isNull())
			itemsObject.customizeFeatureJ = valueItemsItemInfo["CustomizeFeatureJ"].asString();
		if(!valueItemsItemInfo["GmtCreate"].isNull())
			itemsObject.gmtCreate = valueItemsItemInfo["GmtCreate"].asString();
		if(!valueItemsItemInfo["CustomizeFeatureM"].isNull())
			itemsObject.customizeFeatureM = valueItemsItemInfo["CustomizeFeatureM"].asString();
		if(!valueItemsItemInfo["BePromotion"].isNull())
			itemsObject.bePromotion = valueItemsItemInfo["BePromotion"].asString() == "true";
		if(!valueItemsItemInfo["SkuId"].isNull())
			itemsObject.skuId = valueItemsItemInfo["SkuId"].asString();
		if(!valueItemsItemInfo["BeSourceCode"].isNull())
			itemsObject.beSourceCode = valueItemsItemInfo["BeSourceCode"].asString() == "true";
		if(!valueItemsItemInfo["ForestSecondId"].isNull())
			itemsObject.forestSecondId = valueItemsItemInfo["ForestSecondId"].asString();
		if(!valueItemsItemInfo["ItemQrCode"].isNull())
			itemsObject.itemQrCode = valueItemsItemInfo["ItemQrCode"].asString();
		if(!valueItemsItemInfo["ItemInfoIndex"].isNull())
			itemsObject.itemInfoIndex = std::stoi(valueItemsItemInfo["ItemInfoIndex"].asString());
		if(!valueItemsItemInfo["PromotionEnd"].isNull())
			itemsObject.promotionEnd = valueItemsItemInfo["PromotionEnd"].asString();
		if(!valueItemsItemInfo["ItemBarCode"].isNull())
			itemsObject.itemBarCode = valueItemsItemInfo["ItemBarCode"].asString();
		if(!valueItemsItemInfo["BeClearance"].isNull())
			itemsObject.beClearance = valueItemsItemInfo["BeClearance"].asString() == "true";
		items_.push_back(itemsObject);
	}
	if(!value["TemplateSceneId"].isNull())
		templateSceneId_ = value["TemplateSceneId"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
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

std::string DescribeItemsResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeItemsResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeItemsResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeItemsResult::getTemplateSceneId()const
{
	return templateSceneId_;
}

std::string DescribeItemsResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribeItemsResult::getCode()const
{
	return code_;
}

bool DescribeItemsResult::getSuccess()const
{
	return success_;
}

