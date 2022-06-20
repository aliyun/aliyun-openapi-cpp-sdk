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

#include <alibabacloud/sas/model/GetVulStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

GetVulStatisticsResult::GetVulStatisticsResult() :
	ServiceResult()
{}

GetVulStatisticsResult::GetVulStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetVulStatisticsResult::~GetVulStatisticsResult()
{}

void GetVulStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["VulLaterSum"].isNull())
		vulLaterSum_ = std::stoi(value["VulLaterSum"].asString());
	if(!value["VulNntfSum"].isNull())
		vulNntfSum_ = std::stoi(value["VulNntfSum"].asString());
	if(!value["VulAsapSum"].isNull())
		vulAsapSum_ = std::stoi(value["VulAsapSum"].asString());

}

int GetVulStatisticsResult::getVulAsapSum()const
{
	return vulAsapSum_;
}

int GetVulStatisticsResult::getVulLaterSum()const
{
	return vulLaterSum_;
}

int GetVulStatisticsResult::getVulNntfSum()const
{
	return vulNntfSum_;
}

