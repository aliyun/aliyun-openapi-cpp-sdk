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

#include <alibabacloud/vcs/model/SearchObjectResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

SearchObjectResult::SearchObjectResult() :
	ServiceResult()
{}

SearchObjectResult::SearchObjectResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchObjectResult::~SearchObjectResult()
{}

void SearchObjectResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["PageNumber"].isNull())
			dataObject.pageNumber = std::stoi(valueDataDataItem["PageNumber"].asString());
		if(!valueDataDataItem["PageSize"].isNull())
			dataObject.pageSize = std::stoi(valueDataDataItem["PageSize"].asString());
		if(!valueDataDataItem["TotalCount"].isNull())
			dataObject.totalCount = std::stoi(valueDataDataItem["TotalCount"].asString());
		if(!valueDataDataItem["TotalPage"].isNull())
			dataObject.totalPage = std::stoi(valueDataDataItem["TotalPage"].asString());
		auto allRecordsNode = allDataNode["Records"]["RecordsItem"];
		for (auto allDataNodeRecordsRecordsItem : allRecordsNode)
		{
			DataItem::RecordsItem recordsObject;
			if(!allDataNodeRecordsRecordsItem["BodyShotTime"].isNull())
				recordsObject.bodyShotTime = allDataNodeRecordsRecordsItem["BodyShotTime"].asString();
			if(!allDataNodeRecordsRecordsItem["CompareResult"].isNull())
				recordsObject.compareResult = allDataNodeRecordsRecordsItem["CompareResult"].asString();
			if(!allDataNodeRecordsRecordsItem["DeviceID"].isNull())
				recordsObject.deviceID = allDataNodeRecordsRecordsItem["DeviceID"].asString();
			if(!allDataNodeRecordsRecordsItem["FaceShotTime"].isNull())
				recordsObject.faceShotTime = std::stol(allDataNodeRecordsRecordsItem["FaceShotTime"].asString());
			if(!allDataNodeRecordsRecordsItem["LeftTopX"].isNull())
				recordsObject.leftTopX = std::stoi(allDataNodeRecordsRecordsItem["LeftTopX"].asString());
			if(!allDataNodeRecordsRecordsItem["LeftTopY"].isNull())
				recordsObject.leftTopY = std::stoi(allDataNodeRecordsRecordsItem["LeftTopY"].asString());
			if(!allDataNodeRecordsRecordsItem["MotorShotTime"].isNull())
				recordsObject.motorShotTime = allDataNodeRecordsRecordsItem["MotorShotTime"].asString();
			if(!allDataNodeRecordsRecordsItem["PassTime"].isNull())
				recordsObject.passTime = allDataNodeRecordsRecordsItem["PassTime"].asString();
			if(!allDataNodeRecordsRecordsItem["RightBtmX"].isNull())
				recordsObject.rightBtmX = std::stoi(allDataNodeRecordsRecordsItem["RightBtmX"].asString());
			if(!allDataNodeRecordsRecordsItem["RightBtmY"].isNull())
				recordsObject.rightBtmY = std::stoi(allDataNodeRecordsRecordsItem["RightBtmY"].asString());
			if(!allDataNodeRecordsRecordsItem["Score"].isNull())
				recordsObject.score = std::stof(allDataNodeRecordsRecordsItem["Score"].asString());
			if(!allDataNodeRecordsRecordsItem["SourceID"].isNull())
				recordsObject.sourceID = allDataNodeRecordsRecordsItem["SourceID"].asString();
			if(!allDataNodeRecordsRecordsItem["SourceImagePath"].isNull())
				recordsObject.sourceImagePath = allDataNodeRecordsRecordsItem["SourceImagePath"].asString();
			if(!allDataNodeRecordsRecordsItem["SourceImageUrl"].isNull())
				recordsObject.sourceImageUrl = allDataNodeRecordsRecordsItem["SourceImageUrl"].asString();
			if(!allDataNodeRecordsRecordsItem["TargetImagePath"].isNull())
				recordsObject.targetImagePath = allDataNodeRecordsRecordsItem["TargetImagePath"].asString();
			if(!allDataNodeRecordsRecordsItem["TargetImageUrl"].isNull())
				recordsObject.targetImageUrl = allDataNodeRecordsRecordsItem["TargetImageUrl"].asString();
			dataObject.records.push_back(recordsObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string SearchObjectResult::getMessage()const
{
	return message_;
}

std::vector<SearchObjectResult::DataItem> SearchObjectResult::getData()const
{
	return data_;
}

std::string SearchObjectResult::getCode()const
{
	return code_;
}

