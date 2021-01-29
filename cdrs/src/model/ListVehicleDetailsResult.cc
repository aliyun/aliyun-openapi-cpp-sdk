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

#include <alibabacloud/cdrs/model/ListVehicleDetailsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CDRS;
using namespace AlibabaCloud::CDRS::Model;

ListVehicleDetailsResult::ListVehicleDetailsResult() :
	ServiceResult()
{}

ListVehicleDetailsResult::ListVehicleDetailsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVehicleDetailsResult::~ListVehicleDetailsResult()
{}

void ListVehicleDetailsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Datas"];
	for (auto valueDataDatas : allDataNode)
	{
		Datas dataObject;
		if(!valueDataDatas["VehicleId"].isNull())
			dataObject.vehicleId = valueDataDatas["VehicleId"].asString();
		if(!valueDataDatas["VehicleColor"].isNull())
			dataObject.vehicleColor = valueDataDatas["VehicleColor"].asString();
		if(!valueDataDatas["TargetImageStoragePath"].isNull())
			dataObject.targetImageStoragePath = valueDataDatas["TargetImageStoragePath"].asString();
		if(!valueDataDatas["Gender"].isNull())
			dataObject.gender = valueDataDatas["Gender"].asString();
		if(!valueDataDatas["PersonType"].isNull())
			dataObject.personType = valueDataDatas["PersonType"].asString();
		if(!valueDataDatas["PrefOutTime"].isNull())
			dataObject.prefOutTime = valueDataDatas["PrefOutTime"].asString();
		if(!valueDataDatas["PopularPoi"].isNull())
			dataObject.popularPoi = valueDataDatas["PopularPoi"].asString();
		if(!valueDataDatas["PopularAddress"].isNull())
			dataObject.popularAddress = valueDataDatas["PopularAddress"].asString();
		if(!valueDataDatas["SourceImageStoragePath"].isNull())
			dataObject.sourceImageStoragePath = valueDataDatas["SourceImageStoragePath"].asString();
		if(!valueDataDatas["VehicleClass"].isNull())
			dataObject.vehicleClass = valueDataDatas["VehicleClass"].asString();
		if(!valueDataDatas["VehicleApplication"].isNull())
			dataObject.vehicleApplication = valueDataDatas["VehicleApplication"].asString();
		if(!valueDataDatas["PersonId"].isNull())
			dataObject.personId = valueDataDatas["PersonId"].asString();
		if(!valueDataDatas["PlateId"].isNull())
			dataObject.plateId = valueDataDatas["PlateId"].asString();
		if(!valueDataDatas["SourceUrl"].isNull())
			dataObject.sourceUrl = valueDataDatas["SourceUrl"].asString();
		if(!valueDataDatas["TargetUrl"].isNull())
			dataObject.targetUrl = valueDataDatas["TargetUrl"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListVehicleDetailsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListVehicleDetailsResult::getMessage()const
{
	return message_;
}

long ListVehicleDetailsResult::getPageSize()const
{
	return pageSize_;
}

long ListVehicleDetailsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListVehicleDetailsResult::Datas> ListVehicleDetailsResult::getData()const
{
	return data_;
}

std::string ListVehicleDetailsResult::getCode()const
{
	return code_;
}

