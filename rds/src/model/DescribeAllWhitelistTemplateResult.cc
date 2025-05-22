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

#include <alibabacloud/rds/model/DescribeAllWhitelistTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeAllWhitelistTemplateResult::DescribeAllWhitelistTemplateResult() :
	ServiceResult()
{}

DescribeAllWhitelistTemplateResult::DescribeAllWhitelistTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAllWhitelistTemplateResult::~DescribeAllWhitelistTemplateResult()
{}

void DescribeAllWhitelistTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CurrPageNumbers"].isNull())
		data_.currPageNumbers = std::stoi(dataNode["CurrPageNumbers"].asString());
	if(!dataNode["HasNext"].isNull())
		data_.hasNext = dataNode["HasNext"].asString() == "true";
	if(!dataNode["HasPrev"].isNull())
		data_.hasPrev = dataNode["HasPrev"].asString() == "true";
	if(!dataNode["MaxRecordsPerPage"].isNull())
		data_.maxRecordsPerPage = std::stoi(dataNode["MaxRecordsPerPage"].asString());
	if(!dataNode["TotalPageNumbers"].isNull())
		data_.totalPageNumbers = std::stoi(dataNode["TotalPageNumbers"].asString());
	if(!dataNode["TotalRecords"].isNull())
		data_.totalRecords = std::stoi(dataNode["TotalRecords"].asString());
	auto allTemplatesNode = dataNode["Templates"]["Template"];
	for (auto dataNodeTemplatesTemplate : allTemplatesNode)
	{
		Data::_Template _templateObject;
		if(!dataNodeTemplatesTemplate["Id"].isNull())
			_templateObject.id = std::stoi(dataNodeTemplatesTemplate["Id"].asString());
		if(!dataNodeTemplatesTemplate["Ips"].isNull())
			_templateObject.ips = dataNodeTemplatesTemplate["Ips"].asString();
		if(!dataNodeTemplatesTemplate["TemplateId"].isNull())
			_templateObject.templateId = std::stoi(dataNodeTemplatesTemplate["TemplateId"].asString());
		if(!dataNodeTemplatesTemplate["TemplateName"].isNull())
			_templateObject.templateName = dataNodeTemplatesTemplate["TemplateName"].asString();
		if(!dataNodeTemplatesTemplate["UserId"].isNull())
			_templateObject.userId = std::stoi(dataNodeTemplatesTemplate["UserId"].asString());
		data_.templates.push_back(_templateObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeAllWhitelistTemplateResult::getMessage()const
{
	return message_;
}

int DescribeAllWhitelistTemplateResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

DescribeAllWhitelistTemplateResult::Data DescribeAllWhitelistTemplateResult::getData()const
{
	return data_;
}

std::string DescribeAllWhitelistTemplateResult::getCode()const
{
	return code_;
}

bool DescribeAllWhitelistTemplateResult::getSuccess()const
{
	return success_;
}

