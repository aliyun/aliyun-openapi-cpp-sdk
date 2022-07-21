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

#include <alibabacloud/domain/model/QueryServerLockResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

QueryServerLockResult::QueryServerLockResult() :
	ServiceResult()
{}

QueryServerLockResult::QueryServerLockResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryServerLockResult::~QueryServerLockResult()
{}

void QueryServerLockResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["StartDate"].isNull())
		startDate_ = value["StartDate"].asString();
	if(!value["GmtCreate"].isNull())
		gmtCreate_ = value["GmtCreate"].asString();
	if(!value["ExpireDate"].isNull())
		expireDate_ = value["ExpireDate"].asString();
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["UserId"].isNull())
		userId_ = value["UserId"].asString();
	if(!value["GmtModified"].isNull())
		gmtModified_ = value["GmtModified"].asString();
	if(!value["DomainInstanceId"].isNull())
		domainInstanceId_ = value["DomainInstanceId"].asString();
	if(!value["LockInstanceId"].isNull())
		lockInstanceId_ = value["LockInstanceId"].asString();
	if(!value["ServerLockStatus"].isNull())
		serverLockStatus_ = std::stoi(value["ServerLockStatus"].asString());
	if(!value["LockProductId"].isNull())
		lockProductId_ = value["LockProductId"].asString();

}

std::string QueryServerLockResult::getStartDate()const
{
	return startDate_;
}

std::string QueryServerLockResult::getGmtCreate()const
{
	return gmtCreate_;
}

std::string QueryServerLockResult::getExpireDate()const
{
	return expireDate_;
}

std::string QueryServerLockResult::getDomainName()const
{
	return domainName_;
}

std::string QueryServerLockResult::getUserId()const
{
	return userId_;
}

std::string QueryServerLockResult::getGmtModified()const
{
	return gmtModified_;
}

std::string QueryServerLockResult::getDomainInstanceId()const
{
	return domainInstanceId_;
}

std::string QueryServerLockResult::getLockInstanceId()const
{
	return lockInstanceId_;
}

int QueryServerLockResult::getServerLockStatus()const
{
	return serverLockStatus_;
}

std::string QueryServerLockResult::getLockProductId()const
{
	return lockProductId_;
}

