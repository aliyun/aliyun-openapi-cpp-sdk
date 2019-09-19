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

#include <alibabacloud/cusanalytic_sc_online/model/GetHeatMapDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cusanalytic_sc_online;
using namespace AlibabaCloud::Cusanalytic_sc_online::Model;

GetHeatMapDataResult::GetHeatMapDataResult() :
	ServiceResult()
{}

GetHeatMapDataResult::GetHeatMapDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetHeatMapDataResult::~GetHeatMapDataResult()
{}

void GetHeatMapDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allHeatMapItemsNode = value["HeatMapItems"]["HeatMapItem"];
	for (auto valueHeatMapItemsHeatMapItem : allHeatMapItemsNode)
	{
		HeatMapItem heatMapItemsObject;
		if(!valueHeatMapItemsHeatMapItem["Y"].isNull())
			heatMapItemsObject.y = std::stof(valueHeatMapItemsHeatMapItem["Y"].asString());
		if(!valueHeatMapItemsHeatMapItem["Weight"].isNull())
			heatMapItemsObject.weight = std::stof(valueHeatMapItemsHeatMapItem["Weight"].asString());
		if(!valueHeatMapItemsHeatMapItem["X"].isNull())
			heatMapItemsObject.x = std::stof(valueHeatMapItemsHeatMapItem["X"].asString());
		heatMapItems_.push_back(heatMapItemsObject);
	}
	if(!value["EMapName"].isNull())
		eMapName_ = value["EMapName"].asString();
	if(!value["Width"].isNull())
		width_ = std::stof(value["Width"].asString());
	if(!value["EMapUrl"].isNull())
		eMapUrl_ = value["EMapUrl"].asString();
	if(!value["StoreId"].isNull())
		storeId_ = std::stol(value["StoreId"].asString());
	if(!value["Height"].isNull())
		height_ = std::stof(value["Height"].asString());
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetHeatMapDataResult::getMsg()const
{
	return msg_;
}

std::vector<GetHeatMapDataResult::HeatMapItem> GetHeatMapDataResult::getHeatMapItems()const
{
	return heatMapItems_;
}

std::string GetHeatMapDataResult::getEMapName()const
{
	return eMapName_;
}

long GetHeatMapDataResult::getStoreId()const
{
	return storeId_;
}

std::string GetHeatMapDataResult::getEMapUrl()const
{
	return eMapUrl_;
}

float GetHeatMapDataResult::getHeight()const
{
	return height_;
}

float GetHeatMapDataResult::getWidth()const
{
	return width_;
}

bool GetHeatMapDataResult::getSuccess()const
{
	return success_;
}

