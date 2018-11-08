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

#include <alibabacloud/arms/model/ARMSQueryDataSetRequest.h>

using AlibabaCloud::ARMS::Model::ARMSQueryDataSetRequest;

ARMSQueryDataSetRequest::ARMSQueryDataSetRequest() :
	RpcServiceRequest("arms", "2018-10-15", "ARMSQueryDataSet")
{}

ARMSQueryDataSetRequest::~ARMSQueryDataSetRequest()
{}

std::string ARMSQueryDataSetRequest::getDateStr()const
{
	return dateStr_;
}

void ARMSQueryDataSetRequest::setDateStr(const std::string& dateStr)
{
	dateStr_ = dateStr;
	setParameter("DateStr", dateStr);
}

long ARMSQueryDataSetRequest::getMinTime()const
{
	return minTime_;
}

void ARMSQueryDataSetRequest::setMinTime(long minTime)
{
	minTime_ = minTime;
	setParameter("MinTime", std::to_string(minTime));
}

bool ARMSQueryDataSetRequest::getReduceTail()const
{
	return reduceTail_;
}

void ARMSQueryDataSetRequest::setReduceTail(bool reduceTail)
{
	reduceTail_ = reduceTail;
	setParameter("ReduceTail", std::to_string(reduceTail));
}

long ARMSQueryDataSetRequest::getMaxTime()const
{
	return maxTime_;
}

void ARMSQueryDataSetRequest::setMaxTime(long maxTime)
{
	maxTime_ = maxTime;
	setParameter("MaxTime", std::to_string(maxTime));
}

std::string ARMSQueryDataSetRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ARMSQueryDataSetRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::vector<ARMSQueryDataSetRequest::OptionalDims> ARMSQueryDataSetRequest::getOptionalDims()const
{
	return optionalDims_;
}

void ARMSQueryDataSetRequest::setOptionalDims(const std::vector<OptionalDims>& optionalDims)
{
	optionalDims_ = optionalDims;
	int i = 0;
	for(int i = 0; i!= optionalDims.size(); i++)	{
		auto obj = optionalDims.at(i);
		std::string str ="OptionalDims."+ std::to_string(i);
		setParameter(str + ".Type", obj.type);
		setParameter(str + ".Value", obj.value);
		setParameter(str + ".Key", obj.key);
	}
}

std::vector<std::string> ARMSQueryDataSetRequest::getMeasures()const
{
	return measures_;
}

void ARMSQueryDataSetRequest::setMeasures(const std::vector<std::string>& measures)
{
	measures_ = measures;
	for(int i = 0; i!= measures.size(); i++)
		setParameter("Measures."+ std::to_string(i), measures.at(i));
}

int ARMSQueryDataSetRequest::getIntervalInSec()const
{
	return intervalInSec_;
}

void ARMSQueryDataSetRequest::setIntervalInSec(int intervalInSec)
{
	intervalInSec_ = intervalInSec;
	setParameter("IntervalInSec", std::to_string(intervalInSec));
}

bool ARMSQueryDataSetRequest::getIsDrillDown()const
{
	return isDrillDown_;
}

void ARMSQueryDataSetRequest::setIsDrillDown(bool isDrillDown)
{
	isDrillDown_ = isDrillDown;
	setParameter("IsDrillDown", std::to_string(isDrillDown));
}

bool ARMSQueryDataSetRequest::getHungryMode()const
{
	return hungryMode_;
}

void ARMSQueryDataSetRequest::setHungryMode(bool hungryMode)
{
	hungryMode_ = hungryMode;
	setParameter("HungryMode", std::to_string(hungryMode));
}

std::string ARMSQueryDataSetRequest::getSecurityToken()const
{
	return securityToken_;
}

void ARMSQueryDataSetRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ARMSQueryDataSetRequest::getRegionId()const
{
	return regionId_;
}

void ARMSQueryDataSetRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ARMSQueryDataSetRequest::getOrderByKey()const
{
	return orderByKey_;
}

void ARMSQueryDataSetRequest::setOrderByKey(const std::string& orderByKey)
{
	orderByKey_ = orderByKey;
	setParameter("OrderByKey", orderByKey);
}

int ARMSQueryDataSetRequest::getLimit()const
{
	return limit_;
}

void ARMSQueryDataSetRequest::setLimit(int limit)
{
	limit_ = limit;
	setParameter("Limit", std::to_string(limit));
}

std::vector<ARMSQueryDataSetRequest::RequiredDims> ARMSQueryDataSetRequest::getRequiredDims()const
{
	return requiredDims_;
}

void ARMSQueryDataSetRequest::setRequiredDims(const std::vector<RequiredDims>& requiredDims)
{
	requiredDims_ = requiredDims;
	int i = 0;
	for(int i = 0; i!= requiredDims.size(); i++)	{
		auto obj = requiredDims.at(i);
		std::string str ="RequiredDims."+ std::to_string(i);
		setParameter(str + ".Type", obj.type);
		setParameter(str + ".Value", obj.value);
		setParameter(str + ".Key", obj.key);
	}
}

long ARMSQueryDataSetRequest::getDatasetId()const
{
	return datasetId_;
}

void ARMSQueryDataSetRequest::setDatasetId(long datasetId)
{
	datasetId_ = datasetId;
	setParameter("DatasetId", std::to_string(datasetId));
}

std::vector<ARMSQueryDataSetRequest::Dimensions> ARMSQueryDataSetRequest::getDimensions()const
{
	return dimensions_;
}

void ARMSQueryDataSetRequest::setDimensions(const std::vector<Dimensions>& dimensions)
{
	dimensions_ = dimensions;
	int i = 0;
	for(int i = 0; i!= dimensions.size(); i++)	{
		auto obj = dimensions.at(i);
		std::string str ="Dimensions."+ std::to_string(i);
		setParameter(str + ".Type", obj.type);
		setParameter(str + ".Value", obj.value);
		setParameter(str + ".Key", obj.key);
	}
}

