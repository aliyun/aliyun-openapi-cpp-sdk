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

#include <alibabacloud/actiontrail/model/GetAccessKeyLastUsedInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Actiontrail;
using namespace AlibabaCloud::Actiontrail::Model;

GetAccessKeyLastUsedInfoResult::GetAccessKeyLastUsedInfoResult() :
	ServiceResult()
{}

GetAccessKeyLastUsedInfoResult::GetAccessKeyLastUsedInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAccessKeyLastUsedInfoResult::~GetAccessKeyLastUsedInfoResult()
{}

void GetAccessKeyLastUsedInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["AccessKeyId"].isNull())
		accessKeyId_ = value["AccessKeyId"].asString();
	if(!value["AccountId"].isNull())
		accountId_ = value["AccountId"].asString();
	if(!value["OwnerId"].isNull())
		ownerId_ = value["OwnerId"].asString();
	if(!value["UserName"].isNull())
		userName_ = value["UserName"].asString();
	if(!value["AccountType"].isNull())
		accountType_ = value["AccountType"].asString();
	if(!value["UsedTimestamp"].isNull())
		usedTimestamp_ = std::stol(value["UsedTimestamp"].asString());
	if(!value["Detail"].isNull())
		detail_ = value["Detail"].asString();
	if(!value["Source"].isNull())
		source_ = value["Source"].asString();
	if(!value["ServiceName"].isNull())
		serviceName_ = value["ServiceName"].asString();
	if(!value["ServiceNameCn"].isNull())
		serviceNameCn_ = value["ServiceNameCn"].asString();
	if(!value["ServiceNameEn"].isNull())
		serviceNameEn_ = value["ServiceNameEn"].asString();

}

std::string GetAccessKeyLastUsedInfoResult::getAccountId()const
{
	return accountId_;
}

std::string GetAccessKeyLastUsedInfoResult::getUserName()const
{
	return userName_;
}

std::string GetAccessKeyLastUsedInfoResult::getOwnerId()const
{
	return ownerId_;
}

std::string GetAccessKeyLastUsedInfoResult::getServiceName()const
{
	return serviceName_;
}

std::string GetAccessKeyLastUsedInfoResult::getAccessKeyId()const
{
	return accessKeyId_;
}

std::string GetAccessKeyLastUsedInfoResult::getServiceNameCn()const
{
	return serviceNameCn_;
}

std::string GetAccessKeyLastUsedInfoResult::getServiceNameEn()const
{
	return serviceNameEn_;
}

std::string GetAccessKeyLastUsedInfoResult::getAccountType()const
{
	return accountType_;
}

long GetAccessKeyLastUsedInfoResult::getUsedTimestamp()const
{
	return usedTimestamp_;
}

std::string GetAccessKeyLastUsedInfoResult::getDetail()const
{
	return detail_;
}

std::string GetAccessKeyLastUsedInfoResult::getSource()const
{
	return source_;
}

