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

#include <alibabacloud/nlp-automl/model/PredictMTModelByDocRequest.h>

using AlibabaCloud::Nlp_automl::Model::PredictMTModelByDocRequest;

PredictMTModelByDocRequest::PredictMTModelByDocRequest() :
	RpcServiceRequest("nlp-automl", "2019-07-01", "PredictMTModelByDoc")
{
	setMethod(HttpRequest::Method::Post);
}

PredictMTModelByDocRequest::~PredictMTModelByDocRequest()
{}

std::string PredictMTModelByDocRequest::getFileType()const
{
	return fileType_;
}

void PredictMTModelByDocRequest::setFileType(const std::string& fileType)
{
	fileType_ = fileType;
	setParameter("FileType", fileType);
}

std::string PredictMTModelByDocRequest::getProduct()const
{
	return product_;
}

void PredictMTModelByDocRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

int PredictMTModelByDocRequest::getModelId()const
{
	return modelId_;
}

void PredictMTModelByDocRequest::setModelId(int modelId)
{
	modelId_ = modelId;
	setParameter("ModelId", std::to_string(modelId));
}

std::string PredictMTModelByDocRequest::getFileContent()const
{
	return fileContent_;
}

void PredictMTModelByDocRequest::setFileContent(const std::string& fileContent)
{
	fileContent_ = fileContent;
	setBodyParameter("FileContent", fileContent);
}

bool PredictMTModelByDocRequest::getNeedXLIFF()const
{
	return needXLIFF_;
}

void PredictMTModelByDocRequest::setNeedXLIFF(bool needXLIFF)
{
	needXLIFF_ = needXLIFF;
	setParameter("NeedXLIFF", needXLIFF ? "true" : "false");
}

std::string PredictMTModelByDocRequest::getModelVersion()const
{
	return modelVersion_;
}

void PredictMTModelByDocRequest::setModelVersion(const std::string& modelVersion)
{
	modelVersion_ = modelVersion;
	setParameter("ModelVersion", modelVersion);
}

