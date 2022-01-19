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

#include <alibabacloud/mse/model/GetGovernanceKubernetesClusterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

GetGovernanceKubernetesClusterResult::GetGovernanceKubernetesClusterResult() :
	ServiceResult()
{}

GetGovernanceKubernetesClusterResult::GetGovernanceKubernetesClusterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetGovernanceKubernetesClusterResult::~GetGovernanceKubernetesClusterResult()
{}

void GetGovernanceKubernetesClusterResult::parse(const std::string &payload)
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
	if(!dataNode["Region"].isNull())
		data_.region = dataNode["Region"].asString();
	if(!dataNode["K8sVersion"].isNull())
		data_.k8sVersion = dataNode["K8sVersion"].asString();
	if(!dataNode["NamespaceInfos"].isNull())
		data_.namespaceInfos = dataNode["NamespaceInfos"].asString();
	if(!dataNode["PilotStartTime"].isNull())
		data_.pilotStartTime = dataNode["PilotStartTime"].asString();
	if(!dataNode["UpdateTime"].isNull())
		data_.updateTime = dataNode["UpdateTime"].asString();
	auto allNamespacesNode = dataNode["Namespaces"]["KubernetesNamespace"];
	for (auto dataNodeNamespacesKubernetesNamespace : allNamespacesNode)
	{
		Data::KubernetesNamespace kubernetesNamespaceObject;
		if(!dataNodeNamespacesKubernetesNamespace["Name"].isNull())
			kubernetesNamespaceObject.name = dataNodeNamespacesKubernetesNamespace["Name"].asString();
		if(!dataNodeNamespacesKubernetesNamespace["Tags"].isNull())
			kubernetesNamespaceObject.tags = dataNodeNamespacesKubernetesNamespace["Tags"].asString();
		data_.namespaces.push_back(kubernetesNamespaceObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetGovernanceKubernetesClusterResult::getMessage()const
{
	return message_;
}

int GetGovernanceKubernetesClusterResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetGovernanceKubernetesClusterResult::Data GetGovernanceKubernetesClusterResult::getData()const
{
	return data_;
}

int GetGovernanceKubernetesClusterResult::getCode()const
{
	return code_;
}

bool GetGovernanceKubernetesClusterResult::getSuccess()const
{
	return success_;
}

