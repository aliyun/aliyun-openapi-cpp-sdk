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

#include <alibabacloud/mseap/model/GetProxyByTypeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mseap;
using namespace AlibabaCloud::Mseap::Model;

GetProxyByTypeResult::GetProxyByTypeResult() :
	ServiceResult()
{}

GetProxyByTypeResult::GetProxyByTypeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetProxyByTypeResult::~GetProxyByTypeResult()
{}

void GetProxyByTypeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["AllowRetry"].isNull())
		allowRetry_ = value["AllowRetry"].asString() == "true";
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["Module"].isNull())
		module_ = value["Module"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["AppName"].isNull())
		appName_ = value["AppName"].asString();

}

bool GetProxyByTypeResult::getAllowRetry()const
{
	return allowRetry_;
}

std::string GetProxyByTypeResult::getErrorMsg()const
{
	return errorMsg_;
}

int GetProxyByTypeResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetProxyByTypeResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string GetProxyByTypeResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetProxyByTypeResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string GetProxyByTypeResult::getModule()const
{
	return module_;
}

bool GetProxyByTypeResult::getSuccess()const
{
	return success_;
}

std::string GetProxyByTypeResult::getAppName()const
{
	return appName_;
}

