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

#include <alibabacloud/cusanalytic_sc_online/model/GetEMapResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cusanalytic_sc_online;
using namespace AlibabaCloud::Cusanalytic_sc_online::Model;

GetEMapResult::GetEMapResult() :
	ServiceResult()
{}

GetEMapResult::GetEMapResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetEMapResult::~GetEMapResult()
{}

void GetEMapResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["StoreId"].isNull())
		storeId_ = std::stol(value["StoreId"].asString());
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Scale"].isNull())
		scale_ = std::stof(value["Scale"].asString());
	if(!value["LocationId"].isNull())
		locationId_ = std::stol(value["LocationId"].asString());
	if(!value["EMapId"].isNull())
		eMapId_ = std::stol(value["EMapId"].asString());
	if(!value["ImageUrl"].isNull())
		imageUrl_ = value["ImageUrl"].asString();

}

long GetEMapResult::getStoreId()const
{
	return storeId_;
}

long GetEMapResult::getLocationId()const
{
	return locationId_;
}

std::string GetEMapResult::getImageUrl()const
{
	return imageUrl_;
}

float GetEMapResult::getScale()const
{
	return scale_;
}

long GetEMapResult::getEMapId()const
{
	return eMapId_;
}

std::string GetEMapResult::getName()const
{
	return name_;
}

