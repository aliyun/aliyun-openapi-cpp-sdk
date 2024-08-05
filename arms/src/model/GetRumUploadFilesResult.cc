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

#include <alibabacloud/arms/model/GetRumUploadFilesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

GetRumUploadFilesResult::GetRumUploadFilesResult() :
	ServiceResult()
{}

GetRumUploadFilesResult::GetRumUploadFilesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetRumUploadFilesResult::~GetRumUploadFilesResult()
{}

void GetRumUploadFilesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["dataItem"];
	for (auto valueDatadataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDatadataItem["FileName"].isNull())
			dataObject.fileName = valueDatadataItem["FileName"].asString();
		if(!valueDatadataItem["Uuid"].isNull())
			dataObject.uuid = valueDatadataItem["Uuid"].asString();
		if(!valueDatadataItem["Size"].isNull())
			dataObject.size = valueDatadataItem["Size"].asString();
		if(!valueDatadataItem["LastModifiedTime"].isNull())
			dataObject.lastModifiedTime = valueDatadataItem["LastModifiedTime"].asString();
		if(!valueDatadataItem["VersionId"].isNull())
			dataObject.versionId = valueDatadataItem["VersionId"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetRumUploadFilesResult::getMessage()const
{
	return message_;
}

int GetRumUploadFilesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<GetRumUploadFilesResult::DataItem> GetRumUploadFilesResult::getData()const
{
	return data_;
}

int GetRumUploadFilesResult::getCode()const
{
	return code_;
}

bool GetRumUploadFilesResult::getSuccess()const
{
	return success_;
}

