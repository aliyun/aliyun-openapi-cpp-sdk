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

#include <alibabacloud/cams/model/ListChatappTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cams;
using namespace AlibabaCloud::Cams::Model;

ListChatappTemplateResult::ListChatappTemplateResult() :
	ServiceResult()
{}

ListChatappTemplateResult::ListChatappTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListChatappTemplateResult::~ListChatappTemplateResult()
{}

void ListChatappTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListTemplateNode = value["ListTemplate"]["template"];
	for (auto valueListTemplatetemplate : allListTemplateNode)
	{
		_Template listTemplateObject;
		if(!valueListTemplatetemplate["TemplateName"].isNull())
			listTemplateObject.templateName = valueListTemplatetemplate["TemplateName"].asString();
		if(!valueListTemplatetemplate["TemplateCode"].isNull())
			listTemplateObject.templateCode = valueListTemplatetemplate["TemplateCode"].asString();
		if(!valueListTemplatetemplate["AuditStatus"].isNull())
			listTemplateObject.auditStatus = valueListTemplatetemplate["AuditStatus"].asString();
		if(!valueListTemplatetemplate["Language"].isNull())
			listTemplateObject.language = valueListTemplatetemplate["Language"].asString();
		if(!valueListTemplatetemplate["Category"].isNull())
			listTemplateObject.category = valueListTemplatetemplate["Category"].asString();
		if(!valueListTemplatetemplate["TemplateType"].isNull())
			listTemplateObject.templateType = valueListTemplatetemplate["TemplateType"].asString();
		if(!valueListTemplatetemplate["Reason"].isNull())
			listTemplateObject.reason = valueListTemplatetemplate["Reason"].asString();
		if(!valueListTemplatetemplate["LastUpdateTime"].isNull())
			listTemplateObject.lastUpdateTime = std::stol(valueListTemplatetemplate["LastUpdateTime"].asString());
		listTemplate_.push_back(listTemplateObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["AccessDeniedDetail"].isNull())
		accessDeniedDetail_ = value["AccessDeniedDetail"].asString();

}

std::string ListChatappTemplateResult::getAccessDeniedDetail()const
{
	return accessDeniedDetail_;
}

std::string ListChatappTemplateResult::getMessage()const
{
	return message_;
}

std::vector<ListChatappTemplateResult::_Template> ListChatappTemplateResult::getListTemplate()const
{
	return listTemplate_;
}

int ListChatappTemplateResult::getTotal()const
{
	return total_;
}

std::string ListChatappTemplateResult::getCode()const
{
	return code_;
}

