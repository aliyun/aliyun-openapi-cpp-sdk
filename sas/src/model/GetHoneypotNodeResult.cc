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

#include <alibabacloud/sas/model/GetHoneypotNodeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

GetHoneypotNodeResult::GetHoneypotNodeResult() :
	ServiceResult()
{}

GetHoneypotNodeResult::GetHoneypotNodeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetHoneypotNodeResult::~GetHoneypotNodeResult()
{}

void GetHoneypotNodeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto honeypotNodeNode = value["HoneypotNode"];
	if(!honeypotNodeNode["NodeId"].isNull())
		honeypotNode_.nodeId = honeypotNodeNode["NodeId"].asString();
	if(!honeypotNodeNode["NodeName"].isNull())
		honeypotNode_.nodeName = honeypotNodeNode["NodeName"].asString();
	if(!honeypotNodeNode["HoneypotTotalCount"].isNull())
		honeypotNode_.honeypotTotalCount = std::stoi(honeypotNodeNode["HoneypotTotalCount"].asString());
	if(!honeypotNodeNode["HoneypotUsedCount"].isNull())
		honeypotNode_.honeypotUsedCount = std::stoi(honeypotNodeNode["HoneypotUsedCount"].asString());
	if(!honeypotNodeNode["ProbeTotalCount"].isNull())
		honeypotNode_.probeTotalCount = std::stoi(honeypotNodeNode["ProbeTotalCount"].asString());
	if(!honeypotNodeNode["ProbeUsedCount"].isNull())
		honeypotNode_.probeUsedCount = std::stoi(honeypotNodeNode["ProbeUsedCount"].asString());
	if(!honeypotNodeNode["TotalStatus"].isNull())
		honeypotNode_.totalStatus = std::stoi(honeypotNodeNode["TotalStatus"].asString());
	if(!honeypotNodeNode["EcsInstanceId"].isNull())
		honeypotNode_.ecsInstanceId = honeypotNodeNode["EcsInstanceId"].asString();
	if(!honeypotNodeNode["CreateTime"].isNull())
		honeypotNode_.createTime = honeypotNodeNode["CreateTime"].asString();
	if(!honeypotNodeNode["AllowHoneypotAccessInternet"].isNull())
		honeypotNode_.allowHoneypotAccessInternet = honeypotNodeNode["AllowHoneypotAccessInternet"].asString() == "true";
	if(!honeypotNodeNode["NodeIp"].isNull())
		honeypotNode_.nodeIp = honeypotNodeNode["NodeIp"].asString();
	if(!honeypotNodeNode["UpgradeAvailable"].isNull())
		honeypotNode_.upgradeAvailable = honeypotNodeNode["UpgradeAvailable"].asString() == "true";
		auto allSecurityGroupProbeIpList = honeypotNodeNode["SecurityGroupProbeIpList"]["SecurityGroupProbeIpList"];
		for (auto value : allSecurityGroupProbeIpList)
			honeypotNode_.securityGroupProbeIpList.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

GetHoneypotNodeResult::HoneypotNode GetHoneypotNodeResult::getHoneypotNode()const
{
	return honeypotNode_;
}

std::string GetHoneypotNodeResult::getMessage()const
{
	return message_;
}

int GetHoneypotNodeResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetHoneypotNodeResult::getCode()const
{
	return code_;
}

bool GetHoneypotNodeResult::getSuccess()const
{
	return success_;
}

