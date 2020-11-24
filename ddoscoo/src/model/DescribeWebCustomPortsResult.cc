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

#include <alibabacloud/ddoscoo/model/DescribeWebCustomPortsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeWebCustomPortsResult::DescribeWebCustomPortsResult() :
	ServiceResult()
{}

DescribeWebCustomPortsResult::DescribeWebCustomPortsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWebCustomPortsResult::~DescribeWebCustomPortsResult()
{}

void DescribeWebCustomPortsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allWebCustomPortsNode = value["WebCustomPorts"]["WebCustomPort"];
	for (auto valueWebCustomPortsWebCustomPort : allWebCustomPortsNode)
	{
		WebCustomPort webCustomPortsObject;
		if(!valueWebCustomPortsWebCustomPort["ProxyType"].isNull())
			webCustomPortsObject.proxyType = valueWebCustomPortsWebCustomPort["ProxyType"].asString();
		auto allProxyPorts = value["ProxyPorts"]["ProxyPort"];
		for (auto value : allProxyPorts)
			webCustomPortsObject.proxyPorts.push_back(value.asString());
		webCustomPorts_.push_back(webCustomPortsObject);
	}

}

std::vector<DescribeWebCustomPortsResult::WebCustomPort> DescribeWebCustomPortsResult::getWebCustomPorts()const
{
	return webCustomPorts_;
}

