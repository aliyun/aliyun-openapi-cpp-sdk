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

#include <alibabacloud/domain/model/ListServerLockRequest.h>

using AlibabaCloud::Domain::Model::ListServerLockRequest;

ListServerLockRequest::ListServerLockRequest() :
	RpcServiceRequest("domain", "2018-01-29", "ListServerLock")
{}

ListServerLockRequest::~ListServerLockRequest()
{}

std::string ListServerLockRequest::getLockProductId()const
{
	return lockProductId_;
}

void ListServerLockRequest::setLockProductId(const std::string& lockProductId)
{
	lockProductId_ = lockProductId;
	setCoreParameter("LockProductId", std::to_string(lockProductId));
}

long ListServerLockRequest::getEndStartDate()const
{
	return endStartDate_;
}

void ListServerLockRequest::setEndStartDate(long endStartDate)
{
	endStartDate_ = endStartDate;
	setCoreParameter("EndStartDate", endStartDate);
}

int ListServerLockRequest::getServerLockStatus()const
{
	return serverLockStatus_;
}

void ListServerLockRequest::setServerLockStatus(int serverLockStatus)
{
	serverLockStatus_ = serverLockStatus;
	setCoreParameter("ServerLockStatus", serverLockStatus);
}

long ListServerLockRequest::getStartExpireDate()const
{
	return startExpireDate_;
}

void ListServerLockRequest::setStartExpireDate(long startExpireDate)
{
	startExpireDate_ = startExpireDate;
	setCoreParameter("StartExpireDate", startExpireDate);
}

std::string ListServerLockRequest::getDomainName()const
{
	return domainName_;
}

void ListServerLockRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

int ListServerLockRequest::getPageSize()const
{
	return pageSize_;
}

void ListServerLockRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string ListServerLockRequest::getUserClientIp()const
{
	return userClientIp_;
}

void ListServerLockRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", std::to_string(userClientIp));
}

long ListServerLockRequest::getEndExpireDate()const
{
	return endExpireDate_;
}

void ListServerLockRequest::setEndExpireDate(long endExpireDate)
{
	endExpireDate_ = endExpireDate;
	setCoreParameter("EndExpireDate", endExpireDate);
}

int ListServerLockRequest::getPageNum()const
{
	return pageNum_;
}

void ListServerLockRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", pageNum);
}

std::string ListServerLockRequest::getLang()const
{
	return lang_;
}

void ListServerLockRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

long ListServerLockRequest::getBeginStartDate()const
{
	return beginStartDate_;
}

void ListServerLockRequest::setBeginStartDate(long beginStartDate)
{
	beginStartDate_ = beginStartDate;
	setCoreParameter("BeginStartDate", beginStartDate);
}

