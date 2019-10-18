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

#include <alibabacloud/dnsknocker/model/GetDomainResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DnsKnocker;
using namespace AlibabaCloud::DnsKnocker::Model;

GetDomainResult::GetDomainResult() :
	ServiceResult()
{}

GetDomainResult::GetDomainResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDomainResult::~GetDomainResult()
{}

void GetDomainResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDomainNode = value["Domain"]["Data"];
	for (auto valueDomainData : allDomainNode)
	{
		Data domainObject;
		if(!valueDomainData["DomainName"].isNull())
			domainObject.domainName = valueDomainData["DomainName"].asString();
		if(!valueDomainData["Exists"].isNull())
			domainObject.exists = valueDomainData["Exists"].asString();
		if(!valueDomainData["Message"].isNull())
			domainObject.message = valueDomainData["Message"].asString();
		domain_.push_back(domainObject);
	}
	if(!value["ResultCode"].isNull())
		resultCode_ = value["ResultCode"].asString();
	if(!value["ResultMessage"].isNull())
		resultMessage_ = value["ResultMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["TransactionId"].isNull())
		transactionId_ = value["TransactionId"].asString();

}

std::vector<GetDomainResult::Data> GetDomainResult::getDomain()const
{
	return domain_;
}

std::string GetDomainResult::getResultMessage()const
{
	return resultMessage_;
}

std::string GetDomainResult::getResultCode()const
{
	return resultCode_;
}

std::string GetDomainResult::getSuccess()const
{
	return success_;
}

std::string GetDomainResult::getTransactionId()const
{
	return transactionId_;
}

