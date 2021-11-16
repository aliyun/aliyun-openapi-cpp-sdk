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

#include <alibabacloud/ddoscoo/model/CreateLayer4RuleRequest.h>

using AlibabaCloud::Ddoscoo::Model::CreateLayer4RuleRequest;

CreateLayer4RuleRequest::CreateLayer4RuleRequest() :
	RpcServiceRequest("ddoscoo", "2017-12-28", "CreateLayer4Rule")
{
	setMethod(HttpRequest::Method::Post);
}

CreateLayer4RuleRequest::~CreateLayer4RuleRequest()
{}

std::string CreateLayer4RuleRequest::getListeners()const
{
	return listeners_;
}

void CreateLayer4RuleRequest::setListeners(const std::string& listeners)
{
	listeners_ = listeners;
	setParameter("Listeners", listeners);
}

std::string CreateLayer4RuleRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateLayer4RuleRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

