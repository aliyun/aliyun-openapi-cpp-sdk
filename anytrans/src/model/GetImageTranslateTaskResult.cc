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

#include <alibabacloud/anytrans/model/GetImageTranslateTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AnyTrans;
using namespace AlibabaCloud::AnyTrans::Model;

GetImageTranslateTaskResult::GetImageTranslateTaskResult() :
	ServiceResult()
{}

GetImageTranslateTaskResult::GetImageTranslateTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetImageTranslateTaskResult::~GetImageTranslateTaskResult()
{}

void GetImageTranslateTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["data"];
	if(!dataNode["traceId"].isNull())
		data_.traceId = dataNode["traceId"].asString();
	auto translationNode = dataNode["translation"];
	if(!translationNode["angle"].isNull())
		data_.translation.angle = std::stol(translationNode["angle"].asString());
	if(!translationNode["width"].isNull())
		data_.translation.width = std::stol(translationNode["width"].asString());
	if(!translationNode["height"].isNull())
		data_.translation.height = std::stol(translationNode["height"].asString());
	if(!translationNode["orgWidth"].isNull())
		data_.translation.orgWidth = std::stol(translationNode["orgWidth"].asString());
	if(!translationNode["orgHeight"].isNull())
		data_.translation.orgHeight = std::stol(translationNode["orgHeight"].asString());
	if(!translationNode["boxesCount"].isNull())
		data_.translation.boxesCount = std::stol(translationNode["boxesCount"].asString());
	auto allboundingBoxesNode = translationNode["boundingBoxes"]["boundingBoxesItem"];
	for (auto translationNodeboundingBoxesboundingBoxesItem : allboundingBoxesNode)
	{
		Data::Translation::BoundingBoxesItem boundingBoxesItemObject;
		if(!translationNodeboundingBoxesboundingBoxesItem["confidence"].isNull())
			boundingBoxesItemObject.confidence = std::stof(translationNodeboundingBoxesboundingBoxesItem["confidence"].asString());
		if(!translationNodeboundingBoxesboundingBoxesItem["text"].isNull())
			boundingBoxesItemObject.text = translationNodeboundingBoxesboundingBoxesItem["text"].asString();
		if(!translationNodeboundingBoxesboundingBoxesItem["direction"].isNull())
			boundingBoxesItemObject.direction = std::stol(translationNodeboundingBoxesboundingBoxesItem["direction"].asString());
		if(!translationNodeboundingBoxesboundingBoxesItem["tableId"].isNull())
			boundingBoxesItemObject.tableId = std::stol(translationNodeboundingBoxesboundingBoxesItem["tableId"].asString());
		if(!translationNodeboundingBoxesboundingBoxesItem["tableCellId"].isNull())
			boundingBoxesItemObject.tableCellId = std::stol(translationNodeboundingBoxesboundingBoxesItem["tableCellId"].asString());
		if(!translationNodeboundingBoxesboundingBoxesItem["translation"].isNull())
			boundingBoxesItemObject.translation = translationNodeboundingBoxesboundingBoxesItem["translation"].asString();
		auto upLeftNode = value["upLeft"];
		if(!upLeftNode["x"].isNull())
			boundingBoxesItemObject.upLeft.x = std::stol(upLeftNode["x"].asString());
		if(!upLeftNode["y"].isNull())
			boundingBoxesItemObject.upLeft.y = std::stol(upLeftNode["y"].asString());
		auto upRightNode = value["upRight"];
		if(!upRightNode["x"].isNull())
			boundingBoxesItemObject.upRight.x = std::stol(upRightNode["x"].asString());
		if(!upRightNode["y"].isNull())
			boundingBoxesItemObject.upRight.y = std::stol(upRightNode["y"].asString());
		auto downLeftNode = value["downLeft"];
		if(!downLeftNode["x"].isNull())
			boundingBoxesItemObject.downLeft.x = std::stol(downLeftNode["x"].asString());
		if(!downLeftNode["y"].isNull())
			boundingBoxesItemObject.downLeft.y = std::stol(downLeftNode["y"].asString());
		auto downRightNode = value["downRight"];
		if(!downRightNode["x"].isNull())
			boundingBoxesItemObject.downRight.x = std::stol(downRightNode["x"].asString());
		if(!downRightNode["y"].isNull())
			boundingBoxesItemObject.downRight.y = std::stol(downRightNode["y"].asString());
		data_.translation.boundingBoxes.push_back(boundingBoxesItemObject);
	}
	auto alltableInfosNode = translationNode["tableInfos"]["tableInfosItem"];
	for (auto translationNodetableInfostableInfosItem : alltableInfosNode)
	{
		Data::Translation::TableInfosItem tableInfosItemObject;
		if(!translationNodetableInfostableInfosItem["tableId"].isNull())
			tableInfosItemObject.tableId = std::stol(translationNodetableInfostableInfosItem["tableId"].asString());
		if(!translationNodetableInfostableInfosItem["xCellSize"].isNull())
			tableInfosItemObject.xCellSize = std::stol(translationNodetableInfostableInfosItem["xCellSize"].asString());
		if(!translationNodetableInfostableInfosItem["yCellSize"].isNull())
			tableInfosItemObject.yCellSize = std::stol(translationNodetableInfostableInfosItem["yCellSize"].asString());
		auto allcellInfosNode = translationNodetableInfostableInfosItem["cellInfos"]["cellInfosItem"];
		for (auto translationNodetableInfostableInfosItemcellInfoscellInfosItem : allcellInfosNode)
		{
			Data::Translation::TableInfosItem::CellInfosItem cellInfosObject;
			if(!translationNodetableInfostableInfosItemcellInfoscellInfosItem["tableCellId"].isNull())
				cellInfosObject.tableCellId = std::stol(translationNodetableInfostableInfosItemcellInfoscellInfosItem["tableCellId"].asString());
			if(!translationNodetableInfostableInfosItemcellInfoscellInfosItem["text"].isNull())
				cellInfosObject.text = translationNodetableInfostableInfosItemcellInfoscellInfosItem["text"].asString();
			if(!translationNodetableInfostableInfosItemcellInfoscellInfosItem["xsc"].isNull())
				cellInfosObject.xsc = std::stol(translationNodetableInfostableInfosItemcellInfoscellInfosItem["xsc"].asString());
			if(!translationNodetableInfostableInfosItemcellInfoscellInfosItem["xec"].isNull())
				cellInfosObject.xec = std::stol(translationNodetableInfostableInfosItemcellInfoscellInfosItem["xec"].asString());
			if(!translationNodetableInfostableInfosItemcellInfoscellInfosItem["ysc"].isNull())
				cellInfosObject.ysc = std::stol(translationNodetableInfostableInfosItemcellInfoscellInfosItem["ysc"].asString());
			if(!translationNodetableInfostableInfosItemcellInfoscellInfosItem["yec"].isNull())
				cellInfosObject.yec = std::stol(translationNodetableInfostableInfosItemcellInfoscellInfosItem["yec"].asString());
			auto allposNode = translationNodetableInfostableInfosItemcellInfoscellInfosItem["pos"]["posItem"];
			for (auto translationNodetableInfostableInfosItemcellInfoscellInfosItemposposItem : allposNode)
			{
				Data::Translation::TableInfosItem::CellInfosItem::PosItem posObject;
				if(!translationNodetableInfostableInfosItemcellInfoscellInfosItemposposItem["x"].isNull())
					posObject.x = std::stol(translationNodetableInfostableInfosItemcellInfoscellInfosItemposposItem["x"].asString());
				if(!translationNodetableInfostableInfosItemcellInfoscellInfosItemposposItem["y"].isNull())
					posObject.y = std::stol(translationNodetableInfostableInfosItemcellInfoscellInfosItemposposItem["y"].asString());
				cellInfosObject.pos.push_back(posObject);
			}
			tableInfosItemObject.cellInfos.push_back(cellInfosObject);
		}
		data_.translation.tableInfos.push_back(tableInfosItemObject);
	}
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["message"].isNull())
		message_ = value["message"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["httpStatusCode"].isNull())
		httpStatusCode_ = value["httpStatusCode"].asString();
	if(!value["synchro"].isNull())
		synchro_ = value["synchro"].asString() == "true";

}

std::string GetImageTranslateTaskResult::getMessage()const
{
	return message_;
}

std::string GetImageTranslateTaskResult::getRequestId()const
{
	return requestId_;
}

bool GetImageTranslateTaskResult::getSynchro()const
{
	return synchro_;
}

std::string GetImageTranslateTaskResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetImageTranslateTaskResult::Data GetImageTranslateTaskResult::getData()const
{
	return data_;
}

std::string GetImageTranslateTaskResult::getCode()const
{
	return code_;
}

bool GetImageTranslateTaskResult::getSuccess()const
{
	return success_;
}

