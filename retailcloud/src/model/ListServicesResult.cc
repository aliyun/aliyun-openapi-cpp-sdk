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

#include <alibabacloud/retailcloud/model/ListServicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

ListServicesResult::ListServicesResult() :
	ServiceResult()
{}

ListServicesResult::ListServicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListServicesResult::~ListServicesResult()
{}

void ListServicesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["ServiceInstance"];
	for (auto valueDataServiceInstance : allDataNode)
	{
		ServiceInstance dataObject;
		if(!valueDataServiceInstance["AppId"].isNull())
			dataObject.appId = std::stol(valueDataServiceInstance["AppId"].asString());
		if(!valueDataServiceInstance["EnvId"].isNull())
			dataObject.envId = std::stol(valueDataServiceInstance["EnvId"].asString());
		if(!valueDataServiceInstance["Headless"].isNull())
			dataObject.headless = valueDataServiceInstance["Headless"].asString() == "true";
		if(!valueDataServiceInstance["K8sServiceId"].isNull())
			dataObject.k8sServiceId = valueDataServiceInstance["K8sServiceId"].asString();
		if(!valueDataServiceInstance["Name"].isNull())
			dataObject.name = valueDataServiceInstance["Name"].asString();
		if(!valueDataServiceInstance["ServiceId"].isNull())
			dataObject.serviceId = std::stol(valueDataServiceInstance["ServiceId"].asString());
		if(!valueDataServiceInstance["ServiceType"].isNull())
			dataObject.serviceType = valueDataServiceInstance["ServiceType"].asString();
		if(!valueDataServiceInstance["ClusterIP"].isNull())
			dataObject.clusterIP = valueDataServiceInstance["ClusterIP"].asString();
		auto allPortMappingsNode = valueDataServiceInstance["PortMappings"]["ServicePortMapping"];
		for (auto valueDataServiceInstancePortMappingsServicePortMapping : allPortMappingsNode)
		{
			ServiceInstance::ServicePortMapping portMappingsObject;
			if(!valueDataServiceInstancePortMappingsServicePortMapping["Name"].isNull())
				portMappingsObject.name = valueDataServiceInstancePortMappingsServicePortMapping["Name"].asString();
			if(!valueDataServiceInstancePortMappingsServicePortMapping["NodePort"].isNull())
				portMappingsObject.nodePort = std::stoi(valueDataServiceInstancePortMappingsServicePortMapping["NodePort"].asString());
			if(!valueDataServiceInstancePortMappingsServicePortMapping["Port"].isNull())
				portMappingsObject.port = std::stoi(valueDataServiceInstancePortMappingsServicePortMapping["Port"].asString());
			if(!valueDataServiceInstancePortMappingsServicePortMapping["Protocol"].isNull())
				portMappingsObject.protocol = valueDataServiceInstancePortMappingsServicePortMapping["Protocol"].asString();
			if(!valueDataServiceInstancePortMappingsServicePortMapping["TargetPort"].isNull())
				portMappingsObject.targetPort = valueDataServiceInstancePortMappingsServicePortMapping["TargetPort"].asString();
			dataObject.portMappings.push_back(portMappingsObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["ClusterIP"].isNull())
		clusterIP_ = value["ClusterIP"].asString();
	if(!value["ClusterIP"].isNull())
		clusterIP1_ = value["ClusterIP"].asString();

}

std::string ListServicesResult::getClusterIP()const
{
	return clusterIP_;
}

long ListServicesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListServicesResult::getClusterIP1()const
{
	return clusterIP1_;
}

int ListServicesResult::getPageSize()const
{
	return pageSize_;
}

int ListServicesResult::getPageNumber()const
{
	return pageNumber_;
}

std::string ListServicesResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<ListServicesResult::ServiceInstance> ListServicesResult::getData()const
{
	return data_;
}

int ListServicesResult::getCode()const
{
	return code_;
}

