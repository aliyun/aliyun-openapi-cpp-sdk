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

#include <alibabacloud/eiam/model/GetApplicationFederatedCredentialResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

GetApplicationFederatedCredentialResult::GetApplicationFederatedCredentialResult() :
	ServiceResult()
{}

GetApplicationFederatedCredentialResult::GetApplicationFederatedCredentialResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetApplicationFederatedCredentialResult::~GetApplicationFederatedCredentialResult()
{}

void GetApplicationFederatedCredentialResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto applicationFederatedCredentialNode = value["ApplicationFederatedCredential"];
	if(!applicationFederatedCredentialNode["InstanceId"].isNull())
		applicationFederatedCredential_.instanceId = applicationFederatedCredentialNode["InstanceId"].asString();
	if(!applicationFederatedCredentialNode["ApplicationFederatedCredentialId"].isNull())
		applicationFederatedCredential_.applicationFederatedCredentialId = applicationFederatedCredentialNode["ApplicationFederatedCredentialId"].asString();
	if(!applicationFederatedCredentialNode["ApplicationId"].isNull())
		applicationFederatedCredential_.applicationId = applicationFederatedCredentialNode["ApplicationId"].asString();
	if(!applicationFederatedCredentialNode["FederatedCredentialProviderId"].isNull())
		applicationFederatedCredential_.federatedCredentialProviderId = applicationFederatedCredentialNode["FederatedCredentialProviderId"].asString();
	if(!applicationFederatedCredentialNode["ApplicationFederatedCredentialType"].isNull())
		applicationFederatedCredential_.applicationFederatedCredentialType = applicationFederatedCredentialNode["ApplicationFederatedCredentialType"].asString();
	if(!applicationFederatedCredentialNode["ApplicationFederatedCredentialName"].isNull())
		applicationFederatedCredential_.applicationFederatedCredentialName = applicationFederatedCredentialNode["ApplicationFederatedCredentialName"].asString();
	if(!applicationFederatedCredentialNode["Status"].isNull())
		applicationFederatedCredential_.status = applicationFederatedCredentialNode["Status"].asString();
	if(!applicationFederatedCredentialNode["Description"].isNull())
		applicationFederatedCredential_.description = applicationFederatedCredentialNode["Description"].asString();
	if(!applicationFederatedCredentialNode["CreateTime"].isNull())
		applicationFederatedCredential_.createTime = std::stol(applicationFederatedCredentialNode["CreateTime"].asString());
	if(!applicationFederatedCredentialNode["UpdateTime"].isNull())
		applicationFederatedCredential_.updateTime = std::stol(applicationFederatedCredentialNode["UpdateTime"].asString());
	if(!applicationFederatedCredentialNode["LastUsedTime"].isNull())
		applicationFederatedCredential_.lastUsedTime = std::stol(applicationFederatedCredentialNode["LastUsedTime"].asString());
	if(!applicationFederatedCredentialNode["VerificationCondition"].isNull())
		applicationFederatedCredential_.verificationCondition = applicationFederatedCredentialNode["VerificationCondition"].asString();
	auto allAttributeMappingsNode = applicationFederatedCredentialNode["AttributeMappings"]["AttributeMapping"];
	for (auto applicationFederatedCredentialNodeAttributeMappingsAttributeMapping : allAttributeMappingsNode)
	{
		ApplicationFederatedCredential::AttributeMapping attributeMappingObject;
		if(!applicationFederatedCredentialNodeAttributeMappingsAttributeMapping["SourceValueExpression"].isNull())
			attributeMappingObject.sourceValueExpression = applicationFederatedCredentialNodeAttributeMappingsAttributeMapping["SourceValueExpression"].asString();
		if(!applicationFederatedCredentialNodeAttributeMappingsAttributeMapping["TargetField"].isNull())
			attributeMappingObject.targetField = applicationFederatedCredentialNodeAttributeMappingsAttributeMapping["TargetField"].asString();
		applicationFederatedCredential_.attributeMappings.push_back(attributeMappingObject);
	}

}

GetApplicationFederatedCredentialResult::ApplicationFederatedCredential GetApplicationFederatedCredentialResult::getApplicationFederatedCredential()const
{
	return applicationFederatedCredential_;
}

