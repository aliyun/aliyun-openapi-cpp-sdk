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

#include <alibabacloud/linkwan/model/SubmitJoinPermissionAuthOrderRequest.h>

using AlibabaCloud::LinkWAN::Model::SubmitJoinPermissionAuthOrderRequest;

SubmitJoinPermissionAuthOrderRequest::SubmitJoinPermissionAuthOrderRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "SubmitJoinPermissionAuthOrder")
{
	setMethod(HttpRequest::Method::Post);
}

SubmitJoinPermissionAuthOrderRequest::~SubmitJoinPermissionAuthOrderRequest()
{}

std::string SubmitJoinPermissionAuthOrderRequest::getJoinPermissionId()const
{
	return joinPermissionId_;
}

void SubmitJoinPermissionAuthOrderRequest::setJoinPermissionId(const std::string& joinPermissionId)
{
	joinPermissionId_ = joinPermissionId;
	setParameter("JoinPermissionId", joinPermissionId);
}

std::string SubmitJoinPermissionAuthOrderRequest::getRenterAliyunId()const
{
	return renterAliyunId_;
}

void SubmitJoinPermissionAuthOrderRequest::setRenterAliyunId(const std::string& renterAliyunId)
{
	renterAliyunId_ = renterAliyunId;
	setParameter("RenterAliyunId", renterAliyunId);
}

std::string SubmitJoinPermissionAuthOrderRequest::getApiProduct()const
{
	return apiProduct_;
}

void SubmitJoinPermissionAuthOrderRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string SubmitJoinPermissionAuthOrderRequest::getApiRevision()const
{
	return apiRevision_;
}

void SubmitJoinPermissionAuthOrderRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

