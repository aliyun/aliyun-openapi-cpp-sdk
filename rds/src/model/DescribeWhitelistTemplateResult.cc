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

#include <alibabacloud/rds/model/DescribeWhitelistTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeWhitelistTemplateResult::DescribeWhitelistTemplateResult() :
	ServiceResult()
{}

DescribeWhitelistTemplateResult::DescribeWhitelistTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWhitelistTemplateResult::~DescribeWhitelistTemplateResult()
{}

void DescribeWhitelistTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto _templateNode = dataNode["Template"];
	if(!_templateNode["Id"].isNull())
		data_._template.id = std::stoi(_templateNode["Id"].asString());
	if(!_templateNode["Ips"].isNull())
		data_._template.ips = _templateNode["Ips"].asString();
	if(!_templateNode["TemplateId"].isNull())
		data_._template.templateId = std::stoi(_templateNode["TemplateId"].asString());
	if(!_templateNode["TemplateName"].isNull())
		data_._template.templateName = _templateNode["TemplateName"].asString();
	if(!_templateNode["UserId"].isNull())
		data_._template.userId = std::stoi(_templateNode["UserId"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeWhitelistTemplateResult::getMessage()const
{
	return message_;
}

int DescribeWhitelistTemplateResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

DescribeWhitelistTemplateResult::Data DescribeWhitelistTemplateResult::getData()const
{
	return data_;
}

std::string DescribeWhitelistTemplateResult::getCode()const
{
	return code_;
}

bool DescribeWhitelistTemplateResult::getSuccess()const
{
	return success_;
}

