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

#include <alibabacloud/eiam/model/ObtainDomainProxyTokenResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

ObtainDomainProxyTokenResult::ObtainDomainProxyTokenResult() :
	ServiceResult()
{}

ObtainDomainProxyTokenResult::ObtainDomainProxyTokenResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ObtainDomainProxyTokenResult::~ObtainDomainProxyTokenResult()
{}

void ObtainDomainProxyTokenResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto domainProxyTokenNode = value["DomainProxyToken"];
	if(!domainProxyTokenNode["InstanceId"].isNull())
		domainProxyToken_.instanceId = domainProxyTokenNode["InstanceId"].asString();
	if(!domainProxyTokenNode["DomainProxyTokenId"].isNull())
		domainProxyToken_.domainProxyTokenId = domainProxyTokenNode["DomainProxyTokenId"].asString();
	if(!domainProxyTokenNode["DomainProxyToken"].isNull())
		domainProxyToken_.domainProxyToken = domainProxyTokenNode["DomainProxyToken"].asString();
	if(!domainProxyTokenNode["DomainId"].isNull())
		domainProxyToken_.domainId = domainProxyTokenNode["DomainId"].asString();
	if(!domainProxyTokenNode["Status"].isNull())
		domainProxyToken_.status = domainProxyTokenNode["Status"].asString();
	if(!domainProxyTokenNode["CreateTime"].isNull())
		domainProxyToken_.createTime = std::stol(domainProxyTokenNode["CreateTime"].asString());
	if(!domainProxyTokenNode["UpdateTime"].isNull())
		domainProxyToken_.updateTime = std::stol(domainProxyTokenNode["UpdateTime"].asString());
	if(!domainProxyTokenNode["LastUsedTime"].isNull())
		domainProxyToken_.lastUsedTime = std::stol(domainProxyTokenNode["LastUsedTime"].asString());

}

ObtainDomainProxyTokenResult::DomainProxyToken ObtainDomainProxyTokenResult::getDomainProxyToken()const
{
	return domainProxyToken_;
}

