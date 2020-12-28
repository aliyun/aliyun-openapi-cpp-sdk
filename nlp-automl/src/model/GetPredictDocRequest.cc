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

#include <alibabacloud/nlp-automl/model/GetPredictDocRequest.h>

using AlibabaCloud::Nlp_automl::Model::GetPredictDocRequest;

GetPredictDocRequest::GetPredictDocRequest() :
	RpcServiceRequest("nlp-automl", "2019-07-01", "GetPredictDoc")
{
	setMethod(HttpRequest::Method::Post);
}

GetPredictDocRequest::~GetPredictDocRequest()
{}

std::string GetPredictDocRequest::getProduct()const
{
	return product_;
}

void GetPredictDocRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

long GetPredictDocRequest::getDocId()const
{
	return docId_;
}

void GetPredictDocRequest::setDocId(long docId)
{
	docId_ = docId;
	setParameter("DocId", std::to_string(docId));
}

