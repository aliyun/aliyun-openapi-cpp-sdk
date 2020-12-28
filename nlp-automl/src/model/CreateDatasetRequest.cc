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

#include <alibabacloud/nlp-automl/model/CreateDatasetRequest.h>

using AlibabaCloud::Nlp_automl::Model::CreateDatasetRequest;

CreateDatasetRequest::CreateDatasetRequest() :
	RpcServiceRequest("nlp-automl", "2019-11-11", "CreateDataset")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDatasetRequest::~CreateDatasetRequest()
{}

std::string CreateDatasetRequest::getProduct()const
{
	return product_;
}

void CreateDatasetRequest::setProduct(const std::string& product)
{
	product_ = product;
	setBodyParameter("Product", product);
}

std::string CreateDatasetRequest::getDatasetName()const
{
	return datasetName_;
}

void CreateDatasetRequest::setDatasetName(const std::string& datasetName)
{
	datasetName_ = datasetName;
	setBodyParameter("DatasetName", datasetName);
}

long CreateDatasetRequest::getProjectId()const
{
	return projectId_;
}

void CreateDatasetRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", std::to_string(projectId));
}

