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

#include <alibabacloud/linkwan/model/CountNodesByOwnedJoinPermissionIdRequest.h>

using AlibabaCloud::LinkWAN::Model::CountNodesByOwnedJoinPermissionIdRequest;

CountNodesByOwnedJoinPermissionIdRequest::CountNodesByOwnedJoinPermissionIdRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "CountNodesByOwnedJoinPermissionId")
{
	setMethod(HttpRequest::Method::Post);
}

CountNodesByOwnedJoinPermissionIdRequest::~CountNodesByOwnedJoinPermissionIdRequest()
{}

std::string CountNodesByOwnedJoinPermissionIdRequest::getJoinPermissionId()const
{
	return joinPermissionId_;
}

void CountNodesByOwnedJoinPermissionIdRequest::setJoinPermissionId(const std::string& joinPermissionId)
{
	joinPermissionId_ = joinPermissionId;
	setParameter("JoinPermissionId", joinPermissionId);
}

std::string CountNodesByOwnedJoinPermissionIdRequest::getFuzzyDevEui()const
{
	return fuzzyDevEui_;
}

void CountNodesByOwnedJoinPermissionIdRequest::setFuzzyDevEui(const std::string& fuzzyDevEui)
{
	fuzzyDevEui_ = fuzzyDevEui;
	setParameter("FuzzyDevEui", fuzzyDevEui);
}

std::string CountNodesByOwnedJoinPermissionIdRequest::getApiProduct()const
{
	return apiProduct_;
}

void CountNodesByOwnedJoinPermissionIdRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CountNodesByOwnedJoinPermissionIdRequest::getApiRevision()const
{
	return apiRevision_;
}

void CountNodesByOwnedJoinPermissionIdRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

