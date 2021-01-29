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

#include <alibabacloud/cdrs/model/ListVehicleTrackResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CDRS;
using namespace AlibabaCloud::CDRS::Model;

ListVehicleTrackResult::ListVehicleTrackResult() :
	ServiceResult()
{}

ListVehicleTrackResult::ListVehicleTrackResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVehicleTrackResult::~ListVehicleTrackResult()
{}

void ListVehicleTrackResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Datas"];
	for (auto valueDataDatas : allDataNode)
	{
		Datas dataObject;
		if(!valueDataDatas["PlateId"].isNull())
			dataObject.plateId = valueDataDatas["PlateId"].asString();
		if(!valueDataDatas["CorpId"].isNull())
			dataObject.corpId = valueDataDatas["CorpId"].asString();
		if(!valueDataDatas["DataSourceId"].isNull())
			dataObject.dataSourceId = valueDataDatas["DataSourceId"].asString();
		if(!valueDataDatas["DataSourceName"].isNull())
			dataObject.dataSourceName = valueDataDatas["DataSourceName"].asString();
		if(!valueDataDatas["PicUrlPath"].isNull())
			dataObject.picUrlPath = valueDataDatas["PicUrlPath"].asString();
		if(!valueDataDatas["TargetPicUrlPath"].isNull())
			dataObject.targetPicUrlPath = valueDataDatas["TargetPicUrlPath"].asString();
		if(!valueDataDatas["RightBottomY"].isNull())
			dataObject.rightBottomY = valueDataDatas["RightBottomY"].asString();
		if(!valueDataDatas["RightBottomX"].isNull())
			dataObject.rightBottomX = valueDataDatas["RightBottomX"].asString();
		if(!valueDataDatas["LeftTopY"].isNull())
			dataObject.leftTopY = valueDataDatas["LeftTopY"].asString();
		if(!valueDataDatas["LeftTopX"].isNull())
			dataObject.leftTopX = valueDataDatas["LeftTopX"].asString();
		if(!valueDataDatas["PassTime"].isNull())
			dataObject.passTime = valueDataDatas["PassTime"].asString();
		if(!valueDataDatas["Order"].isNull())
			dataObject.order = valueDataDatas["Order"].asString();
		if(!valueDataDatas["Latitude"].isNull())
			dataObject.latitude = valueDataDatas["Latitude"].asString();
		if(!valueDataDatas["Longitude"].isNull())
			dataObject.longitude = valueDataDatas["Longitude"].asString();
		if(!valueDataDatas["SourceUrl"].isNull())
			dataObject.sourceUrl = valueDataDatas["SourceUrl"].asString();
		if(!valueDataDatas["TargetUrl"].isNull())
			dataObject.targetUrl = valueDataDatas["TargetUrl"].asString();
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

long ListVehicleTrackResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListVehicleTrackResult::getMessage()const
{
	return message_;
}

long ListVehicleTrackResult::getPageSize()const
{
	return pageSize_;
}

long ListVehicleTrackResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListVehicleTrackResult::Datas> ListVehicleTrackResult::getData()const
{
	return data_;
}

std::string ListVehicleTrackResult::getCode()const
{
	return code_;
}

