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

#include <alibabacloud/slb/model/CreateDomainExtensionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

CreateDomainExtensionResult::CreateDomainExtensionResult() :
	ServiceResult()
{}

CreateDomainExtensionResult::CreateDomainExtensionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateDomainExtensionResult::~CreateDomainExtensionResult()
{}

void CreateDomainExtensionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ListenerPort"].isNull())
		listenerPort_ = std::stoi(value["ListenerPort"].asString());
	if(!value["DomainExtensionId"].isNull())
		domainExtensionId_ = value["DomainExtensionId"].asString();

}

int CreateDomainExtensionResult::getListenerPort()const
{
	return listenerPort_;
}

std::string CreateDomainExtensionResult::getDomainExtensionId()const
{
	return domainExtensionId_;
}

