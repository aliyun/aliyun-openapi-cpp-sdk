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

#include <alibabacloud/nlp-automl/model/BindIntervenePackageAndModelRequest.h>

using AlibabaCloud::Nlp_automl::Model::BindIntervenePackageAndModelRequest;

BindIntervenePackageAndModelRequest::BindIntervenePackageAndModelRequest() :
	RpcServiceRequest("nlp-automl", "2019-07-01", "BindIntervenePackageAndModel")
{
	setMethod(HttpRequest::Method::Post);
}

BindIntervenePackageAndModelRequest::~BindIntervenePackageAndModelRequest()
{}

std::string BindIntervenePackageAndModelRequest::getProduct()const
{
	return product_;
}

void BindIntervenePackageAndModelRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

long BindIntervenePackageAndModelRequest::getModelId()const
{
	return modelId_;
}

void BindIntervenePackageAndModelRequest::setModelId(long modelId)
{
	modelId_ = modelId;
	setParameter("ModelId", std::to_string(modelId));
}

long BindIntervenePackageAndModelRequest::getPackageId()const
{
	return packageId_;
}

void BindIntervenePackageAndModelRequest::setPackageId(long packageId)
{
	packageId_ = packageId;
	setParameter("PackageId", std::to_string(packageId));
}

long BindIntervenePackageAndModelRequest::getTenantId()const
{
	return tenantId_;
}

void BindIntervenePackageAndModelRequest::setTenantId(long tenantId)
{
	tenantId_ = tenantId;
	setParameter("TenantId", std::to_string(tenantId));
}

long BindIntervenePackageAndModelRequest::getProjectId()const
{
	return projectId_;
}

void BindIntervenePackageAndModelRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

std::string BindIntervenePackageAndModelRequest::getModelVersion()const
{
	return modelVersion_;
}

void BindIntervenePackageAndModelRequest::setModelVersion(const std::string& modelVersion)
{
	modelVersion_ = modelVersion;
	setParameter("ModelVersion", modelVersion);
}

