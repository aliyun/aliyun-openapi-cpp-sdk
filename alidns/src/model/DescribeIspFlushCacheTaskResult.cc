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

#include <alibabacloud/alidns/model/DescribeIspFlushCacheTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeIspFlushCacheTaskResult::DescribeIspFlushCacheTaskResult() :
	ServiceResult()
{}

DescribeIspFlushCacheTaskResult::DescribeIspFlushCacheTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeIspFlushCacheTaskResult::~DescribeIspFlushCacheTaskResult()
{}

void DescribeIspFlushCacheTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFlushCacheResultsNode = value["FlushCacheResults"]["FlushCacheResult"];
	for (auto valueFlushCacheResultsFlushCacheResult : allFlushCacheResultsNode)
	{
		FlushCacheResult flushCacheResultsObject;
		if(!valueFlushCacheResultsFlushCacheResult["Province"].isNull())
			flushCacheResultsObject.province = valueFlushCacheResultsFlushCacheResult["Province"].asString();
		auto allDnsNodesNode = valueFlushCacheResultsFlushCacheResult["DnsNodes"]["DnsNode"];
		for (auto valueFlushCacheResultsFlushCacheResultDnsNodesDnsNode : allDnsNodesNode)
		{
			FlushCacheResult::DnsNode dnsNodesObject;
			if(!valueFlushCacheResultsFlushCacheResultDnsNodesDnsNode["NodeIp"].isNull())
				dnsNodesObject.nodeIp = valueFlushCacheResultsFlushCacheResultDnsNodesDnsNode["NodeIp"].asString();
			if(!valueFlushCacheResultsFlushCacheResultDnsNodesDnsNode["SpName"].isNull())
				dnsNodesObject.spName = valueFlushCacheResultsFlushCacheResultDnsNodesDnsNode["SpName"].asString();
			if(!valueFlushCacheResultsFlushCacheResultDnsNodesDnsNode["Status"].isNull())
				dnsNodesObject.status = valueFlushCacheResultsFlushCacheResultDnsNodesDnsNode["Status"].asString();
			auto allAnswersNode = valueFlushCacheResultsFlushCacheResultDnsNodesDnsNode["Answers"]["Answer"];
			for (auto valueFlushCacheResultsFlushCacheResultDnsNodesDnsNodeAnswersAnswer : allAnswersNode)
			{
				FlushCacheResult::DnsNode::Answer answersObject;
				if(!valueFlushCacheResultsFlushCacheResultDnsNodesDnsNodeAnswersAnswer["Name"].isNull())
					answersObject.name = valueFlushCacheResultsFlushCacheResultDnsNodesDnsNodeAnswersAnswer["Name"].asString();
				if(!valueFlushCacheResultsFlushCacheResultDnsNodesDnsNodeAnswersAnswer["Type"].isNull())
					answersObject.type = valueFlushCacheResultsFlushCacheResultDnsNodesDnsNodeAnswersAnswer["Type"].asString();
				if(!valueFlushCacheResultsFlushCacheResultDnsNodesDnsNodeAnswersAnswer["Record"].isNull())
					answersObject.record = valueFlushCacheResultsFlushCacheResultDnsNodesDnsNodeAnswersAnswer["Record"].asString();
				if(!valueFlushCacheResultsFlushCacheResultDnsNodesDnsNodeAnswersAnswer["Ttl"].isNull())
					answersObject.ttl = std::stol(valueFlushCacheResultsFlushCacheResultDnsNodesDnsNodeAnswersAnswer["Ttl"].asString());
				dnsNodesObject.answers.push_back(answersObject);
			}
			flushCacheResultsObject.dnsNodes.push_back(dnsNodesObject);
		}
		flushCacheResults_.push_back(flushCacheResultsObject);
	}
	if(!value["TaskId"].isNull())
		taskId_ = value["TaskId"].asString();
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["InstanceName"].isNull())
		instanceName_ = value["InstanceName"].asString();
	if(!value["Isp"].isNull())
		isp_ = value["Isp"].asString();
	if(!value["TaskStatus"].isNull())
		taskStatus_ = value["TaskStatus"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["CreateTimestamp"].isNull())
		createTimestamp_ = std::stol(value["CreateTimestamp"].asString());

}

std::string DescribeIspFlushCacheTaskResult::getInstanceName()const
{
	return instanceName_;
}

std::string DescribeIspFlushCacheTaskResult::getTaskId()const
{
	return taskId_;
}

std::string DescribeIspFlushCacheTaskResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeIspFlushCacheTaskResult::getInstanceId()const
{
	return instanceId_;
}

std::string DescribeIspFlushCacheTaskResult::getIsp()const
{
	return isp_;
}

std::string DescribeIspFlushCacheTaskResult::getCreateTime()const
{
	return createTime_;
}

std::vector<DescribeIspFlushCacheTaskResult::FlushCacheResult> DescribeIspFlushCacheTaskResult::getFlushCacheResults()const
{
	return flushCacheResults_;
}

std::string DescribeIspFlushCacheTaskResult::getTaskStatus()const
{
	return taskStatus_;
}

long DescribeIspFlushCacheTaskResult::getCreateTimestamp()const
{
	return createTimestamp_;
}

