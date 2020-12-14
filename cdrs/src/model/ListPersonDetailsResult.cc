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

#include <alibabacloud/cdrs/model/ListPersonDetailsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CDRS;
using namespace AlibabaCloud::CDRS::Model;

ListPersonDetailsResult::ListPersonDetailsResult() :
	ServiceResult()
{}

ListPersonDetailsResult::ListPersonDetailsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPersonDetailsResult::~ListPersonDetailsResult()
{}

void ListPersonDetailsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Datas"];
	for (auto valueDataDatas : allDataNode)
	{
		Datas dataObject;
		if(!valueDataDatas["PersonId"].isNull())
			dataObject.personId = valueDataDatas["PersonId"].asString();
		if(!valueDataDatas["Gender"].isNull())
			dataObject.gender = valueDataDatas["Gender"].asString();
		if(!valueDataDatas["Age"].isNull())
			dataObject.age = valueDataDatas["Age"].asString();
		if(!valueDataDatas["Profession"].isNull())
			dataObject.profession = valueDataDatas["Profession"].asString();
		if(!valueDataDatas["Address"].isNull())
			dataObject.address = valueDataDatas["Address"].asString();
		if(!valueDataDatas["Transportation"].isNull())
			dataObject.transportation = valueDataDatas["Transportation"].asString();
		if(!valueDataDatas["PersonType"].isNull())
			dataObject.personType = valueDataDatas["PersonType"].asString();
		if(!valueDataDatas["HotSpotAddress"].isNull())
			dataObject.hotSpotAddress = valueDataDatas["HotSpotAddress"].asString();
		if(!valueDataDatas["UpdateTime"].isNull())
			dataObject.updateTime = valueDataDatas["UpdateTime"].asString();
		if(!valueDataDatas["PreferredColor"].isNull())
			dataObject.preferredColor = valueDataDatas["PreferredColor"].asString();
		if(!valueDataDatas["FaceSourceImage"].isNull())
			dataObject.faceSourceImage = valueDataDatas["FaceSourceImage"].asString();
		if(!valueDataDatas["FaceTargetImage"].isNull())
			dataObject.faceTargetImage = valueDataDatas["FaceTargetImage"].asString();
		if(!valueDataDatas["BodySourceImage"].isNull())
			dataObject.bodySourceImage = valueDataDatas["BodySourceImage"].asString();
		if(!valueDataDatas["BodyTargetImage"].isNull())
			dataObject.bodyTargetImage = valueDataDatas["BodyTargetImage"].asString();
		if(!valueDataDatas["PrefOutTime"].isNull())
			dataObject.prefOutTime = valueDataDatas["PrefOutTime"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListPersonDetailsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListPersonDetailsResult::getMessage()const
{
	return message_;
}

long ListPersonDetailsResult::getPageSize()const
{
	return pageSize_;
}

long ListPersonDetailsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListPersonDetailsResult::Datas> ListPersonDetailsResult::getData()const
{
	return data_;
}

std::string ListPersonDetailsResult::getCode()const
{
	return code_;
}

