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

#include <alibabacloud/drds/model/CreateEvaluatePreCheckTaskRequest.h>

using AlibabaCloud::Drds::Model::CreateEvaluatePreCheckTaskRequest;

CreateEvaluatePreCheckTaskRequest::CreateEvaluatePreCheckTaskRequest() :
	RpcServiceRequest("drds", "2019-01-23", "CreateEvaluatePreCheckTask")
{
	setMethod(HttpRequest::Method::Post);
}

CreateEvaluatePreCheckTaskRequest::~CreateEvaluatePreCheckTaskRequest()
{}

int CreateEvaluatePreCheckTaskRequest::getAvgQpsGrowthScale()const
{
	return avgQpsGrowthScale_;
}

void CreateEvaluatePreCheckTaskRequest::setAvgQpsGrowthScale(int avgQpsGrowthScale)
{
	avgQpsGrowthScale_ = avgQpsGrowthScale;
	setParameter("AvgQpsGrowthScale", std::to_string(avgQpsGrowthScale));
}

std::string CreateEvaluatePreCheckTaskRequest::getTaskName()const
{
	return taskName_;
}

void CreateEvaluatePreCheckTaskRequest::setTaskName(const std::string& taskName)
{
	taskName_ = taskName;
	setParameter("TaskName", taskName);
}

std::string CreateEvaluatePreCheckTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateEvaluatePreCheckTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int CreateEvaluatePreCheckTaskRequest::getDataGrowthScale()const
{
	return dataGrowthScale_;
}

void CreateEvaluatePreCheckTaskRequest::setDataGrowthScale(int dataGrowthScale)
{
	dataGrowthScale_ = dataGrowthScale;
	setParameter("DataGrowthScale", std::to_string(dataGrowthScale));
}

std::vector<CreateEvaluatePreCheckTaskRequest::DbInfo> CreateEvaluatePreCheckTaskRequest::getDbInfo()const
{
	return dbInfo_;
}

void CreateEvaluatePreCheckTaskRequest::setDbInfo(const std::vector<DbInfo>& dbInfo)
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

int CreateEvaluatePreCheckTaskRequest::getEvaluateHours()const
{
	return evaluateHours_;
}

void CreateEvaluatePreCheckTaskRequest::setEvaluateHours(int evaluateHours)
{
	evaluateHours_ = evaluateHours;
	setParameter("EvaluateHours", std::to_string(evaluateHours));
}

