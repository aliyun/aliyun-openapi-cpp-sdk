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

#include <alibabacloud/arms/model/GetSyntheticMonitorsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

GetSyntheticMonitorsResult::GetSyntheticMonitorsResult() :
	ServiceResult()
{}

GetSyntheticMonitorsResult::GetSyntheticMonitorsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSyntheticMonitorsResult::~GetSyntheticMonitorsResult()
{}

void GetSyntheticMonitorsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["dataItem"];
	for (auto valueDatadataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDatadataItem["Country"].isNull())
			dataObject.country = valueDatadataItem["Country"].asString();
		if(!valueDatadataItem["Region"].isNull())
			dataObject.region = valueDatadataItem["Region"].asString();
		if(!valueDatadataItem["City"].isNull())
			dataObject.city = valueDatadataItem["City"].asString();
		if(!valueDatadataItem["CityCode"].isNull())
			dataObject.cityCode = valueDatadataItem["CityCode"].asString();
		if(!valueDatadataItem["Operator"].isNull())
			dataObject._operator = valueDatadataItem["Operator"].asString();
		if(!valueDatadataItem["OperatorCode"].isNull())
			dataObject.operatorCode = valueDatadataItem["OperatorCode"].asString();
		if(!valueDatadataItem["ClientType"].isNull())
			dataObject.clientType = std::stoi(valueDatadataItem["ClientType"].asString());
		if(!valueDatadataItem["CanBeSelected"].isNull())
			dataObject.canBeSelected = valueDatadataItem["CanBeSelected"].asString() == "true";
		if(!valueDatadataItem["Available"].isNull())
			dataObject.available = valueDatadataItem["Available"].asString();
		if(!valueDatadataItem["Ipv6"].isNull())
			dataObject.ipv6 = std::stoi(valueDatadataItem["Ipv6"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stol(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetSyntheticMonitorsResult::getMessage()const
{
	return message_;
}

std::vector<GetSyntheticMonitorsResult::DataItem> GetSyntheticMonitorsResult::getData()const
{
	return data_;
}

long GetSyntheticMonitorsResult::getCode()const
{
	return code_;
}

