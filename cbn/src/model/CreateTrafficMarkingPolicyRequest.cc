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

#include <alibabacloud/cbn/model/CreateTrafficMarkingPolicyRequest.h>

using AlibabaCloud::Cbn::Model::CreateTrafficMarkingPolicyRequest;

CreateTrafficMarkingPolicyRequest::CreateTrafficMarkingPolicyRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "CreateTrafficMarkingPolicy")
{
	setMethod(HttpRequest::Method::Post);
}

CreateTrafficMarkingPolicyRequest::~CreateTrafficMarkingPolicyRequest()
{}

long CreateTrafficMarkingPolicyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateTrafficMarkingPolicyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateTrafficMarkingPolicyRequest::getClientToken()const
{
	return clientToken_;
}

void CreateTrafficMarkingPolicyRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateTrafficMarkingPolicyRequest::getTrafficMarkingPolicyDescription()const
{
	return trafficMarkingPolicyDescription_;
}

void CreateTrafficMarkingPolicyRequest::setTrafficMarkingPolicyDescription(const std::string& trafficMarkingPolicyDescription)
{
	trafficMarkingPolicyDescription_ = trafficMarkingPolicyDescription;
	setParameter("TrafficMarkingPolicyDescription", trafficMarkingPolicyDescription);
}

std::string CreateTrafficMarkingPolicyRequest::getTrafficMarkingPolicyName()const
{
	return trafficMarkingPolicyName_;
}

void CreateTrafficMarkingPolicyRequest::setTrafficMarkingPolicyName(const std::string& trafficMarkingPolicyName)
{
	trafficMarkingPolicyName_ = trafficMarkingPolicyName;
	setParameter("TrafficMarkingPolicyName", trafficMarkingPolicyName);
}

bool CreateTrafficMarkingPolicyRequest::getDryRun()const
{
	return dryRun_;
}

void CreateTrafficMarkingPolicyRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setParameter("DryRun", dryRun ? "true" : "false");
}

std::vector<CreateTrafficMarkingPolicyRequest::TrafficMatchRules> CreateTrafficMarkingPolicyRequest::getTrafficMatchRules()const
{
	return trafficMatchRules_;
}

void CreateTrafficMarkingPolicyRequest::setTrafficMatchRules(const std::vector<TrafficMatchRules>& trafficMatchRules)
{
	trafficMatchRules_ = trafficMatchRules;
	for(int dep1 = 0; dep1!= trafficMatchRules.size(); dep1++) {
		auto trafficMatchRulesObj = trafficMatchRules.at(dep1);
		std::string trafficMatchRulesObjStr = "TrafficMatchRules." + std::to_string(dep1 + 1);
		for(int dep2 = 0; dep2!= trafficMatchRulesObj.dstPortRange.size(); dep2++) {
			setParameter(trafficMatchRulesObjStr + ".DstPortRange."+ std::to_string(dep2), std::to_string(trafficMatchRulesObj.dstPortRange.at(dep2)));
		}
		setParameter(trafficMatchRulesObjStr + ".MatchDscp", std::to_string(trafficMatchRulesObj.matchDscp));
		setParameter(trafficMatchRulesObjStr + ".Protocol", trafficMatchRulesObj.protocol);
		setParameter(trafficMatchRulesObjStr + ".TrafficMatchRuleDescription", trafficMatchRulesObj.trafficMatchRuleDescription);
		for(int dep2 = 0; dep2!= trafficMatchRulesObj.srcPortRange.size(); dep2++) {
			setParameter(trafficMatchRulesObjStr + ".SrcPortRange."+ std::to_string(dep2), std::to_string(trafficMatchRulesObj.srcPortRange.at(dep2)));
		}
		setParameter(trafficMatchRulesObjStr + ".DstCidr", trafficMatchRulesObj.dstCidr);
		setParameter(trafficMatchRulesObjStr + ".TrafficMatchRuleName", trafficMatchRulesObj.trafficMatchRuleName);
		setParameter(trafficMatchRulesObjStr + ".SrcCidr", trafficMatchRulesObj.srcCidr);
	}
}

std::string CreateTrafficMarkingPolicyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateTrafficMarkingPolicyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateTrafficMarkingPolicyRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateTrafficMarkingPolicyRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateTrafficMarkingPolicyRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateTrafficMarkingPolicyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateTrafficMarkingPolicyRequest::getTransitRouterId()const
{
	return transitRouterId_;
}

void CreateTrafficMarkingPolicyRequest::setTransitRouterId(const std::string& transitRouterId)
{
	transitRouterId_ = transitRouterId;
	setParameter("TransitRouterId", transitRouterId);
}

int CreateTrafficMarkingPolicyRequest::getPriority()const
{
	return priority_;
}

void CreateTrafficMarkingPolicyRequest::setPriority(int priority)
{
	priority_ = priority;
	setParameter("Priority", std::to_string(priority));
}

int CreateTrafficMarkingPolicyRequest::getMarkingDscp()const
{
	return markingDscp_;
}

void CreateTrafficMarkingPolicyRequest::setMarkingDscp(int markingDscp)
{
	markingDscp_ = markingDscp;
	setParameter("MarkingDscp", std::to_string(markingDscp));
}

