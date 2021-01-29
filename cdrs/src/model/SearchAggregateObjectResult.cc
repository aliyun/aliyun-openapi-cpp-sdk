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

#include <alibabacloud/cdrs/model/SearchAggregateObjectResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CDRS;
using namespace AlibabaCloud::CDRS::Model;

SearchAggregateObjectResult::SearchAggregateObjectResult() :
	ServiceResult()
{}

SearchAggregateObjectResult::SearchAggregateObjectResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchAggregateObjectResult::~SearchAggregateObjectResult()
{}

void SearchAggregateObjectResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allBodyListNode = dataNode["BodyList"]["BodyListItem"];
	for (auto dataNodeBodyListBodyListItem : allBodyListNode)
	{
		Data::BodyListItem bodyListItemObject;
		if(!dataNodeBodyListBodyListItem["DeviceID"].isNull())
			bodyListItemObject.deviceID = dataNodeBodyListBodyListItem["DeviceID"].asString();
		if(!dataNodeBodyListBodyListItem["ObjectType"].isNull())
			bodyListItemObject.objectType = dataNodeBodyListBodyListItem["ObjectType"].asString();
		if(!dataNodeBodyListBodyListItem["LeftTopX"].isNull())
			bodyListItemObject.leftTopX = std::stoi(dataNodeBodyListBodyListItem["LeftTopX"].asString());
		if(!dataNodeBodyListBodyListItem["LeftTopY"].isNull())
			bodyListItemObject.leftTopY = std::stoi(dataNodeBodyListBodyListItem["LeftTopY"].asString());
		if(!dataNodeBodyListBodyListItem["RightBottomX"].isNull())
			bodyListItemObject.rightBottomX = std::stoi(dataNodeBodyListBodyListItem["RightBottomX"].asString());
		if(!dataNodeBodyListBodyListItem["RightBottomY"].isNull())
			bodyListItemObject.rightBottomY = std::stoi(dataNodeBodyListBodyListItem["RightBottomY"].asString());
		if(!dataNodeBodyListBodyListItem["Score"].isNull())
			bodyListItemObject.score = std::stof(dataNodeBodyListBodyListItem["Score"].asString());
		if(!dataNodeBodyListBodyListItem["ShotTime"].isNull())
			bodyListItemObject.shotTime = dataNodeBodyListBodyListItem["ShotTime"].asString();
		if(!dataNodeBodyListBodyListItem["SourceImageUrl"].isNull())
			bodyListItemObject.sourceImageUrl = dataNodeBodyListBodyListItem["SourceImageUrl"].asString();
		if(!dataNodeBodyListBodyListItem["TargetImageUrl"].isNull())
			bodyListItemObject.targetImageUrl = dataNodeBodyListBodyListItem["TargetImageUrl"].asString();
		if(!dataNodeBodyListBodyListItem["DeviceName"].isNull())
			bodyListItemObject.deviceName = dataNodeBodyListBodyListItem["DeviceName"].asString();
		if(!dataNodeBodyListBodyListItem["DeviceLatitude"].isNull())
			bodyListItemObject.deviceLatitude = std::stof(dataNodeBodyListBodyListItem["DeviceLatitude"].asString());
		if(!dataNodeBodyListBodyListItem["DeviceLongitude"].isNull())
			bodyListItemObject.deviceLongitude = std::stof(dataNodeBodyListBodyListItem["DeviceLongitude"].asString());
		if(!dataNodeBodyListBodyListItem["PersonId"].isNull())
			bodyListItemObject.personId = dataNodeBodyListBodyListItem["PersonId"].asString();
		data_.bodyList.push_back(bodyListItemObject);
	}
	auto allFaceListNode = dataNode["FaceList"]["FaceListItem"];
	for (auto dataNodeFaceListFaceListItem : allFaceListNode)
	{
		Data::FaceListItem faceListItemObject;
		if(!dataNodeFaceListFaceListItem["DeviceID"].isNull())
			faceListItemObject.deviceID = dataNodeFaceListFaceListItem["DeviceID"].asString();
		if(!dataNodeFaceListFaceListItem["ObjectType"].isNull())
			faceListItemObject.objectType = dataNodeFaceListFaceListItem["ObjectType"].asString();
		if(!dataNodeFaceListFaceListItem["LeftTopX"].isNull())
			faceListItemObject.leftTopX = std::stoi(dataNodeFaceListFaceListItem["LeftTopX"].asString());
		if(!dataNodeFaceListFaceListItem["LeftTopY"].isNull())
			faceListItemObject.leftTopY = std::stoi(dataNodeFaceListFaceListItem["LeftTopY"].asString());
		if(!dataNodeFaceListFaceListItem["RightBottomX"].isNull())
			faceListItemObject.rightBottomX = std::stoi(dataNodeFaceListFaceListItem["RightBottomX"].asString());
		if(!dataNodeFaceListFaceListItem["RightBottomY"].isNull())
			faceListItemObject.rightBottomY = std::stoi(dataNodeFaceListFaceListItem["RightBottomY"].asString());
		if(!dataNodeFaceListFaceListItem["Score"].isNull())
			faceListItemObject.score = std::stof(dataNodeFaceListFaceListItem["Score"].asString());
		if(!dataNodeFaceListFaceListItem["ShotTime"].isNull())
			faceListItemObject.shotTime = dataNodeFaceListFaceListItem["ShotTime"].asString();
		if(!dataNodeFaceListFaceListItem["SourceImageUrl"].isNull())
			faceListItemObject.sourceImageUrl = dataNodeFaceListFaceListItem["SourceImageUrl"].asString();
		if(!dataNodeFaceListFaceListItem["TargetImageUrl"].isNull())
			faceListItemObject.targetImageUrl = dataNodeFaceListFaceListItem["TargetImageUrl"].asString();
		if(!dataNodeFaceListFaceListItem["DeviceName"].isNull())
			faceListItemObject.deviceName = dataNodeFaceListFaceListItem["DeviceName"].asString();
		if(!dataNodeFaceListFaceListItem["DeviceLatitude"].isNull())
			faceListItemObject.deviceLatitude = std::stof(dataNodeFaceListFaceListItem["DeviceLatitude"].asString());
		if(!dataNodeFaceListFaceListItem["DeviceLongitude"].isNull())
			faceListItemObject.deviceLongitude = std::stof(dataNodeFaceListFaceListItem["DeviceLongitude"].asString());
		if(!dataNodeFaceListFaceListItem["PersonId"].isNull())
			faceListItemObject.personId = dataNodeFaceListFaceListItem["PersonId"].asString();
		data_.faceList.push_back(faceListItemObject);
	}
	auto allMotorListNode = dataNode["MotorList"]["MotorListItem"];
	for (auto dataNodeMotorListMotorListItem : allMotorListNode)
	{
		Data::MotorListItem motorListItemObject;
		if(!dataNodeMotorListMotorListItem["DeviceID"].isNull())
			motorListItemObject.deviceID = dataNodeMotorListMotorListItem["DeviceID"].asString();
		if(!dataNodeMotorListMotorListItem["ObjectType"].isNull())
			motorListItemObject.objectType = dataNodeMotorListMotorListItem["ObjectType"].asString();
		if(!dataNodeMotorListMotorListItem["LeftTopX"].isNull())
			motorListItemObject.leftTopX = std::stoi(dataNodeMotorListMotorListItem["LeftTopX"].asString());
		if(!dataNodeMotorListMotorListItem["LeftTopY"].isNull())
			motorListItemObject.leftTopY = std::stoi(dataNodeMotorListMotorListItem["LeftTopY"].asString());
		if(!dataNodeMotorListMotorListItem["RightBottomX"].isNull())
			motorListItemObject.rightBottomX = std::stoi(dataNodeMotorListMotorListItem["RightBottomX"].asString());
		if(!dataNodeMotorListMotorListItem["RightBottomY"].isNull())
			motorListItemObject.rightBottomY = std::stoi(dataNodeMotorListMotorListItem["RightBottomY"].asString());
		if(!dataNodeMotorListMotorListItem["Score"].isNull())
			motorListItemObject.score = std::stof(dataNodeMotorListMotorListItem["Score"].asString());
		if(!dataNodeMotorListMotorListItem["ShotTime"].isNull())
			motorListItemObject.shotTime = dataNodeMotorListMotorListItem["ShotTime"].asString();
		if(!dataNodeMotorListMotorListItem["SourceImageUrl"].isNull())
			motorListItemObject.sourceImageUrl = dataNodeMotorListMotorListItem["SourceImageUrl"].asString();
		if(!dataNodeMotorListMotorListItem["TargetImageUrl"].isNull())
			motorListItemObject.targetImageUrl = dataNodeMotorListMotorListItem["TargetImageUrl"].asString();
		if(!dataNodeMotorListMotorListItem["DeviceName"].isNull())
			motorListItemObject.deviceName = dataNodeMotorListMotorListItem["DeviceName"].asString();
		if(!dataNodeMotorListMotorListItem["DeviceLatitude"].isNull())
			motorListItemObject.deviceLatitude = std::stof(dataNodeMotorListMotorListItem["DeviceLatitude"].asString());
		if(!dataNodeMotorListMotorListItem["DeviceLongitude"].isNull())
			motorListItemObject.deviceLongitude = std::stof(dataNodeMotorListMotorListItem["DeviceLongitude"].asString());
		if(!dataNodeMotorListMotorListItem["PersonId"].isNull())
			motorListItemObject.personId = dataNodeMotorListMotorListItem["PersonId"].asString();
		data_.motorList.push_back(motorListItemObject);
	}
	auto allNonMotorListNode = dataNode["NonMotorList"]["NonMotorListItem"];
	for (auto dataNodeNonMotorListNonMotorListItem : allNonMotorListNode)
	{
		Data::NonMotorListItem nonMotorListItemObject;
		if(!dataNodeNonMotorListNonMotorListItem["DeviceID"].isNull())
			nonMotorListItemObject.deviceID = dataNodeNonMotorListNonMotorListItem["DeviceID"].asString();
		if(!dataNodeNonMotorListNonMotorListItem["ObjectType"].isNull())
			nonMotorListItemObject.objectType = dataNodeNonMotorListNonMotorListItem["ObjectType"].asString();
		if(!dataNodeNonMotorListNonMotorListItem["LeftTopX"].isNull())
			nonMotorListItemObject.leftTopX = std::stoi(dataNodeNonMotorListNonMotorListItem["LeftTopX"].asString());
		if(!dataNodeNonMotorListNonMotorListItem["LeftTopY"].isNull())
			nonMotorListItemObject.leftTopY = std::stoi(dataNodeNonMotorListNonMotorListItem["LeftTopY"].asString());
		if(!dataNodeNonMotorListNonMotorListItem["RightBottomX"].isNull())
			nonMotorListItemObject.rightBottomX = std::stoi(dataNodeNonMotorListNonMotorListItem["RightBottomX"].asString());
		if(!dataNodeNonMotorListNonMotorListItem["RightBottomY"].isNull())
			nonMotorListItemObject.rightBottomY = std::stoi(dataNodeNonMotorListNonMotorListItem["RightBottomY"].asString());
		if(!dataNodeNonMotorListNonMotorListItem["Score"].isNull())
			nonMotorListItemObject.score = std::stof(dataNodeNonMotorListNonMotorListItem["Score"].asString());
		if(!dataNodeNonMotorListNonMotorListItem["ShotTime"].isNull())
			nonMotorListItemObject.shotTime = dataNodeNonMotorListNonMotorListItem["ShotTime"].asString();
		if(!dataNodeNonMotorListNonMotorListItem["SourceImageUrl"].isNull())
			nonMotorListItemObject.sourceImageUrl = dataNodeNonMotorListNonMotorListItem["SourceImageUrl"].asString();
		if(!dataNodeNonMotorListNonMotorListItem["TargetImageUrl"].isNull())
			nonMotorListItemObject.targetImageUrl = dataNodeNonMotorListNonMotorListItem["TargetImageUrl"].asString();
		if(!dataNodeNonMotorListNonMotorListItem["DeviceName"].isNull())
			nonMotorListItemObject.deviceName = dataNodeNonMotorListNonMotorListItem["DeviceName"].asString();
		if(!dataNodeNonMotorListNonMotorListItem["DeviceLatitude"].isNull())
			nonMotorListItemObject.deviceLatitude = std::stof(dataNodeNonMotorListNonMotorListItem["DeviceLatitude"].asString());
		if(!dataNodeNonMotorListNonMotorListItem["DeviceLongitude"].isNull())
			nonMotorListItemObject.deviceLongitude = std::stof(dataNodeNonMotorListNonMotorListItem["DeviceLongitude"].asString());
		if(!dataNodeNonMotorListNonMotorListItem["PersonId"].isNull())
			nonMotorListItemObject.personId = dataNodeNonMotorListNonMotorListItem["PersonId"].asString();
		data_.nonMotorList.push_back(nonMotorListItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string SearchAggregateObjectResult::getMessage()const
{
	return message_;
}

long SearchAggregateObjectResult::getPageSize()const
{
	return pageSize_;
}

int SearchAggregateObjectResult::getTotal()const
{
	return total_;
}

SearchAggregateObjectResult::Data SearchAggregateObjectResult::getData()const
{
	return data_;
}

std::string SearchAggregateObjectResult::getCode()const
{
	return code_;
}

bool SearchAggregateObjectResult::getSuccess()const
{
	return success_;
}

