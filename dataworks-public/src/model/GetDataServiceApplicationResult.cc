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

#include <alibabacloud/dataworks-public/model/GetDataServiceApplicationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetDataServiceApplicationResult::GetDataServiceApplicationResult() :
	ServiceResult()
{}

GetDataServiceApplicationResult::GetDataServiceApplicationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDataServiceApplicationResult::~GetDataServiceApplicationResult()
{}

void GetDataServiceApplicationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ApplicationCode"].isNull())
		data_.applicationCode = dataNode["ApplicationCode"].asString();
	if(!dataNode["ApplicationKey"].isNull())
		data_.applicationKey = dataNode["ApplicationKey"].asString();
	if(!dataNode["ApplicationSecret"].isNull())
		data_.applicationSecret = dataNode["ApplicationSecret"].asString();
	if(!dataNode["ProjectId"].isNull())
		data_.projectId = std::stol(dataNode["ProjectId"].asString());
	if(!dataNode["ApplicationName"].isNull())
		data_.applicationName = dataNode["ApplicationName"].asString();
	if(!dataNode["ApplicationId"].isNull())
		data_.applicationId = std::stol(dataNode["ApplicationId"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

int GetDataServiceApplicationResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetDataServiceApplicationResult::Data GetDataServiceApplicationResult::getData()const
{
	return data_;
}

std::string GetDataServiceApplicationResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetDataServiceApplicationResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetDataServiceApplicationResult::getSuccess()const
{
	return success_;
}

