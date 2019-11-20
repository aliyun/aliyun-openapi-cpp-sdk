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

#include <alibabacloud/ess/model/ModifyAlarmRequest.h>

using AlibabaCloud::Ess::Model::ModifyAlarmRequest;

ModifyAlarmRequest::ModifyAlarmRequest() :
	RpcServiceRequest("ess", "2014-08-28", "ModifyAlarm")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyAlarmRequest::~ModifyAlarmRequest()
{}

std::string ModifyAlarmRequest::getMetricType()const
{
	return metricType_;
}

void ModifyAlarmRequest::setMetricType(const std::string& metricType)
{
	metricType_ = metricType;
	setCoreParameter("MetricType", metricType);
}

std::string ModifyAlarmRequest::getDescription()const
{
	return description_;
}

void ModifyAlarmRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::vector<std::string> ModifyAlarmRequest::getAlarmAction()const
{
	return alarmAction_;
}

void ModifyAlarmRequest::setAlarmAction(const std::vector<std::string>& alarmAction)
{
	alarmAction_ = alarmAction;
	for(int dep1 = 0; dep1!= alarmAction.size(); dep1++)
		setCoreParameter("AlarmAction."+ std::to_string(dep1), alarmAction.at(dep1));
}

float ModifyAlarmRequest::getThreshold()const
{
	return threshold_;
}

void ModifyAlarmRequest::setThreshold(float threshold)
{
	threshold_ = threshold;
	setCoreParameter("Threshold", std::to_string(threshold));
}

std::string ModifyAlarmRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyAlarmRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyAlarmRequest::getRegionId()const
{
	return regionId_;
}

void ModifyAlarmRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int ModifyAlarmRequest::getEvaluationCount()const
{
	return evaluationCount_;
}

void ModifyAlarmRequest::setEvaluationCount(int evaluationCount)
{
	evaluationCount_ = evaluationCount;
	setCoreParameter("EvaluationCount", std::to_string(evaluationCount));
}

std::string ModifyAlarmRequest::getMetricName()const
{
	return metricName_;
}

void ModifyAlarmRequest::setMetricName(const std::string& metricName)
{
	metricName_ = metricName;
	setCoreParameter("MetricName", metricName);
}

std::vector<ModifyAlarmRequest::Dimension> ModifyAlarmRequest::getDimension()const
{
	return dimension_;
}

void ModifyAlarmRequest::setDimension(const std::vector<Dimension>& dimension)
{
	dimension_ = dimension;
	for(int dep1 = 0; dep1!= dimension.size(); dep1++) {
		auto dimensionObj = dimension.at(dep1);
		std::string dimensionObjStr = "Dimension." + std::to_string(dep1);
		setCoreParameter(dimensionObjStr + ".DimensionValue", dimensionObj.dimensionValue);
		setCoreParameter(dimensionObjStr + ".DimensionKey", dimensionObj.dimensionKey);
	}
}

int ModifyAlarmRequest::getPeriod()const
{
	return period_;
}

void ModifyAlarmRequest::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", std::to_string(period));
}

std::string ModifyAlarmRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyAlarmRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int ModifyAlarmRequest::getGroupId()const
{
	return groupId_;
}

void ModifyAlarmRequest::setGroupId(int groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

long ModifyAlarmRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyAlarmRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyAlarmRequest::getAlarmTaskId()const
{
	return alarmTaskId_;
}

void ModifyAlarmRequest::setAlarmTaskId(const std::string& alarmTaskId)
{
	alarmTaskId_ = alarmTaskId;
	setCoreParameter("AlarmTaskId", alarmTaskId);
}

std::string ModifyAlarmRequest::getName()const
{
	return name_;
}

void ModifyAlarmRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string ModifyAlarmRequest::getComparisonOperator()const
{
	return comparisonOperator_;
}

void ModifyAlarmRequest::setComparisonOperator(const std::string& comparisonOperator)
{
	comparisonOperator_ = comparisonOperator;
	setCoreParameter("ComparisonOperator", comparisonOperator);
}

std::string ModifyAlarmRequest::getStatistics()const
{
	return statistics_;
}

void ModifyAlarmRequest::setStatistics(const std::string& statistics)
{
	statistics_ = statistics;
	setCoreParameter("Statistics", statistics);
}

