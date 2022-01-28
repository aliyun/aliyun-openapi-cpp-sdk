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

#include <alibabacloud/ens/model/DescribeEnsRegionIdIpv6InfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeEnsRegionIdIpv6InfoResult::DescribeEnsRegionIdIpv6InfoResult() :
	ServiceResult()
{}

DescribeEnsRegionIdIpv6InfoResult::DescribeEnsRegionIdIpv6InfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEnsRegionIdIpv6InfoResult::~DescribeEnsRegionIdIpv6InfoResult()
{}

void DescribeEnsRegionIdIpv6InfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto supportIpv6InfoNode = value["SupportIpv6Info"];
	if(!supportIpv6InfoNode["EnsRegionId"].isNull())
		supportIpv6Info_.ensRegionId = supportIpv6InfoNode["EnsRegionId"].asString();
	if(!supportIpv6InfoNode["SupportIpv6"].isNull())
		supportIpv6Info_.supportIpv6 = supportIpv6InfoNode["SupportIpv6"].asString() == "true";

}

DescribeEnsRegionIdIpv6InfoResult::SupportIpv6Info DescribeEnsRegionIdIpv6InfoResult::getSupportIpv6Info()const
{
	return supportIpv6Info_;
}

