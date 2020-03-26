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

#include <alibabacloud/sddp/model/ExecDatamaskRequest.h>

using AlibabaCloud::Sddp::Model::ExecDatamaskRequest;

ExecDatamaskRequest::ExecDatamaskRequest() :
	RpcServiceRequest("sddp", "2019-01-03", "ExecDatamask")
{
	setMethod(HttpRequest::Method::Post);
}

ExecDatamaskRequest::~ExecDatamaskRequest()
{}

std::string ExecDatamaskRequest::getData()const
{
	return data_;
}

void ExecDatamaskRequest::setData(const std::string& data)
{
	data_ = data;
	setParameter("Data", data);
}

long ExecDatamaskRequest::getTemplateId()const
{
	return templateId_;
}

void ExecDatamaskRequest::setTemplateId(long templateId)
{
	templateId_ = templateId;
	setParameter("TemplateId", std::to_string(templateId));
}

std::string ExecDatamaskRequest::getSourceIp()const
{
	return sourceIp_;
}

void ExecDatamaskRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

