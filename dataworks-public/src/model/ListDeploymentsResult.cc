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

#include <alibabacloud/dataworks-public/model/ListDeploymentsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListDeploymentsResult::ListDeploymentsResult() :
	ServiceResult()
{}

ListDeploymentsResult::ListDeploymentsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDeploymentsResult::~ListDeploymentsResult()
{}

void ListDeploymentsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stol(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stol(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	auto allDeploymentsNode = dataNode["Deployments"]["Deployment"];
	for (auto dataNodeDeploymentsDeployment : allDeploymentsNode)
	{
		Data::Deployment deploymentObject;
		if(!dataNodeDeploymentsDeployment["Status"].isNull())
			deploymentObject.status = std::stoi(dataNodeDeploymentsDeployment["Status"].asString());
		if(!dataNodeDeploymentsDeployment["ErrorMessage"].isNull())
			deploymentObject.errorMessage = dataNodeDeploymentsDeployment["ErrorMessage"].asString();
		if(!dataNodeDeploymentsDeployment["CreateTime"].isNull())
			deploymentObject.createTime = std::stol(dataNodeDeploymentsDeployment["CreateTime"].asString());
		if(!dataNodeDeploymentsDeployment["Executor"].isNull())
			deploymentObject.executor = dataNodeDeploymentsDeployment["Executor"].asString();
		if(!dataNodeDeploymentsDeployment["Creator"].isNull())
			deploymentObject.creator = dataNodeDeploymentsDeployment["Creator"].asString();
		if(!dataNodeDeploymentsDeployment["ExecuteTime"].isNull())
			deploymentObject.executeTime = std::stol(dataNodeDeploymentsDeployment["ExecuteTime"].asString());
		if(!dataNodeDeploymentsDeployment["Name"].isNull())
			deploymentObject.name = dataNodeDeploymentsDeployment["Name"].asString();
		if(!dataNodeDeploymentsDeployment["Id"].isNull())
			deploymentObject.id = std::stol(dataNodeDeploymentsDeployment["Id"].asString());
		data_.deployments.push_back(deploymentObject);
	}

}

ListDeploymentsResult::Data ListDeploymentsResult::getData()const
{
	return data_;
}

