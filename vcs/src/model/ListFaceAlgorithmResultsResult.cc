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

#include <alibabacloud/vcs/model/ListFaceAlgorithmResultsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

ListFaceAlgorithmResultsResult::ListFaceAlgorithmResultsResult() :
	ServiceResult()
{}

ListFaceAlgorithmResultsResult::ListFaceAlgorithmResultsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFaceAlgorithmResultsResult::~ListFaceAlgorithmResultsResult()
{}

void ListFaceAlgorithmResultsResult::parse(const std::string &payload)
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
		if(!dataNodeRecordsRecordsItem["FaceId"].isNull())
			recordsItemObject.faceId = dataNodeRecordsRecordsItem["FaceId"].asString();
		if(!dataNodeRecordsRecordsItem["CorpId"].isNull())
			recordsItemObject.corpId = dataNodeRecordsRecordsItem["CorpId"].asString();
		if(!dataNodeRecordsRecordsItem["DataSourceId"].isNull())
			recordsItemObject.dataSourceId = dataNodeRecordsRecordsItem["DataSourceId"].asString();
		if(!dataNodeRecordsRecordsItem["ShotTime"].isNull())
			recordsItemObject.shotTime = dataNodeRecordsRecordsItem["ShotTime"].asString();
		if(!dataNodeRecordsRecordsItem["GenderCode"].isNull())
			recordsItemObject.genderCode = dataNodeRecordsRecordsItem["GenderCode"].asString();
		if(!dataNodeRecordsRecordsItem["MinAge"].isNull())
			recordsItemObject.minAge = dataNodeRecordsRecordsItem["MinAge"].asString();
		if(!dataNodeRecordsRecordsItem["MaxAge"].isNull())
			recordsItemObject.maxAge = dataNodeRecordsRecordsItem["MaxAge"].asString();
		if(!dataNodeRecordsRecordsItem["CapStyle"].isNull())
			recordsItemObject.capStyle = dataNodeRecordsRecordsItem["CapStyle"].asString();
		if(!dataNodeRecordsRecordsItem["HairStyle"].isNull())
			recordsItemObject.hairStyle = dataNodeRecordsRecordsItem["HairStyle"].asString();
		if(!dataNodeRecordsRecordsItem["LeftTopX"].isNull())
			recordsItemObject.leftTopX = std::stof(dataNodeRecordsRecordsItem["LeftTopX"].asString());
		if(!dataNodeRecordsRecordsItem["LeftTopY"].isNull())
			recordsItemObject.leftTopY = std::stof(dataNodeRecordsRecordsItem["LeftTopY"].asString());
		if(!dataNodeRecordsRecordsItem["RightBottomX"].isNull())
			recordsItemObject.rightBottomX = std::stof(dataNodeRecordsRecordsItem["RightBottomX"].asString());
		if(!dataNodeRecordsRecordsItem["RightBottomY"].isNull())
			recordsItemObject.rightBottomY = std::stof(dataNodeRecordsRecordsItem["RightBottomY"].asString());
		if(!dataNodeRecordsRecordsItem["PicUrlPath"].isNull())
			recordsItemObject.picUrlPath = dataNodeRecordsRecordsItem["PicUrlPath"].asString();
		if(!dataNodeRecordsRecordsItem["TargetPicUrlPath"].isNull())
			recordsItemObject.targetPicUrlPath = dataNodeRecordsRecordsItem["TargetPicUrlPath"].asString();
		if(!dataNodeRecordsRecordsItem["SourceId"].isNull())
			recordsItemObject.sourceId = dataNodeRecordsRecordsItem["SourceId"].asString();
		data_.records.push_back(recordsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListFaceAlgorithmResultsResult::getMessage()const
{
	return message_;
}

ListFaceAlgorithmResultsResult::Data ListFaceAlgorithmResultsResult::getData()const
{
	return data_;
}

std::string ListFaceAlgorithmResultsResult::getCode()const
{
	return code_;
}

