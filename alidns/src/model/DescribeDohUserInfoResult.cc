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

#include <alibabacloud/alidns/model/DescribeDohUserInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeDohUserInfoResult::DescribeDohUserInfoResult() :
	ServiceResult()
{}

DescribeDohUserInfoResult::DescribeDohUserInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDohUserInfoResult::~DescribeDohUserInfoResult()
{}

void DescribeDohUserInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["SubDomainCount"].isNull())
		subDomainCount_ = std::stoi(value["SubDomainCount"].asString());
	if(!value["PdnsId"].isNull())
		pdnsId_ = std::stol(value["PdnsId"].asString());
	if(!value["DomainCount"].isNull())
		domainCount_ = std::stoi(value["DomainCount"].asString());

}

int DescribeDohUserInfoResult::getSubDomainCount()const
{
	return subDomainCount_;
}

long DescribeDohUserInfoResult::getPdnsId()const
{
	return pdnsId_;
}

int DescribeDohUserInfoResult::getDomainCount()const
{
	return domainCount_;
}

