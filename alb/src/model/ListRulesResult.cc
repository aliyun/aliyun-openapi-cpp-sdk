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

#include <alibabacloud/alb/model/ListRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alb;
using namespace AlibabaCloud::Alb::Model;

ListRulesResult::ListRulesResult() :
	ServiceResult()
{}

ListRulesResult::ListRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRulesResult::~ListRulesResult()
{}

void ListRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRulesNode = value["Rules"]["Rule"];
	for (auto valueRulesRule : allRulesNode)
	{
		Rule rulesObject;
		if(!valueRulesRule["ListenerId"].isNull())
			rulesObject.listenerId = valueRulesRule["ListenerId"].asString();
		if(!valueRulesRule["LoadBalancerId"].isNull())
			rulesObject.loadBalancerId = valueRulesRule["LoadBalancerId"].asString();
		if(!valueRulesRule["Priority"].isNull())
			rulesObject.priority = std::stoi(valueRulesRule["Priority"].asString());
		if(!valueRulesRule["RuleId"].isNull())
			rulesObject.ruleId = valueRulesRule["RuleId"].asString();
		if(!valueRulesRule["RuleName"].isNull())
			rulesObject.ruleName = valueRulesRule["RuleName"].asString();
		if(!valueRulesRule["RuleStatus"].isNull())
			rulesObject.ruleStatus = valueRulesRule["RuleStatus"].asString();
		if(!valueRulesRule["Direction"].isNull())
			rulesObject.direction = valueRulesRule["Direction"].asString();
		if(!valueRulesRule["ServiceManagedEnabled"].isNull())
			rulesObject.serviceManagedEnabled = valueRulesRule["ServiceManagedEnabled"].asString() == "true";
		if(!valueRulesRule["ServiceManagedMode"].isNull())
			rulesObject.serviceManagedMode = valueRulesRule["ServiceManagedMode"].asString();
		auto allRuleActionsNode = valueRulesRule["RuleActions"]["Action"];
		for (auto valueRulesRuleRuleActionsAction : allRuleActionsNode)
		{
			Rule::Action ruleActionsObject;
			if(!valueRulesRuleRuleActionsAction["Order"].isNull())
				ruleActionsObject.order = std::stoi(valueRulesRuleRuleActionsAction["Order"].asString());
			if(!valueRulesRuleRuleActionsAction["Type"].isNull())
				ruleActionsObject.type = valueRulesRuleRuleActionsAction["Type"].asString();
			auto fixedResponseConfigNode = value["FixedResponseConfig"];
			if(!fixedResponseConfigNode["Content"].isNull())
				ruleActionsObject.fixedResponseConfig.content = fixedResponseConfigNode["Content"].asString();
			if(!fixedResponseConfigNode["ContentType"].isNull())
				ruleActionsObject.fixedResponseConfig.contentType = fixedResponseConfigNode["ContentType"].asString();
			if(!fixedResponseConfigNode["HttpCode"].isNull())
				ruleActionsObject.fixedResponseConfig.httpCode = fixedResponseConfigNode["HttpCode"].asString();
			auto forwardGroupConfigNode = value["ForwardGroupConfig"];
			auto allServerGroupTuplesNode = forwardGroupConfigNode["ServerGroupTuples"]["ServerGroupTuple"];
			for (auto forwardGroupConfigNodeServerGroupTuplesServerGroupTuple : allServerGroupTuplesNode)
			{
				Rule::Action::ForwardGroupConfig::ServerGroupTuple serverGroupTupleObject;
				if(!forwardGroupConfigNodeServerGroupTuplesServerGroupTuple["ServerGroupId"].isNull())
					serverGroupTupleObject.serverGroupId = forwardGroupConfigNodeServerGroupTuplesServerGroupTuple["ServerGroupId"].asString();
				if(!forwardGroupConfigNodeServerGroupTuplesServerGroupTuple["Weight"].isNull())
					serverGroupTupleObject.weight = std::stoi(forwardGroupConfigNodeServerGroupTuplesServerGroupTuple["Weight"].asString());
				ruleActionsObject.forwardGroupConfig.serverGroupTuples.push_back(serverGroupTupleObject);
			}
			auto serverGroupStickySessionNode = forwardGroupConfigNode["ServerGroupStickySession"];
			if(!serverGroupStickySessionNode["Enabled"].isNull())
				ruleActionsObject.forwardGroupConfig.serverGroupStickySession.enabled = serverGroupStickySessionNode["Enabled"].asString() == "true";
			if(!serverGroupStickySessionNode["Timeout"].isNull())
				ruleActionsObject.forwardGroupConfig.serverGroupStickySession.timeout = std::stoi(serverGroupStickySessionNode["Timeout"].asString());
			auto insertHeaderConfigNode = value["InsertHeaderConfig"];
			if(!insertHeaderConfigNode["CoverEnabled"].isNull())
				ruleActionsObject.insertHeaderConfig.coverEnabled = insertHeaderConfigNode["CoverEnabled"].asString() == "true";
			if(!insertHeaderConfigNode["Key"].isNull())
				ruleActionsObject.insertHeaderConfig.key = insertHeaderConfigNode["Key"].asString();
			if(!insertHeaderConfigNode["Value"].isNull())
				ruleActionsObject.insertHeaderConfig.value = insertHeaderConfigNode["Value"].asString();
			if(!insertHeaderConfigNode["ValueType"].isNull())
				ruleActionsObject.insertHeaderConfig.valueType = insertHeaderConfigNode["ValueType"].asString();
			auto redirectConfigNode = value["RedirectConfig"];
			if(!redirectConfigNode["Host"].isNull())
				ruleActionsObject.redirectConfig.host = redirectConfigNode["Host"].asString();
			if(!redirectConfigNode["HttpCode"].isNull())
				ruleActionsObject.redirectConfig.httpCode = redirectConfigNode["HttpCode"].asString();
			if(!redirectConfigNode["Path"].isNull())
				ruleActionsObject.redirectConfig.path = redirectConfigNode["Path"].asString();
			if(!redirectConfigNode["Port"].isNull())
				ruleActionsObject.redirectConfig.port = redirectConfigNode["Port"].asString();
			if(!redirectConfigNode["Protocol"].isNull())
				ruleActionsObject.redirectConfig.protocol = redirectConfigNode["Protocol"].asString();
			if(!redirectConfigNode["Query"].isNull())
				ruleActionsObject.redirectConfig.query = redirectConfigNode["Query"].asString();
			auto removeHeaderConfigNode = value["RemoveHeaderConfig"];
			if(!removeHeaderConfigNode["Key"].isNull())
				ruleActionsObject.removeHeaderConfig.key = removeHeaderConfigNode["Key"].asString();
			auto rewriteConfigNode = value["RewriteConfig"];
			if(!rewriteConfigNode["Host"].isNull())
				ruleActionsObject.rewriteConfig.host = rewriteConfigNode["Host"].asString();
			if(!rewriteConfigNode["Path"].isNull())
				ruleActionsObject.rewriteConfig.path = rewriteConfigNode["Path"].asString();
			if(!rewriteConfigNode["Query"].isNull())
				ruleActionsObject.rewriteConfig.query = rewriteConfigNode["Query"].asString();
			auto trafficMirrorConfigNode = value["TrafficMirrorConfig"];
			if(!trafficMirrorConfigNode["TargetType"].isNull())
				ruleActionsObject.trafficMirrorConfig.targetType = trafficMirrorConfigNode["TargetType"].asString();
			auto mirrorGroupConfigNode = trafficMirrorConfigNode["MirrorGroupConfig"];
			auto allServerGroupTuples1Node = mirrorGroupConfigNode["ServerGroupTuples"]["ServerGroupTuple"];
			for (auto mirrorGroupConfigNodeServerGroupTuplesServerGroupTuple : allServerGroupTuples1Node)
			{
				Rule::Action::TrafficMirrorConfig::MirrorGroupConfig::ServerGroupTuple2 serverGroupTuple2Object;
				if(!mirrorGroupConfigNodeServerGroupTuplesServerGroupTuple["ServerGroupId"].isNull())
					serverGroupTuple2Object.serverGroupId = mirrorGroupConfigNodeServerGroupTuplesServerGroupTuple["ServerGroupId"].asString();
				if(!mirrorGroupConfigNodeServerGroupTuplesServerGroupTuple["Weight"].isNull())
					serverGroupTuple2Object.weight = std::stoi(mirrorGroupConfigNodeServerGroupTuplesServerGroupTuple["Weight"].asString());
				ruleActionsObject.trafficMirrorConfig.mirrorGroupConfig.serverGroupTuples1.push_back(serverGroupTuple2Object);
			}
			auto trafficLimitConfigNode = value["TrafficLimitConfig"];
			if(!trafficLimitConfigNode["QPS"].isNull())
				ruleActionsObject.trafficLimitConfig.qPS = std::stoi(trafficLimitConfigNode["QPS"].asString());
			if(!trafficLimitConfigNode["PerIpQps"].isNull())
				ruleActionsObject.trafficLimitConfig.perIpQps = std::stoi(trafficLimitConfigNode["PerIpQps"].asString());
			auto corsConfigNode = value["CorsConfig"];
			if(!corsConfigNode["AllowCredentials"].isNull())
				ruleActionsObject.corsConfig.allowCredentials = corsConfigNode["AllowCredentials"].asString();
			if(!corsConfigNode["MaxAge"].isNull())
				ruleActionsObject.corsConfig.maxAge = std::stol(corsConfigNode["MaxAge"].asString());
				auto allAllowOrigin = corsConfigNode["AllowOrigin"]["AllowOrigin"];
				for (auto value : allAllowOrigin)
					ruleActionsObject.corsConfig.allowOrigin.push_back(value.asString());
				auto allAllowMethods = corsConfigNode["AllowMethods"]["AllowMethods"];
				for (auto value : allAllowMethods)
					ruleActionsObject.corsConfig.allowMethods.push_back(value.asString());
				auto allAllowHeaders = corsConfigNode["AllowHeaders"]["AllowHeaders"];
				for (auto value : allAllowHeaders)
					ruleActionsObject.corsConfig.allowHeaders.push_back(value.asString());
				auto allExposeHeaders = corsConfigNode["ExposeHeaders"]["ExposeHeaders"];
				for (auto value : allExposeHeaders)
					ruleActionsObject.corsConfig.exposeHeaders.push_back(value.asString());
			rulesObject.ruleActions.push_back(ruleActionsObject);
		}
		auto allRuleConditionsNode = valueRulesRule["RuleConditions"]["Condition"];
		for (auto valueRulesRuleRuleConditionsCondition : allRuleConditionsNode)
		{
			Rule::Condition ruleConditionsObject;
			if(!valueRulesRuleRuleConditionsCondition["Type"].isNull())
				ruleConditionsObject.type = valueRulesRuleRuleConditionsCondition["Type"].asString();
			auto cookieConfigNode = value["CookieConfig"];
			auto allValuesNode = cookieConfigNode["Values"]["Value"];
			for (auto cookieConfigNodeValuesValue : allValuesNode)
			{
				Rule::Condition::CookieConfig::Value valueObject;
				if(!cookieConfigNodeValuesValue["Key"].isNull())
					valueObject.key = cookieConfigNodeValuesValue["Key"].asString();
				if(!cookieConfigNodeValuesValue["Value"].isNull())
					valueObject.value = cookieConfigNodeValuesValue["Value"].asString();
				ruleConditionsObject.cookieConfig.values.push_back(valueObject);
			}
			auto headerConfigNode = value["HeaderConfig"];
			if(!headerConfigNode["Key"].isNull())
				ruleConditionsObject.headerConfig.key = headerConfigNode["Key"].asString();
				auto allValues3 = headerConfigNode["Values"]["Value"];
				for (auto value : allValues3)
					ruleConditionsObject.headerConfig.values3.push_back(value.asString());
			auto hostConfigNode = value["HostConfig"];
				auto allValues4 = hostConfigNode["Values"]["Value"];
				for (auto value : allValues4)
					ruleConditionsObject.hostConfig.values4.push_back(value.asString());
			auto methodConfigNode = value["MethodConfig"];
				auto allValues5 = methodConfigNode["Values"]["Value"];
				for (auto value : allValues5)
					ruleConditionsObject.methodConfig.values5.push_back(value.asString());
			auto pathConfigNode = value["PathConfig"];
				auto allValues6 = pathConfigNode["Values"]["Value"];
				for (auto value : allValues6)
					ruleConditionsObject.pathConfig.values6.push_back(value.asString());
			auto queryStringConfigNode = value["QueryStringConfig"];
			auto allValues7Node = queryStringConfigNode["Values"]["Value"];
			for (auto queryStringConfigNodeValuesValue : allValues7Node)
			{
				Rule::Condition::QueryStringConfig::Value8 value8Object;
				if(!queryStringConfigNodeValuesValue["Key"].isNull())
					value8Object.key = queryStringConfigNodeValuesValue["Key"].asString();
				if(!queryStringConfigNodeValuesValue["Value"].isNull())
					value8Object.value = queryStringConfigNodeValuesValue["Value"].asString();
				ruleConditionsObject.queryStringConfig.values7.push_back(value8Object);
			}
			auto sourceIpConfigNode = value["SourceIpConfig"];
				auto allValues9 = sourceIpConfigNode["Values"]["Value"];
				for (auto value : allValues9)
					ruleConditionsObject.sourceIpConfig.values9.push_back(value.asString());
			auto responseStatusCodeConfigNode = value["ResponseStatusCodeConfig"];
				auto allValues10 = responseStatusCodeConfigNode["Values"]["Value"];
				for (auto value : allValues10)
					ruleConditionsObject.responseStatusCodeConfig.values10.push_back(value.asString());
			auto responseHeaderConfigNode = value["ResponseHeaderConfig"];
			if(!responseHeaderConfigNode["Key"].isNull())
				ruleConditionsObject.responseHeaderConfig.key = responseHeaderConfigNode["Key"].asString();
				auto allValues11 = responseHeaderConfigNode["Values"]["Value"];
				for (auto value : allValues11)
					ruleConditionsObject.responseHeaderConfig.values11.push_back(value.asString());
			rulesObject.ruleConditions.push_back(ruleConditionsObject);
		}
		auto allTagsNode = valueRulesRule["Tags"]["Tag"];
		for (auto valueRulesRuleTagsTag : allTagsNode)
		{
			Rule::Tag tagsObject;
			if(!valueRulesRuleTagsTag["Key"].isNull())
				tagsObject.key = valueRulesRuleTagsTag["Key"].asString();
			if(!valueRulesRuleTagsTag["Value"].isNull())
				tagsObject.value = valueRulesRuleTagsTag["Value"].asString();
			rulesObject.tags.push_back(tagsObject);
		}
		rules_.push_back(rulesObject);
	}
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListRulesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListRulesResult::getNextToken()const
{
	return nextToken_;
}

int ListRulesResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListRulesResult::Rule> ListRulesResult::getRules()const
{
	return rules_;
}

