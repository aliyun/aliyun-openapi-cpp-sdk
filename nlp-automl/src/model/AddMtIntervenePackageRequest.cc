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

#include <alibabacloud/nlp-automl/model/AddMtIntervenePackageRequest.h>

using AlibabaCloud::Nlp_automl::Model::AddMtIntervenePackageRequest;

AddMtIntervenePackageRequest::AddMtIntervenePackageRequest() :
	RpcServiceRequest("nlp-automl", "2019-07-01", "AddMtIntervenePackage")
{
	setMethod(HttpRequest::Method::Post);
}

AddMtIntervenePackageRequest::~AddMtIntervenePackageRequest()
{}

std::string AddMtIntervenePackageRequest::getSourceLanguage()const
{
	return sourceLanguage_;
}

void AddMtIntervenePackageRequest::setSourceLanguage(const std::string& sourceLanguage)
{
	sourceLanguage_ = sourceLanguage;
	setParameter("SourceLanguage", sourceLanguage);
}

std::string AddMtIntervenePackageRequest::getProduct()const
{
	return product_;
}

void AddMtIntervenePackageRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string AddMtIntervenePackageRequest::getPackageName()const
{
	return packageName_;
}

void AddMtIntervenePackageRequest::setPackageName(const std::string& packageName)
{
	packageName_ = packageName;
	setParameter("PackageName", packageName);
}

int AddMtIntervenePackageRequest::getTenantId()const
{
	return tenantId_;
}

void AddMtIntervenePackageRequest::setTenantId(int tenantId)
{
	tenantId_ = tenantId;
	setParameter("TenantId", std::to_string(tenantId));
}

std::string AddMtIntervenePackageRequest::getProjectType()const
{
	return projectType_;
}

void AddMtIntervenePackageRequest::setProjectType(const std::string& projectType)
{
	projectType_ = projectType;
	setParameter("ProjectType", projectType);
}

std::string AddMtIntervenePackageRequest::getSourceType()const
{
	return sourceType_;
}

void AddMtIntervenePackageRequest::setSourceType(const std::string& sourceType)
{
	sourceType_ = sourceType;
	setParameter("SourceType", sourceType);
}

std::string AddMtIntervenePackageRequest::getTargetLanguage()const
{
	return targetLanguage_;
}

void AddMtIntervenePackageRequest::setTargetLanguage(const std::string& targetLanguage)
{
	targetLanguage_ = targetLanguage;
	setParameter("TargetLanguage", targetLanguage);
}

std::string AddMtIntervenePackageRequest::getCategory()const
{
	return category_;
}

void AddMtIntervenePackageRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

int AddMtIntervenePackageRequest::getProjectId()const
{
	return projectId_;
}

void AddMtIntervenePackageRequest::setProjectId(int projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

