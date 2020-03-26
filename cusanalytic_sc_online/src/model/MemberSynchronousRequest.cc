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

#include <alibabacloud/cusanalytic_sc_online/model/MemberSynchronousRequest.h>

using AlibabaCloud::Cusanalytic_sc_online::Model::MemberSynchronousRequest;

MemberSynchronousRequest::MemberSynchronousRequest() :
	RpcServiceRequest("cusanalytic_sc_online", "2019-05-24", "MemberSynchronous")
{
	setMethod(HttpRequest::Method::Post);
}

MemberSynchronousRequest::~MemberSynchronousRequest()
{}

long MemberSynchronousRequest::getUkId()const
{
	return ukId_;
}

void MemberSynchronousRequest::setUkId(long ukId)
{
	ukId_ = ukId;
	setBodyParameter("UkId", std::to_string(ukId));
}

std::string MemberSynchronousRequest::getFaceUrls()const
{
	return faceUrls_;
}

void MemberSynchronousRequest::setFaceUrls(const std::string& faceUrls)
{
	faceUrls_ = faceUrls;
	setBodyParameter("FaceUrls", faceUrls);
}

long MemberSynchronousRequest::getStoreId()const
{
	return storeId_;
}

void MemberSynchronousRequest::setStoreId(long storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", std::to_string(storeId));
}

std::string MemberSynchronousRequest::getType()const
{
	return type_;
}

void MemberSynchronousRequest::setType(const std::string& type)
{
	type_ = type;
	setBodyParameter("Type", type);
}

long MemberSynchronousRequest::getCustId()const
{
	return custId_;
}

void MemberSynchronousRequest::setCustId(long custId)
{
	custId_ = custId;
	setBodyParameter("CustId", std::to_string(custId));
}

