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

#include <alibabacloud/arms/model/CreateIntegrationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

CreateIntegrationResult::CreateIntegrationResult() :
	ServiceResult()
{}

CreateIntegrationResult::CreateIntegrationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateIntegrationResult::~CreateIntegrationResult()
{}

void CreateIntegrationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto integrationNode = value["Integration"];
	if(!integrationNode["IntegrationId"].isNull())
		integration_.integrationId = std::stol(integrationNode["IntegrationId"].asString());
	if(!integrationNode["IntegrationName"].isNull())
		integration_.integrationName = integrationNode["IntegrationName"].asString();
	if(!integrationNode["IntegrationProductType"].isNull())
		integration_.integrationProductType = integrationNode["IntegrationProductType"].asString();
	if(!integrationNode["Description"].isNull())
		integration_.description = integrationNode["Description"].asString();
	if(!integrationNode["AutoRecover"].isNull())
		integration_.autoRecover = integrationNode["AutoRecover"].asString() == "true";
	if(!integrationNode["RecoverTime"].isNull())
		integration_.recoverTime = std::stol(integrationNode["RecoverTime"].asString());

}

CreateIntegrationResult::Integration CreateIntegrationResult::getIntegration()const
{
	return integration_;
}

