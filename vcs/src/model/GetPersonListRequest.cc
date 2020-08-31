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

#include <alibabacloud/vcs/model/GetPersonListRequest.h>

using AlibabaCloud::Vcs::Model::GetPersonListRequest;

GetPersonListRequest::GetPersonListRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "GetPersonList")
{
	setMethod(HttpRequest::Method::Post);
}

GetPersonListRequest::~GetPersonListRequest()
{}

std::string GetPersonListRequest::getCorpId()const
{
	return corpId_;
}

void GetPersonListRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string GetPersonListRequest::getFaceMatchingRateThreshold()const
{
	return faceMatchingRateThreshold_;
}

void GetPersonListRequest::setFaceMatchingRateThreshold(const std::string& faceMatchingRateThreshold)
{
	faceMatchingRateThreshold_ = faceMatchingRateThreshold;
	setBodyParameter("FaceMatchingRateThreshold", faceMatchingRateThreshold);
}

long GetPersonListRequest::getPageNumber()const
{
	return pageNumber_;
}

void GetPersonListRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

std::map<std::string, std::string> GetPersonListRequest::getCorpIdList()const
{
	return corpIdList_;
}

void GetPersonListRequest::setCorpIdList(const std::map<std::string, std::string>& corpIdList)
{
	corpIdList_ = corpIdList;
	setJsonParameters("CorpIdList", corpIdList);
}

std::string GetPersonListRequest::getFaceUrl()const
{
	return faceUrl_;
}

void GetPersonListRequest::setFaceUrl(const std::string& faceUrl)
{
	faceUrl_ = faceUrl;
	setBodyParameter("FaceUrl", faceUrl);
}

long GetPersonListRequest::getPageSize()const
{
	return pageSize_;
}

void GetPersonListRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::map<std::string, std::string> GetPersonListRequest::getPersonIdList()const
{
	return personIdList_;
}

void GetPersonListRequest::setPersonIdList(const std::map<std::string, std::string>& personIdList)
{
	personIdList_ = personIdList;
	setJsonParameters("PersonIdList", personIdList);
}

