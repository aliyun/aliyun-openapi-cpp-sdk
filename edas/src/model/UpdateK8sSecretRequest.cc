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

#include <alibabacloud/edas/model/UpdateK8sSecretRequest.h>

using AlibabaCloud::Edas::Model::UpdateK8sSecretRequest;

UpdateK8sSecretRequest::UpdateK8sSecretRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/k8s/acs/k8s_secret");
	setMethod(HttpRequest::Method::Put);
}

UpdateK8sSecretRequest::~UpdateK8sSecretRequest()
{}

bool UpdateK8sSecretRequest::getBase64Encoded()const
{
	return base64Encoded_;
}

void UpdateK8sSecretRequest::setBase64Encoded(bool base64Encoded)
{
	base64Encoded_ = base64Encoded;
	setBodyParameter("Base64Encoded", base64Encoded ? "true" : "false");
}

std::string UpdateK8sSecretRequest::getData()const
{
	return data_;
}

void UpdateK8sSecretRequest::setData(const std::string& data)
{
	data_ = data;
	setBodyParameter("Data", data);
}

std::string UpdateK8sSecretRequest::getName()const
{
	return name_;
}

void UpdateK8sSecretRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

std::string UpdateK8sSecretRequest::get_Namespace()const
{
	return _namespace_;
}

void UpdateK8sSecretRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setBodyParameter("_Namespace", _namespace);
}

std::string UpdateK8sSecretRequest::getClusterId()const
{
	return clusterId_;
}

void UpdateK8sSecretRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setBodyParameter("ClusterId", clusterId);
}

std::string UpdateK8sSecretRequest::getCertId()const
{
	return certId_;
}

void UpdateK8sSecretRequest::setCertId(const std::string& certId)
{
	certId_ = certId;
	setBodyParameter("CertId", certId);
}

std::string UpdateK8sSecretRequest::getType()const
{
	return type_;
}

void UpdateK8sSecretRequest::setType(const std::string& type)
{
	type_ = type;
	setBodyParameter("Type", type);
}

std::string UpdateK8sSecretRequest::getCertRegionId()const
{
	return certRegionId_;
}

void UpdateK8sSecretRequest::setCertRegionId(const std::string& certRegionId)
{
	certRegionId_ = certRegionId;
	setBodyParameter("CertRegionId", certRegionId);
}

