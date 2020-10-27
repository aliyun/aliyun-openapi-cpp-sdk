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

#include <alibabacloud/dataworks-public/model/UpdateDataServiceApiRequest.h>

using AlibabaCloud::Dataworks_public::Model::UpdateDataServiceApiRequest;

UpdateDataServiceApiRequest::UpdateDataServiceApiRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "UpdateDataServiceApi")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateDataServiceApiRequest::~UpdateDataServiceApiRequest()
{}

std::string UpdateDataServiceApiRequest::getScriptDetails()const
{
	return scriptDetails_;
}

void UpdateDataServiceApiRequest::setScriptDetails(const std::string& scriptDetails)
{
	scriptDetails_ = scriptDetails;
	setBodyParameter("ScriptDetails", scriptDetails);
}

int UpdateDataServiceApiRequest::getRequestMethod()const
{
	return requestMethod_;
}

void UpdateDataServiceApiRequest::setRequestMethod(int requestMethod)
{
	requestMethod_ = requestMethod;
	setBodyParameter("RequestMethod", std::to_string(requestMethod));
}

std::string UpdateDataServiceApiRequest::getApiPath()const
{
	return apiPath_;
}

void UpdateDataServiceApiRequest::setApiPath(const std::string& apiPath)
{
	apiPath_ = apiPath;
	setBodyParameter("ApiPath", apiPath);
}

std::string UpdateDataServiceApiRequest::getWizardDetails()const
{
	return wizardDetails_;
}

void UpdateDataServiceApiRequest::setWizardDetails(const std::string& wizardDetails)
{
	wizardDetails_ = wizardDetails;
	setBodyParameter("WizardDetails", wizardDetails);
}

int UpdateDataServiceApiRequest::getVisibleRange()const
{
	return visibleRange_;
}

void UpdateDataServiceApiRequest::setVisibleRange(int visibleRange)
{
	visibleRange_ = visibleRange;
	setBodyParameter("VisibleRange", std::to_string(visibleRange));
}

std::string UpdateDataServiceApiRequest::getApiDescription()const
{
	return apiDescription_;
}

void UpdateDataServiceApiRequest::setApiDescription(const std::string& apiDescription)
{
	apiDescription_ = apiDescription;
	setBodyParameter("ApiDescription", apiDescription);
}

int UpdateDataServiceApiRequest::getTimeout()const
{
	return timeout_;
}

void UpdateDataServiceApiRequest::setTimeout(int timeout)
{
	timeout_ = timeout;
	setBodyParameter("Timeout", std::to_string(timeout));
}

std::string UpdateDataServiceApiRequest::getRegistrationDetails()const
{
	return registrationDetails_;
}

void UpdateDataServiceApiRequest::setRegistrationDetails(const std::string& registrationDetails)
{
	registrationDetails_ = registrationDetails;
	setBodyParameter("RegistrationDetails", registrationDetails);
}

long UpdateDataServiceApiRequest::getTenantId()const
{
	return tenantId_;
}

void UpdateDataServiceApiRequest::setTenantId(long tenantId)
{
	tenantId_ = tenantId;
	setBodyParameter("TenantId", std::to_string(tenantId));
}

std::string UpdateDataServiceApiRequest::getProtocols()const
{
	return protocols_;
}

void UpdateDataServiceApiRequest::setProtocols(const std::string& protocols)
{
	protocols_ = protocols;
	setBodyParameter("Protocols", protocols);
}

long UpdateDataServiceApiRequest::getProjectId()const
{
	return projectId_;
}

void UpdateDataServiceApiRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", std::to_string(projectId));
}

long UpdateDataServiceApiRequest::getApiId()const
{
	return apiId_;
}

void UpdateDataServiceApiRequest::setApiId(long apiId)
{
	apiId_ = apiId;
	setBodyParameter("ApiId", std::to_string(apiId));
}

int UpdateDataServiceApiRequest::getResponseContentType()const
{
	return responseContentType_;
}

void UpdateDataServiceApiRequest::setResponseContentType(int responseContentType)
{
	responseContentType_ = responseContentType;
	setBodyParameter("ResponseContentType", std::to_string(responseContentType));
}

