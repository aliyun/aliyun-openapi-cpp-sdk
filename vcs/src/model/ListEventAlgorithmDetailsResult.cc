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

#include <alibabacloud/vcs/model/ListEventAlgorithmDetailsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

ListEventAlgorithmDetailsResult::ListEventAlgorithmDetailsResult() :
	ServiceResult()
{}

ListEventAlgorithmDetailsResult::ListEventAlgorithmDetailsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEventAlgorithmDetailsResult::~ListEventAlgorithmDetailsResult()
{}

void ListEventAlgorithmDetailsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Datas"];
	for (auto valueDataDatas : allDataNode)
	{
		Datas dataObject;
		if(!valueDataDatas["CorpId"].isNull())
			dataObject.corpId = valueDataDatas["CorpId"].asString();
		if(!valueDataDatas["DataSourceId"].isNull())
			dataObject.dataSourceId = valueDataDatas["DataSourceId"].asString();
		if(!valueDataDatas["EventType"].isNull())
			dataObject.eventType = valueDataDatas["EventType"].asString();
		if(!valueDataDatas["EventValue"].isNull())
			dataObject.eventValue = valueDataDatas["EventValue"].asString();
		if(!valueDataDatas["ExtendValue"].isNull())
			dataObject.extendValue = valueDataDatas["ExtendValue"].asString();
		if(!valueDataDatas["ExtraExtendValue"].isNull())
			dataObject.extraExtendValue = valueDataDatas["ExtraExtendValue"].asString();
		if(!valueDataDatas["FaceCount"].isNull())
			dataObject.faceCount = valueDataDatas["FaceCount"].asString();
		if(!valueDataDatas["LeftTopX"].isNull())
			dataObject.leftTopX = valueDataDatas["LeftTopX"].asString();
		if(!valueDataDatas["LeftTopY"].isNull())
			dataObject.leftTopY = valueDataDatas["LeftTopY"].asString();
		if(!valueDataDatas["PicUrlPath"].isNull())
			dataObject.picUrlPath = valueDataDatas["PicUrlPath"].asString();
		if(!valueDataDatas["PointX"].isNull())
			dataObject.pointX = valueDataDatas["PointX"].asString();
		if(!valueDataDatas["PointY"].isNull())
			dataObject.pointY = valueDataDatas["PointY"].asString();
		if(!valueDataDatas["RecordId"].isNull())
			dataObject.recordId = valueDataDatas["RecordId"].asString();
		if(!valueDataDatas["RightBottomX"].isNull())
			dataObject.rightBottomX = valueDataDatas["RightBottomX"].asString();
		if(!valueDataDatas["RightBottomY"].isNull())
			dataObject.rightBottomY = valueDataDatas["RightBottomY"].asString();
		if(!valueDataDatas["ShotTime"].isNull())
			dataObject.shotTime = valueDataDatas["ShotTime"].asString();
		if(!valueDataDatas["SourceId"].isNull())
			dataObject.sourceId = valueDataDatas["SourceId"].asString();
		if(!valueDataDatas["TargetPicUrlPath"].isNull())
			dataObject.targetPicUrlPath = valueDataDatas["TargetPicUrlPath"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListEventAlgorithmDetailsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListEventAlgorithmDetailsResult::getMessage()const
{
	return message_;
}

int ListEventAlgorithmDetailsResult::getPageSize()const
{
	return pageSize_;
}

int ListEventAlgorithmDetailsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListEventAlgorithmDetailsResult::Datas> ListEventAlgorithmDetailsResult::getData()const
{
	return data_;
}

std::string ListEventAlgorithmDetailsResult::getCode()const
{
	return code_;
}

std::string ListEventAlgorithmDetailsResult::getSuccess()const
{
	return success_;
}

