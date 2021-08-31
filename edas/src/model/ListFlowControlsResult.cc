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

#include <alibabacloud/edas/model/ListFlowControlsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListFlowControlsResult::ListFlowControlsResult() :
	ServiceResult()
{}

ListFlowControlsResult::ListFlowControlsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFlowControlsResult::~ListFlowControlsResult()
{}

void ListFlowControlsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto flowControlsMapNode = value["FlowControlsMap"];
	if(!flowControlsMapNode["AppId"].isNull())
		flowControlsMap_.appId = flowControlsMapNode["AppId"].asString();
	if(!flowControlsMapNode["AppName"].isNull())
		flowControlsMap_.appName = flowControlsMapNode["AppName"].asString();
	auto allInterfaceMethodsNode = flowControlsMapNode["InterfaceMethods"]["InterfaceMethod"];
	for (auto flowControlsMapNodeInterfaceMethodsInterfaceMethod : allInterfaceMethodsNode)
	{
		FlowControlsMap::InterfaceMethod interfaceMethodObject;
		if(!flowControlsMapNodeInterfaceMethodsInterfaceMethod["name"].isNull())
			interfaceMethodObject.name = flowControlsMapNodeInterfaceMethodsInterfaceMethod["name"].asString();
		if(!flowControlsMapNodeInterfaceMethodsInterfaceMethod["Version"].isNull())
			interfaceMethodObject.version = flowControlsMapNodeInterfaceMethodsInterfaceMethod["Version"].asString();
		auto allMethods = value["Methods"]["Method"];
		for (auto value : allMethods)
			interfaceMethodObject.methods.push_back(value.asString());
		flowControlsMap_.interfaceMethods.push_back(interfaceMethodObject);
	}
	auto allAppListNode = flowControlsMapNode["AppList"]["App"];
	for (auto flowControlsMapNodeAppListApp : allAppListNode)
	{
		FlowControlsMap::App appObject;
		if(!flowControlsMapNodeAppListApp["AppId"].isNull())
			appObject.appId = flowControlsMapNodeAppListApp["AppId"].asString();
		if(!flowControlsMapNodeAppListApp["Name"].isNull())
			appObject.name = flowControlsMapNodeAppListApp["Name"].asString();
		if(!flowControlsMapNodeAppListApp["RegionId"].isNull())
			appObject.regionId = flowControlsMapNodeAppListApp["RegionId"].asString();
		if(!flowControlsMapNodeAppListApp["Description"].isNull())
			appObject.description = flowControlsMapNodeAppListApp["Description"].asString();
		if(!flowControlsMapNodeAppListApp["Owner"].isNull())
			appObject.owner = flowControlsMapNodeAppListApp["Owner"].asString();
		if(!flowControlsMapNodeAppListApp["InstanceCount"].isNull())
			appObject.instanceCount = std::stoi(flowControlsMapNodeAppListApp["InstanceCount"].asString());
		if(!flowControlsMapNodeAppListApp["RunningInstanceCount"].isNull())
			appObject.runningInstanceCount = std::stoi(flowControlsMapNodeAppListApp["RunningInstanceCount"].asString());
		if(!flowControlsMapNodeAppListApp["Port"].isNull())
			appObject.port = std::stoi(flowControlsMapNodeAppListApp["Port"].asString());
		if(!flowControlsMapNodeAppListApp["UserId"].isNull())
			appObject.userId = flowControlsMapNodeAppListApp["UserId"].asString();
		if(!flowControlsMapNodeAppListApp["SlbId"].isNull())
			appObject.slbId = flowControlsMapNodeAppListApp["SlbId"].asString();
		if(!flowControlsMapNodeAppListApp["SlbIp"].isNull())
			appObject.slbIp = flowControlsMapNodeAppListApp["SlbIp"].asString();
		if(!flowControlsMapNodeAppListApp["SlbPort"].isNull())
			appObject.slbPort = std::stoi(flowControlsMapNodeAppListApp["SlbPort"].asString());
		if(!flowControlsMapNodeAppListApp["ExtSlbId"].isNull())
			appObject.extSlbId = flowControlsMapNodeAppListApp["ExtSlbId"].asString();
		if(!flowControlsMapNodeAppListApp["ExtSlbIp"].isNull())
			appObject.extSlbIp = flowControlsMapNodeAppListApp["ExtSlbIp"].asString();
		if(!flowControlsMapNodeAppListApp["ApplicationType"].isNull())
			appObject.applicationType = flowControlsMapNodeAppListApp["ApplicationType"].asString();
		if(!flowControlsMapNodeAppListApp["ClusterType"].isNull())
			appObject.clusterType = std::stoi(flowControlsMapNodeAppListApp["ClusterType"].asString());
		if(!flowControlsMapNodeAppListApp["ClusterId"].isNull())
			appObject.clusterId = flowControlsMapNodeAppListApp["ClusterId"].asString();
		if(!flowControlsMapNodeAppListApp["Dockerize"].isNull())
			appObject.dockerize = flowControlsMapNodeAppListApp["Dockerize"].asString() == "true";
		if(!flowControlsMapNodeAppListApp["Cpu"].isNull())
			appObject.cpu = std::stoi(flowControlsMapNodeAppListApp["Cpu"].asString());
		if(!flowControlsMapNodeAppListApp["Memory"].isNull())
			appObject.memory = std::stoi(flowControlsMapNodeAppListApp["Memory"].asString());
		if(!flowControlsMapNodeAppListApp["HealthCheckUrl"].isNull())
			appObject.healthCheckUrl = flowControlsMapNodeAppListApp["HealthCheckUrl"].asString();
		if(!flowControlsMapNodeAppListApp["BuildPackageId"].isNull())
			appObject.buildPackageId = std::stol(flowControlsMapNodeAppListApp["BuildPackageId"].asString());
		if(!flowControlsMapNodeAppListApp["CreateTime"].isNull())
			appObject.createTime = std::stol(flowControlsMapNodeAppListApp["CreateTime"].asString());
		flowControlsMap_.appList.push_back(appObject);
	}
	auto ruleListNode = flowControlsMapNode["RuleList"];
	if(!ruleListNode["CurrentPage"].isNull())
		flowControlsMap_.ruleList.currentPage = std::stoi(ruleListNode["CurrentPage"].asString());
	if(!ruleListNode["pageSize"].isNull())
		flowControlsMap_.ruleList.pageSize = std::stoi(ruleListNode["pageSize"].asString());
	if(!ruleListNode["TotalSize"].isNull())
		flowControlsMap_.ruleList.totalSize = std::stoi(ruleListNode["TotalSize"].asString());
	auto allRuleResultListNode = ruleListNode["RuleResultList"]["Rule"];
	for (auto ruleListNodeRuleResultListRule : allRuleResultListNode)
	{
		FlowControlsMap::RuleList::Rule ruleObject;
		if(!ruleListNodeRuleResultListRule["AppId"].isNull())
			ruleObject.appId = ruleListNodeRuleResultListRule["AppId"].asString();
		if(!ruleListNodeRuleResultListRule["ConsumerAppId"].isNull())
			ruleObject.consumerAppId = ruleListNodeRuleResultListRule["ConsumerAppId"].asString();
		if(!ruleListNodeRuleResultListRule["CreateTime"].isNull())
			ruleObject.createTime = std::stol(ruleListNodeRuleResultListRule["CreateTime"].asString());
		if(!ruleListNodeRuleResultListRule["Granularity"].isNull())
			ruleObject.granularity = ruleListNodeRuleResultListRule["Granularity"].asString();
		if(!ruleListNodeRuleResultListRule["Id"].isNull())
			ruleObject.id = ruleListNodeRuleResultListRule["Id"].asString();
		if(!ruleListNodeRuleResultListRule["Resource"].isNull())
			ruleObject.resource = ruleListNodeRuleResultListRule["Resource"].asString();
		if(!ruleListNodeRuleResultListRule["RuleId"].isNull())
			ruleObject.ruleId = ruleListNodeRuleResultListRule["RuleId"].asString();
		if(!ruleListNodeRuleResultListRule["RuleType"].isNull())
			ruleObject.ruleType = ruleListNodeRuleResultListRule["RuleType"].asString();
		if(!ruleListNodeRuleResultListRule["State"].isNull())
			ruleObject.state = std::stoi(ruleListNodeRuleResultListRule["State"].asString());
		if(!ruleListNodeRuleResultListRule["Strategy"].isNull())
			ruleObject.strategy = ruleListNodeRuleResultListRule["Strategy"].asString();
		if(!ruleListNodeRuleResultListRule["Threshold"].isNull())
			ruleObject.threshold = std::stoi(ruleListNodeRuleResultListRule["Threshold"].asString());
		if(!ruleListNodeRuleResultListRule["UpdateTime"].isNull())
			ruleObject.updateTime = std::stol(ruleListNodeRuleResultListRule["UpdateTime"].asString());
		flowControlsMap_.ruleList.ruleResultList.push_back(ruleObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListFlowControlsResult::getMessage()const
{
	return message_;
}

ListFlowControlsResult::FlowControlsMap ListFlowControlsResult::getFlowControlsMap()const
{
	return flowControlsMap_;
}

int ListFlowControlsResult::getCode()const
{
	return code_;
}

