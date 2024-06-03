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

#include <alibabacloud/eflo/model/GetNodeInfoForPodResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo;
using namespace AlibabaCloud::Eflo::Model;

GetNodeInfoForPodResult::GetNodeInfoForPodResult() :
	ServiceResult()
{}

GetNodeInfoForPodResult::GetNodeInfoForPodResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetNodeInfoForPodResult::~GetNodeInfoForPodResult()
{}

void GetNodeInfoForPodResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto contentNode = value["Content"];
	if(!contentNode["RegionId"].isNull())
		content_.regionId = contentNode["RegionId"].asString();
	if(!contentNode["ZoneId"].isNull())
		content_.zoneId = contentNode["ZoneId"].asString();
	if(!contentNode["ClusterId"].isNull())
		content_.clusterId = contentNode["ClusterId"].asString();
	if(!contentNode["VpcId"].isNull())
		content_.vpcId = contentNode["VpcId"].asString();
	if(!contentNode["NodeId"].isNull())
		content_.nodeId = contentNode["NodeId"].asString();
	if(!contentNode["LeniQuota"].isNull())
		content_.leniQuota = std::stoi(contentNode["LeniQuota"].asString());
	if(!contentNode["LniSipQuota"].isNull())
		content_.lniSipQuota = std::stoi(contentNode["LniSipQuota"].asString());
	if(!contentNode["LeniSipQuota"].isNull())
		content_.leniSipQuota = std::stoi(contentNode["LeniSipQuota"].asString());
	if(!contentNode["HdeniQuota"].isNull())
		content_.hdeniQuota = std::stoi(contentNode["HdeniQuota"].asString());
		auto allVSwitches = contentNode["VSwitches"]["VSwitche"];
		for (auto value : allVSwitches)
			content_.vSwitches.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetNodeInfoForPodResult::getMessage()const
{
	return message_;
}

GetNodeInfoForPodResult::Content GetNodeInfoForPodResult::getContent()const
{
	return content_;
}

int GetNodeInfoForPodResult::getCode()const
{
	return code_;
}

