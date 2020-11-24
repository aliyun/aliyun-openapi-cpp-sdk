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

#include <alibabacloud/ddoscoo/model/DescribeDDosEventSrcIpResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeDDosEventSrcIpResult::DescribeDDosEventSrcIpResult() :
	ServiceResult()
{}

DescribeDDosEventSrcIpResult::DescribeDDosEventSrcIpResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDDosEventSrcIpResult::~DescribeDDosEventSrcIpResult()
{}

void DescribeDDosEventSrcIpResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIpsNode = value["Ips"]["EventSrcIp"];
	for (auto valueIpsEventSrcIp : allIpsNode)
	{
		EventSrcIp ipsObject;
		if(!valueIpsEventSrcIp["SrcIp"].isNull())
			ipsObject.srcIp = valueIpsEventSrcIp["SrcIp"].asString();
		if(!valueIpsEventSrcIp["AreaId"].isNull())
			ipsObject.areaId = valueIpsEventSrcIp["AreaId"].asString();
		if(!valueIpsEventSrcIp["Isp"].isNull())
			ipsObject.isp = valueIpsEventSrcIp["Isp"].asString();
		ips_.push_back(ipsObject);
	}

}

std::vector<DescribeDDosEventSrcIpResult::EventSrcIp> DescribeDDosEventSrcIpResult::getIps()const
{
	return ips_;
}

