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

#include <alibabacloud/ddoscoo/model/DescribePortConnsListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribePortConnsListResult::DescribePortConnsListResult() :
	ServiceResult()
{}

DescribePortConnsListResult::DescribePortConnsListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePortConnsListResult::~DescribePortConnsListResult()
{}

void DescribePortConnsListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allConnsListNode = value["ConnsList"]["Conn"];
	for (auto valueConnsListConn : allConnsListNode)
	{
		Conn connsListObject;
		if(!valueConnsListConn["ActConns"].isNull())
			connsListObject.actConns = std::stol(valueConnsListConn["ActConns"].asString());
		if(!valueConnsListConn["InActConns"].isNull())
			connsListObject.inActConns = std::stol(valueConnsListConn["InActConns"].asString());
		if(!valueConnsListConn["Index"].isNull())
			connsListObject.index = std::stol(valueConnsListConn["Index"].asString());
		if(!valueConnsListConn["Time"].isNull())
			connsListObject.time = std::stol(valueConnsListConn["Time"].asString());
		if(!valueConnsListConn["Cps"].isNull())
			connsListObject.cps = std::stol(valueConnsListConn["Cps"].asString());
		if(!valueConnsListConn["Conns"].isNull())
			connsListObject.conns = std::stol(valueConnsListConn["Conns"].asString());
		connsList_.push_back(connsListObject);
	}

}

std::vector<DescribePortConnsListResult::Conn> DescribePortConnsListResult::getConnsList()const
{
	return connsList_;
}

