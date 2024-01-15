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

#include <alibabacloud/linkvisual/model/QueryPictureSearchJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

QueryPictureSearchJobResult::QueryPictureSearchJobResult() :
	ServiceResult()
{}

QueryPictureSearchJobResult::QueryPictureSearchJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryPictureSearchJobResult::~QueryPictureSearchJobResult()
{}

void QueryPictureSearchJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stoi(dataNode["CurrentPage"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	if(!dataNode["PageCount"].isNull())
		data_.pageCount = std::stoi(dataNode["PageCount"].asString());
	auto allPageDataNode = dataNode["PageData"]["pageDataItem"];
	for (auto dataNodePageDatapageDataItem : allPageDataNode)
	{
		Data::PageDataItem pageDataItemObject;
		if(!dataNodePageDatapageDataItem["EndTime"].isNull())
			pageDataItemObject.endTime = std::stol(dataNodePageDatapageDataItem["EndTime"].asString());
		if(!dataNodePageDatapageDataItem["StartTime"].isNull())
			pageDataItemObject.startTime = std::stol(dataNodePageDatapageDataItem["StartTime"].asString());
		if(!dataNodePageDatapageDataItem["JobStatus"].isNull())
			pageDataItemObject.jobStatus = std::stoi(dataNodePageDatapageDataItem["JobStatus"].asString());
		if(!dataNodePageDatapageDataItem["SearchPicUrl"].isNull())
			pageDataItemObject.searchPicUrl = dataNodePageDatapageDataItem["SearchPicUrl"].asString();
		if(!dataNodePageDatapageDataItem["CreateTime"].isNull())
			pageDataItemObject.createTime = std::stol(dataNodePageDatapageDataItem["CreateTime"].asString());
		if(!dataNodePageDatapageDataItem["JobId"].isNull())
			pageDataItemObject.jobId = dataNodePageDatapageDataItem["JobId"].asString();
		if(!dataNodePageDatapageDataItem["Threshold"].isNull())
			pageDataItemObject.threshold = std::stof(dataNodePageDatapageDataItem["Threshold"].asString());
		data_.pageData.push_back(pageDataItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

QueryPictureSearchJobResult::Data QueryPictureSearchJobResult::getData()const
{
	return data_;
}

std::string QueryPictureSearchJobResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryPictureSearchJobResult::getCode()const
{
	return code_;
}

bool QueryPictureSearchJobResult::getSuccess()const
{
	return success_;
}

