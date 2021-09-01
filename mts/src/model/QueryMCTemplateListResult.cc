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

#include <alibabacloud/mts/model/QueryMCTemplateListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryMCTemplateListResult::QueryMCTemplateListResult() :
	ServiceResult()
{}

QueryMCTemplateListResult::QueryMCTemplateListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryMCTemplateListResult::~QueryMCTemplateListResult()
{}

void QueryMCTemplateListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTemplateListNode = value["TemplateList"]["Template"];
	for (auto valueTemplateListTemplate : allTemplateListNode)
	{
		_Template templateListObject;
		if(!valueTemplateListTemplate["Logo"].isNull())
			templateListObject.logo = valueTemplateListTemplate["Logo"].asString();
		if(!valueTemplateListTemplate["Abuse"].isNull())
			templateListObject.abuse = valueTemplateListTemplate["Abuse"].asString();
		if(!valueTemplateListTemplate["State"].isNull())
			templateListObject.state = valueTemplateListTemplate["State"].asString();
		if(!valueTemplateListTemplate["Terrorism"].isNull())
			templateListObject.terrorism = valueTemplateListTemplate["Terrorism"].asString();
		if(!valueTemplateListTemplate["Politics"].isNull())
			templateListObject.politics = valueTemplateListTemplate["Politics"].asString();
		if(!valueTemplateListTemplate["Qrcode"].isNull())
			templateListObject.qrcode = valueTemplateListTemplate["Qrcode"].asString();
		if(!valueTemplateListTemplate["Live"].isNull())
			templateListObject.live = valueTemplateListTemplate["Live"].asString();
		if(!valueTemplateListTemplate["Spam"].isNull())
			templateListObject.spam = valueTemplateListTemplate["Spam"].asString();
		if(!valueTemplateListTemplate["Contraband"].isNull())
			templateListObject.contraband = valueTemplateListTemplate["Contraband"].asString();
		if(!valueTemplateListTemplate["Ad"].isNull())
			templateListObject.ad = valueTemplateListTemplate["Ad"].asString();
		if(!valueTemplateListTemplate["Porn"].isNull())
			templateListObject.porn = valueTemplateListTemplate["Porn"].asString();
		if(!valueTemplateListTemplate["Name"].isNull())
			templateListObject.name = valueTemplateListTemplate["Name"].asString();
		if(!valueTemplateListTemplate["TemplateId"].isNull())
			templateListObject.templateId = valueTemplateListTemplate["TemplateId"].asString();
		templateList_.push_back(templateListObject);
	}
	auto allNonExistTids = value["NonExistTids"]["String"];
	for (const auto &item : allNonExistTids)
		nonExistTids_.push_back(item.asString());

}

std::vector<QueryMCTemplateListResult::_Template> QueryMCTemplateListResult::getTemplateList()const
{
	return templateList_;
}

std::vector<std::string> QueryMCTemplateListResult::getNonExistTids()const
{
	return nonExistTids_;
}

