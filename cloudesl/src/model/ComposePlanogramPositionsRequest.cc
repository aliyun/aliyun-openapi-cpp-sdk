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

#include <alibabacloud/cloudesl/model/ComposePlanogramPositionsRequest.h>

using AlibabaCloud::Cloudesl::Model::ComposePlanogramPositionsRequest;

ComposePlanogramPositionsRequest::ComposePlanogramPositionsRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "ComposePlanogramPositions")
{
	setMethod(HttpRequest::Method::Post);
}

ComposePlanogramPositionsRequest::~ComposePlanogramPositionsRequest()
{}

std::string ComposePlanogramPositionsRequest::getActionType()const
{
	return actionType_;
}

void ComposePlanogramPositionsRequest::setActionType(const std::string& actionType)
{
	actionType_ = actionType;
	setBodyParameter("ActionType", actionType);
}

std::string ComposePlanogramPositionsRequest::getExtraParams()const
{
	return extraParams_;
}

void ComposePlanogramPositionsRequest::setExtraParams(const std::string& extraParams)
{
	extraParams_ = extraParams;
	setBodyParameter("ExtraParams", extraParams);
}

std::string ComposePlanogramPositionsRequest::getStoreId()const
{
	return storeId_;
}

void ComposePlanogramPositionsRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", storeId);
}

int ComposePlanogramPositionsRequest::getLayer()const
{
	return layer_;
}

void ComposePlanogramPositionsRequest::setLayer(int layer)
{
	layer_ = layer;
	setBodyParameter("Layer", std::to_string(layer));
}

std::string ComposePlanogramPositionsRequest::getLayerOrigin()const
{
	return layerOrigin_;
}

void ComposePlanogramPositionsRequest::setLayerOrigin(const std::string& layerOrigin)
{
	layerOrigin_ = layerOrigin;
	setBodyParameter("LayerOrigin", layerOrigin);
}

bool ComposePlanogramPositionsRequest::getBeAutoRefresh()const
{
	return beAutoRefresh_;
}

void ComposePlanogramPositionsRequest::setBeAutoRefresh(bool beAutoRefresh)
{
	beAutoRefresh_ = beAutoRefresh;
	setBodyParameter("BeAutoRefresh", beAutoRefresh ? "true" : "false");
}

std::string ComposePlanogramPositionsRequest::getShelf()const
{
	return shelf_;
}

void ComposePlanogramPositionsRequest::setShelf(const std::string& shelf)
{
	shelf_ = shelf;
	setBodyParameter("Shelf", shelf);
}

std::vector<ComposePlanogramPositionsRequest::ShelfPositionInfo> ComposePlanogramPositionsRequest::getShelfPositionInfo()const
{
	return shelfPositionInfo_;
}

void ComposePlanogramPositionsRequest::setShelfPositionInfo(const std::vector<ShelfPositionInfo>& shelfPositionInfo)
{
	shelfPositionInfo_ = shelfPositionInfo;
	for(int dep1 = 0; dep1!= shelfPositionInfo.size(); dep1++) {
		auto shelfPositionInfoObj = shelfPositionInfo.at(dep1);
		std::string shelfPositionInfoObjStr = "ShelfPositionInfo." + std::to_string(dep1 + 1);
		setParameter(shelfPositionInfoObjStr + ".OffsetFrom", std::to_string(shelfPositionInfoObj.offsetFrom));
		setParameter(shelfPositionInfoObjStr + ".Depth", std::to_string(shelfPositionInfoObj.depth));
		setParameter(shelfPositionInfoObjStr + ".Column", shelfPositionInfoObj.column);
		setParameter(shelfPositionInfoObjStr + ".Facing", std::to_string(shelfPositionInfoObj.facing));
		setParameter(shelfPositionInfoObjStr + ".OffsetTo", std::to_string(shelfPositionInfoObj.offsetTo));
		setParameter(shelfPositionInfoObjStr + ".ItemBarCode", shelfPositionInfoObj.itemBarCode);
	}
}

