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

#include <alibabacloud/aegis/model/DescribeScreenTopRequestAndFlowResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeScreenTopRequestAndFlowResult::DescribeScreenTopRequestAndFlowResult() :
	ServiceResult()
{}

DescribeScreenTopRequestAndFlowResult::DescribeScreenTopRequestAndFlowResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScreenTopRequestAndFlowResult::~DescribeScreenTopRequestAndFlowResult()
{}

void DescribeScreenTopRequestAndFlowResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTopRequestsIpCountDOSNode = value["TopRequestsIpCountDOS"]["TopRequestsIpCountDOSItem"];
	for (auto valueTopRequestsIpCountDOSTopRequestsIpCountDOSItem : allTopRequestsIpCountDOSNode)
	{
		TopRequestsIpCountDOSItem topRequestsIpCountDOSObject;
		if(!valueTopRequestsIpCountDOSTopRequestsIpCountDOSItem["ReqCount"].isNull())
			topRequestsIpCountDOSObject.reqCount = std::stoi(valueTopRequestsIpCountDOSTopRequestsIpCountDOSItem["ReqCount"].asString());
		if(!valueTopRequestsIpCountDOSTopRequestsIpCountDOSItem["Ip"].isNull())
			topRequestsIpCountDOSObject.ip = valueTopRequestsIpCountDOSTopRequestsIpCountDOSItem["Ip"].asString();
		topRequestsIpCountDOS_.push_back(topRequestsIpCountDOSObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["NormalFlow"].isNull())
		normalFlow_ = std::stoi(value["NormalFlow"].asString());
	if(!value["AbnormalFlow"].isNull())
		abnormalFlow_ = std::stoi(value["AbnormalFlow"].asString());

}

int DescribeScreenTopRequestAndFlowResult::getNormalFlow()const
{
	return normalFlow_;
}

std::vector<DescribeScreenTopRequestAndFlowResult::TopRequestsIpCountDOSItem> DescribeScreenTopRequestAndFlowResult::getTopRequestsIpCountDOS()const
{
	return topRequestsIpCountDOS_;
}

bool DescribeScreenTopRequestAndFlowResult::getSuccess()const
{
	return success_;
}

int DescribeScreenTopRequestAndFlowResult::getAbnormalFlow()const
{
	return abnormalFlow_;
}

