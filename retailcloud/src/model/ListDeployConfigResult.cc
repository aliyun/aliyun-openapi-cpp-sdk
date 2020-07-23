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

#include <alibabacloud/retailcloud/model/ListDeployConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

ListDeployConfigResult::ListDeployConfigResult() :
	ServiceResult()
{}

ListDeployConfigResult::ListDeployConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDeployConfigResult::~ListDeployConfigResult()
{}

void ListDeployConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DeployConfigInstance"];
	for (auto valueDataDeployConfigInstance : allDataNode)
	{
		DeployConfigInstance dataObject;
		if(!valueDataDeployConfigInstance["Id"].isNull())
			dataObject.id = std::stol(valueDataDeployConfigInstance["Id"].asString());
		if(!valueDataDeployConfigInstance["Name"].isNull())
			dataObject.name = valueDataDeployConfigInstance["Name"].asString();
		if(!valueDataDeployConfigInstance["AppId"].isNull())
			dataObject.appId = std::stol(valueDataDeployConfigInstance["AppId"].asString());
		if(!valueDataDeployConfigInstance["EnvType"].isNull())
			dataObject.envType = valueDataDeployConfigInstance["EnvType"].asString();
		auto containerCodePathNode = value["ContainerCodePath"];
		if(!containerCodePathNode["CodePath"].isNull())
			dataObject.containerCodePath.codePath = containerCodePathNode["CodePath"].asString();
		auto containerYamlConfNode = value["ContainerYamlConf"];
		if(!containerYamlConfNode["Deployment"].isNull())
			dataObject.containerYamlConf.deployment = containerYamlConfNode["Deployment"].asString();
		if(!containerYamlConfNode["ConfigMap"].isNull())
			dataObject.containerYamlConf.configMap = containerYamlConfNode["ConfigMap"].asString();
		if(!containerYamlConfNode["StatefulSet"].isNull())
			dataObject.containerYamlConf.statefulSet = containerYamlConfNode["StatefulSet"].asString();
		if(!containerYamlConfNode["CronJob"].isNull())
			dataObject.containerYamlConf.cronJob = containerYamlConfNode["CronJob"].asString();
			auto allConfigMapList = containerYamlConfNode["ConfigMapList"]["ConfigMapList"];
			for (auto value : allConfigMapList)
				dataObject.containerYamlConf.configMapList.push_back(value.asString());
			auto allSecretList = containerYamlConfNode["SecretList"]["SecretList"];
			for (auto value : allSecretList)
				dataObject.containerYamlConf.secretList.push_back(value.asString());
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

}

long ListDeployConfigResult::getTotalCount()const
{
	return totalCount_;
}

int ListDeployConfigResult::getPageSize()const
{
	return pageSize_;
}

int ListDeployConfigResult::getPageNumber()const
{
	return pageNumber_;
}

std::string ListDeployConfigResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<ListDeployConfigResult::DeployConfigInstance> ListDeployConfigResult::getData()const
{
	return data_;
}

int ListDeployConfigResult::getCode()const
{
	return code_;
}

