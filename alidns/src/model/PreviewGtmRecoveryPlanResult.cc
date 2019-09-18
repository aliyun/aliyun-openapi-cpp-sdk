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

#include <alibabacloud/alidns/model/PreviewGtmRecoveryPlanResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

PreviewGtmRecoveryPlanResult::PreviewGtmRecoveryPlanResult() :
	ServiceResult()
{}

PreviewGtmRecoveryPlanResult::PreviewGtmRecoveryPlanResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PreviewGtmRecoveryPlanResult::~PreviewGtmRecoveryPlanResult()
{}

void PreviewGtmRecoveryPlanResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPreviews = value["Previews"]["Preview"];
	for (auto value : allPreviews)
	{
		Preview previewsObject;
		if(!value["InstanceId"].isNull())
			previewsObject.instanceId = value["InstanceId"].asString();
		if(!value["Name"].isNull())
			previewsObject.name = value["Name"].asString();
		if(!value["UserDomainName"].isNull())
			previewsObject.userDomainName = value["UserDomainName"].asString();
		auto allSwitchInfos = value["SwitchInfos"]["SwitchInfo"];
		for (auto value : allSwitchInfos)
		{
			Preview::SwitchInfo switchInfosObject;
			if(!value["StrategyName"].isNull())
				switchInfosObject.strategyName = value["StrategyName"].asString();
			if(!value["Content"].isNull())
				switchInfosObject.content = value["Content"].asString();
			previewsObject.switchInfos.push_back(switchInfosObject);
		}
		previews_.push_back(previewsObject);
	}
	if(!value["TotalItems"].isNull())
		totalItems_ = std::stoi(value["TotalItems"].asString());
	if(!value["TotalPages"].isNull())
		totalPages_ = std::stoi(value["TotalPages"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int PreviewGtmRecoveryPlanResult::getPageSize()const
{
	return pageSize_;
}

int PreviewGtmRecoveryPlanResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<PreviewGtmRecoveryPlanResult::Preview> PreviewGtmRecoveryPlanResult::getPreviews()const
{
	return previews_;
}

int PreviewGtmRecoveryPlanResult::getTotalPages()const
{
	return totalPages_;
}

int PreviewGtmRecoveryPlanResult::getTotalItems()const
{
	return totalItems_;
}

