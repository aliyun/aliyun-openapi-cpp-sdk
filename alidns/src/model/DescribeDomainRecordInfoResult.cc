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

#include <alibabacloud/alidns/model/DescribeDomainRecordInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeDomainRecordInfoResult::DescribeDomainRecordInfoResult() :
	ServiceResult()
{}

DescribeDomainRecordInfoResult::DescribeDomainRecordInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainRecordInfoResult::~DescribeDomainRecordInfoResult()
{}

void DescribeDomainRecordInfoResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["DomainId"].isNull())
		domainId_ = value["DomainId"].asString();
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["PunyCode"].isNull())
		punyCode_ = value["PunyCode"].asString();
	if(!value["GroupId"].isNull())
		groupId_ = value["GroupId"].asString();
	if(!value["GroupName"].isNull())
		groupName_ = value["GroupName"].asString();
	if(!value["RecordId"].isNull())
		recordId_ = value["RecordId"].asString();
	if(!value["RR"].isNull())
		rR_ = value["RR"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["Value"].isNull())
		value_ = value["Value"].asString();
	if(!value["TTL"].isNull())
		tTL_ = std::stol(value["TTL"].asString());
	if(!value["Priority"].isNull())
		priority_ = std::stol(value["Priority"].asString());
	if(!value["Line"].isNull())
		line_ = value["Line"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Locked"].isNull())
		locked_ = value["Locked"].asString() == "true";

}

std::string DescribeDomainRecordInfoResult::getGroupName()const
{
	return groupName_;
}

std::string DescribeDomainRecordInfoResult::getRR()const
{
	return rR_;
}

std::string DescribeDomainRecordInfoResult::getStatus()const
{
	return status_;
}

std::string DescribeDomainRecordInfoResult::getDomainName()const
{
	return domainName_;
}

long DescribeDomainRecordInfoResult::getPriority()const
{
	return priority_;
}

std::string DescribeDomainRecordInfoResult::getPunyCode()const
{
	return punyCode_;
}

long DescribeDomainRecordInfoResult::getTTL()const
{
	return tTL_;
}

std::string DescribeDomainRecordInfoResult::getGroupId()const
{
	return groupId_;
}

std::string DescribeDomainRecordInfoResult::getLine()const
{
	return line_;
}

bool DescribeDomainRecordInfoResult::getLocked()const
{
	return locked_;
}

std::string DescribeDomainRecordInfoResult::getType()const
{
	return type_;
}

std::string DescribeDomainRecordInfoResult::getDomainId()const
{
	return domainId_;
}

std::string DescribeDomainRecordInfoResult::getValue()const
{
	return value_;
}

std::string DescribeDomainRecordInfoResult::getRecordId()const
{
	return recordId_;
}

