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

#include <alibabacloud/cdrs/model/ListCityMapImageDetailsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CDRS;
using namespace AlibabaCloud::CDRS::Model;

ListCityMapImageDetailsResult::ListCityMapImageDetailsResult() :
	ServiceResult()
{}

ListCityMapImageDetailsResult::ListCityMapImageDetailsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCityMapImageDetailsResult::~ListCityMapImageDetailsResult()
{}

void ListCityMapImageDetailsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Datas"];
	for (auto valueDataDatas : allDataNode)
	{
		Datas dataObject;
		if(!valueDataDatas["PersonTargetImageStoragePath"].isNull())
			dataObject.personTargetImageStoragePath = valueDataDatas["PersonTargetImageStoragePath"].asString();
		if(!valueDataDatas["AgeLowerLimit"].isNull())
			dataObject.ageLowerLimit = valueDataDatas["AgeLowerLimit"].asString();
		if(!valueDataDatas["AgeUpLimit"].isNull())
			dataObject.ageUpLimit = valueDataDatas["AgeUpLimit"].asString();
		if(!valueDataDatas["VehicleColor"].isNull())
			dataObject.vehicleColor = valueDataDatas["VehicleColor"].asString();
		if(!valueDataDatas["TrousersColor"].isNull())
			dataObject.trousersColor = valueDataDatas["TrousersColor"].asString();
		if(!valueDataDatas["DataSourceId"].isNull())
			dataObject.dataSourceId = valueDataDatas["DataSourceId"].asString();
		if(!valueDataDatas["Gender"].isNull())
			dataObject.gender = valueDataDatas["Gender"].asString();
		if(!valueDataDatas["AgeLowerLimitReliability"].isNull())
			dataObject.ageLowerLimitReliability = valueDataDatas["AgeLowerLimitReliability"].asString();
		if(!valueDataDatas["GenderCodeReliability"].isNull())
			dataObject.genderCodeReliability = valueDataDatas["GenderCodeReliability"].asString();
		if(!valueDataDatas["VehicleClassReliability"].isNull())
			dataObject.vehicleClassReliability = valueDataDatas["VehicleClassReliability"].asString();
		if(!valueDataDatas["RecordId"].isNull())
			dataObject.recordId = valueDataDatas["RecordId"].asString();
		if(!valueDataDatas["AgeCodeReliability"].isNull())
			dataObject.ageCodeReliability = valueDataDatas["AgeCodeReliability"].asString();
		if(!valueDataDatas["SourceImageStoragePath"].isNull())
			dataObject.sourceImageStoragePath = valueDataDatas["SourceImageStoragePath"].asString();
		if(!valueDataDatas["VehicleClass"].isNull())
			dataObject.vehicleClass = valueDataDatas["VehicleClass"].asString();
		if(!valueDataDatas["MotorTargetImageStoragePath"].isNull())
			dataObject.motorTargetImageStoragePath = valueDataDatas["MotorTargetImageStoragePath"].asString();
		if(!valueDataDatas["CoatColor"].isNull())
			dataObject.coatColor = valueDataDatas["CoatColor"].asString();
		if(!valueDataDatas["FaceTargetImageStoragePath"].isNull())
			dataObject.faceTargetImageStoragePath = valueDataDatas["FaceTargetImageStoragePath"].asString();
		if(!valueDataDatas["ShotTime"].isNull())
			dataObject.shotTime = valueDataDatas["ShotTime"].asString();
		if(!valueDataDatas["VehicleColorReliability"].isNull())
			dataObject.vehicleColorReliability = valueDataDatas["VehicleColorReliability"].asString();
		if(!valueDataDatas["TrousersColorReliability"].isNull())
			dataObject.trousersColorReliability = valueDataDatas["TrousersColorReliability"].asString();
		if(!valueDataDatas["CoatColorReliability"].isNull())
			dataObject.coatColorReliability = valueDataDatas["CoatColorReliability"].asString();
		if(!valueDataDatas["LeftTopX"].isNull())
			dataObject.leftTopX = valueDataDatas["LeftTopX"].asString();
		if(!valueDataDatas["LeftTopY"].isNull())
			dataObject.leftTopY = valueDataDatas["LeftTopY"].asString();
		if(!valueDataDatas["RightBottomX"].isNull())
			dataObject.rightBottomX = valueDataDatas["RightBottomX"].asString();
		if(!valueDataDatas["RightBottomY"].isNull())
			dataObject.rightBottomY = valueDataDatas["RightBottomY"].asString();
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

long ListCityMapImageDetailsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListCityMapImageDetailsResult::getMessage()const
{
	return message_;
}

long ListCityMapImageDetailsResult::getPageSize()const
{
	return pageSize_;
}

long ListCityMapImageDetailsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListCityMapImageDetailsResult::Datas> ListCityMapImageDetailsResult::getData()const
{
	return data_;
}

std::string ListCityMapImageDetailsResult::getCode()const
{
	return code_;
}

