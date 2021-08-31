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

#include <alibabacloud/edas/model/GetSpringCloudTestMethodRequest.h>

using AlibabaCloud::Edas::Model::GetSpringCloudTestMethodRequest;

GetSpringCloudTestMethodRequest::GetSpringCloudTestMethodRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/sp/api/mse/test/springcloud/method");
	setMethod(HttpRequest::Method::Post);
}

GetSpringCloudTestMethodRequest::~GetSpringCloudTestMethodRequest()
{}

std::string GetSpringCloudTestMethodRequest::getAppId()const
{
	return appId_;
}

void GetSpringCloudTestMethodRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string GetSpringCloudTestMethodRequest::get_Namespace()const
{
	return _namespace_;
}

void GetSpringCloudTestMethodRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setParameter("_Namespace", _namespace);
}

std::string GetSpringCloudTestMethodRequest::getHttpMethod()const
{
	return httpMethod_;
}

void GetSpringCloudTestMethodRequest::setHttpMethod(const std::string& httpMethod)
{
	httpMethod_ = httpMethod;
	setParameter("HttpMethod", httpMethod);
}

std::string GetSpringCloudTestMethodRequest::getMethodSignature()const
{
	return methodSignature_;
}

void GetSpringCloudTestMethodRequest::setMethodSignature(const std::string& methodSignature)
{
	methodSignature_ = methodSignature;
	setParameter("MethodSignature", methodSignature);
}

std::string GetSpringCloudTestMethodRequest::getServiceName()const
{
	return serviceName_;
}

void GetSpringCloudTestMethodRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setParameter("ServiceName", serviceName);
}

std::string GetSpringCloudTestMethodRequest::getRegion()const
{
	return region_;
}

void GetSpringCloudTestMethodRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

std::string GetSpringCloudTestMethodRequest::getRequiredPath()const
{
	return requiredPath_;
}

void GetSpringCloudTestMethodRequest::setRequiredPath(const std::string& requiredPath)
{
	requiredPath_ = requiredPath;
	setParameter("RequiredPath", requiredPath);
}

std::string GetSpringCloudTestMethodRequest::getMethodController()const
{
	return methodController_;
}

void GetSpringCloudTestMethodRequest::setMethodController(const std::string& methodController)
{
	methodController_ = methodController;
	setParameter("MethodController", methodController);
}

