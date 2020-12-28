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

#include <alibabacloud/nlp-automl/model/InvokeActionRequest.h>

using AlibabaCloud::Nlp_automl::Model::InvokeActionRequest;

InvokeActionRequest::InvokeActionRequest() :
	RpcServiceRequest("nlp-automl", "2019-07-01", "InvokeAction")
{
	setMethod(HttpRequest::Method::Post);
}

InvokeActionRequest::~InvokeActionRequest()
{}

std::string InvokeActionRequest::getInvokeProduct()const
{
	return invokeProduct_;
}

void InvokeActionRequest::setInvokeProduct(const std::string& invokeProduct)
{
	invokeProduct_ = invokeProduct;
	setParameter("InvokeProduct", invokeProduct);
}

std::string InvokeActionRequest::getInvokeAction()const
{
	return invokeAction_;
}

void InvokeActionRequest::setInvokeAction(const std::string& invokeAction)
{
	invokeAction_ = invokeAction;
	setBodyParameter("InvokeAction", invokeAction);
}

std::string InvokeActionRequest::getInvokeParams()const
{
	return invokeParams_;
}

void InvokeActionRequest::setInvokeParams(const std::string& invokeParams)
{
	invokeParams_ = invokeParams;
	setBodyParameter("InvokeParams", invokeParams);
}

std::string InvokeActionRequest::getInvokeRegion()const
{
	return invokeRegion_;
}

void InvokeActionRequest::setInvokeRegion(const std::string& invokeRegion)
{
	invokeRegion_ = invokeRegion;
	setParameter("InvokeRegion", invokeRegion);
}

