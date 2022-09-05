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

#include <alibabacloud/arms/model/ListIntegrationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

ListIntegrationResult::ListIntegrationResult() :
	ServiceResult()
{}

ListIntegrationResult::ListIntegrationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListIntegrationResult::~ListIntegrationResult()
{}

void ListIntegrationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["Total"].isNull())
		pageInfo_.total = std::stol(pageInfoNode["Total"].asString());
	if(!pageInfoNode["Size"].isNull())
		pageInfo_.size = std::stol(pageInfoNode["Size"].asString());
	if(!pageInfoNode["Page"].isNull())
		pageInfo_.page = std::stol(pageInfoNode["Page"].asString());
	auto allIntegrationsNode = pageInfoNode["Integrations"]["integrationsItem"];
	for (auto pageInfoNodeIntegrationsintegrationsItem : allIntegrationsNode)
	{
		PageInfo::IntegrationsItem integrationsItemObject;
		if(!pageInfoNodeIntegrationsintegrationsItem["IntegrationId"].isNull())
			integrationsItemObject.integrationId = std::stol(pageInfoNodeIntegrationsintegrationsItem["IntegrationId"].asString());
		if(!pageInfoNodeIntegrationsintegrationsItem["IntegrationName"].isNull())
			integrationsItemObject.integrationName = pageInfoNodeIntegrationsintegrationsItem["IntegrationName"].asString();
		if(!pageInfoNodeIntegrationsintegrationsItem["IntegrationProductType"].isNull())
			integrationsItemObject.integrationProductType = pageInfoNodeIntegrationsintegrationsItem["IntegrationProductType"].asString();
		if(!pageInfoNodeIntegrationsintegrationsItem["ApiEndpoint"].isNull())
			integrationsItemObject.apiEndpoint = pageInfoNodeIntegrationsintegrationsItem["ApiEndpoint"].asString();
		if(!pageInfoNodeIntegrationsintegrationsItem["ShortToken"].isNull())
			integrationsItemObject.shortToken = pageInfoNodeIntegrationsintegrationsItem["ShortToken"].asString();
		if(!pageInfoNodeIntegrationsintegrationsItem["State"].isNull())
			integrationsItemObject.state = pageInfoNodeIntegrationsintegrationsItem["State"].asString() == "true";
		if(!pageInfoNodeIntegrationsintegrationsItem["Liveness"].isNull())
			integrationsItemObject.liveness = pageInfoNodeIntegrationsintegrationsItem["Liveness"].asString();
		if(!pageInfoNodeIntegrationsintegrationsItem["CreateTime"].isNull())
			integrationsItemObject.createTime = pageInfoNodeIntegrationsintegrationsItem["CreateTime"].asString();
		auto integrationDetailNode = value["IntegrationDetail"];
		if(!integrationDetailNode["Description"].isNull())
			integrationsItemObject.integrationDetail.description = integrationDetailNode["Description"].asString();
		if(!integrationDetailNode["DuplicateKey"].isNull())
			integrationsItemObject.integrationDetail.duplicateKey = integrationDetailNode["DuplicateKey"].asString();
		if(!integrationDetailNode["AutoRecover"].isNull())
			integrationsItemObject.integrationDetail.autoRecover = integrationDetailNode["AutoRecover"].asString() == "true";
		if(!integrationDetailNode["RecoverTime"].isNull())
			integrationsItemObject.integrationDetail.recoverTime = std::stol(integrationDetailNode["RecoverTime"].asString());
		if(!integrationDetailNode["InitiativeRecoverField"].isNull())
			integrationsItemObject.integrationDetail.initiativeRecoverField = integrationDetailNode["InitiativeRecoverField"].asString();
		if(!integrationDetailNode["InitiativeRecoverValue"].isNull())
			integrationsItemObject.integrationDetail.initiativeRecoverValue = integrationDetailNode["InitiativeRecoverValue"].asString();
			auto allStat = integrationDetailNode["Stat"]["stat"];
			for (auto value : allStat)
				integrationsItemObject.integrationDetail.stat.push_back(value.asString());
			auto allFieldRedefineRules = integrationDetailNode["FieldRedefineRules"]["fieldRedefineRules"];
			for (auto value : allFieldRedefineRules)
				integrationsItemObject.integrationDetail.fieldRedefineRules.push_back(value.asString());
			auto allExtendedFieldRedefineRules = integrationDetailNode["ExtendedFieldRedefineRules"]["extendedFieldRedefineRules"];
			for (auto value : allExtendedFieldRedefineRules)
				integrationsItemObject.integrationDetail.extendedFieldRedefineRules.push_back(value.asString());
		pageInfo_.integrations.push_back(integrationsItemObject);
	}

}

ListIntegrationResult::PageInfo ListIntegrationResult::getPageInfo()const
{
	return pageInfo_;
}

