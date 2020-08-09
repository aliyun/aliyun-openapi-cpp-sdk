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

#include <alibabacloud/vcs/model/ListEventAlgorithmResultsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

ListEventAlgorithmResultsResult::ListEventAlgorithmResultsResult() :
	ServiceResult()
{}

ListEventAlgorithmResultsResult::ListEventAlgorithmResultsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEventAlgorithmResultsResult::~ListEventAlgorithmResultsResult()
{}

void ListEventAlgorithmResultsResult::parse(const std::string &payload)
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
		if(!dataNodeRecordsRecordsItem["CapStyle"].isNull())
			recordsItemObject.capStyle = dataNodeRecordsRecordsItem["CapStyle"].asString();
		if(!dataNodeRecordsRecordsItem["CorpId"].isNull())
			recordsItemObject.corpId = dataNodeRecordsRecordsItem["CorpId"].asString();
		if(!dataNodeRecordsRecordsItem["DataSourceId"].isNull())
			recordsItemObject.dataSourceId = dataNodeRecordsRecordsItem["DataSourceId"].asString();
		if(!dataNodeRecordsRecordsItem["EventType"].isNull())
			recordsItemObject.eventType = dataNodeRecordsRecordsItem["EventType"].asString();
		if(!dataNodeRecordsRecordsItem["FaceCount"].isNull())
			recordsItemObject.faceCount = dataNodeRecordsRecordsItem["FaceCount"].asString();
		if(!dataNodeRecordsRecordsItem["PicUrlPath"].isNull())
			recordsItemObject.picUrlPath = dataNodeRecordsRecordsItem["PicUrlPath"].asString();
		if(!dataNodeRecordsRecordsItem["ShotTime"].isNull())
			recordsItemObject.shotTime = dataNodeRecordsRecordsItem["ShotTime"].asString();
		if(!dataNodeRecordsRecordsItem["TargetPicUrlPath"].isNull())
			recordsItemObject.targetPicUrlPath = dataNodeRecordsRecordsItem["TargetPicUrlPath"].asString();
		if(!dataNodeRecordsRecordsItem["RecordId"].isNull())
			recordsItemObject.recordId = dataNodeRecordsRecordsItem["RecordId"].asString();
		if(!dataNodeRecordsRecordsItem["ExtendValue"].isNull())
			recordsItemObject.extendValue = dataNodeRecordsRecordsItem["ExtendValue"].asString();
		if(!dataNodeRecordsRecordsItem["ExtendValueTwo"].isNull())
			recordsItemObject.extendValueTwo = dataNodeRecordsRecordsItem["ExtendValueTwo"].asString();
		if(!dataNodeRecordsRecordsItem["ExtendValueThree"].isNull())
			recordsItemObject.extendValueThree = dataNodeRecordsRecordsItem["ExtendValueThree"].asString();
		data_.records.push_back(recordsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ExtendValue"].isNull())
		extendValue_ = value["ExtendValue"].asString();

}

std::string ListEventAlgorithmResultsResult::getExtendValue()const
{
	return extendValue_;
}

std::string ListEventAlgorithmResultsResult::getMessage()const
{
	return message_;
}

ListEventAlgorithmResultsResult::Data ListEventAlgorithmResultsResult::getData()const
{
	return data_;
}

std::string ListEventAlgorithmResultsResult::getCode()const
{
	return code_;
}

