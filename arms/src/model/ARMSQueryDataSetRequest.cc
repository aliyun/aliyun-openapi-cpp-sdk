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
	RpcServiceRequest("arms", "2019-02-19", "ARMSQueryDataSet")
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
	setCoreParameter("DateStr", std::to_string(dateStr));
}

long ARMSQueryDataSetRequest::getMinTime()const
{
	return minTime_;
}

void ARMSQueryDataSetRequest::setMinTime(long minTime)
{
	minTime_ = minTime;
	setCoreParameter("MinTime", minTime);
}

bool ARMSQueryDataSetRequest::getReduceTail()const
{
	return reduceTail_;
}

void ARMSQueryDataSetRequest::setReduceTail(bool reduceTail)
{
	reduceTail_ = reduceTail;
	setCoreParameter("ReduceTail", reduceTail ? "true" : "false");
}

long ARMSQueryDataSetRequest::getMaxTime()const
{
	return maxTime_;
}

void ARMSQueryDataSetRequest::setMaxTime(long maxTime)
{
	maxTime_ = maxTime;
	setCoreParameter("MaxTime", maxTime);
}

std::string ARMSQueryDataSetRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ARMSQueryDataSetRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
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
		setCoreParameter(str + ".Type", std::to_string(obj.type));
		setCoreParameter(str + ".Value", std::to_string(obj.value));
		setCoreParameter(str + ".Key", std::to_string(obj.key));
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
		setCoreParameter("Measures."+ std::to_string(i), std::to_string(measures.at(i)));
}

int ARMSQueryDataSetRequest::getIntervalInSec()const
{
	return intervalInSec_;
}

void ARMSQueryDataSetRequest::setIntervalInSec(int intervalInSec)
{
	intervalInSec_ = intervalInSec;
	setCoreParameter("IntervalInSec", intervalInSec);
}

bool ARMSQueryDataSetRequest::getIsDrillDown()const
{
	return isDrillDown_;
}

void ARMSQueryDataSetRequest::setIsDrillDown(bool isDrillDown)
{
	isDrillDown_ = isDrillDown;
	setCoreParameter("IsDrillDown", isDrillDown ? "true" : "false");
}

bool ARMSQueryDataSetRequest::getHungryMode()const
{
	return hungryMode_;
}

void ARMSQueryDataSetRequest::setHungryMode(bool hungryMode)
{
	hungryMode_ = hungryMode;
	setCoreParameter("HungryMode", hungryMode ? "true" : "false");
}

std::string ARMSQueryDataSetRequest::getSecurityToken()const
{
	return securityToken_;
}

void ARMSQueryDataSetRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string ARMSQueryDataSetRequest::getRegionId()const
{
	return regionId_;
}

void ARMSQueryDataSetRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ARMSQueryDataSetRequest::getOrderByKey()const
{
	return orderByKey_;
}

void ARMSQueryDataSetRequest::setOrderByKey(const std::string& orderByKey)
{
	orderByKey_ = orderByKey;
	setCoreParameter("OrderByKey", std::to_string(orderByKey));
}

int ARMSQueryDataSetRequest::getLimit()const
{
	return limit_;
}

void ARMSQueryDataSetRequest::setLimit(int limit)
{
	limit_ = limit;
	setCoreParameter("Limit", limit);
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
		setCoreParameter(str + ".Type", std::to_string(obj.type));
		setCoreParameter(str + ".Value", std::to_string(obj.value));
		setCoreParameter(str + ".Key", std::to_string(obj.key));
	}
}

long ARMSQueryDataSetRequest::getDatasetId()const
{
	return datasetId_;
}

void ARMSQueryDataSetRequest::setDatasetId(long datasetId)
{
	datasetId_ = datasetId;
	setCoreParameter("DatasetId", datasetId);
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
		setCoreParameter(str + ".Type", std::to_string(obj.type));
		setCoreParameter(str + ".Value", std::to_string(obj.value));
		setCoreParameter(str + ".Key", std::to_string(obj.key));
	}
}

