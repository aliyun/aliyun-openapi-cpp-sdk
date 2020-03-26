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

#include <alibabacloud/csb/model/DeleteUnionCasServiceRequest.h>

using AlibabaCloud::CSB::Model::DeleteUnionCasServiceRequest;

DeleteUnionCasServiceRequest::DeleteUnionCasServiceRequest() :
	RpcServiceRequest("csb", "2017-11-18", "DeleteUnionCasService")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteUnionCasServiceRequest::~DeleteUnionCasServiceRequest()
{}

bool DeleteUnionCasServiceRequest::getLeafOnly()const
{
	return leafOnly_;
}

void DeleteUnionCasServiceRequest::setLeafOnly(bool leafOnly)
{
	leafOnly_ = leafOnly;
	setParameter("LeafOnly", leafOnly ? "true" : "false");
}

std::string DeleteUnionCasServiceRequest::getCasCsbName()const
{
	return casCsbName_;
}

void DeleteUnionCasServiceRequest::setCasCsbName(const std::string& casCsbName)
{
	casCsbName_ = casCsbName;
	setParameter("CasCsbName", casCsbName);
}

std::string DeleteUnionCasServiceRequest::getSrcUserId()const
{
	return srcUserId_;
}

void DeleteUnionCasServiceRequest::setSrcUserId(const std::string& srcUserId)
{
	srcUserId_ = srcUserId;
	setParameter("SrcUserId", srcUserId);
}

std::string DeleteUnionCasServiceRequest::getCasServiceId()const
{
	return casServiceId_;
}

void DeleteUnionCasServiceRequest::setCasServiceId(const std::string& casServiceId)
{
	casServiceId_ = casServiceId;
	setParameter("CasServiceId", casServiceId);
}

