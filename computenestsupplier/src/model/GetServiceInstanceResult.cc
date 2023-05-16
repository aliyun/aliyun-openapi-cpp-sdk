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

#include <alibabacloud/computenestsupplier/model/GetServiceInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ComputeNestSupplier;
using namespace AlibabaCloud::ComputeNestSupplier::Model;

GetServiceInstanceResult::GetServiceInstanceResult() :
	ServiceResult()
{}

GetServiceInstanceResult::GetServiceInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetServiceInstanceResult::~GetServiceInstanceResult()
{}

void GetServiceInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTagsNode = value["Tags"]["Tag"];
	for (auto valueTagsTag : allTagsNode)
	{
		Tag tagsObject;
		if(!valueTagsTag["Key"].isNull())
			tagsObject.key = valueTagsTag["Key"].asString();
		if(!valueTagsTag["Value"].isNull())
			tagsObject.value = valueTagsTag["Value"].asString();
		tags_.push_back(tagsObject);
	}
	auto serviceNode = value["Service"];
	if(!serviceNode["Status"].isNull())
		service_.status = serviceNode["Status"].asString();
	if(!serviceNode["PublishTime"].isNull())
		service_.publishTime = serviceNode["PublishTime"].asString();
	if(!serviceNode["Version"].isNull())
		service_.version = serviceNode["Version"].asString();
	if(!serviceNode["DeployMetadata"].isNull())
		service_.deployMetadata = serviceNode["DeployMetadata"].asString();
	if(!serviceNode["DeployType"].isNull())
		service_.deployType = serviceNode["DeployType"].asString();
	if(!serviceNode["ServiceId"].isNull())
		service_.serviceId = serviceNode["ServiceId"].asString();
	if(!serviceNode["SupplierUrl"].isNull())
		service_.supplierUrl = serviceNode["SupplierUrl"].asString();
	if(!serviceNode["ServiceProductUrl"].isNull())
		service_.serviceProductUrl = serviceNode["ServiceProductUrl"].asString();
	if(!serviceNode["ServiceDocUrl"].isNull())
		service_.serviceDocUrl = serviceNode["ServiceDocUrl"].asString();
	if(!serviceNode["ServiceType"].isNull())
		service_.serviceType = serviceNode["ServiceType"].asString();
	if(!serviceNode["SupplierName"].isNull())
		service_.supplierName = serviceNode["SupplierName"].asString();
	if(!serviceNode["VersionName"].isNull())
		service_.versionName = serviceNode["VersionName"].asString();
	auto allServiceInfosNode = serviceNode["ServiceInfos"]["ServiceInfo"];
	for (auto serviceNodeServiceInfosServiceInfo : allServiceInfosNode)
	{
		Service::ServiceInfo serviceInfoObject;
		if(!serviceNodeServiceInfosServiceInfo["Locale"].isNull())
			serviceInfoObject.locale = serviceNodeServiceInfosServiceInfo["Locale"].asString();
		if(!serviceNodeServiceInfosServiceInfo["Image"].isNull())
			serviceInfoObject.image = serviceNodeServiceInfosServiceInfo["Image"].asString();
		if(!serviceNodeServiceInfosServiceInfo["Name"].isNull())
			serviceInfoObject.name = serviceNodeServiceInfosServiceInfo["Name"].asString();
		if(!serviceNodeServiceInfosServiceInfo["ShortDescription"].isNull())
			serviceInfoObject.shortDescription = serviceNodeServiceInfosServiceInfo["ShortDescription"].asString();
		service_.serviceInfos.push_back(serviceInfoObject);
	}
		auto allUpgradableServiceVersions = serviceNode["UpgradableServiceVersions"]["UpgradableServiceVersion"];
		for (auto value : allUpgradableServiceVersions)
			service_.upgradableServiceVersions.push_back(value.asString());
	auto networkConfigNode = value["NetworkConfig"];
	if(!networkConfigNode["EndpointServiceId"].isNull())
		networkConfig_.endpointServiceId = networkConfigNode["EndpointServiceId"].asString();
	if(!networkConfigNode["EndpointId"].isNull())
		networkConfig_.endpointId = networkConfigNode["EndpointId"].asString();
	auto allPrivateVpcConnectionsNode = networkConfigNode["PrivateVpcConnections"]["PrivateVpcConnection"];
	for (auto networkConfigNodePrivateVpcConnectionsPrivateVpcConnection : allPrivateVpcConnectionsNode)
	{
		NetworkConfig::PrivateVpcConnection privateVpcConnectionObject;
		if(!networkConfigNodePrivateVpcConnectionsPrivateVpcConnection["EndpointId"].isNull())
			privateVpcConnectionObject.endpointId = networkConfigNodePrivateVpcConnectionsPrivateVpcConnection["EndpointId"].asString();
		if(!networkConfigNodePrivateVpcConnectionsPrivateVpcConnection["EndpointServiceId"].isNull())
			privateVpcConnectionObject.endpointServiceId = networkConfigNodePrivateVpcConnectionsPrivateVpcConnection["EndpointServiceId"].asString();
		if(!networkConfigNodePrivateVpcConnectionsPrivateVpcConnection["PrivateZoneName"].isNull())
			privateVpcConnectionObject.privateZoneName = networkConfigNodePrivateVpcConnectionsPrivateVpcConnection["PrivateZoneName"].asString();
		auto allConnectionConfigsNode = networkConfigNodePrivateVpcConnectionsPrivateVpcConnection["ConnectionConfigs"]["ConnectionConfig"];
		for (auto networkConfigNodePrivateVpcConnectionsPrivateVpcConnectionConnectionConfigsConnectionConfig : allConnectionConfigsNode)
		{
			NetworkConfig::PrivateVpcConnection::ConnectionConfig connectionConfigsObject;
			if(!networkConfigNodePrivateVpcConnectionsPrivateVpcConnectionConnectionConfigsConnectionConfig["VpcId"].isNull())
				connectionConfigsObject.vpcId = networkConfigNodePrivateVpcConnectionsPrivateVpcConnectionConnectionConfigsConnectionConfig["VpcId"].asString();
			if(!networkConfigNodePrivateVpcConnectionsPrivateVpcConnectionConnectionConfigsConnectionConfig["IngressEndpointStatus"].isNull())
				connectionConfigsObject.ingressEndpointStatus = networkConfigNodePrivateVpcConnectionsPrivateVpcConnectionConnectionConfigsConnectionConfig["IngressEndpointStatus"].asString();
			if(!networkConfigNodePrivateVpcConnectionsPrivateVpcConnectionConnectionConfigsConnectionConfig["NetworkServiceStatus"].isNull())
				connectionConfigsObject.networkServiceStatus = networkConfigNodePrivateVpcConnectionsPrivateVpcConnectionConnectionConfigsConnectionConfig["NetworkServiceStatus"].asString();
			if(!networkConfigNodePrivateVpcConnectionsPrivateVpcConnectionConnectionConfigsConnectionConfig["DomainName"].isNull())
				connectionConfigsObject.domainName = networkConfigNodePrivateVpcConnectionsPrivateVpcConnectionConnectionConfigsConnectionConfig["DomainName"].asString();
			if(!networkConfigNodePrivateVpcConnectionsPrivateVpcConnectionConnectionConfigsConnectionConfig["ConnectBandwidth"].isNull())
				connectionConfigsObject.connectBandwidth = std::stoi(networkConfigNodePrivateVpcConnectionsPrivateVpcConnectionConnectionConfigsConnectionConfig["ConnectBandwidth"].asString());
			auto allSecurityGroups = value["SecurityGroups"]["SecurityGroup"];
			for (auto value : allSecurityGroups)
				connectionConfigsObject.securityGroups.push_back(value.asString());
			auto allVSwitches = value["VSwitches"]["VSwitch"];
			for (auto value : allVSwitches)
				connectionConfigsObject.vSwitches.push_back(value.asString());
			auto allEndpointIps = value["EndpointIps"]["EndpointIp"];
			for (auto value : allEndpointIps)
				connectionConfigsObject.endpointIps.push_back(value.asString());
			privateVpcConnectionObject.connectionConfigs.push_back(connectionConfigsObject);
		}
		networkConfig_.privateVpcConnections.push_back(privateVpcConnectionObject);
	}
	auto allReversePrivateVpcConnectionsNode = networkConfigNode["ReversePrivateVpcConnections"]["ReversePrivateVpcConnection"];
	for (auto networkConfigNodeReversePrivateVpcConnectionsReversePrivateVpcConnection : allReversePrivateVpcConnectionsNode)
	{
		NetworkConfig::ReversePrivateVpcConnection reversePrivateVpcConnectionObject;
		if(!networkConfigNodeReversePrivateVpcConnectionsReversePrivateVpcConnection["EndpointId"].isNull())
			reversePrivateVpcConnectionObject.endpointId = networkConfigNodeReversePrivateVpcConnectionsReversePrivateVpcConnection["EndpointId"].asString();
		if(!networkConfigNodeReversePrivateVpcConnectionsReversePrivateVpcConnection["EndpointServiceId"].isNull())
			reversePrivateVpcConnectionObject.endpointServiceId = networkConfigNodeReversePrivateVpcConnectionsReversePrivateVpcConnection["EndpointServiceId"].asString();
		networkConfig_.reversePrivateVpcConnections.push_back(reversePrivateVpcConnectionObject);
	}
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["TemplateName"].isNull())
		templateName_ = value["TemplateName"].asString();
	if(!value["UpdateTime"].isNull())
		updateTime_ = value["UpdateTime"].asString();
	if(!value["ServiceInstanceId"].isNull())
		serviceInstanceId_ = value["ServiceInstanceId"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["UserId"].isNull())
		userId_ = std::stol(value["UserId"].asString());
	if(!value["SupplierUid"].isNull())
		supplierUid_ = std::stol(value["SupplierUid"].asString());
	if(!value["Parameters"].isNull())
		parameters_ = value["Parameters"].asString();
	if(!value["Progress"].isNull())
		progress_ = std::stol(value["Progress"].asString());
	if(!value["StatusDetail"].isNull())
		statusDetail_ = value["StatusDetail"].asString();
	if(!value["OperationStartTime"].isNull())
		operationStartTime_ = value["OperationStartTime"].asString();
	if(!value["OperationEndTime"].isNull())
		operationEndTime_ = value["OperationEndTime"].asString();
	if(!value["OperatedServiceInstanceId"].isNull())
		operatedServiceInstanceId_ = value["OperatedServiceInstanceId"].asString();
	if(!value["IsOperated"].isNull())
		isOperated_ = value["IsOperated"].asString() == "true";
	if(!value["EnableInstanceOps"].isNull())
		enableInstanceOps_ = value["EnableInstanceOps"].asString() == "true";
	if(!value["Resources"].isNull())
		resources_ = value["Resources"].asString();
	if(!value["Outputs"].isNull())
		outputs_ = value["Outputs"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["Source"].isNull())
		source_ = value["Source"].asString();
	if(!value["ServiceType"].isNull())
		serviceType_ = value["ServiceType"].asString();
	if(!value["PayType"].isNull())
		payType_ = value["PayType"].asString();
	if(!value["LicenseMetadata"].isNull())
		licenseMetadata_ = value["LicenseMetadata"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["EnableUserPrometheus"].isNull())
		enableUserPrometheus_ = value["EnableUserPrometheus"].asString();
	if(!value["RdAccountLoginUrl"].isNull())
		rdAccountLoginUrl_ = value["RdAccountLoginUrl"].asString();

}

std::string GetServiceInstanceResult::getOperatedServiceInstanceId()const
{
	return operatedServiceInstanceId_;
}

std::string GetServiceInstanceResult::getEndTime()const
{
	return endTime_;
}

std::string GetServiceInstanceResult::getOperationEndTime()const
{
	return operationEndTime_;
}

bool GetServiceInstanceResult::getEnableInstanceOps()const
{
	return enableInstanceOps_;
}

std::string GetServiceInstanceResult::getSource()const
{
	return source_;
}

std::string GetServiceInstanceResult::getName()const
{
	return name_;
}

std::string GetServiceInstanceResult::getOperationStartTime()const
{
	return operationStartTime_;
}

std::string GetServiceInstanceResult::getServiceInstanceId()const
{
	return serviceInstanceId_;
}

std::string GetServiceInstanceResult::getServiceType()const
{
	return serviceType_;
}

std::string GetServiceInstanceResult::getLicenseMetadata()const
{
	return licenseMetadata_;
}

std::string GetServiceInstanceResult::getTemplateName()const
{
	return templateName_;
}

std::vector<GetServiceInstanceResult::Tag> GetServiceInstanceResult::getTags()const
{
	return tags_;
}

std::string GetServiceInstanceResult::getStatus()const
{
	return status_;
}

long GetServiceInstanceResult::getProgress()const
{
	return progress_;
}

std::string GetServiceInstanceResult::getParameters()const
{
	return parameters_;
}

std::string GetServiceInstanceResult::getCreateTime()const
{
	return createTime_;
}

GetServiceInstanceResult::NetworkConfig GetServiceInstanceResult::getNetworkConfig()const
{
	return networkConfig_;
}

GetServiceInstanceResult::Service GetServiceInstanceResult::getService()const
{
	return service_;
}

std::string GetServiceInstanceResult::getPayType()const
{
	return payType_;
}

std::string GetServiceInstanceResult::getRdAccountLoginUrl()const
{
	return rdAccountLoginUrl_;
}

long GetServiceInstanceResult::getUserId()const
{
	return userId_;
}

std::string GetServiceInstanceResult::getEnableUserPrometheus()const
{
	return enableUserPrometheus_;
}

std::string GetServiceInstanceResult::getStatusDetail()const
{
	return statusDetail_;
}

std::string GetServiceInstanceResult::getUpdateTime()const
{
	return updateTime_;
}

std::string GetServiceInstanceResult::getOutputs()const
{
	return outputs_;
}

long GetServiceInstanceResult::getSupplierUid()const
{
	return supplierUid_;
}

bool GetServiceInstanceResult::getIsOperated()const
{
	return isOperated_;
}

std::string GetServiceInstanceResult::getResources()const
{
	return resources_;
}

