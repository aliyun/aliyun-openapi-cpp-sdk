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

#include <alibabacloud/mts/model/AddMCTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

AddMCTemplateResult::AddMCTemplateResult() :
	ServiceResult()
{}

AddMCTemplateResult::AddMCTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AddMCTemplateResult::~AddMCTemplateResult()
{}

void AddMCTemplateResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto _templateNode = value["Template"];
	if(!_templateNode["TemplateId"].isNull())
		_template_.templateId = _templateNode["TemplateId"].asString();
	if(!_templateNode["Name"].isNull())
		_template_.name = _templateNode["Name"].asString();
	if(!_templateNode["Porn"].isNull())
		_template_.porn = _templateNode["Porn"].asString();
	if(!_templateNode["Terrorism"].isNull())
		_template_.terrorism = _templateNode["Terrorism"].asString();
	if(!_templateNode["Politics"].isNull())
		_template_.politics = _templateNode["Politics"].asString();
	if(!_templateNode["Ad"].isNull())
		_template_.ad = _templateNode["Ad"].asString();
	if(!_templateNode["Qrcode"].isNull())
		_template_.qrcode = _templateNode["Qrcode"].asString();
	if(!_templateNode["Live"].isNull())
		_template_.live = _templateNode["Live"].asString();
	if(!_templateNode["Logo"].isNull())
		_template_.logo = _templateNode["Logo"].asString();
	if(!_templateNode["Abuse"].isNull())
		_template_.abuse = _templateNode["Abuse"].asString();
	if(!_templateNode["Contraband"].isNull())
		_template_.contraband = _templateNode["Contraband"].asString();
	if(!_templateNode["Spam"].isNull())
		_template_.spam = _templateNode["Spam"].asString();

}

AddMCTemplateResult::_Template AddMCTemplateResult::get_Template()const
{
	return _template_;
}

