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

#include <alibabacloud/eiam/model/ObtainApplicationClientSecretResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

ObtainApplicationClientSecretResult::ObtainApplicationClientSecretResult() :
	ServiceResult()
{}

ObtainApplicationClientSecretResult::ObtainApplicationClientSecretResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ObtainApplicationClientSecretResult::~ObtainApplicationClientSecretResult()
{}

void ObtainApplicationClientSecretResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto applicationClientSecretNode = value["ApplicationClientSecret"];
	if(!applicationClientSecretNode["InstanceId"].isNull())
		applicationClientSecret_.instanceId = applicationClientSecretNode["InstanceId"].asString();
	if(!applicationClientSecretNode["ApplicationId"].isNull())
		applicationClientSecret_.applicationId = applicationClientSecretNode["ApplicationId"].asString();
	if(!applicationClientSecretNode["ClientId"].isNull())
		applicationClientSecret_.clientId = applicationClientSecretNode["ClientId"].asString();
	if(!applicationClientSecretNode["SecretId"].isNull())
		applicationClientSecret_.secretId = applicationClientSecretNode["SecretId"].asString();
	if(!applicationClientSecretNode["ClientSecret"].isNull())
		applicationClientSecret_.clientSecret = applicationClientSecretNode["ClientSecret"].asString();
	if(!applicationClientSecretNode["Status"].isNull())
		applicationClientSecret_.status = applicationClientSecretNode["Status"].asString();
	if(!applicationClientSecretNode["LastUsedTime"].isNull())
		applicationClientSecret_.lastUsedTime = std::stol(applicationClientSecretNode["LastUsedTime"].asString());

}

ObtainApplicationClientSecretResult::ApplicationClientSecret ObtainApplicationClientSecretResult::getApplicationClientSecret()const
{
	return applicationClientSecret_;
}

