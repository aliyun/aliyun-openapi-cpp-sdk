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

#include <alibabacloud/eiam/model/ListApplicationClientSecretsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

ListApplicationClientSecretsResult::ListApplicationClientSecretsResult() :
	ServiceResult()
{}

ListApplicationClientSecretsResult::ListApplicationClientSecretsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListApplicationClientSecretsResult::~ListApplicationClientSecretsResult()
{}

void ListApplicationClientSecretsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApplicationClientSecretsNode = value["ApplicationClientSecrets"]["ApplicationClientSecret"];
	for (auto valueApplicationClientSecretsApplicationClientSecret : allApplicationClientSecretsNode)
	{
		ApplicationClientSecret applicationClientSecretsObject;
		if(!valueApplicationClientSecretsApplicationClientSecret["InstanceId"].isNull())
			applicationClientSecretsObject.instanceId = valueApplicationClientSecretsApplicationClientSecret["InstanceId"].asString();
		if(!valueApplicationClientSecretsApplicationClientSecret["ApplicationId"].isNull())
			applicationClientSecretsObject.applicationId = valueApplicationClientSecretsApplicationClientSecret["ApplicationId"].asString();
		if(!valueApplicationClientSecretsApplicationClientSecret["ClientId"].isNull())
			applicationClientSecretsObject.clientId = valueApplicationClientSecretsApplicationClientSecret["ClientId"].asString();
		if(!valueApplicationClientSecretsApplicationClientSecret["SecretId"].isNull())
			applicationClientSecretsObject.secretId = valueApplicationClientSecretsApplicationClientSecret["SecretId"].asString();
		if(!valueApplicationClientSecretsApplicationClientSecret["ClientSecret"].isNull())
			applicationClientSecretsObject.clientSecret = valueApplicationClientSecretsApplicationClientSecret["ClientSecret"].asString();
		if(!valueApplicationClientSecretsApplicationClientSecret["Status"].isNull())
			applicationClientSecretsObject.status = valueApplicationClientSecretsApplicationClientSecret["Status"].asString();
		if(!valueApplicationClientSecretsApplicationClientSecret["LastUsedTime"].isNull())
			applicationClientSecretsObject.lastUsedTime = std::stol(valueApplicationClientSecretsApplicationClientSecret["LastUsedTime"].asString());
		applicationClientSecrets_.push_back(applicationClientSecretsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListApplicationClientSecretsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListApplicationClientSecretsResult::ApplicationClientSecret> ListApplicationClientSecretsResult::getApplicationClientSecrets()const
{
	return applicationClientSecrets_;
}

