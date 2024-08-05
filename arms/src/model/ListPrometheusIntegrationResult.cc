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

#include <alibabacloud/arms/model/ListPrometheusIntegrationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

ListPrometheusIntegrationResult::ListPrometheusIntegrationResult() :
	ServiceResult()
{}

ListPrometheusIntegrationResult::ListPrometheusIntegrationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPrometheusIntegrationResult::~ListPrometheusIntegrationResult()
{}

void ListPrometheusIntegrationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Instance"];
	for (auto valueDataInstance : allDataNode)
	{
		Instance dataObject;
		if(!valueDataInstance["ClusterId"].isNull())
			dataObject.clusterId = valueDataInstance["ClusterId"].asString();
		if(!valueDataInstance["ShowDescribe"].isNull())
			dataObject.showDescribe = valueDataInstance["ShowDescribe"].asString() == "true";
		if(!valueDataInstance["NeedUpgrade"].isNull())
			dataObject.needUpgrade = valueDataInstance["NeedUpgrade"].asString() == "true";
		if(!valueDataInstance["InstanceName"].isNull())
			dataObject.instanceName = valueDataInstance["InstanceName"].asString();
		if(!valueDataInstance["ExporterType"].isNull())
			dataObject.exporterType = valueDataInstance["ExporterType"].asString();
		if(!valueDataInstance["IntegrationType"].isNull())
			dataObject.integrationType = valueDataInstance["IntegrationType"].asString();
		if(!valueDataInstance["InstanceId"].isNull())
			dataObject.instanceId = std::stol(valueDataInstance["InstanceId"].asString());
		if(!valueDataInstance["Version"].isNull())
			dataObject.version = valueDataInstance["Version"].asString();
		if(!valueDataInstance["Target"].isNull())
			dataObject.target = valueDataInstance["Target"].asString();
		if(!valueDataInstance["CanDelete"].isNull())
			dataObject.canDelete = valueDataInstance["CanDelete"].asString() == "true";
		if(!valueDataInstance["CanEditor"].isNull())
			dataObject.canEditor = valueDataInstance["CanEditor"].asString() == "true";
		if(!valueDataInstance["Status"].isNull())
			dataObject.status = valueDataInstance["Status"].asString();
		if(!valueDataInstance["ContainerName"].isNull())
			dataObject.containerName = valueDataInstance["ContainerName"].asString();
		if(!valueDataInstance["Namespace"].isNull())
			dataObject._namespace = valueDataInstance["Namespace"].asString();
		if(!valueDataInstance["PodName"].isNull())
			dataObject.podName = valueDataInstance["PodName"].asString();
		if(!valueDataInstance["Describe"].isNull())
			dataObject.describe = valueDataInstance["Describe"].asString();
		if(!valueDataInstance["ShowLog"].isNull())
			dataObject.showLog = valueDataInstance["ShowLog"].asString() == "true";
		if(!valueDataInstance["Param"].isNull())
			dataObject.param = valueDataInstance["Param"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());

}

std::string ListPrometheusIntegrationResult::getMessage()const
{
	return message_;
}

std::vector<ListPrometheusIntegrationResult::Instance> ListPrometheusIntegrationResult::getData()const
{
	return data_;
}

int ListPrometheusIntegrationResult::getCode()const
{
	return code_;
}

