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

#include <alibabacloud/cdrs/model/PaginateProjectResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CDRS;
using namespace AlibabaCloud::CDRS::Model;

PaginateProjectResult::PaginateProjectResult() :
	ServiceResult()
{}

PaginateProjectResult::PaginateProjectResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PaginateProjectResult::~PaginateProjectResult()
{}

void PaginateProjectResult::parse(const std::string &payload)
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
		if(!dataNodeRecordsRecordsItem["UserId"].isNull())
			recordsItemObject.userId = dataNodeRecordsRecordsItem["UserId"].asString();
		if(!dataNodeRecordsRecordsItem["Type"].isNull())
			recordsItemObject.type = dataNodeRecordsRecordsItem["Type"].asString();
		if(!dataNodeRecordsRecordsItem["CorpId"].isNull())
			recordsItemObject.corpId = dataNodeRecordsRecordsItem["CorpId"].asString();
		if(!dataNodeRecordsRecordsItem["Name"].isNull())
			recordsItemObject.name = dataNodeRecordsRecordsItem["Name"].asString();
		if(!dataNodeRecordsRecordsItem["CreatedTime"].isNull())
			recordsItemObject.createdTime = dataNodeRecordsRecordsItem["CreatedTime"].asString();
		if(!dataNodeRecordsRecordsItem["ModifiedTime"].isNull())
			recordsItemObject.modifiedTime = dataNodeRecordsRecordsItem["ModifiedTime"].asString();
		if(!dataNodeRecordsRecordsItem["Icon"].isNull())
			recordsItemObject.icon = dataNodeRecordsRecordsItem["Icon"].asString();
		if(!dataNodeRecordsRecordsItem["Description"].isNull())
			recordsItemObject.description = dataNodeRecordsRecordsItem["Description"].asString();
		if(!dataNodeRecordsRecordsItem["AggregateSceneCode"].isNull())
			recordsItemObject.aggregateSceneCode = dataNodeRecordsRecordsItem["AggregateSceneCode"].asString();
		data_.records.push_back(recordsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string PaginateProjectResult::getMessage()const
{
	return message_;
}

PaginateProjectResult::Data PaginateProjectResult::getData()const
{
	return data_;
}

std::string PaginateProjectResult::getCode()const
{
	return code_;
}

