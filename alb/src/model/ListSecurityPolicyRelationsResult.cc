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

#include <alibabacloud/alb/model/ListSecurityPolicyRelationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alb;
using namespace AlibabaCloud::Alb::Model;

ListSecurityPolicyRelationsResult::ListSecurityPolicyRelationsResult() :
	ServiceResult()
{}

ListSecurityPolicyRelationsResult::ListSecurityPolicyRelationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSecurityPolicyRelationsResult::~ListSecurityPolicyRelationsResult()
{}

void ListSecurityPolicyRelationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSecrityPolicyRelationsNode = value["SecrityPolicyRelations"]["SecrityPolicyRelation"];
	for (auto valueSecrityPolicyRelationsSecrityPolicyRelation : allSecrityPolicyRelationsNode)
	{
		SecrityPolicyRelation secrityPolicyRelationsObject;
		if(!valueSecrityPolicyRelationsSecrityPolicyRelation["SecurityPolicyId"].isNull())
			secrityPolicyRelationsObject.securityPolicyId = valueSecrityPolicyRelationsSecrityPolicyRelation["SecurityPolicyId"].asString();
		auto allRelatedListenersNode = valueSecrityPolicyRelationsSecrityPolicyRelation["RelatedListeners"]["RelatedListener"];
		for (auto valueSecrityPolicyRelationsSecrityPolicyRelationRelatedListenersRelatedListener : allRelatedListenersNode)
		{
			SecrityPolicyRelation::RelatedListener relatedListenersObject;
			if(!valueSecrityPolicyRelationsSecrityPolicyRelationRelatedListenersRelatedListener["ListenerId"].isNull())
				relatedListenersObject.listenerId = valueSecrityPolicyRelationsSecrityPolicyRelationRelatedListenersRelatedListener["ListenerId"].asString();
			if(!valueSecrityPolicyRelationsSecrityPolicyRelationRelatedListenersRelatedListener["ListenerPort"].isNull())
				relatedListenersObject.listenerPort = std::stol(valueSecrityPolicyRelationsSecrityPolicyRelationRelatedListenersRelatedListener["ListenerPort"].asString());
			if(!valueSecrityPolicyRelationsSecrityPolicyRelationRelatedListenersRelatedListener["ListenerProtocol"].isNull())
				relatedListenersObject.listenerProtocol = valueSecrityPolicyRelationsSecrityPolicyRelationRelatedListenersRelatedListener["ListenerProtocol"].asString();
			if(!valueSecrityPolicyRelationsSecrityPolicyRelationRelatedListenersRelatedListener["LoadBalancerId"].isNull())
				relatedListenersObject.loadBalancerId = valueSecrityPolicyRelationsSecrityPolicyRelationRelatedListenersRelatedListener["LoadBalancerId"].asString();
			secrityPolicyRelationsObject.relatedListeners.push_back(relatedListenersObject);
		}
		secrityPolicyRelations_.push_back(secrityPolicyRelationsObject);
	}

}

std::vector<ListSecurityPolicyRelationsResult::SecrityPolicyRelation> ListSecurityPolicyRelationsResult::getSecrityPolicyRelations()const
{
	return secrityPolicyRelations_;
}

