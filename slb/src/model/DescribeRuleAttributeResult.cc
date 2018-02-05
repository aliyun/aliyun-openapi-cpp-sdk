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

#include <alibabacloud/slb/model/DescribeRuleAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeRuleAttributeResult::DescribeRuleAttributeResult() :
	ServiceResult()
{}

DescribeRuleAttributeResult::DescribeRuleAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRuleAttributeResult::~DescribeRuleAttributeResult()
{}

void DescribeRuleAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	if(!value["RuleName"].isNull())
		ruleName_ = value["RuleName"].asString();
	if(!value["LoadBalancerId"].isNull())
		loadBalancerId_ = value["LoadBalancerId"].asString();
	if(!value["ListenerPort"].isNull())
		listenerPort_ = value["ListenerPort"].asString();
	if(!value["Domain"].isNull())
		domain_ = value["Domain"].asString();
	if(!value["Url"].isNull())
		url_ = value["Url"].asString();
	if(!value["VServerGroupId"].isNull())
		vServerGroupId_ = value["VServerGroupId"].asString();

}

std::string DescribeRuleAttributeResult::getListenerPort()const
{
	return listenerPort_;
}

std::string DescribeRuleAttributeResult::getVServerGroupId()const
{
	return vServerGroupId_;
}

std::string DescribeRuleAttributeResult::getLoadBalancerId()const
{
	return loadBalancerId_;
}

std::string DescribeRuleAttributeResult::getDomain()const
{
	return domain_;
}

std::string DescribeRuleAttributeResult::getRuleName()const
{
	return ruleName_;
}

std::string DescribeRuleAttributeResult::getUrl()const
{
	return url_;
}

