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

#include <alibabacloud/arms4finance/model/WhereInDimQueryRequest.h>

using AlibabaCloud::ARMS4FINANCE::Model::WhereInDimQueryRequest;

WhereInDimQueryRequest::WhereInDimQueryRequest() :
	RpcServiceRequest("arms4finance", "2017-11-30", "WhereInDimQuery")
{}

WhereInDimQueryRequest::~WhereInDimQueryRequest()
{}

std::string WhereInDimQueryRequest::getDateStr()const
{
	return dateStr_;
}

void WhereInDimQueryRequest::setDateStr(const std::string& dateStr)
{
	dateStr_ = dateStr;
	setCoreParameter("DateStr", dateStr);
}

long WhereInDimQueryRequest::getMinTime()const
{
	return minTime_;
}

void WhereInDimQueryRequest::setMinTime(long minTime)
{
	minTime_ = minTime;
	setCoreParameter("MinTime", std::to_string(minTime));
}

long WhereInDimQueryRequest::getMaxTime()const
{
	return maxTime_;
}

void WhereInDimQueryRequest::setMaxTime(long maxTime)
{
	maxTime_ = maxTime;
	setCoreParameter("MaxTime", std::to_string(maxTime));
}

std::string WhereInDimQueryRequest::getWhereInKey()const
{
	return whereInKey_;
}

void WhereInDimQueryRequest::setWhereInKey(const std::string& whereInKey)
{
	whereInKey_ = whereInKey;
	setCoreParameter("WhereInKey", whereInKey);
}

std::vector<std::string> WhereInDimQueryRequest::getMeasures()const
{
	return measures_;
}

void WhereInDimQueryRequest::setMeasures(const std::vector<std::string>& measures)
{
	measures_ = measures;
	for(int i = 0; i!= measures.size(); i++)
		setCoreParameter("Measures."+ std::to_string(i), measures.at(i));
}

int WhereInDimQueryRequest::getIntervalInSec()const
{
	return intervalInSec_;
}

void WhereInDimQueryRequest::setIntervalInSec(int intervalInSec)
{
	intervalInSec_ = intervalInSec;
	setCoreParameter("IntervalInSec", std::to_string(intervalInSec));
}

bool WhereInDimQueryRequest::getIsDrillDown()const
{
	return isDrillDown_;
}

void WhereInDimQueryRequest::setIsDrillDown(bool isDrillDown)
{
	isDrillDown_ = isDrillDown;
	setCoreParameter("IsDrillDown", isDrillDown ? "true" : "false");
}

long WhereInDimQueryRequest::getDatasetId()const
{
	return datasetId_;
}

void WhereInDimQueryRequest::setDatasetId(long datasetId)
{
	datasetId_ = datasetId;
	setCoreParameter("DatasetId", std::to_string(datasetId));
}

std::vector<std::string> WhereInDimQueryRequest::getWhereInValues()const
{
	return whereInValues_;
}

void WhereInDimQueryRequest::setWhereInValues(const std::vector<std::string>& whereInValues)
{
	whereInValues_ = whereInValues;
	for(int i = 0; i!= whereInValues.size(); i++)
		setCoreParameter("WhereInValues."+ std::to_string(i), whereInValues.at(i));
}

std::vector<WhereInDimQueryRequest::Dimensions> WhereInDimQueryRequest::getDimensions()const
{
	return dimensions_;
}

void WhereInDimQueryRequest::setDimensions(const std::vector<Dimensions>& dimensions)
{
	dimensions_ = dimensions;
	int i = 0;
	for(int i = 0; i!= dimensions.size(); i++)	{
		auto obj = dimensions.at(i);
		std::string str ="Dimensions."+ std::to_string(i);
		setCoreParameter(str + ".Value", obj.value);
		setCoreParameter(str + ".Key", obj.key);
	}
}

