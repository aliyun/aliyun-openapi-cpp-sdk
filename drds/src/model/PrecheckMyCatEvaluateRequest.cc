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

#include <alibabacloud/drds/model/PrecheckMyCatEvaluateRequest.h>

using AlibabaCloud::Drds::Model::PrecheckMyCatEvaluateRequest;

PrecheckMyCatEvaluateRequest::PrecheckMyCatEvaluateRequest() :
	RpcServiceRequest("drds", "2019-01-23", "PrecheckMyCatEvaluate")
{
	setMethod(HttpRequest::Method::Post);
}

PrecheckMyCatEvaluateRequest::~PrecheckMyCatEvaluateRequest()
{}

int PrecheckMyCatEvaluateRequest::getSequenceType()const
{
	return sequenceType_;
}

void PrecheckMyCatEvaluateRequest::setSequenceType(int sequenceType)
{
	sequenceType_ = sequenceType;
	setParameter("SequenceType", std::to_string(sequenceType));
}

std::string PrecheckMyCatEvaluateRequest::getTaskName()const
{
	return taskName_;
}

void PrecheckMyCatEvaluateRequest::setTaskName(const std::string& taskName)
{
	taskName_ = taskName;
	setParameter("TaskName", taskName);
}

std::string PrecheckMyCatEvaluateRequest::getSchemaUrl()const
{
	return schemaUrl_;
}

void PrecheckMyCatEvaluateRequest::setSchemaUrl(const std::string& schemaUrl)
{
	schemaUrl_ = schemaUrl;
	setParameter("SchemaUrl", schemaUrl);
}

long PrecheckMyCatEvaluateRequest::getBusPeakQps()const
{
	return busPeakQps_;
}

void PrecheckMyCatEvaluateRequest::setBusPeakQps(long busPeakQps)
{
	busPeakQps_ = busPeakQps;
	setParameter("BusPeakQps", std::to_string(busPeakQps));
}

std::string PrecheckMyCatEvaluateRequest::getRegionId()const
{
	return regionId_;
}

void PrecheckMyCatEvaluateRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int PrecheckMyCatEvaluateRequest::getQpsIncPercent()const
{
	return qpsIncPercent_;
}

void PrecheckMyCatEvaluateRequest::setQpsIncPercent(int qpsIncPercent)
{
	qpsIncPercent_ = qpsIncPercent;
	setParameter("QpsIncPercent", std::to_string(qpsIncPercent));
}

std::string PrecheckMyCatEvaluateRequest::getServerUrl()const
{
	return serverUrl_;
}

void PrecheckMyCatEvaluateRequest::setServerUrl(const std::string& serverUrl)
{
	serverUrl_ = serverUrl;
	setParameter("ServerUrl", serverUrl);
}

int PrecheckMyCatEvaluateRequest::getCapacityIncPercent()const
{
	return capacityIncPercent_;
}

void PrecheckMyCatEvaluateRequest::setCapacityIncPercent(int capacityIncPercent)
{
	capacityIncPercent_ = capacityIncPercent;
	setParameter("CapacityIncPercent", std::to_string(capacityIncPercent));
}

std::string PrecheckMyCatEvaluateRequest::getRuleUrl()const
{
	return ruleUrl_;
}

void PrecheckMyCatEvaluateRequest::setRuleUrl(const std::string& ruleUrl)
{
	ruleUrl_ = ruleUrl;
	setParameter("RuleUrl", ruleUrl);
}

std::vector<std::string> PrecheckMyCatEvaluateRequest::getImportDbList()const
{
	return importDbList_;
}

void PrecheckMyCatEvaluateRequest::setImportDbList(const std::vector<std::string>& importDbList)
{
	importDbList_ = importDbList;
	for(int dep1 = 0; dep1!= importDbList.size(); dep1++) {
		setParameter("ImportDbList."+ std::to_string(dep1), importDbList.at(dep1));
	}
}

