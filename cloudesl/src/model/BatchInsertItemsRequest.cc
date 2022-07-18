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
	RpcServiceRequest("cloudesl", "2020-02-01", "BatchInsertItems")
{
	setMethod(HttpRequest::Method::Post);
}

BatchInsertItemsRequest::~BatchInsertItemsRequest()
{}

std::string BatchInsertItemsRequest::getExtraParams()const
{
	return extraParams_;
}

void BatchInsertItemsRequest::setExtraParams(const std::string& extraParams)
{
	extraParams_ = extraParams;
	setBodyParameter("ExtraParams", extraParams);
}

std::string BatchInsertItemsRequest::getStoreId()const
{
	return storeId_;
}

void BatchInsertItemsRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", storeId);
}

bool BatchInsertItemsRequest::getSyncByItemId()const
{
	return syncByItemId_;
}

void BatchInsertItemsRequest::setSyncByItemId(bool syncByItemId)
{
	syncByItemId_ = syncByItemId;
	setBodyParameter("SyncByItemId", syncByItemId ? "true" : "false");
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
		setParameter(itemInfoObjStr + ".BeSourceCode", itemInfoObj.beSourceCode ? "true" : "false");
		setParameter(itemInfoObjStr + ".BrandName", itemInfoObj.brandName);
		setParameter(itemInfoObjStr + ".PromotionStart", itemInfoObj.promotionStart);
		setParameter(itemInfoObjStr + ".PriceUnit", itemInfoObj.priceUnit);
		setParameter(itemInfoObjStr + ".Rank", itemInfoObj.rank);
		setParameter(itemInfoObjStr + ".ItemInfoIndex", std::to_string(itemInfoObj.itemInfoIndex));
		setParameter(itemInfoObjStr + ".ItemBarCode", itemInfoObj.itemBarCode);
		setParameter(itemInfoObjStr + ".CustomizeFeatureK", itemInfoObj.customizeFeatureK);
		setParameter(itemInfoObjStr + ".CustomizeFeatureL", itemInfoObj.customizeFeatureL);
		setParameter(itemInfoObjStr + ".CustomizeFeatureM", itemInfoObj.customizeFeatureM);
		setParameter(itemInfoObjStr + ".CustomizeFeatureN", itemInfoObj.customizeFeatureN);
		setParameter(itemInfoObjStr + ".BePromotion", itemInfoObj.bePromotion ? "true" : "false");
		setParameter(itemInfoObjStr + ".CustomizeFeatureO", itemInfoObj.customizeFeatureO);
		setParameter(itemInfoObjStr + ".CustomizeFeatureP", itemInfoObj.customizeFeatureP);
		setParameter(itemInfoObjStr + ".PromotionEnd", itemInfoObj.promotionEnd);
		setParameter(itemInfoObjStr + ".ItemTitle", itemInfoObj.itemTitle);
		setParameter(itemInfoObjStr + ".CustomizeFeatureQ", itemInfoObj.customizeFeatureQ);
		setParameter(itemInfoObjStr + ".CustomizeFeatureR", itemInfoObj.customizeFeatureR);
		setParameter(itemInfoObjStr + ".CustomizeFeatureC", itemInfoObj.customizeFeatureC);
		setParameter(itemInfoObjStr + ".CustomizeFeatureD", itemInfoObj.customizeFeatureD);
		setParameter(itemInfoObjStr + ".ItemQrCode", itemInfoObj.itemQrCode);
		setParameter(itemInfoObjStr + ".CustomizeFeatureE", itemInfoObj.customizeFeatureE);
		setParameter(itemInfoObjStr + ".PromotionReason", itemInfoObj.promotionReason);
		setParameter(itemInfoObjStr + ".InventoryStatus", itemInfoObj.inventoryStatus);
		setParameter(itemInfoObjStr + ".CustomizeFeatureF", itemInfoObj.customizeFeatureF);
		setParameter(itemInfoObjStr + ".CustomizeFeatureG", itemInfoObj.customizeFeatureG);
		setParameter(itemInfoObjStr + ".CustomizeFeatureH", itemInfoObj.customizeFeatureH);
		setParameter(itemInfoObjStr + ".CustomizeFeatureI", itemInfoObj.customizeFeatureI);
		setParameter(itemInfoObjStr + ".CustomizeFeatureJ", itemInfoObj.customizeFeatureJ);
		setParameter(itemInfoObjStr + ".CustomizeFeatureA", itemInfoObj.customizeFeatureA);
		setParameter(itemInfoObjStr + ".CustomizeFeatureB", itemInfoObj.customizeFeatureB);
		setParameter(itemInfoObjStr + ".SuggestPrice", std::to_string(itemInfoObj.suggestPrice));
		setParameter(itemInfoObjStr + ".ForestFirstId", itemInfoObj.forestFirstId);
		setParameter(itemInfoObjStr + ".ProductionPlace", itemInfoObj.productionPlace);
		setParameter(itemInfoObjStr + ".SourceCode", itemInfoObj.sourceCode);
		setParameter(itemInfoObjStr + ".Manufacturer", itemInfoObj.manufacturer);
		setParameter(itemInfoObjStr + ".ItemId", itemInfoObj.itemId);
		setParameter(itemInfoObjStr + ".BeMember", itemInfoObj.beMember ? "true" : "false");
		setParameter(itemInfoObjStr + ".CustomizeFeatureS", itemInfoObj.customizeFeatureS);
		setParameter(itemInfoObjStr + ".CustomizeFeatureT", itemInfoObj.customizeFeatureT);
		setParameter(itemInfoObjStr + ".CustomizeFeatureU", itemInfoObj.customizeFeatureU);
		setParameter(itemInfoObjStr + ".TemplateSceneId", itemInfoObj.templateSceneId);
		setParameter(itemInfoObjStr + ".CustomizeFeatureV", itemInfoObj.customizeFeatureV);
		setParameter(itemInfoObjStr + ".CustomizeFeatureW", itemInfoObj.customizeFeatureW);
		setParameter(itemInfoObjStr + ".CustomizeFeatureX", itemInfoObj.customizeFeatureX);
		setParameter(itemInfoObjStr + ".CustomizeFeatureY", itemInfoObj.customizeFeatureY);
		setParameter(itemInfoObjStr + ".CustomizeFeatureZ", itemInfoObj.customizeFeatureZ);
		setParameter(itemInfoObjStr + ".SalesPrice", std::to_string(itemInfoObj.salesPrice));
		setParameter(itemInfoObjStr + ".OriginalPrice", std::to_string(itemInfoObj.originalPrice));
		setParameter(itemInfoObjStr + ".ItemShortTitle", itemInfoObj.itemShortTitle);
		setParameter(itemInfoObjStr + ".ItemPicUrl", itemInfoObj.itemPicUrl);
		setParameter(itemInfoObjStr + ".ForestSecondId", itemInfoObj.forestSecondId);
		setParameter(itemInfoObjStr + ".SupplierName", itemInfoObj.supplierName);
		setParameter(itemInfoObjStr + ".BeClearance", itemInfoObj.beClearance ? "true" : "false");
		setParameter(itemInfoObjStr + ".Material", itemInfoObj.material);
		setParameter(itemInfoObjStr + ".ModelNumber", itemInfoObj.modelNumber);
		setParameter(itemInfoObjStr + ".SaleSpec", itemInfoObj.saleSpec);
		setParameter(itemInfoObjStr + ".CategoryName", itemInfoObj.categoryName);
		setParameter(itemInfoObjStr + ".TaxFee", itemInfoObj.taxFee);
		setParameter(itemInfoObjStr + ".EnergyEfficiency", itemInfoObj.energyEfficiency);
		setParameter(itemInfoObjStr + ".PromotionText", itemInfoObj.promotionText);
		setParameter(itemInfoObjStr + ".SkuId", itemInfoObj.skuId);
	}
}

