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
{
	setMethod(HttpRequest::Method::Post);
}

WhereInDimQueryRequest::~WhereInDimQueryRequest()
{}

std::string WhereInDimQueryRequest::getDateStr()const
{
	return dateStr_;
}

void WhereInDimQueryRequest::setDateStr(const std::string& dateStr)
{
	dateStr_ = dateStr;
	setParameter("DateStr", dateStr);
}

long WhereInDimQueryRequest::getMinTime()const
{
	return minTime_;
}

void WhereInDimQueryRequest::setMinTime(long minTime)
{
	minTime_ = minTime;
	setParameter("MinTime", std::to_string(minTime));
}

long WhereInDimQueryRequest::getMaxTime()const
{
	return maxTime_;
}

void WhereInDimQueryRequest::setMaxTime(long maxTime)
{
	maxTime_ = maxTime;
	setParameter("MaxTime", std::to_string(maxTime));
}

std::string WhereInDimQueryRequest::getWhereInKey()const
{
	return whereInKey_;
}

void WhereInDimQueryRequest::setWhereInKey(const std::string& whereInKey)
{
	whereInKey_ = whereInKey;
	setParameter("WhereInKey", whereInKey);
}

std::vector<std::string> WhereInDimQueryRequest::getMeasures()const
{
	return measures_;
}

void WhereInDimQueryRequest::setMeasures(const std::vector<std::string>& measures)
{
	measures_ = measures;
	for(int dep1 = 0; dep1!= measures.size(); dep1++) {
		setParameter("Measures."+ std::to_string(dep1), measures.at(dep1));
	}
}

int WhereInDimQueryRequest::getIntervalInSec()const
{
	return intervalInSec_;
}

void WhereInDimQueryRequest::setIntervalInSec(int intervalInSec)
{
	intervalInSec_ = intervalInSec;
	setParameter("IntervalInSec", std::to_string(intervalInSec));
}

bool WhereInDimQueryRequest::getIsDrillDown()const
{
	return isDrillDown_;
}

void WhereInDimQueryRequest::setIsDrillDown(bool isDrillDown)
{
	isDrillDown_ = isDrillDown;
	setParameter("IsDrillDown", isDrillDown ? "true" : "false");
}

long WhereInDimQueryRequest::getDatasetId()const
{
	return datasetId_;
}

void WhereInDimQueryRequest::setDatasetId(long datasetId)
{
	datasetId_ = datasetId;
	setParameter("DatasetId", std::to_string(datasetId));
}

std::vector<std::string> WhereInDimQueryRequest::getWhereInValues()const
{
	return whereInValues_;
}

void WhereInDimQueryRequest::setWhereInValues(const std::vector<std::string>& whereInValues)
{
	whereInValues_ = whereInValues;
	for(int dep1 = 0; dep1!= whereInValues.size(); dep1++) {
		setParameter("WhereInValues."+ std::to_string(dep1), whereInValues.at(dep1));
	}
}

std::vector<WhereInDimQueryRequest::Dimensions> WhereInDimQueryRequest::getDimensions()const
{
	return dimensions_;
}

void WhereInDimQueryRequest::setDimensions(const std::vector<Dimensions>& dimensions)
{
	dimensions_ = dimensions;
	for(int dep1 = 0; dep1!= dimensions.size(); dep1++) {
		auto dimensionsObj = dimensions.at(dep1);
		std::string dimensionsObjStr = "Dimensions." + std::to_string(dep1 + 1);
		setParameter(dimensionsObjStr + ".Value", dimensionsObj.value);
		setParameter(dimensionsObjStr + ".Key", dimensionsObj.key);
	}
}

