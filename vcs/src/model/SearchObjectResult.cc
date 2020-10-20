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
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	if(!dataNode["TotalPage"].isNull())
		data_.totalPage = std::stoi(dataNode["TotalPage"].asString());
	auto allRecordsNode = dataNode["Records"]["RecordsItem"];
	for (auto dataNodeRecordsRecordsItem : allRecordsNode)
	{
		Data::RecordsItem recordsItemObject;
		if(!dataNodeRecordsRecordsItem["CompareResult"].isNull())
			recordsItemObject.compareResult = dataNodeRecordsRecordsItem["CompareResult"].asString();
		if(!dataNodeRecordsRecordsItem["DeviceID"].isNull())
			recordsItemObject.deviceID = dataNodeRecordsRecordsItem["DeviceID"].asString();
		if(!dataNodeRecordsRecordsItem["ShotTime"].isNull())
			recordsItemObject.shotTime = std::stol(dataNodeRecordsRecordsItem["ShotTime"].asString());
		if(!dataNodeRecordsRecordsItem["LeftTopX"].isNull())
			recordsItemObject.leftTopX = std::stoi(dataNodeRecordsRecordsItem["LeftTopX"].asString());
		if(!dataNodeRecordsRecordsItem["LeftTopY"].isNull())
			recordsItemObject.leftTopY = std::stoi(dataNodeRecordsRecordsItem["LeftTopY"].asString());
		if(!dataNodeRecordsRecordsItem["RightBtmX"].isNull())
			recordsItemObject.rightBtmX = std::stoi(dataNodeRecordsRecordsItem["RightBtmX"].asString());
		if(!dataNodeRecordsRecordsItem["RightBtmY"].isNull())
			recordsItemObject.rightBtmY = std::stoi(dataNodeRecordsRecordsItem["RightBtmY"].asString());
		if(!dataNodeRecordsRecordsItem["Score"].isNull())
			recordsItemObject.score = std::stof(dataNodeRecordsRecordsItem["Score"].asString());
		if(!dataNodeRecordsRecordsItem["SourceID"].isNull())
			recordsItemObject.sourceID = dataNodeRecordsRecordsItem["SourceID"].asString();
		if(!dataNodeRecordsRecordsItem["SourceImagePath"].isNull())
			recordsItemObject.sourceImagePath = dataNodeRecordsRecordsItem["SourceImagePath"].asString();
		if(!dataNodeRecordsRecordsItem["SourceImageUrl"].isNull())
			recordsItemObject.sourceImageUrl = dataNodeRecordsRecordsItem["SourceImageUrl"].asString();
		if(!dataNodeRecordsRecordsItem["TargetImagePath"].isNull())
			recordsItemObject.targetImagePath = dataNodeRecordsRecordsItem["TargetImagePath"].asString();
		if(!dataNodeRecordsRecordsItem["TargetImageUrl"].isNull())
			recordsItemObject.targetImageUrl = dataNodeRecordsRecordsItem["TargetImageUrl"].asString();
		data_.records.push_back(recordsItemObject);
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

SearchObjectResult::Data SearchObjectResult::getData()const
{
	return data_;
}

std::string SearchObjectResult::getCode()const
{
	return code_;
}

