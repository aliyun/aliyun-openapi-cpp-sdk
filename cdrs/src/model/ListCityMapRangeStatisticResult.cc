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

#include <alibabacloud/cdrs/model/ListCityMapRangeStatisticResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CDRS;
using namespace AlibabaCloud::CDRS::Model;

ListCityMapRangeStatisticResult::ListCityMapRangeStatisticResult() :
	ServiceResult()
{}

ListCityMapRangeStatisticResult::ListCityMapRangeStatisticResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCityMapRangeStatisticResult::~ListCityMapRangeStatisticResult()
{}

void ListCityMapRangeStatisticResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Datas"];
	for (auto valueDataDatas : allDataNode)
	{
		Datas dataObject;
		if(!valueDataDatas["DataSourceId"].isNull())
			dataObject.dataSourceId = valueDataDatas["DataSourceId"].asString();
		if(!valueDataDatas["Latitude"].isNull())
			dataObject.latitude = valueDataDatas["Latitude"].asString();
		if(!valueDataDatas["Longitude"].isNull())
			dataObject.longitude = valueDataDatas["Longitude"].asString();
		if(!valueDataDatas["DataSourceName"].isNull())
			dataObject.dataSourceName = valueDataDatas["DataSourceName"].asString();
		if(!valueDataDatas["CorpId"].isNull())
			dataObject.corpId = valueDataDatas["CorpId"].asString();
		if(!valueDataDatas["AdultValue"].isNull())
			dataObject.adultValue = valueDataDatas["AdultValue"].asString();
		if(!valueDataDatas["WomanValue"].isNull())
			dataObject.womanValue = valueDataDatas["WomanValue"].asString();
		if(!valueDataDatas["MotorValue"].isNull())
			dataObject.motorValue = valueDataDatas["MotorValue"].asString();
		if(!valueDataDatas["ManValue"].isNull())
			dataObject.manValue = valueDataDatas["ManValue"].asString();
		if(!valueDataDatas["OldValue"].isNull())
			dataObject.oldValue = valueDataDatas["OldValue"].asString();
		if(!valueDataDatas["ChildValue"].isNull())
			dataObject.childValue = valueDataDatas["ChildValue"].asString();
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

long ListCityMapRangeStatisticResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListCityMapRangeStatisticResult::getMessage()const
{
	return message_;
}

long ListCityMapRangeStatisticResult::getPageSize()const
{
	return pageSize_;
}

long ListCityMapRangeStatisticResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListCityMapRangeStatisticResult::Datas> ListCityMapRangeStatisticResult::getData()const
{
	return data_;
}

std::string ListCityMapRangeStatisticResult::getCode()const
{
	return code_;
}

