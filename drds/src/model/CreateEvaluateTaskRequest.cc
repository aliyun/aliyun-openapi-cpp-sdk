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

#include <alibabacloud/drds/model/CreateEvaluateTaskRequest.h>

using AlibabaCloud::Drds::Model::CreateEvaluateTaskRequest;

CreateEvaluateTaskRequest::CreateEvaluateTaskRequest() :
	RpcServiceRequest("drds", "2019-01-23", "CreateEvaluateTask")
{
	setMethod(HttpRequest::Method::Post);
}

CreateEvaluateTaskRequest::~CreateEvaluateTaskRequest()
{}

int CreateEvaluateTaskRequest::getAvgQpsGrowthScale()const
{
	return avgQpsGrowthScale_;
}

void CreateEvaluateTaskRequest::setAvgQpsGrowthScale(int avgQpsGrowthScale)
{
	avgQpsGrowthScale_ = avgQpsGrowthScale;
	setParameter("AvgQpsGrowthScale", std::to_string(avgQpsGrowthScale));
}

std::string CreateEvaluateTaskRequest::getTaskName()const
{
	return taskName_;
}

void CreateEvaluateTaskRequest::setTaskName(const std::string& taskName)
{
	taskName_ = taskName;
	setParameter("TaskName", taskName);
}

std::string CreateEvaluateTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateEvaluateTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int CreateEvaluateTaskRequest::getDataGrowthScale()const
{
	return dataGrowthScale_;
}

void CreateEvaluateTaskRequest::setDataGrowthScale(int dataGrowthScale)
{
	dataGrowthScale_ = dataGrowthScale;
	setParameter("DataGrowthScale", std::to_string(dataGrowthScale));
}

std::vector<CreateEvaluateTaskRequest::DbInfo> CreateEvaluateTaskRequest::getDbInfo()const
{
	return dbInfo_;
}

void CreateEvaluateTaskRequest::setDbInfo(const std::vector<DbInfo>& dbInfo)
{
	dbInfo_ = dbInfo;
	for(int dep1 = 0; dep1!= dbInfo.size(); dep1++) {
		auto dbInfoObj = dbInfo.at(dep1);
		std::string dbInfoObjStr = "DbInfo." + std::to_string(dep1 + 1);
		setParameter(dbInfoObjStr + ".InstId", dbInfoObj.instId);
		setParameter(dbInfoObjStr + ".DbPort", dbInfoObj.dbPort);
		setParameter(dbInfoObjStr + ".DbName", dbInfoObj.dbName);
		setParameter(dbInfoObjStr + ".DbPassword", dbInfoObj.dbPassword);
		setParameter(dbInfoObjStr + ".DbUser", dbInfoObj.dbUser);
	}
}

int CreateEvaluateTaskRequest::getEvaluateHours()const
{
	return evaluateHours_;
}

void CreateEvaluateTaskRequest::setEvaluateHours(int evaluateHours)
{
	evaluateHours_ = evaluateHours;
	setParameter("EvaluateHours", std::to_string(evaluateHours));
}

