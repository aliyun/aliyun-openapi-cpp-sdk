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

#include <alibabacloud/cs/model/CreateTemplateRequest.h>

using AlibabaCloud::CS::Model::CreateTemplateRequest;

CreateTemplateRequest::CreateTemplateRequest() :
	RoaServiceRequest("cs", "2015-12-15")
{
	setResourcePath("/templates");
	setMethod(HttpRequest::Method::Post);
}

CreateTemplateRequest::~CreateTemplateRequest()
{}

std::string CreateTemplateRequest::get_Template()const
{
	return _template_;
}

void CreateTemplateRequest::set_Template(const std::string& _template)
{
	_template_ = _template;
	setBodyParameter("_Template", _template);
}

std::string CreateTemplateRequest::getName()const
{
	return name_;
}

void CreateTemplateRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

std::string CreateTemplateRequest::getTemplate_type()const
{
	return template_type_;
}

void CreateTemplateRequest::setTemplate_type(const std::string& template_type)
{
	template_type_ = template_type;
	setBodyParameter("Template_type", template_type);
}

std::string CreateTemplateRequest::getTags()const
{
	return tags_;
}

void CreateTemplateRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setBodyParameter("Tags", tags);
}

