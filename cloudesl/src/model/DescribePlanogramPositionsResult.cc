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
		auto allShelfPositionInfosNode = allLayerInfosNode["ShelfPositionInfos"]["ShelfPositionInfo"];
		for (auto allLayerInfosNodeShelfPositionInfosShelfPositionInfo : allShelfPositionInfosNode)
		{
			LayerInfo::ShelfPositionInfo shelfPositionInfosObject;
			if(!allLayerInfosNodeShelfPositionInfosShelfPositionInfo["Column"].isNull())
				shelfPositionInfosObject.column = allLayerInfosNodeShelfPositionInfosShelfPositionInfo["Column"].asString();
			if(!allLayerInfosNodeShelfPositionInfosShelfPositionInfo["Depth"].isNull())
				shelfPositionInfosObject.depth = std::stof(allLayerInfosNodeShelfPositionInfosShelfPositionInfo["Depth"].asString());
			if(!allLayerInfosNodeShelfPositionInfosShelfPositionInfo["Facing"].isNull())
				shelfPositionInfosObject.facing = std::stoi(allLayerInfosNodeShelfPositionInfosShelfPositionInfo["Facing"].asString());
			if(!allLayerInfosNodeShelfPositionInfosShelfPositionInfo["ItemBarCode"].isNull())
				shelfPositionInfosObject.itemBarCode = allLayerInfosNodeShelfPositionInfosShelfPositionInfo["ItemBarCode"].asString();
			if(!allLayerInfosNodeShelfPositionInfosShelfPositionInfo["ItemTitle"].isNull())
				shelfPositionInfosObject.itemTitle = allLayerInfosNodeShelfPositionInfosShelfPositionInfo["ItemTitle"].asString();
			if(!allLayerInfosNodeShelfPositionInfosShelfPositionInfo["OffsetFrom"].isNull())
				shelfPositionInfosObject.offsetFrom = std::stof(allLayerInfosNodeShelfPositionInfosShelfPositionInfo["OffsetFrom"].asString());
			if(!allLayerInfosNodeShelfPositionInfosShelfPositionInfo["OffsetTo"].isNull())
				shelfPositionInfosObject.offsetTo = std::stof(allLayerInfosNodeShelfPositionInfosShelfPositionInfo["OffsetTo"].asString());
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

}

std::string DescribePlanogramPositionsResult::getMessage()const
{
	return message_;
}

std::string DescribePlanogramPositionsResult::getStoreId()const
{
	return storeId_;
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

