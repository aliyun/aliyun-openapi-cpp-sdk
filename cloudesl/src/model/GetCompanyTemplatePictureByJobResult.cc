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

#include <alibabacloud/cloudesl/model/GetCompanyTemplatePictureByJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

GetCompanyTemplatePictureByJobResult::GetCompanyTemplatePictureByJobResult() :
	ServiceResult()
{}

GetCompanyTemplatePictureByJobResult::GetCompanyTemplatePictureByJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCompanyTemplatePictureByJobResult::~GetCompanyTemplatePictureByJobResult()
{}

void GetCompanyTemplatePictureByJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Base64Picture"].isNull())
		base64Picture_ = value["Base64Picture"].asString();
	if(!value["JobId"].isNull())
		jobId_ = value["JobId"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["Url"].isNull())
		url_ = value["Url"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();

}

std::string GetCompanyTemplatePictureByJobResult::getType()const
{
	return type_;
}

std::string GetCompanyTemplatePictureByJobResult::getMessage()const
{
	return message_;
}

std::string GetCompanyTemplatePictureByJobResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string GetCompanyTemplatePictureByJobResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetCompanyTemplatePictureByJobResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string GetCompanyTemplatePictureByJobResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string GetCompanyTemplatePictureByJobResult::getBase64Picture()const
{
	return base64Picture_;
}

std::string GetCompanyTemplatePictureByJobResult::getCode()const
{
	return code_;
}

std::string GetCompanyTemplatePictureByJobResult::getJobId()const
{
	return jobId_;
}

std::string GetCompanyTemplatePictureByJobResult::getUrl()const
{
	return url_;
}

bool GetCompanyTemplatePictureByJobResult::getSuccess()const
{
	return success_;
}

