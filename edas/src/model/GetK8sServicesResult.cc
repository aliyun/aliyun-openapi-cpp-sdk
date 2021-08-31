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

#include <alibabacloud/edas/model/GetK8sServicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

GetK8sServicesResult::GetK8sServicesResult() :
	ServiceResult()
{}

GetK8sServicesResult::GetK8sServicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetK8sServicesResult::~GetK8sServicesResult()
{}

void GetK8sServicesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allServicesNode = value["Services"]["ServicesItem"];
	for (auto valueServicesServicesItem : allServicesNode)
	{
		ServicesItem servicesObject;
		if(!valueServicesServicesItem["Name"].isNull())
			servicesObject.name = valueServicesServicesItem["Name"].asString();
		if(!valueServicesServicesItem["Type"].isNull())
			servicesObject.type = valueServicesServicesItem["Type"].asString();
		if(!valueServicesServicesItem["ClusterIP"].isNull())
			servicesObject.clusterIP = valueServicesServicesItem["ClusterIP"].asString();
		auto allServicePortsNode = valueServicesServicesItem["ServicePorts"]["ServicePortsItem"];
		for (auto valueServicesServicesItemServicePortsServicePortsItem : allServicePortsNode)
		{
			ServicesItem::ServicePortsItem servicePortsObject;
			if(!valueServicesServicesItemServicePortsServicePortsItem["Protocol"].isNull())
				servicePortsObject.protocol = valueServicesServicesItemServicePortsServicePortsItem["Protocol"].asString();
			if(!valueServicesServicesItemServicePortsServicePortsItem["Port"].isNull())
				servicePortsObject.port = std::stoi(valueServicesServicesItemServicePortsServicePortsItem["Port"].asString());
			if(!valueServicesServicesItemServicePortsServicePortsItem["TargetPort"].isNull())
				servicePortsObject.targetPort = valueServicesServicesItemServicePortsServicePortsItem["TargetPort"].asString();
			if(!valueServicesServicesItemServicePortsServicePortsItem["NodePort"].isNull())
				servicePortsObject.nodePort = std::stoi(valueServicesServicesItemServicePortsServicePortsItem["NodePort"].asString());
			servicesObject.servicePorts.push_back(servicePortsObject);
		}
		services_.push_back(servicesObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::vector<GetK8sServicesResult::ServicesItem> GetK8sServicesResult::getServices()const
{
	return services_;
}

std::string GetK8sServicesResult::getMessage()const
{
	return message_;
}

int GetK8sServicesResult::getCode()const
{
	return code_;
}

