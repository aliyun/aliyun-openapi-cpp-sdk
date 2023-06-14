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

#include <alibabacloud/ga/model/CreateIpSetsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

CreateIpSetsResult::CreateIpSetsResult() :
	ServiceResult()
{}

CreateIpSetsResult::CreateIpSetsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateIpSetsResult::~CreateIpSetsResult()
{}

void CreateIpSetsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIpSetsNode = value["IpSets"]["GaIpSet"];
	for (auto valueIpSetsGaIpSet : allIpSetsNode)
	{
		GaIpSet ipSetsObject;
		if(!valueIpSetsGaIpSet["AccelerateRegionId"].isNull())
			ipSetsObject.accelerateRegionId = valueIpSetsGaIpSet["AccelerateRegionId"].asString();
		if(!valueIpSetsGaIpSet["Bandwidth"].isNull())
			ipSetsObject.bandwidth = std::stoi(valueIpSetsGaIpSet["Bandwidth"].asString());
		if(!valueIpSetsGaIpSet["IpSetId"].isNull())
			ipSetsObject.ipSetId = valueIpSetsGaIpSet["IpSetId"].asString();
		if(!valueIpSetsGaIpSet["IspType"].isNull())
			ipSetsObject.ispType = valueIpSetsGaIpSet["IspType"].asString();
		auto allIpList = value["IpList"]["IpList"];
		for (auto value : allIpList)
			ipSetsObject.ipList.push_back(value.asString());
		ipSets_.push_back(ipSetsObject);
	}
	if(!value["AcceleratorId"].isNull())
		acceleratorId_ = value["AcceleratorId"].asString();

}

std::vector<CreateIpSetsResult::GaIpSet> CreateIpSetsResult::getIpSets()const
{
	return ipSets_;
}

std::string CreateIpSetsResult::getAcceleratorId()const
{
	return acceleratorId_;
}

