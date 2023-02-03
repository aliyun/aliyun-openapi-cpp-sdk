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

#include <alibabacloud/mse/model/QueryClusterDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

QueryClusterDetailResult::QueryClusterDetailResult() :
	ServiceResult()
{}

QueryClusterDetailResult::QueryClusterDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryClusterDetailResult::~QueryClusterDetailResult()
{}

void QueryClusterDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["VpcId"].isNull())
		data_.vpcId = dataNode["VpcId"].asString();
	if(!dataNode["CreateTime"].isNull())
		data_.createTime = dataNode["CreateTime"].asString();
	if(!dataNode["IntranetAddress"].isNull())
		data_.intranetAddress = dataNode["IntranetAddress"].asString();
	if(!dataNode["DiskType"].isNull())
		data_.diskType = dataNode["DiskType"].asString();
	if(!dataNode["PubNetworkFlow"].isNull())
		data_.pubNetworkFlow = dataNode["PubNetworkFlow"].asString();
	if(!dataNode["DiskCapacity"].isNull())
		data_.diskCapacity = std::stol(dataNode["DiskCapacity"].asString());
	if(!dataNode["MemoryCapacity"].isNull())
		data_.memoryCapacity = std::stol(dataNode["MemoryCapacity"].asString());
	if(!dataNode["ClusterAliasName"].isNull())
		data_.clusterAliasName = dataNode["ClusterAliasName"].asString();
	if(!dataNode["InstanceCount"].isNull())
		data_.instanceCount = std::stoi(dataNode["InstanceCount"].asString());
	if(!dataNode["IntranetPort"].isNull())
		data_.intranetPort = dataNode["IntranetPort"].asString();
	if(!dataNode["ClusterId"].isNull())
		data_.clusterId = dataNode["ClusterId"].asString();
	if(!dataNode["IntranetDomain"].isNull())
		data_.intranetDomain = dataNode["IntranetDomain"].asString();
	if(!dataNode["InternetDomain"].isNull())
		data_.internetDomain = dataNode["InternetDomain"].asString();
	if(!dataNode["PayInfo"].isNull())
		data_.payInfo = dataNode["PayInfo"].asString();
	if(!dataNode["InternetAddress"].isNull())
		data_.internetAddress = dataNode["InternetAddress"].asString();
	if(!dataNode["InstanceId"].isNull())
		data_.instanceId = dataNode["InstanceId"].asString();
	if(!dataNode["AclEntryList"].isNull())
		data_.aclEntryList = dataNode["AclEntryList"].asString();
	if(!dataNode["HealthStatus"].isNull())
		data_.healthStatus = dataNode["HealthStatus"].asString();
	if(!dataNode["InitCostTime"].isNull())
		data_.initCostTime = std::stol(dataNode["InitCostTime"].asString());
	if(!dataNode["RegionId"].isNull())
		data_.regionId = dataNode["RegionId"].asString();
	if(!dataNode["AclId"].isNull())
		data_.aclId = dataNode["AclId"].asString();
	if(!dataNode["Cpu"].isNull())
		data_.cpu = std::stoi(dataNode["Cpu"].asString());
	if(!dataNode["ClusterType"].isNull())
		data_.clusterType = dataNode["ClusterType"].asString();
	if(!dataNode["ClusterName"].isNull())
		data_.clusterName = dataNode["ClusterName"].asString();
	if(!dataNode["InitStatus"].isNull())
		data_.initStatus = dataNode["InitStatus"].asString();
	if(!dataNode["InternetPort"].isNull())
		data_.internetPort = dataNode["InternetPort"].asString();
	if(!dataNode["AppVersion"].isNull())
		data_.appVersion = dataNode["AppVersion"].asString();
	if(!dataNode["NetType"].isNull())
		data_.netType = dataNode["NetType"].asString();
	if(!dataNode["ClusterVersion"].isNull())
		data_.clusterVersion = dataNode["ClusterVersion"].asString();
	if(!dataNode["ClusterSpecification"].isNull())
		data_.clusterSpecification = dataNode["ClusterSpecification"].asString();
	if(!dataNode["VSwitchId"].isNull())
		data_.vSwitchId = dataNode["VSwitchId"].asString();
	if(!dataNode["ConnectionType"].isNull())
		data_.connectionType = dataNode["ConnectionType"].asString();
	if(!dataNode["MseVersion"].isNull())
		data_.mseVersion = dataNode["MseVersion"].asString();
	if(!dataNode["ChargeType"].isNull())
		data_.chargeType = dataNode["ChargeType"].asString();
	if(!dataNode["OrderClusterVersion"].isNull())
		data_.orderClusterVersion = dataNode["OrderClusterVersion"].asString();
	if(!dataNode["Tags"].isNull())
		data_.tags = dataNode["Tags"].asString();
	if(!dataNode["ResourceGroupId"].isNull())
		data_.resourceGroupId = dataNode["ResourceGroupId"].asString();
	auto allInstanceModelsNode = dataNode["InstanceModels"]["InstanceModel"];
	for (auto dataNodeInstanceModelsInstanceModel : allInstanceModelsNode)
	{
		Data::InstanceModel instanceModelObject;
		if(!dataNodeInstanceModelsInstanceModel["PodName"].isNull())
			instanceModelObject.podName = dataNodeInstanceModelsInstanceModel["PodName"].asString();
		if(!dataNodeInstanceModelsInstanceModel["SingleTunnelVip"].isNull())
			instanceModelObject.singleTunnelVip = dataNodeInstanceModelsInstanceModel["SingleTunnelVip"].asString();
		if(!dataNodeInstanceModelsInstanceModel["InternetIp"].isNull())
			instanceModelObject.internetIp = dataNodeInstanceModelsInstanceModel["InternetIp"].asString();
		if(!dataNodeInstanceModelsInstanceModel["Ip"].isNull())
			instanceModelObject.ip = dataNodeInstanceModelsInstanceModel["Ip"].asString();
		if(!dataNodeInstanceModelsInstanceModel["Role"].isNull())
			instanceModelObject.role = dataNodeInstanceModelsInstanceModel["Role"].asString();
		if(!dataNodeInstanceModelsInstanceModel["HealthStatus"].isNull())
			instanceModelObject.healthStatus = dataNodeInstanceModelsInstanceModel["HealthStatus"].asString();
		if(!dataNodeInstanceModelsInstanceModel["CreationTimestamp"].isNull())
			instanceModelObject.creationTimestamp = dataNodeInstanceModelsInstanceModel["CreationTimestamp"].asString();
		if(!dataNodeInstanceModelsInstanceModel["Zone"].isNull())
			instanceModelObject.zone = dataNodeInstanceModelsInstanceModel["Zone"].asString();
		data_.instanceModels.push_back(instanceModelObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryClusterDetailResult::getMessage()const
{
	return message_;
}

QueryClusterDetailResult::Data QueryClusterDetailResult::getData()const
{
	return data_;
}

std::string QueryClusterDetailResult::getErrorCode()const
{
	return errorCode_;
}

bool QueryClusterDetailResult::getSuccess()const
{
	return success_;
}

