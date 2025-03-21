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

#include <alibabacloud/eiam/model/GetDomainResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

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
	auto domainNode = value["Domain"];
	if(!domainNode["InstanceId"].isNull())
		domain_.instanceId = domainNode["InstanceId"].asString();
	if(!domainNode["DomainId"].isNull())
		domain_.domainId = domainNode["DomainId"].asString();
	if(!domainNode["Domain"].isNull())
		domain_.domain = domainNode["Domain"].asString();
	if(!domainNode["DomainType"].isNull())
		domain_.domainType = domainNode["DomainType"].asString();
	if(!domainNode["LockMode"].isNull())
		domain_.lockMode = domainNode["LockMode"].asString();
	if(!domainNode["DefaultDomain"].isNull())
		domain_.defaultDomain = domainNode["DefaultDomain"].asString() == "true";
	if(!domainNode["CreateTime"].isNull())
		domain_.createTime = std::stol(domainNode["CreateTime"].asString());
	if(!domainNode["UpdateTime"].isNull())
		domain_.updateTime = std::stol(domainNode["UpdateTime"].asString());
	auto filingNode = domainNode["Filing"];
	if(!filingNode["IcpNumber"].isNull())
		domain_.filing.icpNumber = filingNode["IcpNumber"].asString();

}

GetDomainResult::Domain GetDomainResult::getDomain()const
{
	return domain_;
}

