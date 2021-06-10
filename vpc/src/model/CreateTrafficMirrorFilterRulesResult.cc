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

#include <alibabacloud/vpc/model/CreateTrafficMirrorFilterRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

CreateTrafficMirrorFilterRulesResult::CreateTrafficMirrorFilterRulesResult() :
	ServiceResult()
{}

CreateTrafficMirrorFilterRulesResult::CreateTrafficMirrorFilterRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateTrafficMirrorFilterRulesResult::~CreateTrafficMirrorFilterRulesResult()
{}

void CreateTrafficMirrorFilterRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIngressRulesNode = value["IngressRules"]["IngressRule"];
	for (auto valueIngressRulesIngressRule : allIngressRulesNode)
	{
		IngressRule ingressRulesObject;
		if(!valueIngressRulesIngressRule["InstanceId"].isNull())
			ingressRulesObject.instanceId = valueIngressRulesIngressRule["InstanceId"].asString();
		ingressRules_.push_back(ingressRulesObject);
	}
	auto allEgressRulesNode = value["EgressRules"]["EgressRule"];
	for (auto valueEgressRulesEgressRule : allEgressRulesNode)
	{
		EgressRule egressRulesObject;
		if(!valueEgressRulesEgressRule["InstanceId"].isNull())
			egressRulesObject.instanceId = valueEgressRulesEgressRule["InstanceId"].asString();
		egressRules_.push_back(egressRulesObject);
	}

}

std::vector<CreateTrafficMirrorFilterRulesResult::EgressRule> CreateTrafficMirrorFilterRulesResult::getEgressRules()const
{
	return egressRules_;
}

std::vector<CreateTrafficMirrorFilterRulesResult::IngressRule> CreateTrafficMirrorFilterRulesResult::getIngressRules()const
{
	return ingressRules_;
}

