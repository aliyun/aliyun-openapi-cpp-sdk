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

#include <alibabacloud/eiam/model/ObtainApplicationTokenResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

ObtainApplicationTokenResult::ObtainApplicationTokenResult() :
	ServiceResult()
{}

ObtainApplicationTokenResult::ObtainApplicationTokenResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ObtainApplicationTokenResult::~ObtainApplicationTokenResult()
{}

void ObtainApplicationTokenResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto applicationTokenNode = value["ApplicationToken"];
	if(!applicationTokenNode["InstanceId"].isNull())
		applicationToken_.instanceId = applicationTokenNode["InstanceId"].asString();
	if(!applicationTokenNode["ApplicationId"].isNull())
		applicationToken_.applicationId = applicationTokenNode["ApplicationId"].asString();
	if(!applicationTokenNode["ApplicationTokenId"].isNull())
		applicationToken_.applicationTokenId = applicationTokenNode["ApplicationTokenId"].asString();
	if(!applicationTokenNode["ApplicationTokenType"].isNull())
		applicationToken_.applicationTokenType = applicationTokenNode["ApplicationTokenType"].asString();
	if(!applicationTokenNode["ApplicationToken"].isNull())
		applicationToken_.applicationToken = applicationTokenNode["ApplicationToken"].asString();
	if(!applicationTokenNode["Status"].isNull())
		applicationToken_.status = applicationTokenNode["Status"].asString();
	if(!applicationTokenNode["ExpirationTime"].isNull())
		applicationToken_.expirationTime = std::stol(applicationTokenNode["ExpirationTime"].asString());
	if(!applicationTokenNode["LastUsedTime"].isNull())
		applicationToken_.lastUsedTime = std::stol(applicationTokenNode["LastUsedTime"].asString());
	if(!applicationTokenNode["CreateTime"].isNull())
		applicationToken_.createTime = std::stol(applicationTokenNode["CreateTime"].asString());

}

ObtainApplicationTokenResult::ApplicationToken ObtainApplicationTokenResult::getApplicationToken()const
{
	return applicationToken_;
}

