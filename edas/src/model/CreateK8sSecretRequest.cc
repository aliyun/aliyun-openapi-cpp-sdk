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

#include <alibabacloud/edas/model/CreateK8sSecretRequest.h>

using AlibabaCloud::Edas::Model::CreateK8sSecretRequest;

CreateK8sSecretRequest::CreateK8sSecretRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/k8s/acs/k8s_secret");
	setMethod(HttpRequest::Method::Post);
}

CreateK8sSecretRequest::~CreateK8sSecretRequest()
{}

bool CreateK8sSecretRequest::getBase64Encoded()const
{
	return base64Encoded_;
}

void CreateK8sSecretRequest::setBase64Encoded(bool base64Encoded)
{
	base64Encoded_ = base64Encoded;
	setBodyParameter("Base64Encoded", base64Encoded ? "true" : "false");
}

std::string CreateK8sSecretRequest::getData()const
{
	return data_;
}

void CreateK8sSecretRequest::setData(const std::string& data)
{
	data_ = data;
	setBodyParameter("Data", data);
}

std::string CreateK8sSecretRequest::getName()const
{
	return name_;
}

void CreateK8sSecretRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

std::string CreateK8sSecretRequest::get_Namespace()const
{
	return _namespace_;
}

void CreateK8sSecretRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setBodyParameter("_Namespace", _namespace);
}

std::string CreateK8sSecretRequest::getClusterId()const
{
	return clusterId_;
}

void CreateK8sSecretRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setBodyParameter("ClusterId", clusterId);
}

std::string CreateK8sSecretRequest::getCertId()const
{
	return certId_;
}

void CreateK8sSecretRequest::setCertId(const std::string& certId)
{
	certId_ = certId;
	setBodyParameter("CertId", certId);
}

std::string CreateK8sSecretRequest::getType()const
{
	return type_;
}

void CreateK8sSecretRequest::setType(const std::string& type)
{
	type_ = type;
	setBodyParameter("Type", type);
}

std::string CreateK8sSecretRequest::getCertRegionId()const
{
	return certRegionId_;
}

void CreateK8sSecretRequest::setCertRegionId(const std::string& certRegionId)
{
	certRegionId_ = certRegionId;
	setBodyParameter("CertRegionId", certRegionId);
}

