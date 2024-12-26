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

#include <alibabacloud/schedulerx3/model/GetClusterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SchedulerX3;
using namespace AlibabaCloud::SchedulerX3::Model;

GetClusterResult::GetClusterResult() :
	ServiceResult()
{}

GetClusterResult::GetClusterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetClusterResult::~GetClusterResult()
{}

void GetClusterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ClusterId"].isNull())
		data_.clusterId = dataNode["ClusterId"].asString();
	if(!dataNode["ClusterName"].isNull())
		data_.clusterName = dataNode["ClusterName"].asString();
	if(!dataNode["ClusterSpec"].isNull())
		data_.clusterSpec = dataNode["ClusterSpec"].asString();
	if(!dataNode["ProductType"].isNull())
		data_.productType = std::stoi(dataNode["ProductType"].asString());
	if(!dataNode["EngineType"].isNull())
		data_.engineType = dataNode["EngineType"].asString();
	if(!dataNode["EngineVersion"].isNull())
		data_.engineVersion = dataNode["EngineVersion"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = std::stoi(dataNode["Status"].asString());
	if(!dataNode["CreateTime"].isNull())
		data_.createTime = dataNode["CreateTime"].asString();
	if(!dataNode["EndTime"].isNull())
		data_.endTime = dataNode["EndTime"].asString();
	if(!dataNode["IntranetDomain"].isNull())
		data_.intranetDomain = dataNode["IntranetDomain"].asString();
	if(!dataNode["InternetDomain"].isNull())
		data_.internetDomain = dataNode["InternetDomain"].asString();
	if(!dataNode["ChargeType"].isNull())
		data_.chargeType = dataNode["ChargeType"].asString();
	if(!dataNode["KubeConfig"].isNull())
		data_.kubeConfig = dataNode["KubeConfig"].asString();
	if(!dataNode["JobNum"].isNull())
		data_.jobNum = std::stoi(dataNode["JobNum"].asString());
	if(!dataNode["WorkerNum"].isNull())
		data_.workerNum = std::stoi(dataNode["WorkerNum"].asString());
	if(!dataNode["VpcId"].isNull())
		data_.vpcId = dataNode["VpcId"].asString();
	if(!dataNode["MaxJobNum"].isNull())
		data_.maxJobNum = std::stoi(dataNode["MaxJobNum"].asString());
	if(!dataNode["Spm"].isNull())
		data_.spm = std::stoi(dataNode["Spm"].asString());
	auto allVSwitchesNode = dataNode["VSwitches"]["vswitchesItem"];
	for (auto dataNodeVSwitchesvswitchesItem : allVSwitchesNode)
	{
		Data::VswitchesItem vswitchesItemObject;
		if(!dataNodeVSwitchesvswitchesItem["ZoneId"].isNull())
			vswitchesItemObject.zoneId = dataNodeVSwitchesvswitchesItem["ZoneId"].asString();
		if(!dataNodeVSwitchesvswitchesItem["VSwitchId"].isNull())
			vswitchesItemObject.vSwitchId = dataNodeVSwitchesvswitchesItem["VSwitchId"].asString();
		data_.vSwitches.push_back(vswitchesItemObject);
	}
		auto allZones = dataNode["Zones"]["zones"];
		for (auto value : allZones)
			data_.zones.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetClusterResult::getMessage()const
{
	return message_;
}

GetClusterResult::Data GetClusterResult::getData()const
{
	return data_;
}

int GetClusterResult::getCode()const
{
	return code_;
}

bool GetClusterResult::getSuccess()const
{
	return success_;
}

