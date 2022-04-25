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

#include <alibabacloud/dataworks-public/model/GetBusinessResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetBusinessResult::GetBusinessResult() :
	ServiceResult()
{}

GetBusinessResult::GetBusinessResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetBusinessResult::~GetBusinessResult()
{}

void GetBusinessResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Owner"].isNull())
		data_.owner = dataNode["Owner"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["ProjectId"].isNull())
		data_.projectId = dataNode["ProjectId"].asString();
	if(!dataNode["BusinessId"].isNull())
		data_.businessId = std::stol(dataNode["BusinessId"].asString());
	if(!dataNode["BusinessName"].isNull())
		data_.businessName = dataNode["BusinessName"].asString();
	if(!dataNode["UseType"].isNull())
		data_.useType = dataNode["UseType"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int GetBusinessResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetBusinessResult::Data GetBusinessResult::getData()const
{
	return data_;
}

std::string GetBusinessResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetBusinessResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetBusinessResult::getSuccess()const
{
	return success_;
}

