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

#include <alibabacloud/arms/model/QueryDatasetRequest.h>

using AlibabaCloud::ARMS::Model::QueryDatasetRequest;

QueryDatasetRequest::QueryDatasetRequest() :
	RpcServiceRequest("arms", "2019-08-08", "QueryDataset")
{}

QueryDatasetRequest::~QueryDatasetRequest()
{}

std::string QueryDatasetRequest::getDateStr()const
{
	return dateStr_;
}

void QueryDatasetRequest::setDateStr(const std::string& dateStr)
{
	dateStr_ = dateStr;
	setCoreParameter("DateStr", dateStr);
}

long QueryDatasetRequest::getMinTime()const
{
	return minTime_;
}

void QueryDatasetRequest::setMinTime(long minTime)
{
	minTime_ = minTime;
	setCoreParameter("MinTime", std::to_string(minTime));
}

bool QueryDatasetRequest::getReduceTail()const
{
	return reduceTail_;
}

void QueryDatasetRequest::setReduceTail(bool reduceTail)
{
	reduceTail_ = reduceTail;
	setCoreParameter("ReduceTail", reduceTail ? "true" : "false");
}

long QueryDatasetRequest::getMaxTime()const
{
	return maxTime_;
}

void QueryDatasetRequest::setMaxTime(long maxTime)
{
	maxTime_ = maxTime;
	setCoreParameter("MaxTime", std::to_string(maxTime));
}

std::vector<QueryDatasetRequest::OptionalDims> QueryDatasetRequest::getOptionalDims()const
{
	return optionalDims_;
}

void QueryDatasetRequest::setOptionalDims(const std::vector<OptionalDims>& optionalDims)
{
	optionalDims_ = optionalDims;
	int i = 0;
	for(int i = 0; i!= optionalDims.size(); i++)	{
		auto obj = optionalDims.at(i);
		std::string str ="OptionalDims."+ std::to_string(i);
		setCoreParameter(str + ".Type", obj.type);
		setCoreParameter(str + ".Value", obj.value);
		setCoreParameter(str + ".Key", obj.key);
	}
}

std::vector<std::string> QueryDatasetRequest::getMeasures()const
{
	return measures_;
}

void QueryDatasetRequest::setMeasures(const std::vector<std::string>& measures)
{
	measures_ = measures;
	for(int i = 0; i!= measures.size(); i++)
		setCoreParameter("Measures."+ std::to_string(i), measures.at(i));
}

int QueryDatasetRequest::getIntervalInSec()const
{
	return intervalInSec_;
}

void QueryDatasetRequest::setIntervalInSec(int intervalInSec)
{
	intervalInSec_ = intervalInSec;
	setCoreParameter("IntervalInSec", std::to_string(intervalInSec));
}

bool QueryDatasetRequest::getIsDrillDown()const
{
	return isDrillDown_;
}

void QueryDatasetRequest::setIsDrillDown(bool isDrillDown)
{
	isDrillDown_ = isDrillDown;
	setCoreParameter("IsDrillDown", isDrillDown ? "true" : "false");
}

bool QueryDatasetRequest::getHungryMode()const
{
	return hungryMode_;
}

void QueryDatasetRequest::setHungryMode(bool hungryMode)
{
	hungryMode_ = hungryMode;
	setCoreParameter("HungryMode", hungryMode ? "true" : "false");
}

std::string QueryDatasetRequest::getRegionId()const
{
	return regionId_;
}

void QueryDatasetRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string QueryDatasetRequest::getOrderByKey()const
{
	return orderByKey_;
}

void QueryDatasetRequest::setOrderByKey(const std::string& orderByKey)
{
	orderByKey_ = orderByKey;
	setCoreParameter("OrderByKey", orderByKey);
}

int QueryDatasetRequest::getLimit()const
{
	return limit_;
}

void QueryDatasetRequest::setLimit(int limit)
{
	limit_ = limit;
	setCoreParameter("Limit", std::to_string(limit));
}

long QueryDatasetRequest::getDatasetId()const
{
	return datasetId_;
}

void QueryDatasetRequest::setDatasetId(long datasetId)
{
	datasetId_ = datasetId;
	setCoreParameter("DatasetId", std::to_string(datasetId));
}

std::vector<QueryDatasetRequest::RequiredDims> QueryDatasetRequest::getRequiredDims()const
{
	return requiredDims_;
}

void QueryDatasetRequest::setRequiredDims(const std::vector<RequiredDims>& requiredDims)
{
	requiredDims_ = requiredDims;
	int i = 0;
	for(int i = 0; i!= requiredDims.size(); i++)	{
		auto obj = requiredDims.at(i);
		std::string str ="RequiredDims."+ std::to_string(i);
		setCoreParameter(str + ".Type", obj.type);
		setCoreParameter(str + ".Value", obj.value);
		setCoreParameter(str + ".Key", obj.key);
	}
}

std::vector<QueryDatasetRequest::Dimensions> QueryDatasetRequest::getDimensions()const
{
	return dimensions_;
}

void QueryDatasetRequest::setDimensions(const std::vector<Dimensions>& dimensions)
{
	dimensions_ = dimensions;
	int i = 0;
	for(int i = 0; i!= dimensions.size(); i++)	{
		auto obj = dimensions.at(i);
		std::string str ="Dimensions."+ std::to_string(i);
		setCoreParameter(str + ".Type", obj.type);
		setCoreParameter(str + ".Value", obj.value);
		setCoreParameter(str + ".Key", obj.key);
	}
}

