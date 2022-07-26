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

#include <alibabacloud/oos/model/CreateTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Oos;
using namespace AlibabaCloud::Oos::Model;

CreateTemplateResult::CreateTemplateResult() :
	ServiceResult()
{}

CreateTemplateResult::CreateTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateTemplateResult::~CreateTemplateResult()
{}

void CreateTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto _templateNode = value["Template"];
	if(!_templateNode["Hash"].isNull())
		_template_.hash = _templateNode["Hash"].asString();
	if(!_templateNode["UpdatedDate"].isNull())
		_template_.updatedDate = _templateNode["UpdatedDate"].asString();
	if(!_templateNode["UpdatedBy"].isNull())
		_template_.updatedBy = _templateNode["UpdatedBy"].asString();
	if(!_templateNode["Tags"].isNull())
		_template_.tags = _templateNode["Tags"].asString();
	if(!_templateNode["TemplateName"].isNull())
		_template_.templateName = _templateNode["TemplateName"].asString();
	if(!_templateNode["TemplateVersion"].isNull())
		_template_.templateVersion = _templateNode["TemplateVersion"].asString();
	if(!_templateNode["TemplateFormat"].isNull())
		_template_.templateFormat = _templateNode["TemplateFormat"].asString();
	if(!_templateNode["Description"].isNull())
		_template_.description = _templateNode["Description"].asString();
	if(!_templateNode["ResourceGroupId"].isNull())
		_template_.resourceGroupId = _templateNode["ResourceGroupId"].asString();
	if(!_templateNode["CreatedBy"].isNull())
		_template_.createdBy = _templateNode["CreatedBy"].asString();
	if(!_templateNode["CreatedDate"].isNull())
		_template_.createdDate = _templateNode["CreatedDate"].asString();
	if(!_templateNode["TemplateId"].isNull())
		_template_.templateId = _templateNode["TemplateId"].asString();
	if(!_templateNode["HasTrigger"].isNull())
		_template_.hasTrigger = _templateNode["HasTrigger"].asString() == "true";
	if(!_templateNode["ShareType"].isNull())
		_template_.shareType = _templateNode["ShareType"].asString();
	if(!value["TemplateType"].isNull())
		templateType_ = value["TemplateType"].asString();

}

CreateTemplateResult::_Template CreateTemplateResult::get_Template()const
{
	return _template_;
}

std::string CreateTemplateResult::getTemplateType()const
{
	return templateType_;
}

