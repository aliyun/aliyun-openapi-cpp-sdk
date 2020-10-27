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

#include <alibabacloud/cloudesl/model/BatchInsertItemsRequest.h>

using AlibabaCloud::Cloudesl::Model::BatchInsertItemsRequest;

BatchInsertItemsRequest::BatchInsertItemsRequest() :
	RpcServiceRequest("cloudesl", "2018-08-01", "BatchInsertItems")
{
	setMethod(HttpRequest::Method::Post);
}

BatchInsertItemsRequest::~BatchInsertItemsRequest()
{}

std::string BatchInsertItemsRequest::getStoreId()const
{
	return storeId_;
}

void BatchInsertItemsRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setParameter("StoreId", storeId);
}

std::vector<BatchInsertItemsRequest::ItemInfo> BatchInsertItemsRequest::getItemInfo()const
{
	return itemInfo_;
}

void BatchInsertItemsRequest::setItemInfo(const std::vector<ItemInfo>& itemInfo)
{
	itemInfo_ = itemInfo;
	for(int dep1 = 0; dep1!= itemInfo.size(); dep1++) {
		auto itemInfoObj = itemInfo.at(dep1);
		std::string itemInfoObjStr = "ItemInfo." + std::to_string(dep1 + 1);
		setParameter(itemInfoObjStr + ".MemberPrice", std::to_string(itemInfoObj.memberPrice));
		setParameter(itemInfoObjStr + ".ActionPrice", std::to_string(itemInfoObj.actionPrice));
		setParameter(itemInfoObjStr + ".ProductionPlace", itemInfoObj.productionPlace);
		setParameter(itemInfoObjStr + ".BeSourceCode", itemInfoObj.beSourceCode ? "true" : "false");
		setParameter(itemInfoObjStr + ".StoreId", itemInfoObj.storeId);
		setParameter(itemInfoObjStr + ".BrandName", itemInfoObj.brandName);
		setParameter(itemInfoObjStr + ".PromotionStart", itemInfoObj.promotionStart);
		setParameter(itemInfoObjStr + ".SourceCode", itemInfoObj.sourceCode);
		setParameter(itemInfoObjStr + ".ItemId", std::to_string(itemInfoObj.itemId));
		setParameter(itemInfoObjStr + ".ExtraAttribute", itemInfoObj.extraAttribute);
		setParameter(itemInfoObjStr + ".CompanyId", itemInfoObj.companyId);
		setParameter(itemInfoObjStr + ".PriceUnit", itemInfoObj.priceUnit);
		setParameter(itemInfoObjStr + ".Rank", itemInfoObj.rank);
		setParameter(itemInfoObjStr + ".ItemBarCode", itemInfoObj.itemBarCode);
		setParameter(itemInfoObjStr + ".BePromotion", itemInfoObj.bePromotion ? "true" : "false");
		setParameter(itemInfoObjStr + ".PromotionEnd", itemInfoObj.promotionEnd);
		setParameter(itemInfoObjStr + ".ItemTitle", itemInfoObj.itemTitle);
		setParameter(itemInfoObjStr + ".OriginalPrice", std::to_string(itemInfoObj.originalPrice));
		setParameter(itemInfoObjStr + ".ItemShortTitle", itemInfoObj.itemShortTitle);
		setParameter(itemInfoObjStr + ".CustomizeFeatureC", itemInfoObj.customizeFeatureC);
		setParameter(itemInfoObjStr + ".ItemQrCode", itemInfoObj.itemQrCode);
		setParameter(itemInfoObjStr + ".CustomizeFeatureD", itemInfoObj.customizeFeatureD);
		setParameter(itemInfoObjStr + ".PromotionReason", itemInfoObj.promotionReason);
		setParameter(itemInfoObjStr + ".CustomizeFeatureE", itemInfoObj.customizeFeatureE);
		setParameter(itemInfoObjStr + ".CustomizeFeatureF", itemInfoObj.customizeFeatureF);
		setParameter(itemInfoObjStr + ".ForestSecondId", itemInfoObj.forestSecondId);
		setParameter(itemInfoObjStr + ".CustomizeFeatureG", itemInfoObj.customizeFeatureG);
		setParameter(itemInfoObjStr + ".CustomizeFeatureH", itemInfoObj.customizeFeatureH);
		setParameter(itemInfoObjStr + ".CustomizeFeatureI", itemInfoObj.customizeFeatureI);
		setParameter(itemInfoObjStr + ".CustomizeFeatureJ", itemInfoObj.customizeFeatureJ);
		setParameter(itemInfoObjStr + ".OptionGroups", itemInfoObj.optionGroups);
		setParameter(itemInfoObjStr + ".ModelNumber", itemInfoObj.modelNumber);
		setParameter(itemInfoObjStr + ".SaleSpec", itemInfoObj.saleSpec);
		setParameter(itemInfoObjStr + ".CustomizeFeatureA", itemInfoObj.customizeFeatureA);
		setParameter(itemInfoObjStr + ".CustomizeFeatureB", itemInfoObj.customizeFeatureB);
		setParameter(itemInfoObjStr + ".SuggestPrice", std::to_string(itemInfoObj.suggestPrice));
		setParameter(itemInfoObjStr + ".ForestFirstId", itemInfoObj.forestFirstId);
		setParameter(itemInfoObjStr + ".CategoryName", itemInfoObj.categoryName);
		setParameter(itemInfoObjStr + ".EnergyEfficiency", itemInfoObj.energyEfficiency);
		setParameter(itemInfoObjStr + ".SkuId", itemInfoObj.skuId);
		setParameter(itemInfoObjStr + ".PromotionText", itemInfoObj.promotionText);
	}
}

