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

#include <alibabacloud/sae/model/DescribeIngressResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

DescribeIngressResult::DescribeIngressResult() :
	ServiceResult()
{}

DescribeIngressResult::DescribeIngressResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeIngressResult::~DescribeIngressResult()
{}

void DescribeIngressResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["SlbId"].isNull())
		data_.slbId = dataNode["SlbId"].asString();
	if(!dataNode["NamespaceId"].isNull())
		data_.namespaceId = dataNode["NamespaceId"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["ListenerPort"].isNull())
		data_.listenerPort = std::stoi(dataNode["ListenerPort"].asString());
	if(!dataNode["SlbType"].isNull())
		data_.slbType = dataNode["SlbType"].asString();
	if(!dataNode["CertId"].isNull())
		data_.certId = dataNode["CertId"].asString();
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["Id"].isNull())
		data_.id = std::stol(dataNode["Id"].asString());
	if(!dataNode["LoadBalanceType"].isNull())
		data_.loadBalanceType = dataNode["LoadBalanceType"].asString();
	if(!dataNode["ListenerProtocol"].isNull())
		data_.listenerProtocol = dataNode["ListenerProtocol"].asString();
	if(!dataNode["CertIds"].isNull())
		data_.certIds = dataNode["CertIds"].asString();
	auto allRulesNode = dataNode["Rules"]["Rule"];
	for (auto dataNodeRulesRule : allRulesNode)
	{
		Data::Rule ruleObject;
		if(!dataNodeRulesRule["AppName"].isNull())
			ruleObject.appName = dataNodeRulesRule["AppName"].asString();
		if(!dataNodeRulesRule["ContainerPort"].isNull())
			ruleObject.containerPort = std::stoi(dataNodeRulesRule["ContainerPort"].asString());
		if(!dataNodeRulesRule["Domain"].isNull())
			ruleObject.domain = dataNodeRulesRule["Domain"].asString();
		if(!dataNodeRulesRule["AppId"].isNull())
			ruleObject.appId = dataNodeRulesRule["AppId"].asString();
		if(!dataNodeRulesRule["Path"].isNull())
			ruleObject.path = dataNodeRulesRule["Path"].asString();
		if(!dataNodeRulesRule["BackendProtocol"].isNull())
			ruleObject.backendProtocol = dataNodeRulesRule["BackendProtocol"].asString();
		if(!dataNodeRulesRule["RewritePath"].isNull())
			ruleObject.rewritePath = dataNodeRulesRule["RewritePath"].asString();
		data_.rules.push_back(ruleObject);
	}
	auto allSvcsNode = dataNode["Svcs"]["Svc"];
	for (auto dataNodeSvcsSvc : allSvcsNode)
	{
		Data::Svc svcObject;
		if(!dataNodeSvcsSvc["id"].isNull())
			svcObject.id = std::stol(dataNodeSvcsSvc["id"].asString());
		if(!dataNodeSvcsSvc["appId"].isNull())
			svcObject.appId = dataNodeSvcsSvc["appId"].asString();
		if(!dataNodeSvcsSvc["backendProtocol"].isNull())
			svcObject.backendProtocol = dataNodeSvcsSvc["backendProtocol"].asString();
		if(!dataNodeSvcsSvc["backendPort"].isNull())
			svcObject.backendPort = std::stoi(dataNodeSvcsSvc["backendPort"].asString());
		if(!dataNodeSvcsSvc["name"].isNull())
			svcObject.name = dataNodeSvcsSvc["name"].asString();
		data_.svcs.push_back(svcObject);
	}
	auto defaultRuleNode = dataNode["DefaultRule"];
	if(!defaultRuleNode["ContainerPort"].isNull())
		data_.defaultRule.containerPort = std::stoi(defaultRuleNode["ContainerPort"].asString());
	if(!defaultRuleNode["AppName"].isNull())
		data_.defaultRule.appName = defaultRuleNode["AppName"].asString();
	if(!defaultRuleNode["AppId"].isNull())
		data_.defaultRule.appId = defaultRuleNode["AppId"].asString();
	if(!defaultRuleNode["BackendProtocol"].isNull())
		data_.defaultRule.backendProtocol = defaultRuleNode["BackendProtocol"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeIngressResult::getMessage()const
{
	return message_;
}

std::string DescribeIngressResult::getTraceId()const
{
	return traceId_;
}

DescribeIngressResult::Data DescribeIngressResult::getData()const
{
	return data_;
}

std::string DescribeIngressResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeIngressResult::getCode()const
{
	return code_;
}

bool DescribeIngressResult::getSuccess()const
{
	return success_;
}

