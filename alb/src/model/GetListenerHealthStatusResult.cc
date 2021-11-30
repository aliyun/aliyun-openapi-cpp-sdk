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

#include <alibabacloud/alb/model/GetListenerHealthStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alb;
using namespace AlibabaCloud::Alb::Model;

GetListenerHealthStatusResult::GetListenerHealthStatusResult() :
	ServiceResult()
{}

GetListenerHealthStatusResult::GetListenerHealthStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetListenerHealthStatusResult::~GetListenerHealthStatusResult()
{}

void GetListenerHealthStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListenerHealthStatusNode = value["ListenerHealthStatus"]["ListenerHealthStatusModel"];
	for (auto valueListenerHealthStatusListenerHealthStatusModel : allListenerHealthStatusNode)
	{
		ListenerHealthStatusModel listenerHealthStatusObject;
		if(!valueListenerHealthStatusListenerHealthStatusModel["ListenerId"].isNull())
			listenerHealthStatusObject.listenerId = valueListenerHealthStatusListenerHealthStatusModel["ListenerId"].asString();
		if(!valueListenerHealthStatusListenerHealthStatusModel["ListenerPort"].isNull())
			listenerHealthStatusObject.listenerPort = std::stoi(valueListenerHealthStatusListenerHealthStatusModel["ListenerPort"].asString());
		if(!valueListenerHealthStatusListenerHealthStatusModel["ListenerProtocol"].isNull())
			listenerHealthStatusObject.listenerProtocol = valueListenerHealthStatusListenerHealthStatusModel["ListenerProtocol"].asString();
		auto allServerGroupInfosNode = valueListenerHealthStatusListenerHealthStatusModel["ServerGroupInfos"]["ServerGroupHealthStatusModel"];
		for (auto valueListenerHealthStatusListenerHealthStatusModelServerGroupInfosServerGroupHealthStatusModel : allServerGroupInfosNode)
		{
			ListenerHealthStatusModel::ServerGroupHealthStatusModel serverGroupInfosObject;
			if(!valueListenerHealthStatusListenerHealthStatusModelServerGroupInfosServerGroupHealthStatusModel["HealthCheckEnabled"].isNull())
				serverGroupInfosObject.healthCheckEnabled = valueListenerHealthStatusListenerHealthStatusModelServerGroupInfosServerGroupHealthStatusModel["HealthCheckEnabled"].asString();
			if(!valueListenerHealthStatusListenerHealthStatusModelServerGroupInfosServerGroupHealthStatusModel["ServerGroupId"].isNull())
				serverGroupInfosObject.serverGroupId = valueListenerHealthStatusListenerHealthStatusModelServerGroupInfosServerGroupHealthStatusModel["ServerGroupId"].asString();
			if(!valueListenerHealthStatusListenerHealthStatusModelServerGroupInfosServerGroupHealthStatusModel["ActionType"].isNull())
				serverGroupInfosObject.actionType = valueListenerHealthStatusListenerHealthStatusModelServerGroupInfosServerGroupHealthStatusModel["ActionType"].asString();
			auto allNonNormalServersNode = valueListenerHealthStatusListenerHealthStatusModelServerGroupInfosServerGroupHealthStatusModel["NonNormalServers"]["BackendServerHealthStatusModel"];
			for (auto valueListenerHealthStatusListenerHealthStatusModelServerGroupInfosServerGroupHealthStatusModelNonNormalServersBackendServerHealthStatusModel : allNonNormalServersNode)
			{
				ListenerHealthStatusModel::ServerGroupHealthStatusModel::BackendServerHealthStatusModel nonNormalServersObject;
				if(!valueListenerHealthStatusListenerHealthStatusModelServerGroupInfosServerGroupHealthStatusModelNonNormalServersBackendServerHealthStatusModel["Port"].isNull())
					nonNormalServersObject.port = std::stoi(valueListenerHealthStatusListenerHealthStatusModelServerGroupInfosServerGroupHealthStatusModelNonNormalServersBackendServerHealthStatusModel["Port"].asString());
				if(!valueListenerHealthStatusListenerHealthStatusModelServerGroupInfosServerGroupHealthStatusModelNonNormalServersBackendServerHealthStatusModel["ServerId"].isNull())
					nonNormalServersObject.serverId = valueListenerHealthStatusListenerHealthStatusModelServerGroupInfosServerGroupHealthStatusModelNonNormalServersBackendServerHealthStatusModel["ServerId"].asString();
				if(!valueListenerHealthStatusListenerHealthStatusModelServerGroupInfosServerGroupHealthStatusModelNonNormalServersBackendServerHealthStatusModel["ServerIp"].isNull())
					nonNormalServersObject.serverIp = valueListenerHealthStatusListenerHealthStatusModelServerGroupInfosServerGroupHealthStatusModelNonNormalServersBackendServerHealthStatusModel["ServerIp"].asString();
				if(!valueListenerHealthStatusListenerHealthStatusModelServerGroupInfosServerGroupHealthStatusModelNonNormalServersBackendServerHealthStatusModel["Status"].isNull())
					nonNormalServersObject.status = valueListenerHealthStatusListenerHealthStatusModelServerGroupInfosServerGroupHealthStatusModelNonNormalServersBackendServerHealthStatusModel["Status"].asString();
				auto reasonNode = value["Reason"];
				if(!reasonNode["ActualResponse"].isNull())
					nonNormalServersObject.reason.actualResponse = reasonNode["ActualResponse"].asString();
				if(!reasonNode["ExpectedResponse"].isNull())
					nonNormalServersObject.reason.expectedResponse = reasonNode["ExpectedResponse"].asString();
				if(!reasonNode["ReasonCode"].isNull())
					nonNormalServersObject.reason.reasonCode = reasonNode["ReasonCode"].asString();
				serverGroupInfosObject.nonNormalServers.push_back(nonNormalServersObject);
			}
			listenerHealthStatusObject.serverGroupInfos.push_back(serverGroupInfosObject);
		}
		listenerHealthStatus_.push_back(listenerHealthStatusObject);
	}
	auto allRuleHealthStatusNode = value["RuleHealthStatus"]["RuleHealthStatusModel"];
	for (auto valueRuleHealthStatusRuleHealthStatusModel : allRuleHealthStatusNode)
	{
		RuleHealthStatusModel ruleHealthStatusObject;
		if(!valueRuleHealthStatusRuleHealthStatusModel["RuleId"].isNull())
			ruleHealthStatusObject.ruleId = valueRuleHealthStatusRuleHealthStatusModel["RuleId"].asString();
		auto allServerGroupInfos1Node = valueRuleHealthStatusRuleHealthStatusModel["ServerGroupInfos"]["ServerGroupHealthStatusModel"];
		for (auto valueRuleHealthStatusRuleHealthStatusModelServerGroupInfosServerGroupHealthStatusModel : allServerGroupInfos1Node)
		{
			RuleHealthStatusModel::ServerGroupHealthStatusModel2 serverGroupInfos1Object;
			if(!valueRuleHealthStatusRuleHealthStatusModelServerGroupInfosServerGroupHealthStatusModel["HealthCheckEnabled"].isNull())
				serverGroupInfos1Object.healthCheckEnabled = valueRuleHealthStatusRuleHealthStatusModelServerGroupInfosServerGroupHealthStatusModel["HealthCheckEnabled"].asString();
			if(!valueRuleHealthStatusRuleHealthStatusModelServerGroupInfosServerGroupHealthStatusModel["ServerGroupId"].isNull())
				serverGroupInfos1Object.serverGroupId = valueRuleHealthStatusRuleHealthStatusModelServerGroupInfosServerGroupHealthStatusModel["ServerGroupId"].asString();
			if(!valueRuleHealthStatusRuleHealthStatusModelServerGroupInfosServerGroupHealthStatusModel["ActionType"].isNull())
				serverGroupInfos1Object.actionType = valueRuleHealthStatusRuleHealthStatusModelServerGroupInfosServerGroupHealthStatusModel["ActionType"].asString();
			auto allNonNormalServers3Node = valueRuleHealthStatusRuleHealthStatusModelServerGroupInfosServerGroupHealthStatusModel["NonNormalServers"]["NonNormalServer"];
			for (auto valueRuleHealthStatusRuleHealthStatusModelServerGroupInfosServerGroupHealthStatusModelNonNormalServersNonNormalServer : allNonNormalServers3Node)
			{
				RuleHealthStatusModel::ServerGroupHealthStatusModel2::NonNormalServer nonNormalServers3Object;
				if(!valueRuleHealthStatusRuleHealthStatusModelServerGroupInfosServerGroupHealthStatusModelNonNormalServersNonNormalServer["Port"].isNull())
					nonNormalServers3Object.port = std::stoi(valueRuleHealthStatusRuleHealthStatusModelServerGroupInfosServerGroupHealthStatusModelNonNormalServersNonNormalServer["Port"].asString());
				if(!valueRuleHealthStatusRuleHealthStatusModelServerGroupInfosServerGroupHealthStatusModelNonNormalServersNonNormalServer["ServerId"].isNull())
					nonNormalServers3Object.serverId = valueRuleHealthStatusRuleHealthStatusModelServerGroupInfosServerGroupHealthStatusModelNonNormalServersNonNormalServer["ServerId"].asString();
				if(!valueRuleHealthStatusRuleHealthStatusModelServerGroupInfosServerGroupHealthStatusModelNonNormalServersNonNormalServer["ServerIp"].isNull())
					nonNormalServers3Object.serverIp = valueRuleHealthStatusRuleHealthStatusModelServerGroupInfosServerGroupHealthStatusModelNonNormalServersNonNormalServer["ServerIp"].asString();
				if(!valueRuleHealthStatusRuleHealthStatusModelServerGroupInfosServerGroupHealthStatusModelNonNormalServersNonNormalServer["Status"].isNull())
					nonNormalServers3Object.status = valueRuleHealthStatusRuleHealthStatusModelServerGroupInfosServerGroupHealthStatusModelNonNormalServersNonNormalServer["Status"].asString();
				auto reason4Node = value["Reason"];
				if(!reason4Node["ActualResponse"].isNull())
					nonNormalServers3Object.reason4.actualResponse = reason4Node["ActualResponse"].asString();
				if(!reason4Node["ExpectedResponse"].isNull())
					nonNormalServers3Object.reason4.expectedResponse = reason4Node["ExpectedResponse"].asString();
				if(!reason4Node["ReasonCode"].isNull())
					nonNormalServers3Object.reason4.reasonCode = reason4Node["ReasonCode"].asString();
				serverGroupInfos1Object.nonNormalServers3.push_back(nonNormalServers3Object);
			}
			ruleHealthStatusObject.serverGroupInfos1.push_back(serverGroupInfos1Object);
		}
		ruleHealthStatus_.push_back(ruleHealthStatusObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::vector<GetListenerHealthStatusResult::RuleHealthStatusModel> GetListenerHealthStatusResult::getRuleHealthStatus()const
{
	return ruleHealthStatus_;
}

std::vector<GetListenerHealthStatusResult::ListenerHealthStatusModel> GetListenerHealthStatusResult::getListenerHealthStatus()const
{
	return listenerHealthStatus_;
}

std::string GetListenerHealthStatusResult::getNextToken()const
{
	return nextToken_;
}

