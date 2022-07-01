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

#include <alibabacloud/ddoscoo/model/DescribeLayer4RulePolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeLayer4RulePolicyResult::DescribeLayer4RulePolicyResult() :
	ServiceResult()
{}

DescribeLayer4RulePolicyResult::DescribeLayer4RulePolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLayer4RulePolicyResult::~DescribeLayer4RulePolicyResult()
{}

void DescribeLayer4RulePolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPriRealServersNode = value["PriRealServers"]["PriRealServersItem"];
	for (auto valuePriRealServersPriRealServersItem : allPriRealServersNode)
	{
		PriRealServersItem priRealServersObject;
		if(!valuePriRealServersPriRealServersItem["FrontendPort"].isNull())
			priRealServersObject.frontendPort = std::stoi(valuePriRealServersPriRealServersItem["FrontendPort"].asString());
		if(!valuePriRealServersPriRealServersItem["Eip"].isNull())
			priRealServersObject.eip = valuePriRealServersPriRealServersItem["Eip"].asString();
		if(!valuePriRealServersPriRealServersItem["Protocol"].isNull())
			priRealServersObject.protocol = valuePriRealServersPriRealServersItem["Protocol"].asString();
		if(!valuePriRealServersPriRealServersItem["CurrentIndex"].isNull())
			priRealServersObject.currentIndex = std::stoi(valuePriRealServersPriRealServersItem["CurrentIndex"].asString());
		if(!valuePriRealServersPriRealServersItem["InstanceId"].isNull())
			priRealServersObject.instanceId = valuePriRealServersPriRealServersItem["InstanceId"].asString();
		if(!valuePriRealServersPriRealServersItem["RealServer"].isNull())
			priRealServersObject.realServer = valuePriRealServersPriRealServersItem["RealServer"].asString();
		priRealServers_.push_back(priRealServersObject);
	}
	auto allSecRealServersNode = value["SecRealServers"]["SecRealServersItem"];
	for (auto valueSecRealServersSecRealServersItem : allSecRealServersNode)
	{
		SecRealServersItem secRealServersObject;
		if(!valueSecRealServersSecRealServersItem["FrontendPort"].isNull())
			secRealServersObject.frontendPort = std::stoi(valueSecRealServersSecRealServersItem["FrontendPort"].asString());
		if(!valueSecRealServersSecRealServersItem["Eip"].isNull())
			secRealServersObject.eip = valueSecRealServersSecRealServersItem["Eip"].asString();
		if(!valueSecRealServersSecRealServersItem["Protocol"].isNull())
			secRealServersObject.protocol = valueSecRealServersSecRealServersItem["Protocol"].asString();
		if(!valueSecRealServersSecRealServersItem["CurrentIndex"].isNull())
			secRealServersObject.currentIndex = std::stoi(valueSecRealServersSecRealServersItem["CurrentIndex"].asString());
		if(!valueSecRealServersSecRealServersItem["InstanceId"].isNull())
			secRealServersObject.instanceId = valueSecRealServersSecRealServersItem["InstanceId"].asString();
		if(!valueSecRealServersSecRealServersItem["RealServer"].isNull())
			secRealServersObject.realServer = valueSecRealServersSecRealServersItem["RealServer"].asString();
		secRealServers_.push_back(secRealServersObject);
	}
	if(!value["FrontendPort"].isNull())
		frontendPort_ = std::stoi(value["FrontendPort"].asString());
	if(!value["BakMode"].isNull())
		bakMode_ = value["BakMode"].asString();
	if(!value["CurrentIndex"].isNull())
		currentIndex_ = std::stoi(value["CurrentIndex"].asString());
	if(!value["ForwardProtocol"].isNull())
		forwardProtocol_ = value["ForwardProtocol"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["BackendPort"].isNull())
		backendPort_ = std::stoi(value["BackendPort"].asString());

}

std::vector<DescribeLayer4RulePolicyResult::SecRealServersItem> DescribeLayer4RulePolicyResult::getSecRealServers()const
{
	return secRealServers_;
}

std::vector<DescribeLayer4RulePolicyResult::PriRealServersItem> DescribeLayer4RulePolicyResult::getPriRealServers()const
{
	return priRealServers_;
}

std::string DescribeLayer4RulePolicyResult::getInstanceId()const
{
	return instanceId_;
}

int DescribeLayer4RulePolicyResult::getBackendPort()const
{
	return backendPort_;
}

std::string DescribeLayer4RulePolicyResult::getBakMode()const
{
	return bakMode_;
}

int DescribeLayer4RulePolicyResult::getFrontendPort()const
{
	return frontendPort_;
}

int DescribeLayer4RulePolicyResult::getCurrentIndex()const
{
	return currentIndex_;
}

std::string DescribeLayer4RulePolicyResult::getForwardProtocol()const
{
	return forwardProtocol_;
}

