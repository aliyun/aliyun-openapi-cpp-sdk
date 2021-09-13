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

#include <alibabacloud/linkwan/model/CountGatewayTupleOrdersRequest.h>

using AlibabaCloud::LinkWAN::Model::CountGatewayTupleOrdersRequest;

CountGatewayTupleOrdersRequest::CountGatewayTupleOrdersRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "CountGatewayTupleOrders")
{
	setMethod(HttpRequest::Method::Post);
}

CountGatewayTupleOrdersRequest::~CountGatewayTupleOrdersRequest()
{}

std::vector<std::string> CountGatewayTupleOrdersRequest::getStates()const
{
	return states_;
}

void CountGatewayTupleOrdersRequest::setStates(const std::vector<std::string>& states)
{
	states_ = states;
	for(int dep1 = 0; dep1!= states.size(); dep1++) {
		setParameter("States."+ std::to_string(dep1), states.at(dep1));
	}
}

std::string CountGatewayTupleOrdersRequest::getApiProduct()const
{
	return apiProduct_;
}

void CountGatewayTupleOrdersRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CountGatewayTupleOrdersRequest::getApiRevision()const
{
	return apiRevision_;
}

void CountGatewayTupleOrdersRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

