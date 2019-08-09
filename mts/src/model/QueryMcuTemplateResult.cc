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

#include <alibabacloud/mts/model/QueryMcuTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryMcuTemplateResult::QueryMcuTemplateResult() :
	ServiceResult()
{}

QueryMcuTemplateResult::QueryMcuTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryMcuTemplateResult::~QueryMcuTemplateResult()
{}

void QueryMcuTemplateResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allTemplates = value["Templates"]["Job"];
	for (auto value : allTemplates)
	{
		Job templatesObject;
		if(!value["TemplateId"].isNull())
			templatesObject.templateId = value["TemplateId"].asString();
		if(!value["Template"].isNull())
			templatesObject._template = value["Template"].asString();
		templates_.push_back(templatesObject);
	}

}

std::vector<QueryMcuTemplateResult::Job> QueryMcuTemplateResult::getTemplates()const
{
	return templates_;
}

