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

#include <alibabacloud/edas/model/GetClusterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

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
	auto clusterNode = value["Cluster"];
	if(!clusterNode["ClusterId"].isNull())
		cluster_.clusterId = clusterNode["ClusterId"].asString();
	if(!clusterNode["RegionId"].isNull())
		cluster_.regionId = clusterNode["RegionId"].asString();
	if(!clusterNode["Description"].isNull())
		cluster_.description = clusterNode["Description"].asString();
	if(!clusterNode["ClusterName"].isNull())
		cluster_.clusterName = clusterNode["ClusterName"].asString();
	if(!clusterNode["ClusterType"].isNull())
		cluster_.clusterType = std::stoi(clusterNode["ClusterType"].asString());
	if(!clusterNode["OversoldFactor"].isNull())
		cluster_.oversoldFactor = std::stoi(clusterNode["OversoldFactor"].asString());
	if(!clusterNode["NetworkMode"].isNull())
		cluster_.networkMode = std::stoi(clusterNode["NetworkMode"].asString());
	if(!clusterNode["VpcId"].isNull())
		cluster_.vpcId = clusterNode["VpcId"].asString();
	if(!clusterNode["NodeNum"].isNull())
		cluster_.nodeNum = std::stoi(clusterNode["NodeNum"].asString());
	if(!clusterNode["Cpu"].isNull())
		cluster_.cpu = std::stoi(clusterNode["Cpu"].asString());
	if(!clusterNode["Mem"].isNull())
		cluster_.mem = std::stoi(clusterNode["Mem"].asString());
	if(!clusterNode["CpuUsed"].isNull())
		cluster_.cpuUsed = std::stoi(clusterNode["CpuUsed"].asString());
	if(!clusterNode["MemUsed"].isNull())
		cluster_.memUsed = std::stoi(clusterNode["MemUsed"].asString());
	if(!clusterNode["CreateTime"].isNull())
		cluster_.createTime = std::stol(clusterNode["CreateTime"].asString());
	if(!clusterNode["UpdateTime"].isNull())
		cluster_.updateTime = std::stol(clusterNode["UpdateTime"].asString());
	if(!clusterNode["IaasProvider"].isNull())
		cluster_.iaasProvider = clusterNode["IaasProvider"].asString();
	if(!clusterNode["CsClusterId"].isNull())
		cluster_.csClusterId = clusterNode["CsClusterId"].asString();
	if(!clusterNode["ClusterImportStatus"].isNull())
		cluster_.clusterImportStatus = std::stoi(clusterNode["ClusterImportStatus"].asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetClusterResult::getMessage()const
{
	return message_;
}

GetClusterResult::Cluster GetClusterResult::getCluster()const
{
	return cluster_;
}

int GetClusterResult::getCode()const
{
	return code_;
}

