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

#include <alibabacloud/cdrs/model/ListDataStatisticsByDayResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CDRS;
using namespace AlibabaCloud::CDRS::Model;

ListDataStatisticsByDayResult::ListDataStatisticsByDayResult() :
	ServiceResult()
{}

ListDataStatisticsByDayResult::ListDataStatisticsByDayResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDataStatisticsByDayResult::~ListDataStatisticsByDayResult()
{}

void ListDataStatisticsByDayResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Datas"];
	for (auto valueDataDatas : allDataNode)
	{
		Datas dataObject;
		if(!valueDataDatas["Date"].isNull())
			dataObject.date = valueDataDatas["Date"].asString();
		if(!valueDataDatas["CorpId"].isNull())
			dataObject.corpId = valueDataDatas["CorpId"].asString();
		if(!valueDataDatas["FaceNumber"].isNull())
			dataObject.faceNumber = std::stoi(valueDataDatas["FaceNumber"].asString());
		if(!valueDataDatas["BodyNumber"].isNull())
			dataObject.bodyNumber = std::stoi(valueDataDatas["BodyNumber"].asString());
		if(!valueDataDatas["MotorNumber"].isNull())
			dataObject.motorNumber = std::stoi(valueDataDatas["MotorNumber"].asString());
		if(!valueDataDatas["NonMotorNumber"].isNull())
			dataObject.nonMotorNumber = std::stoi(valueDataDatas["NonMotorNumber"].asString());
		if(!valueDataDatas["TotalNumber"].isNull())
			dataObject.totalNumber = std::stoi(valueDataDatas["TotalNumber"].asString());
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

long ListDataStatisticsByDayResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListDataStatisticsByDayResult::getMessage()const
{
	return message_;
}

long ListDataStatisticsByDayResult::getPageSize()const
{
	return pageSize_;
}

long ListDataStatisticsByDayResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListDataStatisticsByDayResult::Datas> ListDataStatisticsByDayResult::getData()const
{
	return data_;
}

std::string ListDataStatisticsByDayResult::getCode()const
{
	return code_;
}

