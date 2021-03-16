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

#include <alibabacloud/reid_cloud/model/ListActionDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Reid_cloud;
using namespace AlibabaCloud::Reid_cloud::Model;

ListActionDataResult::ListActionDataResult() :
	ServiceResult()
{}

ListActionDataResult::ListActionDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListActionDataResult::~ListActionDataResult()
{}

void ListActionDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allActionsNode = value["Actions"]["Action"];
	for (auto valueActionsAction : allActionsNode)
	{
		Action actionsObject;
		if(!valueActionsAction["StoreId"].isNull())
			actionsObject.storeId = std::stol(valueActionsAction["StoreId"].asString());
		if(!valueActionsAction["GmtCreate"].isNull())
			actionsObject.gmtCreate = std::stol(valueActionsAction["GmtCreate"].asString());
		if(!valueActionsAction["LeaveTimestamp"].isNull())
			actionsObject.leaveTimestamp = std::stol(valueActionsAction["LeaveTimestamp"].asString());
		if(!valueActionsAction["LocationLayerType"].isNull())
			actionsObject.locationLayerType = valueActionsAction["LocationLayerType"].asString();
		if(!valueActionsAction["StayValid"].isNull())
			actionsObject.stayValid = valueActionsAction["StayValid"].asString() == "true";
		if(!valueActionsAction["Gender"].isNull())
			actionsObject.gender = valueActionsAction["Gender"].asString();
		if(!valueActionsAction["UkId"].isNull())
			actionsObject.ukId = std::stol(valueActionsAction["UkId"].asString());
		if(!valueActionsAction["ArriveTimestamp"].isNull())
			actionsObject.arriveTimestamp = std::stol(valueActionsAction["ArriveTimestamp"].asString());
		if(!valueActionsAction["GmtModified"].isNull())
			actionsObject.gmtModified = std::stol(valueActionsAction["GmtModified"].asString());
		if(!valueActionsAction["ImageType"].isNull())
			actionsObject.imageType = valueActionsAction["ImageType"].asString();
		if(!valueActionsAction["InStay"].isNull())
			actionsObject.inStay = std::stol(valueActionsAction["InStay"].asString());
		if(!valueActionsAction["Status"].isNull())
			actionsObject.status = std::stoi(valueActionsAction["Status"].asString());
		if(!valueActionsAction["Age"].isNull())
			actionsObject.age = std::stoi(valueActionsAction["Age"].asString());
		if(!valueActionsAction["Id"].isNull())
			actionsObject.id = std::stol(valueActionsAction["Id"].asString());
		if(!valueActionsAction["BodyPointNumber"].isNull())
			actionsObject.bodyPointNumber = std::stoi(valueActionsAction["BodyPointNumber"].asString());
		if(!valueActionsAction["ImageUrl"].isNull())
			actionsObject.imageUrl = valueActionsAction["ImageUrl"].asString();
		if(!valueActionsAction["LocationId"].isNull())
			actionsObject.locationId = std::stol(valueActionsAction["LocationId"].asString());
		if(!valueActionsAction["StayPeriod"].isNull())
			actionsObject.stayPeriod = std::stoi(valueActionsAction["StayPeriod"].asString());
		if(!valueActionsAction["FacePointNumber"].isNull())
			actionsObject.facePointNumber = std::stoi(valueActionsAction["FacePointNumber"].asString());
		if(!valueActionsAction["Score"].isNull())
			actionsObject.score = std::stof(valueActionsAction["Score"].asString());
		if(!valueActionsAction["SpecialType"].isNull())
			actionsObject.specialType = valueActionsAction["SpecialType"].asString();
		if(!valueActionsAction["ImageObjectKey"].isNull())
			actionsObject.imageObjectKey = valueActionsAction["ImageObjectKey"].asString();
		auto objectPositionInImageNode = value["ObjectPositionInImage"];
		if(!objectPositionInImageNode["Bottom"].isNull())
			actionsObject.objectPositionInImage.bottom = std::stof(objectPositionInImageNode["Bottom"].asString());
		if(!objectPositionInImageNode["Left"].isNull())
			actionsObject.objectPositionInImage.left = std::stof(objectPositionInImageNode["Left"].asString());
		if(!objectPositionInImageNode["Top"].isNull())
			actionsObject.objectPositionInImage.top = std::stof(objectPositionInImageNode["Top"].asString());
		if(!objectPositionInImageNode["Right"].isNull())
			actionsObject.objectPositionInImage.right = std::stof(objectPositionInImageNode["Right"].asString());
		auto pointInMapNode = value["PointInMap"];
		if(!pointInMapNode["X"].isNull())
			actionsObject.pointInMap.x = std::stof(pointInMapNode["X"].asString());
		if(!pointInMapNode["Y"].isNull())
			actionsObject.pointInMap.y = std::stof(pointInMapNode["Y"].asString());
		actions_.push_back(actionsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["CursorTime"].isNull())
		cursorTime_ = std::stol(value["CursorTime"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

long ListActionDataResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListActionDataResult::getMessage()const
{
	return message_;
}

int ListActionDataResult::getPageSize()const
{
	return pageSize_;
}

std::vector<ListActionDataResult::Action> ListActionDataResult::getActions()const
{
	return actions_;
}

int ListActionDataResult::getPageNumber()const
{
	return pageNumber_;
}

long ListActionDataResult::getCursorTime()const
{
	return cursorTime_;
}

std::string ListActionDataResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string ListActionDataResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string ListActionDataResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListActionDataResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string ListActionDataResult::getCode()const
{
	return code_;
}

bool ListActionDataResult::getSuccess()const
{
	return success_;
}

