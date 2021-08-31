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

#include <alibabacloud/edas/model/ValidateK8sResourceRequest.h>

using AlibabaCloud::Edas::Model::ValidateK8sResourceRequest;

ValidateK8sResourceRequest::ValidateK8sResourceRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/k8s/acs/validate_k8s_resource");
	setMethod(HttpRequest::Method::Post);
}

ValidateK8sResourceRequest::~ValidateK8sResourceRequest()
{}

std::string ValidateK8sResourceRequest::getKind()const
{
	return kind_;
}

void ValidateK8sResourceRequest::setKind(const std::string& kind)
{
	kind_ = kind;
	setBodyParameter("Kind", kind);
}

std::string ValidateK8sResourceRequest::getAppId()const
{
	return appId_;
}

void ValidateK8sResourceRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setBodyParameter("AppId", appId);
}

std::string ValidateK8sResourceRequest::get_Namespace()const
{
	return _namespace_;
}

void ValidateK8sResourceRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setBodyParameter("_Namespace", _namespace);
}

std::string ValidateK8sResourceRequest::getFormat()const
{
	return format_;
}

void ValidateK8sResourceRequest::setFormat(const std::string& format)
{
	format_ = format;
	setBodyParameter("Format", format);
}

std::string ValidateK8sResourceRequest::getContent()const
{
	return content_;
}

void ValidateK8sResourceRequest::setContent(const std::string& content)
{
	content_ = content;
	setBodyParameter("Content", content);
}

