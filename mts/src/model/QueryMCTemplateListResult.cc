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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allTemplateList = value["TemplateList"]["Template"];
	for (auto value : allTemplateList)
	{
		_Template templateListObject;
		if(!value["TemplateId"].isNull())
			templateListObject.templateId = value["TemplateId"].asString();
		if(!value["Name"].isNull())
			templateListObject.name = value["Name"].asString();
		if(!value["State"].isNull())
			templateListObject.state = value["State"].asString();
		if(!value["Porn"].isNull())
			templateListObject.porn = value["Porn"].asString();
		if(!value["Terrorism"].isNull())
			templateListObject.terrorism = value["Terrorism"].asString();
		if(!value["Politics"].isNull())
			templateListObject.politics = value["Politics"].asString();
		if(!value["Ad"].isNull())
			templateListObject.ad = value["Ad"].asString();
		if(!value["Qrcode"].isNull())
			templateListObject.qrcode = value["Qrcode"].asString();
		if(!value["Live"].isNull())
			templateListObject.live = value["Live"].asString();
		if(!value["Logo"].isNull())
			templateListObject.logo = value["Logo"].asString();
		if(!value["Abuse"].isNull())
			templateListObject.abuse = value["Abuse"].asString();
		if(!value["Contraband"].isNull())
			templateListObject.contraband = value["Contraband"].asString();
		if(!value["Spam"].isNull())
			templateListObject.spam = value["Spam"].asString();
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

