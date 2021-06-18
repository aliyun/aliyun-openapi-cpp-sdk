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

#include <alibabacloud/cloudesl/model/DescribePlanogramPositionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

DescribePlanogramPositionsResult::DescribePlanogramPositionsResult() :
	ServiceResult()
{}

DescribePlanogramPositionsResult::DescribePlanogramPositionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePlanogramPositionsResult::~DescribePlanogramPositionsResult()
{}

void DescribePlanogramPositionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLayerInfosNode = value["LayerInfos"]["LayerInfo"];
	for (auto valueLayerInfosLayerInfo : allLayerInfosNode)
	{
		LayerInfo layerInfosObject;
		if(!valueLayerInfosLayerInfo["Layer"].isNull())
			layerInfosObject.layer = std::stoi(valueLayerInfosLayerInfo["Layer"].asString());
		if(!valueLayerInfosLayerInfo["LayerOrigin"].isNull())
			layerInfosObject.layerOrigin = valueLayerInfosLayerInfo["LayerOrigin"].asString();
		if(!valueLayerInfosLayerInfo["RailCode"].isNull())
			layerInfosObject.railCode = valueLayerInfosLayerInfo["RailCode"].asString();
		auto allShelfPositionInfosNode = valueLayerInfosLayerInfo["ShelfPositionInfos"]["ShelfPositionInfo"];
		for (auto valueLayerInfosLayerInfoShelfPositionInfosShelfPositionInfo : allShelfPositionInfosNode)
		{
			LayerInfo::ShelfPositionInfo shelfPositionInfosObject;
			if(!valueLayerInfosLayerInfoShelfPositionInfosShelfPositionInfo["Column"].isNull())
				shelfPositionInfosObject.column = valueLayerInfosLayerInfoShelfPositionInfosShelfPositionInfo["Column"].asString();
			if(!valueLayerInfosLayerInfoShelfPositionInfosShelfPositionInfo["Depth"].isNull())
				shelfPositionInfosObject.depth = std::stof(valueLayerInfosLayerInfoShelfPositionInfosShelfPositionInfo["Depth"].asString());
			if(!valueLayerInfosLayerInfoShelfPositionInfosShelfPositionInfo["Facing"].isNull())
				shelfPositionInfosObject.facing = std::stoi(valueLayerInfosLayerInfoShelfPositionInfosShelfPositionInfo["Facing"].asString());
			if(!valueLayerInfosLayerInfoShelfPositionInfosShelfPositionInfo["ItemBarCode"].isNull())
				shelfPositionInfosObject.itemBarCode = valueLayerInfosLayerInfoShelfPositionInfosShelfPositionInfo["ItemBarCode"].asString();
			if(!valueLayerInfosLayerInfoShelfPositionInfosShelfPositionInfo["ItemTitle"].isNull())
				shelfPositionInfosObject.itemTitle = valueLayerInfosLayerInfoShelfPositionInfosShelfPositionInfo["ItemTitle"].asString();
			if(!valueLayerInfosLayerInfoShelfPositionInfosShelfPositionInfo["OffsetFrom"].isNull())
				shelfPositionInfosObject.offsetFrom = std::stof(valueLayerInfosLayerInfoShelfPositionInfosShelfPositionInfo["OffsetFrom"].asString());
			if(!valueLayerInfosLayerInfoShelfPositionInfosShelfPositionInfo["OffsetTo"].isNull())
				shelfPositionInfosObject.offsetTo = std::stof(valueLayerInfosLayerInfoShelfPositionInfosShelfPositionInfo["OffsetTo"].asString());
			layerInfosObject.shelfPositionInfos.push_back(shelfPositionInfosObject);
		}
		layerInfos_.push_back(layerInfosObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Shelf"].isNull())
		shelf_ = value["Shelf"].asString();
	if(!value["StoreId"].isNull())
		storeId_ = value["StoreId"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ShelfType"].isNull())
		shelfType_ = value["ShelfType"].asString();

}

std::string DescribePlanogramPositionsResult::getMessage()const
{
	return message_;
}

std::string DescribePlanogramPositionsResult::getStoreId()const
{
	return storeId_;
}

std::string DescribePlanogramPositionsResult::getShelfType()const
{
	return shelfType_;
}

std::string DescribePlanogramPositionsResult::getShelf()const
{
	return shelf_;
}

std::string DescribePlanogramPositionsResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::vector<DescribePlanogramPositionsResult::LayerInfo> DescribePlanogramPositionsResult::getLayerInfos()const
{
	return layerInfos_;
}

std::string DescribePlanogramPositionsResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribePlanogramPositionsResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribePlanogramPositionsResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribePlanogramPositionsResult::getCode()const
{
	return code_;
}

bool DescribePlanogramPositionsResult::getSuccess()const
{
	return success_;
}

