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

#include <alibabacloud/drds/model/CreateMyCatEvaluateRequest.h>

using AlibabaCloud::Drds::Model::CreateMyCatEvaluateRequest;

CreateMyCatEvaluateRequest::CreateMyCatEvaluateRequest() :
	RpcServiceRequest("drds", "2019-01-23", "CreateMyCatEvaluate")
{
	setMethod(HttpRequest::Method::Post);
}

CreateMyCatEvaluateRequest::~CreateMyCatEvaluateRequest()
{}

int CreateMyCatEvaluateRequest::getSequenceType()const
{
	return sequenceType_;
}

void CreateMyCatEvaluateRequest::setSequenceType(int sequenceType)
{
	sequenceType_ = sequenceType;
	setParameter("SequenceType", std::to_string(sequenceType));
}

std::string CreateMyCatEvaluateRequest::getTaskName()const
{
	return taskName_;
}

void CreateMyCatEvaluateRequest::setTaskName(const std::string& taskName)
{
	taskName_ = taskName;
	setParameter("TaskName", taskName);
}

std::string CreateMyCatEvaluateRequest::getSchemaUrl()const
{
	return schemaUrl_;
}

void CreateMyCatEvaluateRequest::setSchemaUrl(const std::string& schemaUrl)
{
	schemaUrl_ = schemaUrl;
	setParameter("SchemaUrl", schemaUrl);
}

long CreateMyCatEvaluateRequest::getBusPeakQps()const
{
	return busPeakQps_;
}

void CreateMyCatEvaluateRequest::setBusPeakQps(long busPeakQps)
{
	busPeakQps_ = busPeakQps;
	setParameter("BusPeakQps", std::to_string(busPeakQps));
}

std::string CreateMyCatEvaluateRequest::getRegionId()const
{
	return regionId_;
}

void CreateMyCatEvaluateRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int CreateMyCatEvaluateRequest::getQpsIncPercent()const
{
	return qpsIncPercent_;
}

void CreateMyCatEvaluateRequest::setQpsIncPercent(int qpsIncPercent)
{
	qpsIncPercent_ = qpsIncPercent;
	setParameter("QpsIncPercent", std::to_string(qpsIncPercent));
}

std::string CreateMyCatEvaluateRequest::getServerUrl()const
{
	return serverUrl_;
}

void CreateMyCatEvaluateRequest::setServerUrl(const std::string& serverUrl)
{
	serverUrl_ = serverUrl;
	setParameter("ServerUrl", serverUrl);
}

int CreateMyCatEvaluateRequest::getCapacityIncPercent()const
{
	return capacityIncPercent_;
}

void CreateMyCatEvaluateRequest::setCapacityIncPercent(int capacityIncPercent)
{
	capacityIncPercent_ = capacityIncPercent;
	setParameter("CapacityIncPercent", std::to_string(capacityIncPercent));
}

std::string CreateMyCatEvaluateRequest::getRuleUrl()const
{
	return ruleUrl_;
}

void CreateMyCatEvaluateRequest::setRuleUrl(const std::string& ruleUrl)
{
	ruleUrl_ = ruleUrl;
	setParameter("RuleUrl", ruleUrl);
}

std::vector<std::string> CreateMyCatEvaluateRequest::getImportDbList()const
{
	return importDbList_;
}

void CreateMyCatEvaluateRequest::setImportDbList(const std::vector<std::string>& importDbList)
{
	importDbList_ = importDbList;
	for(int dep1 = 0; dep1!= importDbList.size(); dep1++) {
		setParameter("ImportDbList."+ std::to_string(dep1), importDbList.at(dep1));
	}
}

