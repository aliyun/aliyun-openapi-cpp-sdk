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

#include <alibabacloud/linkwan/model/SubmitNodeTupleOrderRequest.h>

using AlibabaCloud::LinkWAN::Model::SubmitNodeTupleOrderRequest;

SubmitNodeTupleOrderRequest::SubmitNodeTupleOrderRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "SubmitNodeTupleOrder")
{
	setMethod(HttpRequest::Method::Post);
}

SubmitNodeTupleOrderRequest::~SubmitNodeTupleOrderRequest()
{}

std::string SubmitNodeTupleOrderRequest::getLoraVersion()const
{
	return loraVersion_;
}

void SubmitNodeTupleOrderRequest::setLoraVersion(const std::string& loraVersion)
{
	loraVersion_ = loraVersion;
	setParameter("LoraVersion", loraVersion);
}

std::string SubmitNodeTupleOrderRequest::getTupleType()const
{
	return tupleType_;
}

void SubmitNodeTupleOrderRequest::setTupleType(const std::string& tupleType)
{
	tupleType_ = tupleType;
	setParameter("TupleType", tupleType);
}

std::string SubmitNodeTupleOrderRequest::getApiProduct()const
{
	return apiProduct_;
}

void SubmitNodeTupleOrderRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string SubmitNodeTupleOrderRequest::getApiRevision()const
{
	return apiRevision_;
}

void SubmitNodeTupleOrderRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

long SubmitNodeTupleOrderRequest::getRequiredCount()const
{
	return requiredCount_;
}

void SubmitNodeTupleOrderRequest::setRequiredCount(long requiredCount)
{
	requiredCount_ = requiredCount;
	setParameter("RequiredCount", std::to_string(requiredCount));
}

