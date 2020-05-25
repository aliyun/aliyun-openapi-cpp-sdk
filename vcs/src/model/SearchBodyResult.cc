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

#include <alibabacloud/vcs/model/SearchBodyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

SearchBodyResult::SearchBodyResult() :
	ServiceResult()
{}

SearchBodyResult::SearchBodyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchBodyResult::~SearchBodyResult()
{}

void SearchBodyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNo"].isNull())
		data_.pageNo = std::stoi(dataNode["PageNo"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	if(!dataNode["TotalPage"].isNull())
		data_.totalPage = std::stoi(dataNode["TotalPage"].asString());
	auto allRecordsNode = dataNode["Records"]["Record"];
	for (auto dataNodeRecordsRecord : allRecordsNode)
	{
		Data::Record recordObject;
		if(!dataNodeRecordsRecord["GbId"].isNull())
			recordObject.gbId = dataNodeRecordsRecord["GbId"].asString();
		if(!dataNodeRecordsRecord["ImageUrl"].isNull())
			recordObject.imageUrl = dataNodeRecordsRecord["ImageUrl"].asString();
		if(!dataNodeRecordsRecord["LeftTopX"].isNull())
			recordObject.leftTopX = std::stof(dataNodeRecordsRecord["LeftTopX"].asString());
		if(!dataNodeRecordsRecord["LeftTopY"].isNull())
			recordObject.leftTopY = std::stof(dataNodeRecordsRecord["LeftTopY"].asString());
		if(!dataNodeRecordsRecord["RightBottomX"].isNull())
			recordObject.rightBottomX = std::stof(dataNodeRecordsRecord["RightBottomX"].asString());
		if(!dataNodeRecordsRecord["RightBottomY"].isNull())
			recordObject.rightBottomY = std::stof(dataNodeRecordsRecord["RightBottomY"].asString());
		if(!dataNodeRecordsRecord["Score"].isNull())
			recordObject.score = std::stof(dataNodeRecordsRecord["Score"].asString());
		if(!dataNodeRecordsRecord["TargetImageUrl"].isNull())
			recordObject.targetImageUrl = dataNodeRecordsRecord["TargetImageUrl"].asString();
		data_.records.push_back(recordObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string SearchBodyResult::getMessage()const
{
	return message_;
}

SearchBodyResult::Data SearchBodyResult::getData()const
{
	return data_;
}

std::string SearchBodyResult::getCode()const
{
	return code_;
}

