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
	if(!resultNode["CreatedAt"].isNull())
		result_.createdAt = resultNode["CreatedAt"].asString();
	if(!resultNode["DeployedReplica"].isNull())
		result_.deployedReplica = std::stol(resultNode["DeployedReplica"].asString());
	if(!resultNode["Description"].isNull())
		result_.description = resultNode["Description"].asString();
	if(!resultNode["EndTime"].isNull())
		result_.endTime = std::stol(resultNode["EndTime"].asString());
	if(!resultNode["InstanceId"].isNull())
		result_.instanceId = resultNode["InstanceId"].asString();
	if(!resultNode["NodeAmount"].isNull())
		result_.nodeAmount = std::stol(resultNode["NodeAmount"].asString());
	if(!resultNode["OutputES"].isNull())
		result_.outputES = resultNode["OutputES"].asString();
	if(!resultNode["OutputESUserName"].isNull())
		result_.outputESUserName = resultNode["OutputESUserName"].asString();
	if(!resultNode["OutputEsDescription"].isNull())
		result_.outputEsDescription = resultNode["OutputEsDescription"].asString();
	if(!resultNode["OwnerId"].isNull())
		result_.ownerId = resultNode["OwnerId"].asString();
	if(!resultNode["PaymentType"].isNull())
		result_.paymentType = resultNode["PaymentType"].asString();
	if(!resultNode["Region"].isNull())
		result_.region = resultNode["Region"].asString();
	if(!resultNode["Replica"].isNull())
		result_.replica = std::stol(resultNode["Replica"].asString());
	if(!resultNode["ResourceSpec"].isNull())
		result_.resourceSpec = resultNode["ResourceSpec"].asString();
	if(!resultNode["Status"].isNull())
		result_.status = resultNode["Status"].asString();
	if(!resultNode["Version"].isNull())
		result_.version = resultNode["Version"].asString();
	if(!resultNode["VpcId"].isNull())
		result_.vpcId = resultNode["VpcId"].asString();
	if(!resultNode["VsArea"].isNull())
		result_.vsArea = resultNode["VsArea"].asString();
	if(!resultNode["VswitchId"].isNull())
		result_.vswitchId = resultNode["VswitchId"].asString();

}

DescribeApmResult::Result DescribeApmResult::getResult()const
{
	return result_;
}

