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

#include <alibabacloud/arms/model/GetPrometheusIntegrationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

GetPrometheusIntegrationResult::GetPrometheusIntegrationResult() :
	ServiceResult()
{}

GetPrometheusIntegrationResult::GetPrometheusIntegrationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPrometheusIntegrationResult::~GetPrometheusIntegrationResult()
{}

void GetPrometheusIntegrationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ClusterId"].isNull())
		data_.clusterId = dataNode["ClusterId"].asString();
	if(!dataNode["InstanceId"].isNull())
		data_.instanceId = std::stol(dataNode["InstanceId"].asString());
	if(!dataNode["ShowDescribe"].isNull())
		data_.showDescribe = dataNode["ShowDescribe"].asString() == "true";
	if(!dataNode["NeedUpgrade"].isNull())
		data_.needUpgrade = dataNode["NeedUpgrade"].asString() == "true";
	if(!dataNode["InstanceName"].isNull())
		data_.instanceName = dataNode["InstanceName"].asString();
	if(!dataNode["IntegrationType"].isNull())
		data_.integrationType = dataNode["IntegrationType"].asString();
	if(!dataNode["ExporterType"].isNull())
		data_.exporterType = dataNode["ExporterType"].asString();
	if(!dataNode["Version"].isNull())
		data_.version = dataNode["Version"].asString();
	if(!dataNode["Target"].isNull())
		data_.target = dataNode["Target"].asString();
	if(!dataNode["CanDelete"].isNull())
		data_.canDelete = dataNode["CanDelete"].asString() == "true";
	if(!dataNode["CanEditor"].isNull())
		data_.canEditor = dataNode["CanEditor"].asString() == "true";
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["Describe"].isNull())
		data_.describe = dataNode["Describe"].asString();
	if(!dataNode["ShowLog"].isNull())
		data_.showLog = dataNode["ShowLog"].asString();
	if(!dataNode["Namespace"].isNull())
		data_._namespace = dataNode["Namespace"].asString();
	if(!dataNode["ContainerName"].isNull())
		data_.containerName = dataNode["ContainerName"].asString();
	if(!dataNode["Param"].isNull())
		data_.param = dataNode["Param"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetPrometheusIntegrationResult::getMessage()const
{
	return message_;
}

GetPrometheusIntegrationResult::Data GetPrometheusIntegrationResult::getData()const
{
	return data_;
}

int GetPrometheusIntegrationResult::getCode()const
{
	return code_;
}

