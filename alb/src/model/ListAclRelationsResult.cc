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

#include <alibabacloud/alb/model/ListAclRelationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alb;
using namespace AlibabaCloud::Alb::Model;

ListAclRelationsResult::ListAclRelationsResult() :
	ServiceResult()
{}

ListAclRelationsResult::ListAclRelationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAclRelationsResult::~ListAclRelationsResult()
{}

void ListAclRelationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAclRelationsNode = value["AclRelations"]["AclRelation"];
	for (auto valueAclRelationsAclRelation : allAclRelationsNode)
	{
		AclRelation aclRelationsObject;
		if(!valueAclRelationsAclRelation["AclId"].isNull())
			aclRelationsObject.aclId = valueAclRelationsAclRelation["AclId"].asString();
		auto allRelatedListenersNode = valueAclRelationsAclRelation["RelatedListeners"]["RelatedListener"];
		for (auto valueAclRelationsAclRelationRelatedListenersRelatedListener : allRelatedListenersNode)
		{
			AclRelation::RelatedListener relatedListenersObject;
			if(!valueAclRelationsAclRelationRelatedListenersRelatedListener["ListenerId"].isNull())
				relatedListenersObject.listenerId = valueAclRelationsAclRelationRelatedListenersRelatedListener["ListenerId"].asString();
			if(!valueAclRelationsAclRelationRelatedListenersRelatedListener["ListenerPort"].isNull())
				relatedListenersObject.listenerPort = std::stoi(valueAclRelationsAclRelationRelatedListenersRelatedListener["ListenerPort"].asString());
			if(!valueAclRelationsAclRelationRelatedListenersRelatedListener["ListenerProtocol"].isNull())
				relatedListenersObject.listenerProtocol = valueAclRelationsAclRelationRelatedListenersRelatedListener["ListenerProtocol"].asString();
			if(!valueAclRelationsAclRelationRelatedListenersRelatedListener["LoadBalancerId"].isNull())
				relatedListenersObject.loadBalancerId = valueAclRelationsAclRelationRelatedListenersRelatedListener["LoadBalancerId"].asString();
			if(!valueAclRelationsAclRelationRelatedListenersRelatedListener["Status"].isNull())
				relatedListenersObject.status = valueAclRelationsAclRelationRelatedListenersRelatedListener["Status"].asString();
			aclRelationsObject.relatedListeners.push_back(relatedListenersObject);
		}
		aclRelations_.push_back(aclRelationsObject);
	}

}

std::vector<ListAclRelationsResult::AclRelation> ListAclRelationsResult::getAclRelations()const
{
	return aclRelations_;
}

