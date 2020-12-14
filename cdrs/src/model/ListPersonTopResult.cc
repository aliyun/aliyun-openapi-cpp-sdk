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

#include <alibabacloud/cdrs/model/ListPersonTopResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CDRS;
using namespace AlibabaCloud::CDRS::Model;

ListPersonTopResult::ListPersonTopResult() :
	ServiceResult()
{}

ListPersonTopResult::ListPersonTopResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPersonTopResult::~ListPersonTopResult()
{}

void ListPersonTopResult::parse(const std::string &payload)
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
		if(!valueDataDatas["PersonId"].isNull())
			dataObject.personId = valueDataDatas["PersonId"].asString();
		if(!valueDataDatas["PoiId"].isNull())
			dataObject.poiId = valueDataDatas["PoiId"].asString();
		if(!valueDataDatas["PoiName"].isNull())
			dataObject.poiName = valueDataDatas["PoiName"].asString();
		if(!valueDataDatas["PassHour"].isNull())
			dataObject.passHour = valueDataDatas["PassHour"].asString();
		if(!valueDataDatas["Frequency"].isNull())
			dataObject.frequency = valueDataDatas["Frequency"].asString();
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

long ListPersonTopResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListPersonTopResult::getMessage()const
{
	return message_;
}

long ListPersonTopResult::getPageSize()const
{
	return pageSize_;
}

long ListPersonTopResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListPersonTopResult::Datas> ListPersonTopResult::getData()const
{
	return data_;
}

std::string ListPersonTopResult::getCode()const
{
	return code_;
}

