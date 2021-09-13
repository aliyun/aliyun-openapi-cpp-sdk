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

#include <alibabacloud/linkwan/model/SubmitGatewayTupleOrderRequest.h>

using AlibabaCloud::LinkWAN::Model::SubmitGatewayTupleOrderRequest;

SubmitGatewayTupleOrderRequest::SubmitGatewayTupleOrderRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "SubmitGatewayTupleOrder")
{
	setMethod(HttpRequest::Method::Post);
}

SubmitGatewayTupleOrderRequest::~SubmitGatewayTupleOrderRequest()
{}

std::string SubmitGatewayTupleOrderRequest::getTupleType()const
{
	return tupleType_;
}

void SubmitGatewayTupleOrderRequest::setTupleType(const std::string& tupleType)
{
	tupleType_ = tupleType;
	setParameter("TupleType", tupleType);
}

std::string SubmitGatewayTupleOrderRequest::getApiProduct()const
{
	return apiProduct_;
}

void SubmitGatewayTupleOrderRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string SubmitGatewayTupleOrderRequest::getApiRevision()const
{
	return apiRevision_;
}

void SubmitGatewayTupleOrderRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

long SubmitGatewayTupleOrderRequest::getRequiredCount()const
{
	return requiredCount_;
}

void SubmitGatewayTupleOrderRequest::setRequiredCount(long requiredCount)
{
	requiredCount_ = requiredCount;
	setParameter("RequiredCount", std::to_string(requiredCount));
}

