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

#include <alibabacloud/cusanalytic_sc_online/model/DescribeLocationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cusanalytic_sc_online;
using namespace AlibabaCloud::Cusanalytic_sc_online::Model;

DescribeLocationsResult::DescribeLocationsResult() :
	ServiceResult()
{}

DescribeLocationsResult::DescribeLocationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLocationsResult::~DescribeLocationsResult()
{}

void DescribeLocationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLocationMsgItemsNode = value["LocationMsgItems"]["LocationMsgItem"];
	for (auto valueLocationMsgItemsLocationMsgItem : allLocationMsgItemsNode)
	{
		LocationMsgItem locationMsgItemsObject;
		if(!valueLocationMsgItemsLocationMsgItem["Tag"].isNull())
			locationMsgItemsObject.tag = valueLocationMsgItemsLocationMsgItem["Tag"].asString();
		if(!valueLocationMsgItemsLocationMsgItem["Id"].isNull())
			locationMsgItemsObject.id = std::stol(valueLocationMsgItemsLocationMsgItem["Id"].asString());
		if(!valueLocationMsgItemsLocationMsgItem["ExtId"].isNull())
			locationMsgItemsObject.extId = valueLocationMsgItemsLocationMsgItem["ExtId"].asString();
		if(!valueLocationMsgItemsLocationMsgItem["LocationType"].isNull())
			locationMsgItemsObject.locationType = valueLocationMsgItemsLocationMsgItem["LocationType"].asString();
		if(!valueLocationMsgItemsLocationMsgItem["Name"].isNull())
			locationMsgItemsObject.name = valueLocationMsgItemsLocationMsgItem["Name"].asString();
		if(!valueLocationMsgItemsLocationMsgItem["Status"].isNull())
			locationMsgItemsObject.status = std::stol(valueLocationMsgItemsLocationMsgItem["Status"].asString());
		if(!valueLocationMsgItemsLocationMsgItem["GmtCreate"].isNull())
			locationMsgItemsObject.gmtCreate = valueLocationMsgItemsLocationMsgItem["GmtCreate"].asString();
		if(!valueLocationMsgItemsLocationMsgItem["StoreId"].isNull())
			locationMsgItemsObject.storeId = std::stol(valueLocationMsgItemsLocationMsgItem["StoreId"].asString());
		if(!valueLocationMsgItemsLocationMsgItem["GmtModified"].isNull())
			locationMsgItemsObject.gmtModified = valueLocationMsgItemsLocationMsgItem["GmtModified"].asString();
		if(!valueLocationMsgItemsLocationMsgItem["ParentLocationId"].isNull())
			locationMsgItemsObject.parentLocationId = std::stol(valueLocationMsgItemsLocationMsgItem["ParentLocationId"].asString());
		if(!valueLocationMsgItemsLocationMsgItem["LayerType"].isNull())
			locationMsgItemsObject.layerType = valueLocationMsgItemsLocationMsgItem["LayerType"].asString();
		auto allRectRoisNode = allLocationMsgItemsNode["RectRois"]["RectRoi"];
		for (auto allLocationMsgItemsNodeRectRoisRectRoi : allRectRoisNode)
		{
			LocationMsgItem::RectRoi rectRoisObject;
			auto allPointsNode = allRectRoisNode["Points"]["Point"];
			for (auto allRectRoisNodePointsPoint : allPointsNode)
			{
				LocationMsgItem::RectRoi::Point pointsObject;
				if(!allRectRoisNodePointsPoint["X"].isNull())
					pointsObject.x = std::stof(allRectRoisNodePointsPoint["X"].asString());
				if(!allRectRoisNodePointsPoint["Y"].isNull())
					pointsObject.y = std::stof(allRectRoisNodePointsPoint["Y"].asString());
				rectRoisObject.points.push_back(pointsObject);
			}
			auto leftTopNode = value["LeftTop"];
			if(!leftTopNode["X"].isNull())
				rectRoisObject.leftTop.x = std::stof(leftTopNode["X"].asString());
			if(!leftTopNode["Y"].isNull())
				rectRoisObject.leftTop.y = std::stof(leftTopNode["Y"].asString());
			auto rightBottomNode = value["RightBottom"];
			if(!rightBottomNode["X"].isNull())
				rectRoisObject.rightBottom.x = std::stof(rightBottomNode["X"].asString());
			if(!rightBottomNode["Y"].isNull())
				rectRoisObject.rightBottom.y = std::stof(rightBottomNode["Y"].asString());
			locationMsgItemsObject.rectRois.push_back(rectRoisObject);
		}
		locationMsgItems_.push_back(locationMsgItemsObject);
	}
	if(!value["StoreId"].isNull())
		storeId_ = value["StoreId"].asString();

}

std::string DescribeLocationsResult::getStoreId()const
{
	return storeId_;
}

std::vector<DescribeLocationsResult::LocationMsgItem> DescribeLocationsResult::getLocationMsgItems()const
{
	return locationMsgItems_;
}

