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

#include <alibabacloud/ecs/model/ValidateSecurityGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

ValidateSecurityGroupResult::ValidateSecurityGroupResult() :
	ServiceResult()
{}

ValidateSecurityGroupResult::ValidateSecurityGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ValidateSecurityGroupResult::~ValidateSecurityGroupResult()
{}

void ValidateSecurityGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto triggeredGroupRuleNode = value["TriggeredGroupRule"];
	if(!triggeredGroupRuleNode["IpProtocol"].isNull())
		triggeredGroupRule_.ipProtocol = triggeredGroupRuleNode["IpProtocol"].asString();
	if(!triggeredGroupRuleNode["PortRange"].isNull())
		triggeredGroupRule_.portRange = triggeredGroupRuleNode["PortRange"].asString();
	if(!triggeredGroupRuleNode["SourceGroupId"].isNull())
		triggeredGroupRule_.sourceGroupId = triggeredGroupRuleNode["SourceGroupId"].asString();
	if(!triggeredGroupRuleNode["SourceGroupName"].isNull())
		triggeredGroupRule_.sourceGroupName = triggeredGroupRuleNode["SourceGroupName"].asString();
	if(!triggeredGroupRuleNode["SourceCidrIp"].isNull())
		triggeredGroupRule_.sourceCidrIp = triggeredGroupRuleNode["SourceCidrIp"].asString();
	if(!triggeredGroupRuleNode["Policy"].isNull())
		triggeredGroupRule_.policy = triggeredGroupRuleNode["Policy"].asString();
	if(!triggeredGroupRuleNode["NicType"].isNull())
		triggeredGroupRule_.nicType = triggeredGroupRuleNode["NicType"].asString();
	if(!triggeredGroupRuleNode["SourceGroupOwnerAccount"].isNull())
		triggeredGroupRule_.sourceGroupOwnerAccount = triggeredGroupRuleNode["SourceGroupOwnerAccount"].asString();
	if(!triggeredGroupRuleNode["DestGroupId"].isNull())
		triggeredGroupRule_.destGroupId = triggeredGroupRuleNode["DestGroupId"].asString();
	if(!triggeredGroupRuleNode["DestGroupName"].isNull())
		triggeredGroupRule_.destGroupName = triggeredGroupRuleNode["DestGroupName"].asString();
	if(!triggeredGroupRuleNode["DestCidrIp"].isNull())
		triggeredGroupRule_.destCidrIp = triggeredGroupRuleNode["DestCidrIp"].asString();
	if(!triggeredGroupRuleNode["DestGroupOwnerAccount"].isNull())
		triggeredGroupRule_.destGroupOwnerAccount = triggeredGroupRuleNode["DestGroupOwnerAccount"].asString();
	if(!triggeredGroupRuleNode["Priority"].isNull())
		triggeredGroupRule_.priority = triggeredGroupRuleNode["Priority"].asString();
	if(!triggeredGroupRuleNode["Direction"].isNull())
		triggeredGroupRule_.direction = triggeredGroupRuleNode["Direction"].asString();
	if(!triggeredGroupRuleNode["Description"].isNull())
		triggeredGroupRule_.description = triggeredGroupRuleNode["Description"].asString();
	if(!triggeredGroupRuleNode["CreateTime"].isNull())
		triggeredGroupRule_.createTime = triggeredGroupRuleNode["CreateTime"].asString();
	if(!value["Policy"].isNull())
		policy_ = value["Policy"].asString();

}

std::string ValidateSecurityGroupResult::getPolicy()const
{
	return policy_;
}

ValidateSecurityGroupResult::TriggeredGroupRule ValidateSecurityGroupResult::getTriggeredGroupRule()const
{
	return triggeredGroupRule_;
}

