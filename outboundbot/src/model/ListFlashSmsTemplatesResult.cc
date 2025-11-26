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

#include <alibabacloud/outboundbot/model/ListFlashSmsTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

ListFlashSmsTemplatesResult::ListFlashSmsTemplatesResult() :
	ServiceResult()
{}

ListFlashSmsTemplatesResult::ListFlashSmsTemplatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFlashSmsTemplatesResult::~ListFlashSmsTemplatesResult()
{}

void ListFlashSmsTemplatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["FlashSmsTemplate"];
	for (auto valueDataFlashSmsTemplate : allDataNode)
	{
		FlashSmsTemplate dataObject;
		if(!valueDataFlashSmsTemplate["TemplateName"].isNull())
			dataObject.templateName = valueDataFlashSmsTemplate["TemplateName"].asString();
		if(!valueDataFlashSmsTemplate["TemplateId"].isNull())
			dataObject.templateId = valueDataFlashSmsTemplate["TemplateId"].asString();
		if(!valueDataFlashSmsTemplate["TemplateContent"].isNull())
			dataObject.templateContent = valueDataFlashSmsTemplate["TemplateContent"].asString();
		data_.push_back(dataObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListFlashSmsTemplatesResult::getMessage()const
{
	return message_;
}

int ListFlashSmsTemplatesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListFlashSmsTemplatesResult::FlashSmsTemplate> ListFlashSmsTemplatesResult::getData()const
{
	return data_;
}

std::string ListFlashSmsTemplatesResult::getCode()const
{
	return code_;
}

bool ListFlashSmsTemplatesResult::getSuccess()const
{
	return success_;
}

