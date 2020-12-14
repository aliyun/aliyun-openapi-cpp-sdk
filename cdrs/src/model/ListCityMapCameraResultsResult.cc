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

#include <alibabacloud/cdrs/model/ListCityMapCameraResultsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CDRS;
using namespace AlibabaCloud::CDRS::Model;

ListCityMapCameraResultsResult::ListCityMapCameraResultsResult() :
	ServiceResult()
{}

ListCityMapCameraResultsResult::ListCityMapCameraResultsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCityMapCameraResultsResult::~ListCityMapCameraResultsResult()
{}

void ListCityMapCameraResultsResult::parse(const std::string &payload)
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
		if(!valueDataDatas["NearPoi"].isNull())
			dataObject.nearPoi = valueDataDatas["NearPoi"].asString();
		if(!valueDataDatas["DataSourcePoi"].isNull())
			dataObject.dataSourcePoi = valueDataDatas["DataSourcePoi"].asString();
		if(!valueDataDatas["DataSourceName"].isNull())
			dataObject.dataSourceName = valueDataDatas["DataSourceName"].asString();
		if(!valueDataDatas["CorpId"].isNull())
			dataObject.corpId = valueDataDatas["CorpId"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNum"].isNull())
		pageNum_ = value["PageNum"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();

}

long ListCityMapCameraResultsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListCityMapCameraResultsResult::getMessage()const
{
	return message_;
}

std::string ListCityMapCameraResultsResult::getPageNum()const
{
	return pageNum_;
}

std::string ListCityMapCameraResultsResult::getPageSize()const
{
	return pageSize_;
}

std::vector<ListCityMapCameraResultsResult::Datas> ListCityMapCameraResultsResult::getData()const
{
	return data_;
}

std::string ListCityMapCameraResultsResult::getCode()const
{
	return code_;
}

