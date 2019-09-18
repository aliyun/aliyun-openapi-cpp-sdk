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

#include <alibabacloud/dysmsapi/model/QuerySmsTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dysmsapi;
using namespace AlibabaCloud::Dysmsapi::Model;

QuerySmsTemplateResult::QuerySmsTemplateResult() :
	ServiceResult()
{}

QuerySmsTemplateResult::QuerySmsTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuerySmsTemplateResult::~QuerySmsTemplateResult()
{}

void QuerySmsTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TemplateStatus"].isNull())
		templateStatus_ = std::stoi(value["TemplateStatus"].asString());
	if(!value["Reason"].isNull())
		reason_ = value["Reason"].asString();
	if(!value["TemplateCode"].isNull())
		templateCode_ = value["TemplateCode"].asString();
	if(!value["TemplateType"].isNull())
		templateType_ = std::stoi(value["TemplateType"].asString());
	if(!value["TemplateName"].isNull())
		templateName_ = value["TemplateName"].asString();
	if(!value["TemplateContent"].isNull())
		templateContent_ = value["TemplateContent"].asString();
	if(!value["CreateDate"].isNull())
		createDate_ = value["CreateDate"].asString();

}

std::string QuerySmsTemplateResult::getTemplateCode()const
{
	return templateCode_;
}

std::string QuerySmsTemplateResult::getMessage()const
{
	return message_;
}

std::string QuerySmsTemplateResult::getTemplateContent()const
{
	return templateContent_;
}

std::string QuerySmsTemplateResult::getTemplateName()const
{
	return templateName_;
}

int QuerySmsTemplateResult::getTemplateType()const
{
	return templateType_;
}

std::string QuerySmsTemplateResult::getCode()const
{
	return code_;
}

std::string QuerySmsTemplateResult::getCreateDate()const
{
	return createDate_;
}

std::string QuerySmsTemplateResult::getReason()const
{
	return reason_;
}

int QuerySmsTemplateResult::getTemplateStatus()const
{
	return templateStatus_;
}

