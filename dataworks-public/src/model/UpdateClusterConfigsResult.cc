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

#include <alibabacloud/dataworks-public/model/UpdateClusterConfigsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

UpdateClusterConfigsResult::UpdateClusterConfigsResult() :
	ServiceResult()
{}

UpdateClusterConfigsResult::UpdateClusterConfigsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateClusterConfigsResult::~UpdateClusterConfigsResult()
{}

void UpdateClusterConfigsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Data"].isNull())
		data_ = value["Data"].asString() == "true";
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

int UpdateClusterConfigsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

bool UpdateClusterConfigsResult::getData()const
{
	return data_;
}

std::string UpdateClusterConfigsResult::getErrorCode()const
{
	return errorCode_;
}

std::string UpdateClusterConfigsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool UpdateClusterConfigsResult::getSuccess()const
{
	return success_;
}

