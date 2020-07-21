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

#include <alibabacloud/vcs/model/GetPersonDetailRequest.h>

using AlibabaCloud::Vcs::Model::GetPersonDetailRequest;

GetPersonDetailRequest::GetPersonDetailRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "GetPersonDetail")
{
	setMethod(HttpRequest::Method::Post);
}

GetPersonDetailRequest::~GetPersonDetailRequest()
{}

std::string GetPersonDetailRequest::getAlgorithmType()const
{
	return algorithmType_;
}

void GetPersonDetailRequest::setAlgorithmType(const std::string& algorithmType)
{
	algorithmType_ = algorithmType;
	setBodyParameter("AlgorithmType", algorithmType);
}

std::string GetPersonDetailRequest::getCorpId()const
{
	return corpId_;
}

void GetPersonDetailRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string GetPersonDetailRequest::getPersonID()const
{
	return personID_;
}

void GetPersonDetailRequest::setPersonID(const std::string& personID)
{
	personID_ = personID;
	setBodyParameter("PersonID", personID);
}

