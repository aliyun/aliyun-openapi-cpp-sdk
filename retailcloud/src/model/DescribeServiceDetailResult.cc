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

#include <alibabacloud/retailcloud/model/DescribeServiceDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

DescribeServiceDetailResult::DescribeServiceDetailResult() :
	ServiceResult()
{}

DescribeServiceDetailResult::DescribeServiceDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeServiceDetailResult::~DescribeServiceDetailResult()
{}

void DescribeServiceDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["AppId"].isNull())
		result_.appId = std::stol(resultNode["AppId"].asString());
	if(!resultNode["EnvId"].isNull())
		result_.envId = std::stol(resultNode["EnvId"].asString());
	if(!resultNode["Headless"].isNull())
		result_.headless = resultNode["Headless"].asString() == "true";
	if(!resultNode["K8sServiceId"].isNull())
		result_.k8sServiceId = resultNode["K8sServiceId"].asString();
	if(!resultNode["Name"].isNull())
		result_.name = resultNode["Name"].asString();
	if(!resultNode["ServiceId"].isNull())
		result_.serviceId = std::stol(resultNode["ServiceId"].asString());
	if(!resultNode["ServiceType"].isNull())
		result_.serviceType = resultNode["ServiceType"].asString();
	if(!resultNode["ClusterIP"].isNull())
		result_.clusterIP = resultNode["ClusterIP"].asString();
	auto allPortMappingsNode = resultNode["PortMappings"]["ServicePortMapping"];
	for (auto resultNodePortMappingsServicePortMapping : allPortMappingsNode)
	{
		Result::ServicePortMapping servicePortMappingObject;
		if(!resultNodePortMappingsServicePortMapping["Name"].isNull())
			servicePortMappingObject.name = resultNodePortMappingsServicePortMapping["Name"].asString();
		if(!resultNodePortMappingsServicePortMapping["NodePort"].isNull())
			servicePortMappingObject.nodePort = std::stoi(resultNodePortMappingsServicePortMapping["NodePort"].asString());
		if(!resultNodePortMappingsServicePortMapping["Port"].isNull())
			servicePortMappingObject.port = std::stoi(resultNodePortMappingsServicePortMapping["Port"].asString());
		if(!resultNodePortMappingsServicePortMapping["Protocol"].isNull())
			servicePortMappingObject.protocol = resultNodePortMappingsServicePortMapping["Protocol"].asString();
		if(!resultNodePortMappingsServicePortMapping["TargetPort"].isNull())
			servicePortMappingObject.targetPort = resultNodePortMappingsServicePortMapping["TargetPort"].asString();
		result_.portMappings.push_back(servicePortMappingObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrMsg"].isNull())
		errMsg_ = value["ErrMsg"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeServiceDetailResult::getErrMsg()const
{
	return errMsg_;
}

int DescribeServiceDetailResult::getCode()const
{
	return code_;
}

bool DescribeServiceDetailResult::getSuccess()const
{
	return success_;
}

DescribeServiceDetailResult::Result DescribeServiceDetailResult::getResult()const
{
	return result_;
}

