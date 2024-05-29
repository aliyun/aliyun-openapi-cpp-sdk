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

#include <alibabacloud/ddoscoo/model/DescribeInstanceSpecsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeInstanceSpecsResult::DescribeInstanceSpecsResult() :
	ServiceResult()
{}

DescribeInstanceSpecsResult::DescribeInstanceSpecsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceSpecsResult::~DescribeInstanceSpecsResult()
{}

void DescribeInstanceSpecsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceSpecsNode = value["InstanceSpecs"]["InstanceSpec"];
	for (auto valueInstanceSpecsInstanceSpec : allInstanceSpecsNode)
	{
		InstanceSpec instanceSpecsObject;
		if(!valueInstanceSpecsInstanceSpec["BaseBandwidth"].isNull())
			instanceSpecsObject.baseBandwidth = std::stoi(valueInstanceSpecsInstanceSpec["BaseBandwidth"].asString());
		if(!valueInstanceSpecsInstanceSpec["QpsLimit"].isNull())
			instanceSpecsObject.qpsLimit = std::stoi(valueInstanceSpecsInstanceSpec["QpsLimit"].asString());
		if(!valueInstanceSpecsInstanceSpec["BandwidthMbps"].isNull())
			instanceSpecsObject.bandwidthMbps = std::stoi(valueInstanceSpecsInstanceSpec["BandwidthMbps"].asString());
		if(!valueInstanceSpecsInstanceSpec["ElasticBw"].isNull())
			instanceSpecsObject.elasticBw = std::stoi(valueInstanceSpecsInstanceSpec["ElasticBw"].asString());
		if(!valueInstanceSpecsInstanceSpec["DefenseCount"].isNull())
			instanceSpecsObject.defenseCount = std::stoi(valueInstanceSpecsInstanceSpec["DefenseCount"].asString());
		if(!valueInstanceSpecsInstanceSpec["SiteLimit"].isNull())
			instanceSpecsObject.siteLimit = std::stoi(valueInstanceSpecsInstanceSpec["SiteLimit"].asString());
		if(!valueInstanceSpecsInstanceSpec["PortLimit"].isNull())
			instanceSpecsObject.portLimit = std::stoi(valueInstanceSpecsInstanceSpec["PortLimit"].asString());
		if(!valueInstanceSpecsInstanceSpec["ElasticBandwidth"].isNull())
			instanceSpecsObject.elasticBandwidth = std::stoi(valueInstanceSpecsInstanceSpec["ElasticBandwidth"].asString());
		if(!valueInstanceSpecsInstanceSpec["FunctionVersion"].isNull())
			instanceSpecsObject.functionVersion = valueInstanceSpecsInstanceSpec["FunctionVersion"].asString();
		if(!valueInstanceSpecsInstanceSpec["InstanceId"].isNull())
			instanceSpecsObject.instanceId = valueInstanceSpecsInstanceSpec["InstanceId"].asString();
		if(!valueInstanceSpecsInstanceSpec["DomainLimit"].isNull())
			instanceSpecsObject.domainLimit = std::stoi(valueInstanceSpecsInstanceSpec["DomainLimit"].asString());
		if(!valueInstanceSpecsInstanceSpec["ElasticBwModel"].isNull())
			instanceSpecsObject.elasticBwModel = valueInstanceSpecsInstanceSpec["ElasticBwModel"].asString();
		if(!valueInstanceSpecsInstanceSpec["CpsLimit"].isNull())
			instanceSpecsObject.cpsLimit = std::stol(valueInstanceSpecsInstanceSpec["CpsLimit"].asString());
		if(!valueInstanceSpecsInstanceSpec["ConnLimit"].isNull())
			instanceSpecsObject.connLimit = std::stol(valueInstanceSpecsInstanceSpec["ConnLimit"].asString());
		if(!valueInstanceSpecsInstanceSpec["RealLimitBw"].isNull())
			instanceSpecsObject.realLimitBw = std::stol(valueInstanceSpecsInstanceSpec["RealLimitBw"].asString());
		if(!valueInstanceSpecsInstanceSpec["ElasticQpsMode"].isNull())
			instanceSpecsObject.elasticQpsMode = valueInstanceSpecsInstanceSpec["ElasticQpsMode"].asString();
		if(!valueInstanceSpecsInstanceSpec["ElasticQps"].isNull())
			instanceSpecsObject.elasticQps = std::stol(valueInstanceSpecsInstanceSpec["ElasticQps"].asString());
		instanceSpecs_.push_back(instanceSpecsObject);
	}

}

std::vector<DescribeInstanceSpecsResult::InstanceSpec> DescribeInstanceSpecsResult::getInstanceSpecs()const
{
	return instanceSpecs_;
}

