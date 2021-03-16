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

#include <alibabacloud/reid_cloud/model/ListLocationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Reid_cloud;
using namespace AlibabaCloud::Reid_cloud::Model;

ListLocationResult::ListLocationResult() :
	ServiceResult()
{}

ListLocationResult::ListLocationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLocationResult::~ListLocationResult()
{}

void ListLocationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLocationInfoItemsNode = value["LocationInfoItems"]["LocationInfoItem"];
	for (auto valueLocationInfoItemsLocationInfoItem : allLocationInfoItemsNode)
	{
		LocationInfoItem locationInfoItemsObject;
		if(!valueLocationInfoItemsLocationInfoItem["ExternalId"].isNull())
			locationInfoItemsObject.externalId = valueLocationInfoItemsLocationInfoItem["ExternalId"].asString();
		if(!valueLocationInfoItemsLocationInfoItem["LocationType"].isNull())
			locationInfoItemsObject.locationType = valueLocationInfoItemsLocationInfoItem["LocationType"].asString();
		if(!valueLocationInfoItemsLocationInfoItem["Status"].isNull())
			locationInfoItemsObject.status = std::stoi(valueLocationInfoItemsLocationInfoItem["Status"].asString());
		if(!valueLocationInfoItemsLocationInfoItem["StoreId"].isNull())
			locationInfoItemsObject.storeId = std::stol(valueLocationInfoItemsLocationInfoItem["StoreId"].asString());
		if(!valueLocationInfoItemsLocationInfoItem["GmtCreate"].isNull())
			locationInfoItemsObject.gmtCreate = std::stol(valueLocationInfoItemsLocationInfoItem["GmtCreate"].asString());
		if(!valueLocationInfoItemsLocationInfoItem["ParentLocationId"].isNull())
			locationInfoItemsObject.parentLocationId = std::stol(valueLocationInfoItemsLocationInfoItem["ParentLocationId"].asString());
		if(!valueLocationInfoItemsLocationInfoItem["GmtModified"].isNull())
			locationInfoItemsObject.gmtModified = std::stol(valueLocationInfoItemsLocationInfoItem["GmtModified"].asString());
		if(!valueLocationInfoItemsLocationInfoItem["LocationName"].isNull())
			locationInfoItemsObject.locationName = valueLocationInfoItemsLocationInfoItem["LocationName"].asString();
		if(!valueLocationInfoItemsLocationInfoItem["LayerType"].isNull())
			locationInfoItemsObject.layerType = valueLocationInfoItemsLocationInfoItem["LayerType"].asString();
		if(!valueLocationInfoItemsLocationInfoItem["LocationId"].isNull())
			locationInfoItemsObject.locationId = std::stol(valueLocationInfoItemsLocationInfoItem["LocationId"].asString());
		auto allRectRoisNode = valueLocationInfoItemsLocationInfoItem["RectRois"]["RectRoi"];
		for (auto valueLocationInfoItemsLocationInfoItemRectRoisRectRoi : allRectRoisNode)
		{
			LocationInfoItem::RectRoi rectRoisObject;
			auto allPointsNode = valueLocationInfoItemsLocationInfoItemRectRoisRectRoi["Points"]["Point"];
			for (auto valueLocationInfoItemsLocationInfoItemRectRoisRectRoiPointsPoint : allPointsNode)
			{
				LocationInfoItem::RectRoi::Point pointsObject;
				if(!valueLocationInfoItemsLocationInfoItemRectRoisRectRoiPointsPoint["X"].isNull())
					pointsObject.x = std::stof(valueLocationInfoItemsLocationInfoItemRectRoisRectRoiPointsPoint["X"].asString());
				if(!valueLocationInfoItemsLocationInfoItemRectRoisRectRoiPointsPoint["Y"].isNull())
					pointsObject.y = std::stof(valueLocationInfoItemsLocationInfoItemRectRoisRectRoiPointsPoint["Y"].asString());
				rectRoisObject.points.push_back(pointsObject);
			}
			auto rightBottomNode = value["RightBottom"];
			if(!rightBottomNode["X"].isNull())
				rectRoisObject.rightBottom.x = std::stof(rightBottomNode["X"].asString());
			if(!rightBottomNode["Y"].isNull())
				rectRoisObject.rightBottom.y = std::stof(rightBottomNode["Y"].asString());
			auto leftTopNode = value["LeftTop"];
			if(!leftTopNode["X"].isNull())
				rectRoisObject.leftTop.x = std::stof(leftTopNode["X"].asString());
			if(!leftTopNode["Y"].isNull())
				rectRoisObject.leftTop.y = std::stof(leftTopNode["Y"].asString());
			locationInfoItemsObject.rectRois.push_back(rectRoisObject);
		}
		locationInfoItems_.push_back(locationInfoItemsObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();

}

std::vector<ListLocationResult::LocationInfoItem> ListLocationResult::getLocationInfoItems()const
{
	return locationInfoItems_;
}

std::string ListLocationResult::getMessage()const
{
	return message_;
}

std::string ListLocationResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string ListLocationResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListLocationResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string ListLocationResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string ListLocationResult::getCode()const
{
	return code_;
}

bool ListLocationResult::getSuccess()const
{
	return success_;
}

