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

#include <alibabacloud/scsp/model/GetHotlineGroupDetailReportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scsp;
using namespace AlibabaCloud::Scsp::Model;

GetHotlineGroupDetailReportResult::GetHotlineGroupDetailReportResult() :
	ServiceResult()
{}

GetHotlineGroupDetailReportResult::GetHotlineGroupDetailReportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetHotlineGroupDetailReportResult::~GetHotlineGroupDetailReportResult()
{}

void GetHotlineGroupDetailReportResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	if(!dataNode["Page"].isNull())
		data_.page = std::stoi(dataNode["Page"].asString());
	auto allColumnsNode = dataNode["Columns"]["ColumnsItem"];
	for (auto dataNodeColumnsColumnsItem : allColumnsNode)
	{
		Data::ColumnsItem columnsItemObject;
		if(!dataNodeColumnsColumnsItem["Key"].isNull())
			columnsItemObject.key = dataNodeColumnsColumnsItem["Key"].asString();
		if(!dataNodeColumnsColumnsItem["Title"].isNull())
			columnsItemObject.title = dataNodeColumnsColumnsItem["Title"].asString();
		data_.columns.push_back(columnsItemObject);
	}
		auto allRows = dataNode["Rows"]["Rows"];
		for (auto value : allRows)
			data_.rows.push_back(value.asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();

}

std::string GetHotlineGroupDetailReportResult::getMessage()const
{
	return message_;
}

GetHotlineGroupDetailReportResult::Data GetHotlineGroupDetailReportResult::getData()const
{
	return data_;
}

std::string GetHotlineGroupDetailReportResult::getCode()const
{
	return code_;
}

std::string GetHotlineGroupDetailReportResult::getSuccess()const
{
	return success_;
}

