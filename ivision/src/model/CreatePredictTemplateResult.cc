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

#include <alibabacloud/ivision/model/CreatePredictTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ivision;
using namespace AlibabaCloud::Ivision::Model;

CreatePredictTemplateResult::CreatePredictTemplateResult() :
	ServiceResult()
{}

CreatePredictTemplateResult::CreatePredictTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreatePredictTemplateResult::~CreatePredictTemplateResult()
{}

void CreatePredictTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto _templateNode = value["Template"];
	if(!_templateNode["TemplateId"].isNull())
		_template_.templateId = _templateNode["TemplateId"].asString();
	if(!_templateNode["Name"].isNull())
		_template_.name = _templateNode["Name"].asString();
	if(!_templateNode["Description"].isNull())
		_template_.description = _templateNode["Description"].asString();
	if(!_templateNode["Interval"].isNull())
		_template_.interval = std::stoi(_templateNode["Interval"].asString());
	if(!_templateNode["Output"].isNull())
		_template_.output = _templateNode["Output"].asString();
	if(!_templateNode["ModelIds"].isNull())
		_template_.modelIds = _templateNode["ModelIds"].asString();
	if(!_templateNode["CreationTime"].isNull())
		_template_.creationTime = _templateNode["CreationTime"].asString();

}

CreatePredictTemplateResult::_Template CreatePredictTemplateResult::get_Template()const
{
	return _template_;
}

