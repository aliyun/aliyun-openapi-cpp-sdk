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

#include <alibabacloud/nlp-automl/model/PredictMTModelRequest.h>

using AlibabaCloud::Nlp_automl::Model::PredictMTModelRequest;

PredictMTModelRequest::PredictMTModelRequest() :
	RpcServiceRequest("nlp-automl", "2019-07-01", "PredictMTModel")
{
	setMethod(HttpRequest::Method::Post);
}

PredictMTModelRequest::~PredictMTModelRequest()
{}

std::string PredictMTModelRequest::getProduct()const
{
	return product_;
}

void PredictMTModelRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string PredictMTModelRequest::getModelId()const
{
	return modelId_;
}

void PredictMTModelRequest::setModelId(const std::string& modelId)
{
	modelId_ = modelId;
	setParameter("ModelId", modelId);
}

std::string PredictMTModelRequest::getContent()const
{
	return content_;
}

void PredictMTModelRequest::setContent(const std::string& content)
{
	content_ = content;
	setBodyParameter("Content", content);
}

std::string PredictMTModelRequest::getModelVersion()const
{
	return modelVersion_;
}

void PredictMTModelRequest::setModelVersion(const std::string& modelVersion)
{
	modelVersion_ = modelVersion;
	setParameter("ModelVersion", modelVersion);
}

