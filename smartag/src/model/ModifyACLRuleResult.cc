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

#include <alibabacloud/smartag/model/ModifyACLRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

ModifyACLRuleResult::ModifyACLRuleResult() :
	ServiceResult()
{}

ModifyACLRuleResult::ModifyACLRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyACLRuleResult::~ModifyACLRuleResult()
{}

void ModifyACLRuleResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	if(!value["AcrId"].isNull())
		acrId_ = value["AcrId"].asString();
	if(!value["AclId"].isNull())
		aclId_ = value["AclId"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["Direction"].isNull())
		direction_ = value["Direction"].asString();
	if(!value["SourceCidr"].isNull())
		sourceCidr_ = value["SourceCidr"].asString();
	if(!value["DestCidr"].isNull())
		destCidr_ = value["DestCidr"].asString();
	if(!value["IpProtocol"].isNull())
		ipProtocol_ = value["IpProtocol"].asString();
	if(!value["SourcePortRange"].isNull())
		sourcePortRange_ = value["SourcePortRange"].asString();
	if(!value["DestPortRange"].isNull())
		destPortRange_ = value["DestPortRange"].asString();
	if(!value["Policy"].isNull())
		policy_ = value["Policy"].asString();
	if(!value["Priority"].isNull())
		priority_ = std::stoi(value["Priority"].asString());
	if(!value["GmtCreate"].isNull())
		gmtCreate_ = std::stol(value["GmtCreate"].asString());

}

std::string ModifyACLRuleResult::getPolicy()const
{
	return policy_;
}

long ModifyACLRuleResult::getGmtCreate()const
{
	return gmtCreate_;
}

std::string ModifyACLRuleResult::getDescription()const
{
	return description_;
}

std::string ModifyACLRuleResult::getDestCidr()const
{
	return destCidr_;
}

std::string ModifyACLRuleResult::getSourcePortRange()const
{
	return sourcePortRange_;
}

std::string ModifyACLRuleResult::getSourceCidr()const
{
	return sourceCidr_;
}

int ModifyACLRuleResult::getPriority()const
{
	return priority_;
}

std::string ModifyACLRuleResult::getAclId()const
{
	return aclId_;
}

std::string ModifyACLRuleResult::getAcrId()const
{
	return acrId_;
}

std::string ModifyACLRuleResult::getIpProtocol()const
{
	return ipProtocol_;
}

std::string ModifyACLRuleResult::getDestPortRange()const
{
	return destPortRange_;
}

std::string ModifyACLRuleResult::getDirection()const
{
	return direction_;
}

