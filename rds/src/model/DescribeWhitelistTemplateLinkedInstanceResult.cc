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

#include <alibabacloud/rds/model/DescribeWhitelistTemplateLinkedInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeWhitelistTemplateLinkedInstanceResult::DescribeWhitelistTemplateLinkedInstanceResult() :
	ServiceResult()
{}

DescribeWhitelistTemplateLinkedInstanceResult::DescribeWhitelistTemplateLinkedInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWhitelistTemplateLinkedInstanceResult::~DescribeWhitelistTemplateLinkedInstanceResult()
{}

void DescribeWhitelistTemplateLinkedInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TemplateId"].isNull())
		data_.templateId = std::stoi(dataNode["TemplateId"].asString());
		auto allInsName = dataNode["InsName"]["InsName"];
		for (auto value : allInsName)
			data_.insName.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeWhitelistTemplateLinkedInstanceResult::getMessage()const
{
	return message_;
}

int DescribeWhitelistTemplateLinkedInstanceResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

DescribeWhitelistTemplateLinkedInstanceResult::Data DescribeWhitelistTemplateLinkedInstanceResult::getData()const
{
	return data_;
}

std::string DescribeWhitelistTemplateLinkedInstanceResult::getCode()const
{
	return code_;
}

bool DescribeWhitelistTemplateLinkedInstanceResult::getSuccess()const
{
	return success_;
}

