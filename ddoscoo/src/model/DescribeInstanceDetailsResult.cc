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

#include <alibabacloud/ddoscoo/model/DescribeInstanceDetailsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeInstanceDetailsResult::DescribeInstanceDetailsResult() :
	ServiceResult()
{}

DescribeInstanceDetailsResult::DescribeInstanceDetailsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceDetailsResult::~DescribeInstanceDetailsResult()
{}

void DescribeInstanceDetailsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceDetailsNode = value["InstanceDetails"]["InstanceDetail"];
	for (auto valueInstanceDetailsInstanceDetail : allInstanceDetailsNode)
	{
		InstanceDetail instanceDetailsObject;
		if(!valueInstanceDetailsInstanceDetail["Line"].isNull())
			instanceDetailsObject.line = valueInstanceDetailsInstanceDetail["Line"].asString();
		if(!valueInstanceDetailsInstanceDetail["InstanceId"].isNull())
			instanceDetailsObject.instanceId = valueInstanceDetailsInstanceDetail["InstanceId"].asString();
		auto allEipInfosNode = valueInstanceDetailsInstanceDetail["EipInfos"]["EipInfo"];
		for (auto valueInstanceDetailsInstanceDetailEipInfosEipInfo : allEipInfosNode)
		{
			InstanceDetail::EipInfo eipInfosObject;
			if(!valueInstanceDetailsInstanceDetailEipInfosEipInfo["Status"].isNull())
				eipInfosObject.status = valueInstanceDetailsInstanceDetailEipInfosEipInfo["Status"].asString();
			if(!valueInstanceDetailsInstanceDetailEipInfosEipInfo["IpMode"].isNull())
				eipInfosObject.ipMode = valueInstanceDetailsInstanceDetailEipInfosEipInfo["IpMode"].asString();
			if(!valueInstanceDetailsInstanceDetailEipInfosEipInfo["Eip"].isNull())
				eipInfosObject.eip = valueInstanceDetailsInstanceDetailEipInfosEipInfo["Eip"].asString();
			if(!valueInstanceDetailsInstanceDetailEipInfosEipInfo["IpVersion"].isNull())
				eipInfosObject.ipVersion = valueInstanceDetailsInstanceDetailEipInfosEipInfo["IpVersion"].asString();
			instanceDetailsObject.eipInfos.push_back(eipInfosObject);
		}
		instanceDetails_.push_back(instanceDetailsObject);
	}

}

std::vector<DescribeInstanceDetailsResult::InstanceDetail> DescribeInstanceDetailsResult::getInstanceDetails()const
{
	return instanceDetails_;
}

