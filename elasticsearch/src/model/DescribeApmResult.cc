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

#include <alibabacloud/elasticsearch/model/DescribeApmResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

DescribeApmResult::DescribeApmResult() :
	ServiceResult()
{}

DescribeApmResult::DescribeApmResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeApmResult::~DescribeApmResult()
{}

void DescribeApmResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["apmServerDomain"].isNull())
		result_.apmServerDomain = resultNode["apmServerDomain"].asString();
	if(!resultNode["createdAt"].isNull())
		result_.createdAt = resultNode["createdAt"].asString();
	if(!resultNode["deployedReplica"].isNull())
		result_.deployedReplica = std::stol(resultNode["deployedReplica"].asString());
	if(!resultNode["description"].isNull())
		result_.description = resultNode["description"].asString();
	if(!resultNode["endTime"].isNull())
		result_.endTime = std::stol(resultNode["endTime"].asString());
	if(!resultNode["instanceId"].isNull())
		result_.instanceId = resultNode["instanceId"].asString();
	if(!resultNode["nodeAmount"].isNull())
		result_.nodeAmount = std::stol(resultNode["nodeAmount"].asString());
	if(!resultNode["outputES"].isNull())
		result_.outputES = resultNode["outputES"].asString();
	if(!resultNode["outputESUserName"].isNull())
		result_.outputESUserName = resultNode["outputESUserName"].asString();
	if(!resultNode["ownerId"].isNull())
		result_.ownerId = resultNode["ownerId"].asString();
	if(!resultNode["paymentType"].isNull())
		result_.paymentType = resultNode["paymentType"].asString();
	if(!resultNode["region"].isNull())
		result_.region = resultNode["region"].asString();
	if(!resultNode["replica"].isNull())
		result_.replica = std::stoi(resultNode["replica"].asString());
	if(!resultNode["resourceSpec"].isNull())
		result_.resourceSpec = resultNode["resourceSpec"].asString();
	if(!resultNode["status"].isNull())
		result_.status = resultNode["status"].asString();
	if(!resultNode["version"].isNull())
		result_.version = resultNode["version"].asString();
	if(!resultNode["vpcId"].isNull())
		result_.vpcId = resultNode["vpcId"].asString();
	if(!resultNode["vsArea"].isNull())
		result_.vsArea = resultNode["vsArea"].asString();
	if(!resultNode["vswitchId"].isNull())
		result_.vswitchId = resultNode["vswitchId"].asString();

}

DescribeApmResult::Result DescribeApmResult::getResult()const
{
	return result_;
}

