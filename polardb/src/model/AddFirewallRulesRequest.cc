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

#include <alibabacloud/polardb/model/AddFirewallRulesRequest.h>

using AlibabaCloud::Polardb::Model::AddFirewallRulesRequest;

AddFirewallRulesRequest::AddFirewallRulesRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "AddFirewallRules")
{
	setMethod(HttpRequest::Method::Post);
}

AddFirewallRulesRequest::~AddFirewallRulesRequest()
{}

long AddFirewallRulesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddFirewallRulesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AddFirewallRulesRequest::getRuleName()const
{
	return ruleName_;
}

void AddFirewallRulesRequest::setRuleName(const std::string& ruleName)
{
	ruleName_ = ruleName;
	setParameter("RuleName", ruleName);
}

std::string AddFirewallRulesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddFirewallRulesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string AddFirewallRulesRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void AddFirewallRulesRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string AddFirewallRulesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddFirewallRulesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AddFirewallRulesRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void AddFirewallRulesRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string AddFirewallRulesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AddFirewallRulesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long AddFirewallRulesRequest::getOwnerId()const
{
	return ownerId_;
}

void AddFirewallRulesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string AddFirewallRulesRequest::getRuleConfig()const
{
	return ruleConfig_;
}

void AddFirewallRulesRequest::setRuleConfig(const std::string& ruleConfig)
{
	ruleConfig_ = ruleConfig;
	setParameter("RuleConfig", ruleConfig);
}

