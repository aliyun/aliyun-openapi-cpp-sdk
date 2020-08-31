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

#include <alibabacloud/vcs/model/GetPersonListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

GetPersonListResult::GetPersonListResult() :
	ServiceResult()
{}

GetPersonListResult::GetPersonListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPersonListResult::~GetPersonListResult()
{}

void GetPersonListResult::parse(const std::string &payload)
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
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	auto allRecordsNode = dataNode["Records"]["RecordsItem"];
	for (auto dataNodeRecordsRecordsItem : allRecordsNode)
	{
		Data::RecordsItem recordsItemObject;
		if(!dataNodeRecordsRecordsItem["FaceUrl"].isNull())
			recordsItemObject.faceUrl = dataNodeRecordsRecordsItem["FaceUrl"].asString();
		if(!dataNodeRecordsRecordsItem["FirstShotTime"].isNull())
			recordsItemObject.firstShotTime = std::stol(dataNodeRecordsRecordsItem["FirstShotTime"].asString());
		if(!dataNodeRecordsRecordsItem["PersonId"].isNull())
			recordsItemObject.personId = dataNodeRecordsRecordsItem["PersonId"].asString();
		if(!dataNodeRecordsRecordsItem["SearchMatchingRate"].isNull())
			recordsItemObject.searchMatchingRate = dataNodeRecordsRecordsItem["SearchMatchingRate"].asString();
		if(!dataNodeRecordsRecordsItem["LastShotTime"].isNull())
			recordsItemObject.lastShotTime = std::stol(dataNodeRecordsRecordsItem["LastShotTime"].asString());
		auto allPropertyTagListNode = allRecordsNode["PropertyTagList"]["TagList"];
		for (auto allRecordsNodePropertyTagListTagList : allPropertyTagListNode)
		{
			Data::RecordsItem::TagList propertyTagListObject;
			if(!allRecordsNodePropertyTagListTagList["Code"].isNull())
				propertyTagListObject.code = allRecordsNodePropertyTagListTagList["Code"].asString();
			if(!allRecordsNodePropertyTagListTagList["TagCodeName"].isNull())
				propertyTagListObject.tagCodeName = allRecordsNodePropertyTagListTagList["TagCodeName"].asString();
			if(!allRecordsNodePropertyTagListTagList["TagName"].isNull())
				propertyTagListObject.tagName = allRecordsNodePropertyTagListTagList["TagName"].asString();
			if(!allRecordsNodePropertyTagListTagList["Value"].isNull())
				propertyTagListObject.value = allRecordsNodePropertyTagListTagList["Value"].asString();
			recordsItemObject.propertyTagList.push_back(propertyTagListObject);
		}
		data_.records.push_back(recordsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetPersonListResult::getMessage()const
{
	return message_;
}

GetPersonListResult::Data GetPersonListResult::getData()const
{
	return data_;
}

std::string GetPersonListResult::getCode()const
{
	return code_;
}

