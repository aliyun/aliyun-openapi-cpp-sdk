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

#include <alibabacloud/linkwan/model/CountNodeTupleOrdersRequest.h>

using AlibabaCloud::LinkWAN::Model::CountNodeTupleOrdersRequest;

CountNodeTupleOrdersRequest::CountNodeTupleOrdersRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "CountNodeTupleOrders")
{
	setMethod(HttpRequest::Method::Post);
}

CountNodeTupleOrdersRequest::~CountNodeTupleOrdersRequest()
{}

bool CountNodeTupleOrdersRequest::getIsKpm()const
{
	return isKpm_;
}

void CountNodeTupleOrdersRequest::setIsKpm(bool isKpm)
{
	isKpm_ = isKpm;
	setParameter("IsKpm", isKpm ? "true" : "false");
}

std::vector<std::string> CountNodeTupleOrdersRequest::getStates()const
{
	return states_;
}

void CountNodeTupleOrdersRequest::setStates(const std::vector<std::string>& states)
{
	states_ = states;
	for(int dep1 = 0; dep1!= states.size(); dep1++) {
		setParameter("States."+ std::to_string(dep1), states.at(dep1));
	}
}

std::string CountNodeTupleOrdersRequest::getApiProduct()const
{
	return apiProduct_;
}

void CountNodeTupleOrdersRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CountNodeTupleOrdersRequest::getApiRevision()const
{
	return apiRevision_;
}

void CountNodeTupleOrdersRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

