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

#include <alibabacloud/ddoscoo/model/ListLayer7CustomPortsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

ListLayer7CustomPortsResult::ListLayer7CustomPortsResult() :
	ServiceResult()
{}

ListLayer7CustomPortsResult::ListLayer7CustomPortsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLayer7CustomPortsResult::~ListLayer7CustomPortsResult()
{}

void ListLayer7CustomPortsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLayer7CustomPortsNode = value["Layer7CustomPorts"]["Layer7CustomPort"];
	for (auto valueLayer7CustomPortsLayer7CustomPort : allLayer7CustomPortsNode)
	{
		Layer7CustomPort layer7CustomPortsObject;
		if(!valueLayer7CustomPortsLayer7CustomPort["ProxyType"].isNull())
			layer7CustomPortsObject.proxyType = valueLayer7CustomPortsLayer7CustomPort["ProxyType"].asString();
		if(!valueLayer7CustomPortsLayer7CustomPort["Flag"].isNull())
			layer7CustomPortsObject.flag = valueLayer7CustomPortsLayer7CustomPort["Flag"].asString();
		auto allProxyPorts = value["ProxyPorts"]["ProxyPort"];
		for (auto value : allProxyPorts)
			layer7CustomPortsObject.proxyPorts.push_back(value.asString());
		layer7CustomPorts_.push_back(layer7CustomPortsObject);
	}

}

std::vector<ListLayer7CustomPortsResult::Layer7CustomPort> ListLayer7CustomPortsResult::getLayer7CustomPorts()const
{
	return layer7CustomPorts_;
}

