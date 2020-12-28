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

#include <alibabacloud/nlp-automl/model/CreateProjectRequest.h>

using AlibabaCloud::Nlp_automl::Model::CreateProjectRequest;

CreateProjectRequest::CreateProjectRequest() :
	RpcServiceRequest("nlp-automl", "2019-11-11", "CreateProject")
{
	setMethod(HttpRequest::Method::Post);
}

CreateProjectRequest::~CreateProjectRequest()
{}

std::string CreateProjectRequest::getProjectName()const
{
	return projectName_;
}

void CreateProjectRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setBodyParameter("ProjectName", projectName);
}

std::string CreateProjectRequest::getProduct()const
{
	return product_;
}

void CreateProjectRequest::setProduct(const std::string& product)
{
	product_ = product;
	setBodyParameter("Product", product);
}

std::string CreateProjectRequest::getProjectDescription()const
{
	return projectDescription_;
}

void CreateProjectRequest::setProjectDescription(const std::string& projectDescription)
{
	projectDescription_ = projectDescription;
	setBodyParameter("ProjectDescription", projectDescription);
}

std::string CreateProjectRequest::getProjectType()const
{
	return projectType_;
}

void CreateProjectRequest::setProjectType(const std::string& projectType)
{
	projectType_ = projectType;
	setBodyParameter("ProjectType", projectType);
}

