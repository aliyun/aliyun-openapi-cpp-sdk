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

#include <alibabacloud/swas-open/model/ListPlansResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SWAS_OPEN;
using namespace AlibabaCloud::SWAS_OPEN::Model;

ListPlansResult::ListPlansResult() :
	ServiceResult()
{}

ListPlansResult::ListPlansResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPlansResult::~ListPlansResult()
{}

void ListPlansResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPlansNode = value["Plans"]["Plan"];
	for (auto valuePlansPlan : allPlansNode)
	{
		Plan plansObject;
		if(!valuePlansPlan["Core"].isNull())
			plansObject.core = std::stoi(valuePlansPlan["Core"].asString());
		if(!valuePlansPlan["Bandwidth"].isNull())
			plansObject.bandwidth = std::stoi(valuePlansPlan["Bandwidth"].asString());
		if(!valuePlansPlan["DiskSize"].isNull())
			plansObject.diskSize = std::stoi(valuePlansPlan["DiskSize"].asString());
		if(!valuePlansPlan["Flow"].isNull())
			plansObject.flow = std::stoi(valuePlansPlan["Flow"].asString());
		if(!valuePlansPlan["PlanId"].isNull())
			plansObject.planId = valuePlansPlan["PlanId"].asString();
		if(!valuePlansPlan["DiskType"].isNull())
			plansObject.diskType = valuePlansPlan["DiskType"].asString();
		if(!valuePlansPlan["Currency"].isNull())
			plansObject.currency = valuePlansPlan["Currency"].asString();
		if(!valuePlansPlan["SupportPlatform"].isNull())
			plansObject.supportPlatform = valuePlansPlan["SupportPlatform"].asString();
		if(!valuePlansPlan["PlanType"].isNull())
			plansObject.planType = valuePlansPlan["PlanType"].asString();
		if(!valuePlansPlan["PublicIpNum"].isNull())
			plansObject.publicIpNum = valuePlansPlan["PublicIpNum"].asString();
		if(!valuePlansPlan["IspType"].isNull())
			plansObject.ispType = valuePlansPlan["IspType"].asString();
		if(!valuePlansPlan["Memory"].isNull())
			plansObject.memory = std::stof(valuePlansPlan["Memory"].asString());
		if(!valuePlansPlan["OriginPrice"].isNull())
			plansObject.originPrice = valuePlansPlan["OriginPrice"].asString();
		auto allTagsNode = valuePlansPlan["Tags"]["Tag"];
		for (auto valuePlansPlanTagsTag : allTagsNode)
		{
			Plan::Tag tagsObject;
			if(!valuePlansPlanTagsTag["CnTitle"].isNull())
				tagsObject.cnTitle = valuePlansPlanTagsTag["CnTitle"].asString();
			if(!valuePlansPlanTagsTag["EnTitle"].isNull())
				tagsObject.enTitle = valuePlansPlanTagsTag["EnTitle"].asString();
			if(!valuePlansPlanTagsTag["Color"].isNull())
				tagsObject.color = valuePlansPlanTagsTag["Color"].asString();
			plansObject.tags.push_back(tagsObject);
		}
		plans_.push_back(plansObject);
	}

}

std::vector<ListPlansResult::Plan> ListPlansResult::getPlans()const
{
	return plans_;
}

