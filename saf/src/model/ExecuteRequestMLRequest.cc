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

#include <alibabacloud/saf/model/ExecuteRequestMLRequest.h>

using AlibabaCloud::Saf::Model::ExecuteRequestMLRequest;

ExecuteRequestMLRequest::ExecuteRequestMLRequest() :
	RpcServiceRequest("saf", "2019-05-21", "ExecuteRequestML")
{
	setMethod(HttpRequest::Method::Post);
}

ExecuteRequestMLRequest::~ExecuteRequestMLRequest()
{}

std::string ExecuteRequestMLRequest::getServiceParameters()const
{
	return serviceParameters_;
}

void ExecuteRequestMLRequest::setServiceParameters(const std::string& serviceParameters)
{
	serviceParameters_ = serviceParameters;
	setParameter("ServiceParameters", serviceParameters);
}

std::string ExecuteRequestMLRequest::getService()const
{
	return service_;
}

void ExecuteRequestMLRequest::setService(const std::string& service)
{
	service_ = service;
	setParameter("Service", service);
}

std::string ExecuteRequestMLRequest::getLang()const
{
	return lang_;
}

void ExecuteRequestMLRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

