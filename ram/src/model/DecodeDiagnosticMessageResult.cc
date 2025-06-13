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

#include <alibabacloud/ram/model/DecodeDiagnosticMessageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ram;
using namespace AlibabaCloud::Ram::Model;

DecodeDiagnosticMessageResult::DecodeDiagnosticMessageResult() :
	ServiceResult()
{}

DecodeDiagnosticMessageResult::DecodeDiagnosticMessageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DecodeDiagnosticMessageResult::~DecodeDiagnosticMessageResult()
{}

void DecodeDiagnosticMessageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto decodedDiagnosticMessageNode = value["DecodedDiagnosticMessage"];
	if(!decodedDiagnosticMessageNode["ExplicitDeny"].isNull())
		decodedDiagnosticMessage_.explicitDeny = decodedDiagnosticMessageNode["ExplicitDeny"].asString() == "true";
	if(!decodedDiagnosticMessageNode["NoPermissionPolicyType"].isNull())
		decodedDiagnosticMessage_.noPermissionPolicyType = decodedDiagnosticMessageNode["NoPermissionPolicyType"].asString();
	if(!decodedDiagnosticMessageNode["AuthAction"].isNull())
		decodedDiagnosticMessage_.authAction = decodedDiagnosticMessageNode["AuthAction"].asString();
	if(!decodedDiagnosticMessageNode["AuthResource"].isNull())
		decodedDiagnosticMessage_.authResource = decodedDiagnosticMessageNode["AuthResource"].asString();
	auto allAuthConditionsNode = decodedDiagnosticMessageNode["AuthConditions"]["authConditionsItem"];
	for (auto decodedDiagnosticMessageNodeAuthConditionsauthConditionsItem : allAuthConditionsNode)
	{
		DecodedDiagnosticMessage::AuthConditionsItem authConditionsItemObject;
		if(!decodedDiagnosticMessageNodeAuthConditionsauthConditionsItem["ConditionKey"].isNull())
			authConditionsItemObject.conditionKey = decodedDiagnosticMessageNodeAuthConditionsauthConditionsItem["ConditionKey"].asString();
		auto allConditionValues = value["ConditionValues"]["conditionValues"];
		for (auto value : allConditionValues)
			authConditionsItemObject.conditionValues.push_back(value.asString());
		decodedDiagnosticMessage_.authConditions.push_back(authConditionsItemObject);
	}
	auto allMatchedPoliciesNode = decodedDiagnosticMessageNode["MatchedPolicies"]["matchedPoliciesItem"];
	for (auto decodedDiagnosticMessageNodeMatchedPoliciesmatchedPoliciesItem : allMatchedPoliciesNode)
	{
		DecodedDiagnosticMessage::MatchedPoliciesItem matchedPoliciesItemObject;
		if(!decodedDiagnosticMessageNodeMatchedPoliciesmatchedPoliciesItem["Effect"].isNull())
			matchedPoliciesItemObject.effect = decodedDiagnosticMessageNodeMatchedPoliciesmatchedPoliciesItem["Effect"].asString();
		if(!decodedDiagnosticMessageNodeMatchedPoliciesmatchedPoliciesItem["PolicyIdentifier"].isNull())
			matchedPoliciesItemObject.policyIdentifier = decodedDiagnosticMessageNodeMatchedPoliciesmatchedPoliciesItem["PolicyIdentifier"].asString();
		if(!decodedDiagnosticMessageNodeMatchedPoliciesmatchedPoliciesItem["PolicyType"].isNull())
			matchedPoliciesItemObject.policyType = decodedDiagnosticMessageNodeMatchedPoliciesmatchedPoliciesItem["PolicyType"].asString();
		if(!decodedDiagnosticMessageNodeMatchedPoliciesmatchedPoliciesItem["PolicyVersion"].isNull())
			matchedPoliciesItemObject.policyVersion = decodedDiagnosticMessageNodeMatchedPoliciesmatchedPoliciesItem["PolicyVersion"].asString();
		if(!decodedDiagnosticMessageNodeMatchedPoliciesmatchedPoliciesItem["AttachedEntityType"].isNull())
			matchedPoliciesItemObject.attachedEntityType = decodedDiagnosticMessageNodeMatchedPoliciesmatchedPoliciesItem["AttachedEntityType"].asString();
		if(!decodedDiagnosticMessageNodeMatchedPoliciesmatchedPoliciesItem["AttachedScope"].isNull())
			matchedPoliciesItemObject.attachedScope = decodedDiagnosticMessageNodeMatchedPoliciesmatchedPoliciesItem["AttachedScope"].asString();
		decodedDiagnosticMessage_.matchedPolicies.push_back(matchedPoliciesItemObject);
	}
	auto authPrincipalNode = decodedDiagnosticMessageNode["AuthPrincipal"];
	if(!authPrincipalNode["AuthPrincipalType"].isNull())
		decodedDiagnosticMessage_.authPrincipal.authPrincipalType = authPrincipalNode["AuthPrincipalType"].asString();
	if(!authPrincipalNode["AuthPrincipalOwnerId"].isNull())
		decodedDiagnosticMessage_.authPrincipal.authPrincipalOwnerId = authPrincipalNode["AuthPrincipalOwnerId"].asString();
	if(!authPrincipalNode["AuthPrincipalDisplayName"].isNull())
		decodedDiagnosticMessage_.authPrincipal.authPrincipalDisplayName = authPrincipalNode["AuthPrincipalDisplayName"].asString();

}

DecodeDiagnosticMessageResult::DecodedDiagnosticMessage DecodeDiagnosticMessageResult::getDecodedDiagnosticMessage()const
{
	return decodedDiagnosticMessage_;
}

