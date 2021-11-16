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

#include <alibabacloud/ddoscoo/model/DescribeLayer4RulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeLayer4RulesResult::DescribeLayer4RulesResult() :
	ServiceResult()
{}

DescribeLayer4RulesResult::DescribeLayer4RulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLayer4RulesResult::~DescribeLayer4RulesResult()
{}

void DescribeLayer4RulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListenersNode = value["Listeners"]["Listener"];
	for (auto valueListenersListener : allListenersNode)
	{
		Listener listenersObject;
		if(!valueListenersListener["InstanceId"].isNull())
			listenersObject.instanceId = valueListenersListener["InstanceId"].asString();
		if(!valueListenersListener["Protocol"].isNull())
			listenersObject.protocol = valueListenersListener["Protocol"].asString();
		if(!valueListenersListener["FrontendPort"].isNull())
			listenersObject.frontendPort = std::stoi(valueListenersListener["FrontendPort"].asString());
		if(!valueListenersListener["BackendPort"].isNull())
			listenersObject.backendPort = std::stoi(valueListenersListener["BackendPort"].asString());
		if(!valueListenersListener["IsAutoCreate"].isNull())
			listenersObject.isAutoCreate = valueListenersListener["IsAutoCreate"].asString() == "true";
		if(!valueListenersListener["Eip"].isNull())
			listenersObject.eip = valueListenersListener["Eip"].asString();
		if(!valueListenersListener["CurrentIndex"].isNull())
			listenersObject.currentIndex = std::stoi(valueListenersListener["CurrentIndex"].asString());
		if(!valueListenersListener["BakMode"].isNull())
			listenersObject.bakMode = std::stoi(valueListenersListener["BakMode"].asString());
		if(!valueListenersListener["Remark"].isNull())
			listenersObject.remark = valueListenersListener["Remark"].asString();
		auto allRealServers = value["RealServers"]["RealServers"];
		for (auto value : allRealServers)
			listenersObject.realServers.push_back(value.asString());
		listeners_.push_back(listenersObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

std::vector<DescribeLayer4RulesResult::Listener> DescribeLayer4RulesResult::getListeners()const
{
	return listeners_;
}

long DescribeLayer4RulesResult::getTotal()const
{
	return total_;
}

