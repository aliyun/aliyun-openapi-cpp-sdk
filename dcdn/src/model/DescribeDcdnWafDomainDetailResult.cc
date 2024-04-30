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

#include <alibabacloud/dcdn/model/DescribeDcdnWafDomainDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnWafDomainDetailResult::DescribeDcdnWafDomainDetailResult() :
	ServiceResult()
{}

DescribeDcdnWafDomainDetailResult::DescribeDcdnWafDomainDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnWafDomainDetailResult::~DescribeDcdnWafDomainDetailResult()
{}

void DescribeDcdnWafDomainDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto domainNode = value["Domain"];
	if(!domainNode["DomainName"].isNull())
		domain_.domainName = domainNode["DomainName"].asString();
	auto allDefenseScenesNode = domainNode["DefenseScenes"]["DefenseSceneItem"];
	for (auto domainNodeDefenseScenesDefenseSceneItem : allDefenseScenesNode)
	{
		Domain::DefenseSceneItem defenseSceneItemObject;
		if(!domainNodeDefenseScenesDefenseSceneItem["DefenseScene"].isNull())
			defenseSceneItemObject.defenseScene = domainNodeDefenseScenesDefenseSceneItem["DefenseScene"].asString();
		if(!domainNodeDefenseScenesDefenseSceneItem["PolicyId"].isNull())
			defenseSceneItemObject.policyId = std::stol(domainNodeDefenseScenesDefenseSceneItem["PolicyId"].asString());
		if(!domainNodeDefenseScenesDefenseSceneItem["PolicyIds"].isNull())
			defenseSceneItemObject.policyIds = domainNodeDefenseScenesDefenseSceneItem["PolicyIds"].asString();
		domain_.defenseScenes.push_back(defenseSceneItemObject);
	}

}

DescribeDcdnWafDomainDetailResult::Domain DescribeDcdnWafDomainDetailResult::getDomain()const
{
	return domain_;
}

