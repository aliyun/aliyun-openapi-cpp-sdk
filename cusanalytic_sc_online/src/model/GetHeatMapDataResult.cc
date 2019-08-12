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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allHeatMapItems = value["HeatMapItems"]["HeatMapItem"];
	for (auto value : allHeatMapItems)
	{
		HeatMapItem heatMapItemsObject;
		if(!value["Y"].isNull())
			heatMapItemsObject.y = std::stof(value["Y"].asString());
		if(!value["Weight"].isNull())
			heatMapItemsObject.weight = std::stof(value["Weight"].asString());
		if(!value["X"].isNull())
			heatMapItemsObject.x = std::stof(value["X"].asString());
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

