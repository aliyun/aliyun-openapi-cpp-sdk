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

#include <alibabacloud/ess/model/CreateAlarmRequest.h>

using AlibabaCloud::Ess::Model::CreateAlarmRequest;

CreateAlarmRequest::CreateAlarmRequest() :
	RpcServiceRequest("ess", "2014-08-28", "CreateAlarm")
{}

CreateAlarmRequest::~CreateAlarmRequest()
{}

std::string CreateAlarmRequest::getMetricType()const
{
	return metricType_;
}

void CreateAlarmRequest::setMetricType(const std::string& metricType)
{
	metricType_ = metricType;
	setCoreParameter("MetricType", metricType);
}

int CreateAlarmRequest::getPeriod()const
{
	return period_;
}

void CreateAlarmRequest::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", std::to_string(period));
}

std::string CreateAlarmRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateAlarmRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateAlarmRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void CreateAlarmRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setCoreParameter("ScalingGroupId", scalingGroupId);
}

int CreateAlarmRequest::getGroupId()const
{
	return groupId_;
}

void CreateAlarmRequest::setGroupId(int groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

std::string CreateAlarmRequest::getDescription()const
{
	return description_;
}

void CreateAlarmRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::vector<std::string> CreateAlarmRequest::getAlarmAction()const
{
	return alarmAction_;
}

void CreateAlarmRequest::setAlarmAction(const std::vector<std::string>& alarmAction)
{
	alarmAction_ = alarmAction;
	for(int i = 0; i!= alarmAction.size(); i++)
		setCoreParameter("AlarmAction."+ std::to_string(i), alarmAction.at(i));
}

float CreateAlarmRequest::getThreshold()const
{
	return threshold_;
}

void CreateAlarmRequest::setThreshold(float threshold)
{
	threshold_ = threshold;
	setCoreParameter("Threshold", std::to_string(threshold));
}

long CreateAlarmRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateAlarmRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateAlarmRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateAlarmRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateAlarmRequest::getRegionId()const
{
	return regionId_;
}

void CreateAlarmRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateAlarmRequest::getName()const
{
	return name_;
}

void CreateAlarmRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

int CreateAlarmRequest::getEvaluationCount()const
{
	return evaluationCount_;
}

void CreateAlarmRequest::setEvaluationCount(int evaluationCount)
{
	evaluationCount_ = evaluationCount;
	setCoreParameter("EvaluationCount", std::to_string(evaluationCount));
}

std::string CreateAlarmRequest::getMetricName()const
{
	return metricName_;
}

void CreateAlarmRequest::setMetricName(const std::string& metricName)
{
	metricName_ = metricName;
	setCoreParameter("MetricName", metricName);
}

std::string CreateAlarmRequest::getComparisonOperator()const
{
	return comparisonOperator_;
}

void CreateAlarmRequest::setComparisonOperator(const std::string& comparisonOperator)
{
	comparisonOperator_ = comparisonOperator;
	setCoreParameter("ComparisonOperator", comparisonOperator);
}

std::vector<CreateAlarmRequest::Dimension> CreateAlarmRequest::getDimension()const
{
	return dimension_;
}

void CreateAlarmRequest::setDimension(const std::vector<Dimension>& dimension)
{
	dimension_ = dimension;
	int i = 0;
	for(int i = 0; i!= dimension.size(); i++)	{
		auto obj = dimension.at(i);
		std::string str ="Dimension."+ std::to_string(i);
		setCoreParameter(str + ".DimensionValue", obj.dimensionValue);
		setCoreParameter(str + ".DimensionKey", obj.dimensionKey);
	}
}

std::string CreateAlarmRequest::getStatistics()const
{
	return statistics_;
}

void CreateAlarmRequest::setStatistics(const std::string& statistics)
{
	statistics_ = statistics;
	setCoreParameter("Statistics", statistics);
}

