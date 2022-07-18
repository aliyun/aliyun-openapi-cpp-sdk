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

#include <alibabacloud/cloudesl/model/QueryLayoutDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

QueryLayoutDetailResult::QueryLayoutDetailResult() :
	ServiceResult()
{}

QueryLayoutDetailResult::QueryLayoutDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryLayoutDetailResult::~QueryLayoutDetailResult()
{}

void QueryLayoutDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
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
	if(!value["LayoutId"].isNull())
		layoutId_ = std::stol(value["LayoutId"].asString());
	if(!value["LayoutName"].isNull())
		layoutName_ = value["LayoutName"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["LayoutTemplateId"].isNull())
		layoutTemplateId_ = std::stol(value["LayoutTemplateId"].asString());
	if(!value["EslModelId"].isNull())
		eslModelId_ = value["EslModelId"].asString();
	if(!value["TemplateVersion"].isNull())
		templateVersion_ = value["TemplateVersion"].asString();
	if(!value["BrandId"].isNull())
		brandId_ = value["BrandId"].asString();

}

std::string QueryLayoutDetailResult::getDescription()const
{
	return description_;
}

std::string QueryLayoutDetailResult::getMessage()const
{
	return message_;
}

std::string QueryLayoutDetailResult::getEslModelId()const
{
	return eslModelId_;
}

long QueryLayoutDetailResult::getLayoutId()const
{
	return layoutId_;
}

std::string QueryLayoutDetailResult::getTemplateVersion()const
{
	return templateVersion_;
}

std::string QueryLayoutDetailResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string QueryLayoutDetailResult::getBrandId()const
{
	return brandId_;
}

std::string QueryLayoutDetailResult::getCode()const
{
	return code_;
}

long QueryLayoutDetailResult::getLayoutTemplateId()const
{
	return layoutTemplateId_;
}

bool QueryLayoutDetailResult::getSuccess()const
{
	return success_;
}

std::string QueryLayoutDetailResult::getLayoutName()const
{
	return layoutName_;
}

std::string QueryLayoutDetailResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string QueryLayoutDetailResult::getErrorCode()const
{
	return errorCode_;
}

std::string QueryLayoutDetailResult::getErrorMessage()const
{
	return errorMessage_;
}

