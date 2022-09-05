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

#include <alibabacloud/arms/model/CreateOrUpdateEventBridgeIntegrationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

CreateOrUpdateEventBridgeIntegrationResult::CreateOrUpdateEventBridgeIntegrationResult() :
	ServiceResult()
{}

CreateOrUpdateEventBridgeIntegrationResult::CreateOrUpdateEventBridgeIntegrationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateOrUpdateEventBridgeIntegrationResult::~CreateOrUpdateEventBridgeIntegrationResult()
{}

void CreateOrUpdateEventBridgeIntegrationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto eventBridgeIntegrationNode = value["EventBridgeIntegration"];
	if(!eventBridgeIntegrationNode["Id"].isNull())
		eventBridgeIntegration_.id = std::stol(eventBridgeIntegrationNode["Id"].asString());
	if(!eventBridgeIntegrationNode["Name"].isNull())
		eventBridgeIntegration_.name = eventBridgeIntegrationNode["Name"].asString();
	if(!eventBridgeIntegrationNode["Description"].isNull())
		eventBridgeIntegration_.description = eventBridgeIntegrationNode["Description"].asString();
	if(!eventBridgeIntegrationNode["Endpoint"].isNull())
		eventBridgeIntegration_.endpoint = eventBridgeIntegrationNode["Endpoint"].asString();
	if(!eventBridgeIntegrationNode["AccessKey"].isNull())
		eventBridgeIntegration_.accessKey = eventBridgeIntegrationNode["AccessKey"].asString();
	if(!eventBridgeIntegrationNode["AccessSecret"].isNull())
		eventBridgeIntegration_.accessSecret = eventBridgeIntegrationNode["AccessSecret"].asString();
	if(!eventBridgeIntegrationNode["EventBusName"].isNull())
		eventBridgeIntegration_.eventBusName = eventBridgeIntegrationNode["EventBusName"].asString();
	if(!eventBridgeIntegrationNode["Source"].isNull())
		eventBridgeIntegration_.source = eventBridgeIntegrationNode["Source"].asString();
	if(!eventBridgeIntegrationNode["EventBusRegionId"].isNull())
		eventBridgeIntegration_.eventBusRegionId = eventBridgeIntegrationNode["EventBusRegionId"].asString();

}

CreateOrUpdateEventBridgeIntegrationResult::EventBridgeIntegration CreateOrUpdateEventBridgeIntegrationResult::getEventBridgeIntegration()const
{
	return eventBridgeIntegration_;
}

