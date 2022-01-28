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

#include <alibabacloud/ens/model/DescribeEpnInstanceAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeEpnInstanceAttributeResult::DescribeEpnInstanceAttributeResult() :
	ServiceResult()
{}

DescribeEpnInstanceAttributeResult::DescribeEpnInstanceAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEpnInstanceAttributeResult::~DescribeEpnInstanceAttributeResult()
{}

void DescribeEpnInstanceAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allConfVersionsNode = value["ConfVersions"]["ConfVersionsItem"];
	for (auto valueConfVersionsConfVersionsItem : allConfVersionsNode)
	{
		ConfVersionsItem confVersionsObject;
		if(!valueConfVersionsConfVersionsItem["ConfVersion"].isNull())
			confVersionsObject.confVersion = valueConfVersionsConfVersionsItem["ConfVersion"].asString();
		if(!valueConfVersionsConfVersionsItem["EnsRegionId"].isNull())
			confVersionsObject.ensRegionId = valueConfVersionsConfVersionsItem["EnsRegionId"].asString();
		confVersions_.push_back(confVersionsObject);
	}
	auto allInstancesNode = value["Instances"]["EPNInstance"];
	for (auto valueInstancesEPNInstance : allInstancesNode)
	{
		EPNInstance instancesObject;
		if(!valueInstancesEPNInstance["EnsRegionId"].isNull())
			instancesObject.ensRegionId = valueInstancesEPNInstance["EnsRegionId"].asString();
		if(!valueInstancesEPNInstance["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesEPNInstance["InstanceId"].asString();
		if(!valueInstancesEPNInstance["InstanceName"].isNull())
			instancesObject.instanceName = valueInstancesEPNInstance["InstanceName"].asString();
		if(!valueInstancesEPNInstance["Isp"].isNull())
			instancesObject.isp = valueInstancesEPNInstance["Isp"].asString();
		if(!valueInstancesEPNInstance["PrivateIpAddress"].isNull())
			instancesObject.privateIpAddress = valueInstancesEPNInstance["PrivateIpAddress"].asString();
		if(!valueInstancesEPNInstance["PublicIpAddress"].isNull())
			instancesObject.publicIpAddress = valueInstancesEPNInstance["PublicIpAddress"].asString();
		if(!valueInstancesEPNInstance["Status"].isNull())
			instancesObject.status = valueInstancesEPNInstance["Status"].asString();
		instances_.push_back(instancesObject);
	}
	auto allVSwitchesNode = value["VSwitches"]["EPNInstance"];
	for (auto valueVSwitchesEPNInstance : allVSwitchesNode)
	{
		EPNInstance1 vSwitchesObject;
		if(!valueVSwitchesEPNInstance["CidrBlock"].isNull())
			vSwitchesObject.cidrBlock = valueVSwitchesEPNInstance["CidrBlock"].asString();
		if(!valueVSwitchesEPNInstance["EnsRegionId"].isNull())
			vSwitchesObject.ensRegionId = valueVSwitchesEPNInstance["EnsRegionId"].asString();
		if(!valueVSwitchesEPNInstance["VSwitchId"].isNull())
			vSwitchesObject.vSwitchId = valueVSwitchesEPNInstance["VSwitchId"].asString();
		if(!valueVSwitchesEPNInstance["VSwitchName"].isNull())
			vSwitchesObject.vSwitchName = valueVSwitchesEPNInstance["VSwitchName"].asString();
		vSwitches_.push_back(vSwitchesObject);
	}
	if(!value["EPNInstanceId"].isNull())
		ePNInstanceId_ = value["EPNInstanceId"].asString();
	if(!value["EPNInstanceName"].isNull())
		ePNInstanceName_ = value["EPNInstanceName"].asString();
	if(!value["NetworkingModel"].isNull())
		networkingModel_ = value["NetworkingModel"].asString();

}

std::vector<DescribeEpnInstanceAttributeResult::EPNInstance> DescribeEpnInstanceAttributeResult::getInstances()const
{
	return instances_;
}

std::string DescribeEpnInstanceAttributeResult::getNetworkingModel()const
{
	return networkingModel_;
}

std::vector<DescribeEpnInstanceAttributeResult::EPNInstance1> DescribeEpnInstanceAttributeResult::getVSwitches()const
{
	return vSwitches_;
}

std::string DescribeEpnInstanceAttributeResult::getEPNInstanceId()const
{
	return ePNInstanceId_;
}

std::vector<DescribeEpnInstanceAttributeResult::ConfVersionsItem> DescribeEpnInstanceAttributeResult::getConfVersions()const
{
	return confVersions_;
}

std::string DescribeEpnInstanceAttributeResult::getEPNInstanceName()const
{
	return ePNInstanceName_;
}

