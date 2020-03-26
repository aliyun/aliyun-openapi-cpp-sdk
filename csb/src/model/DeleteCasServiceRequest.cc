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

#include <alibabacloud/csb/model/DeleteCasServiceRequest.h>

using AlibabaCloud::CSB::Model::DeleteCasServiceRequest;

DeleteCasServiceRequest::DeleteCasServiceRequest() :
	RpcServiceRequest("csb", "2017-11-18", "DeleteCasService")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteCasServiceRequest::~DeleteCasServiceRequest()
{}

bool DeleteCasServiceRequest::getLeafOnly()const
{
	return leafOnly_;
}

void DeleteCasServiceRequest::setLeafOnly(bool leafOnly)
{
	leafOnly_ = leafOnly;
	setParameter("LeafOnly", leafOnly ? "true" : "false");
}

std::string DeleteCasServiceRequest::getCasCsbName()const
{
	return casCsbName_;
}

void DeleteCasServiceRequest::setCasCsbName(const std::string& casCsbName)
{
	casCsbName_ = casCsbName;
	setParameter("CasCsbName", casCsbName);
}

std::string DeleteCasServiceRequest::getSrcUserId()const
{
	return srcUserId_;
}

void DeleteCasServiceRequest::setSrcUserId(const std::string& srcUserId)
{
	srcUserId_ = srcUserId;
	setParameter("SrcUserId", srcUserId);
}

std::string DeleteCasServiceRequest::getCasServiceId()const
{
	return casServiceId_;
}

void DeleteCasServiceRequest::setCasServiceId(const std::string& casServiceId)
{
	casServiceId_ = casServiceId;
	setParameter("CasServiceId", casServiceId);
}

