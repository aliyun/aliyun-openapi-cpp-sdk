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

#include <alibabacloud/linkvisual/model/PictureSearchPictureResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

PictureSearchPictureResult::PictureSearchPictureResult() :
	ServiceResult()
{}

PictureSearchPictureResult::PictureSearchPictureResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PictureSearchPictureResult::~PictureSearchPictureResult()
{}

void PictureSearchPictureResult::parse(const std::string &payload)
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
	auto allPageDataNode = dataNode["PageData"]["searchData"];
	for (auto dataNodePageDatasearchData : allPageDataNode)
	{
		Data::SearchData searchDataObject;
		if(!dataNodePageDatasearchData["PicUrl"].isNull())
			searchDataObject.picUrl = dataNodePageDatasearchData["PicUrl"].asString();
		if(!dataNodePageDatasearchData["EventTime"].isNull())
			searchDataObject.eventTime = std::stol(dataNodePageDatasearchData["EventTime"].asString());
		if(!dataNodePageDatasearchData["GatewayIotId"].isNull())
			searchDataObject.gatewayIotId = dataNodePageDatasearchData["GatewayIotId"].asString();
		if(!dataNodePageDatasearchData["VectorId"].isNull())
			searchDataObject.vectorId = dataNodePageDatasearchData["VectorId"].asString();
		if(!dataNodePageDatasearchData["Threshold"].isNull())
			searchDataObject.threshold = std::stof(dataNodePageDatasearchData["Threshold"].asString());
		if(!dataNodePageDatasearchData["VectorType"].isNull())
			searchDataObject.vectorType = std::stoi(dataNodePageDatasearchData["VectorType"].asString());
		if(!dataNodePageDatasearchData["IotId"].isNull())
			searchDataObject.iotId = dataNodePageDatasearchData["IotId"].asString();
		data_.pageData.push_back(searchDataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

PictureSearchPictureResult::Data PictureSearchPictureResult::getData()const
{
	return data_;
}

std::string PictureSearchPictureResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string PictureSearchPictureResult::getCode()const
{
	return code_;
}

bool PictureSearchPictureResult::getSuccess()const
{
	return success_;
}

