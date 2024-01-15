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

#include <alibabacloud/linkvisual/model/GetPictureSearchJobStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

GetPictureSearchJobStatusResult::GetPictureSearchJobStatusResult() :
	ServiceResult()
{}

GetPictureSearchJobStatusResult::GetPictureSearchJobStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPictureSearchJobStatusResult::~GetPictureSearchJobStatusResult()
{}

void GetPictureSearchJobStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["EndTime"].isNull())
		data_.endTime = std::stol(dataNode["EndTime"].asString());
	if(!dataNode["StartTime"].isNull())
		data_.startTime = std::stol(dataNode["StartTime"].asString());
	if(!dataNode["JobStatus"].isNull())
		data_.jobStatus = std::stoi(dataNode["JobStatus"].asString());
	if(!dataNode["SearchPicUrl"].isNull())
		data_.searchPicUrl = dataNode["SearchPicUrl"].asString();
	if(!dataNode["CreateTime"].isNull())
		data_.createTime = std::stol(dataNode["CreateTime"].asString());
	if(!dataNode["JobId"].isNull())
		data_.jobId = dataNode["JobId"].asString();
	if(!dataNode["Threshold"].isNull())
		data_.threshold = std::stof(dataNode["Threshold"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetPictureSearchJobStatusResult::Data GetPictureSearchJobStatusResult::getData()const
{
	return data_;
}

std::string GetPictureSearchJobStatusResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string GetPictureSearchJobStatusResult::getCode()const
{
	return code_;
}

bool GetPictureSearchJobStatusResult::getSuccess()const
{
	return success_;
}

