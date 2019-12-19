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

#include <alibabacloud/reid/model/ListLocationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Reid;
using namespace AlibabaCloud::Reid::Model;

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
		auto allRectRoisNode = allLocationInfoItemsNode["RectRois"]["RectRoi"];
		for (auto allLocationInfoItemsNodeRectRoisRectRoi : allRectRoisNode)
		{
			LocationInfoItem::RectRoi rectRoisObject;
			auto allPointsNode = allRectRoisNode["Points"]["Point"];
			for (auto allRectRoisNodePointsPoint : allPointsNode)
			{
				LocationInfoItem::RectRoi::Point pointsObject;
				if(!allRectRoisNodePointsPoint["X"].isNull())
					pointsObject.x = std::stof(allRectRoisNodePointsPoint["X"].asString());
				if(!allRectRoisNodePointsPoint["Y"].isNull())
					pointsObject.y = std::stof(allRectRoisNodePointsPoint["Y"].asString());
				rectRoisObject.points.push_back(pointsObject);
			}
			locationInfoItemsObject.rectRois.push_back(rectRoisObject);
		}
		locationInfoItems_.push_back(locationInfoItemsObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<ListLocationResult::LocationInfoItem> ListLocationResult::getLocationInfoItems()const
{
	return locationInfoItems_;
}

std::string ListLocationResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListLocationResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListLocationResult::getSuccess()const
{
	return success_;
}

