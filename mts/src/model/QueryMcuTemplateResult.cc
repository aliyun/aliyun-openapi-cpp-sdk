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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTemplatesNode = value["Templates"]["Job"];
	for (auto valueTemplatesJob : allTemplatesNode)
	{
		Job templatesObject;
		if(!valueTemplatesJob["TemplateId"].isNull())
			templatesObject.templateId = valueTemplatesJob["TemplateId"].asString();
		if(!valueTemplatesJob["Template"].isNull())
			templatesObject._template = valueTemplatesJob["Template"].asString();
		templates_.push_back(templatesObject);
	}

}

std::vector<QueryMcuTemplateResult::Job> QueryMcuTemplateResult::getTemplates()const
{
	return templates_;
}

