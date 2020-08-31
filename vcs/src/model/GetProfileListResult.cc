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

#include <alibabacloud/vcs/model/GetProfileListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

GetProfileListResult::GetProfileListResult() :
	ServiceResult()
{}

GetProfileListResult::GetProfileListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetProfileListResult::~GetProfileListResult()
{}

void GetProfileListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stol(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stol(dataNode["PageSize"].asString());
	if(!dataNode["Success"].isNull())
		data_.success = dataNode["Success"].asString() == "true";
	if(!dataNode["Total"].isNull())
		data_.total = std::stol(dataNode["Total"].asString());
	auto allRecordsNode = dataNode["Records"]["RecordsItem"];
	for (auto dataNodeRecordsRecordsItem : allRecordsNode)
	{
		Data::RecordsItem recordsItemObject;
		if(!dataNodeRecordsRecordsItem["SceneType"].isNull())
			recordsItemObject.sceneType = dataNodeRecordsRecordsItem["SceneType"].asString();
		if(!dataNodeRecordsRecordsItem["BizId"].isNull())
			recordsItemObject.bizId = dataNodeRecordsRecordsItem["BizId"].asString();
		if(!dataNodeRecordsRecordsItem["FaceUrl"].isNull())
			recordsItemObject.faceUrl = dataNodeRecordsRecordsItem["FaceUrl"].asString();
		if(!dataNodeRecordsRecordsItem["Gender"].isNull())
			recordsItemObject.gender = dataNodeRecordsRecordsItem["Gender"].asString();
		if(!dataNodeRecordsRecordsItem["IdNumber"].isNull())
			recordsItemObject.idNumber = dataNodeRecordsRecordsItem["IdNumber"].asString();
		if(!dataNodeRecordsRecordsItem["IsvSubId"].isNull())
			recordsItemObject.isvSubId = dataNodeRecordsRecordsItem["IsvSubId"].asString();
		if(!dataNodeRecordsRecordsItem["SearchMatchingRate"].isNull())
			recordsItemObject.searchMatchingRate = dataNodeRecordsRecordsItem["SearchMatchingRate"].asString();
		if(!dataNodeRecordsRecordsItem["PersonId"].isNull())
			recordsItemObject.personId = dataNodeRecordsRecordsItem["PersonId"].asString();
		if(!dataNodeRecordsRecordsItem["CatalogId"].isNull())
			recordsItemObject.catalogId = std::stoi(dataNodeRecordsRecordsItem["CatalogId"].asString());
		if(!dataNodeRecordsRecordsItem["ProfileId"].isNull())
			recordsItemObject.profileId = std::stoi(dataNodeRecordsRecordsItem["ProfileId"].asString());
		if(!dataNodeRecordsRecordsItem["Name"].isNull())
			recordsItemObject.name = dataNodeRecordsRecordsItem["Name"].asString();
		data_.records.push_back(recordsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetProfileListResult::getMessage()const
{
	return message_;
}

GetProfileListResult::Data GetProfileListResult::getData()const
{
	return data_;
}

std::string GetProfileListResult::getCode()const
{
	return code_;
}

