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

#include <alibabacloud/arms/model/GetSyntheticTaskMonitorsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

GetSyntheticTaskMonitorsResult::GetSyntheticTaskMonitorsResult() :
	ServiceResult()
{}

GetSyntheticTaskMonitorsResult::GetSyntheticTaskMonitorsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSyntheticTaskMonitorsResult::~GetSyntheticTaskMonitorsResult()
{}

void GetSyntheticTaskMonitorsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["dataItem"];
	for (auto valueDatadataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDatadataItem["ClientType"].isNull())
			dataObject.clientType = std::stol(valueDatadataItem["ClientType"].asString());
		if(!valueDatadataItem["CityCode"].isNull())
			dataObject.cityCode = std::stol(valueDatadataItem["CityCode"].asString());
		if(!valueDatadataItem["City"].isNull())
			dataObject.city = valueDatadataItem["City"].asString();
		if(!valueDatadataItem["District"].isNull())
			dataObject.district = valueDatadataItem["District"].asString();
		if(!valueDatadataItem["NetServiceId"].isNull())
			dataObject.netServiceId = std::stol(valueDatadataItem["NetServiceId"].asString());
		if(!valueDatadataItem["NetServiceName"].isNull())
			dataObject.netServiceName = valueDatadataItem["NetServiceName"].asString();
		if(!valueDatadataItem["Busy"].isNull())
			dataObject.busy = std::stol(valueDatadataItem["Busy"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();

}

std::string GetSyntheticTaskMonitorsResult::getMsg()const
{
	return msg_;
}

std::vector<GetSyntheticTaskMonitorsResult::DataItem> GetSyntheticTaskMonitorsResult::getData()const
{
	return data_;
}

std::string GetSyntheticTaskMonitorsResult::getCode()const
{
	return code_;
}

