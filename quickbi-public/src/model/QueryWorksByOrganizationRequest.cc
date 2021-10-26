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

#include <alibabacloud/quickbi-public/model/QueryWorksByOrganizationRequest.h>

using AlibabaCloud::Quickbi_public::Model::QueryWorksByOrganizationRequest;

QueryWorksByOrganizationRequest::QueryWorksByOrganizationRequest() :
	RpcServiceRequest("quickbi-public", "2020-08-07", "QueryWorksByOrganization")
{
	setMethod(HttpRequest::Method::Post);
}

QueryWorksByOrganizationRequest::~QueryWorksByOrganizationRequest()
{}

std::string QueryWorksByOrganizationRequest::getWorksType()const
{
	return worksType_;
}

void QueryWorksByOrganizationRequest::setWorksType(const std::string& worksType)
{
	worksType_ = worksType;
	setParameter("WorksType", worksType);
}

int QueryWorksByOrganizationRequest::getThirdPartAuthFlag()const
{
	return thirdPartAuthFlag_;
}

void QueryWorksByOrganizationRequest::setThirdPartAuthFlag(int thirdPartAuthFlag)
{
	thirdPartAuthFlag_ = thirdPartAuthFlag;
	setParameter("ThirdPartAuthFlag", std::to_string(thirdPartAuthFlag));
}

std::string QueryWorksByOrganizationRequest::getAccessPoint()const
{
	return accessPoint_;
}

void QueryWorksByOrganizationRequest::setAccessPoint(const std::string& accessPoint)
{
	accessPoint_ = accessPoint;
	setParameter("AccessPoint", accessPoint);
}

int QueryWorksByOrganizationRequest::getPageSize()const
{
	return pageSize_;
}

void QueryWorksByOrganizationRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string QueryWorksByOrganizationRequest::getSignType()const
{
	return signType_;
}

void QueryWorksByOrganizationRequest::setSignType(const std::string& signType)
{
	signType_ = signType;
	setParameter("SignType", signType);
}

int QueryWorksByOrganizationRequest::getPageNum()const
{
	return pageNum_;
}

void QueryWorksByOrganizationRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

int QueryWorksByOrganizationRequest::getStatus()const
{
	return status_;
}

void QueryWorksByOrganizationRequest::setStatus(int status)
{
	status_ = status;
	setParameter("Status", std::to_string(status));
}

