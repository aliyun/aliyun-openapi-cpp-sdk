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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allLocationMsgItems = value["LocationMsgItems"]["LocationMsgItem"];
	for (auto value : allLocationMsgItems)
	{
		LocationMsgItem locationMsgItemsObject;
		if(!value["Tag"].isNull())
			locationMsgItemsObject.tag = value["Tag"].asString();
		if(!value["Id"].isNull())
			locationMsgItemsObject.id = std::stol(value["Id"].asString());
		if(!value["ExtId"].isNull())
			locationMsgItemsObject.extId = value["ExtId"].asString();
		if(!value["LocationType"].isNull())
			locationMsgItemsObject.locationType = value["LocationType"].asString();
		if(!value["Name"].isNull())
			locationMsgItemsObject.name = value["Name"].asString();
		if(!value["Status"].isNull())
			locationMsgItemsObject.status = std::stol(value["Status"].asString());
		if(!value["GmtCreate"].isNull())
			locationMsgItemsObject.gmtCreate = value["GmtCreate"].asString();
		if(!value["StoreId"].isNull())
			locationMsgItemsObject.storeId = std::stol(value["StoreId"].asString());
		if(!value["GmtModified"].isNull())
			locationMsgItemsObject.gmtModified = value["GmtModified"].asString();
		if(!value["ParentLocationId"].isNull())
			locationMsgItemsObject.parentLocationId = std::stol(value["ParentLocationId"].asString());
		if(!value["LayerType"].isNull())
			locationMsgItemsObject.layerType = value["LayerType"].asString();
		auto allRectRois = value["RectRois"]["RectRoi"];
		for (auto value : allRectRois)
		{
			LocationMsgItem::RectRoi rectRoisObject;
			auto allPoints = value["Points"]["Point"];
			for (auto value : allPoints)
			{
				LocationMsgItem::RectRoi::Point pointsObject;
				if(!value["X"].isNull())
					pointsObject.x = std::stof(value["X"].asString());
				if(!value["Y"].isNull())
					pointsObject.y = std::stof(value["Y"].asString());
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

