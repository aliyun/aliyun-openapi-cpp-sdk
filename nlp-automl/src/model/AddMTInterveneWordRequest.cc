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

#include <alibabacloud/nlp-automl/model/AddMTInterveneWordRequest.h>

using AlibabaCloud::Nlp_automl::Model::AddMTInterveneWordRequest;

AddMTInterveneWordRequest::AddMTInterveneWordRequest() :
	RpcServiceRequest("nlp-automl", "2019-07-01", "AddMTInterveneWord")
{
	setMethod(HttpRequest::Method::Post);
}

AddMTInterveneWordRequest::~AddMTInterveneWordRequest()
{}

std::string AddMTInterveneWordRequest::getProduct()const
{
	return product_;
}

void AddMTInterveneWordRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string AddMTInterveneWordRequest::getSourceText()const
{
	return sourceText_;
}

void AddMTInterveneWordRequest::setSourceText(const std::string& sourceText)
{
	sourceText_ = sourceText;
	setParameter("SourceText", sourceText);
}

std::string AddMTInterveneWordRequest::getPackageId()const
{
	return packageId_;
}

void AddMTInterveneWordRequest::setPackageId(const std::string& packageId)
{
	packageId_ = packageId;
	setParameter("PackageId", packageId);
}

std::string AddMTInterveneWordRequest::getTargetText()const
{
	return targetText_;
}

void AddMTInterveneWordRequest::setTargetText(const std::string& targetText)
{
	targetText_ = targetText;
	setParameter("TargetText", targetText);
}

int AddMTInterveneWordRequest::getTenantId()const
{
	return tenantId_;
}

void AddMTInterveneWordRequest::setTenantId(int tenantId)
{
	tenantId_ = tenantId;
	setParameter("TenantId", std::to_string(tenantId));
}

std::string AddMTInterveneWordRequest::getProjectId()const
{
	return projectId_;
}

void AddMTInterveneWordRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

