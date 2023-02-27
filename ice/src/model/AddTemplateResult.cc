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

#include <alibabacloud/ice/model/AddTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

AddTemplateResult::AddTemplateResult() :
	ServiceResult()
{}

AddTemplateResult::AddTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AddTemplateResult::~AddTemplateResult()
{}

void AddTemplateResult::parse(const std::string &payload)
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
	if(!_templateNode["Type"].isNull())
		_template_.type = _templateNode["Type"].asString();
	if(!_templateNode["Config"].isNull())
		_template_.config = _templateNode["Config"].asString();
	if(!_templateNode["CoverUrl"].isNull())
		_template_.coverUrl = _templateNode["CoverUrl"].asString();
	if(!_templateNode["PreviewMedia"].isNull())
		_template_.previewMedia = _templateNode["PreviewMedia"].asString();
	if(!_templateNode["Status"].isNull())
		_template_.status = _templateNode["Status"].asString();
	if(!_templateNode["CreateSource"].isNull())
		_template_.createSource = _templateNode["CreateSource"].asString();
	if(!_templateNode["ModifiedSource"].isNull())
		_template_.modifiedSource = _templateNode["ModifiedSource"].asString();

}

AddTemplateResult::_Template AddTemplateResult::get_Template()const
{
	return _template_;
}

