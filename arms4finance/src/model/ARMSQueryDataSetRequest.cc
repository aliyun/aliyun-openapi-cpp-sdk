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

#include <alibabacloud/arms4finance/model/ARMSQueryDataSetRequest.h>

using AlibabaCloud::ARMS4FINANCE::Model::ARMSQueryDataSetRequest;

ARMSQueryDataSetRequest::ARMSQueryDataSetRequest() :
	RpcServiceRequest("arms4finance", "2017-11-30", "ARMSQueryDataSet")
{
	setMethod(HttpRequest::Method::Post);
}

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

long ARMSQueryDataSetRequest::getMaxTime()const
{
	return maxTime_;
}

void ARMSQueryDataSetRequest::setMaxTime(long maxTime)
{
	maxTime_ = maxTime;
	setParameter("MaxTime", std::to_string(maxTime));
}

std::vector<std::string> ARMSQueryDataSetRequest::getMeasures()const
{
	return measures_;
}

void ARMSQueryDataSetRequest::setMeasures(const std::vector<std::string>& measures)
{
	measures_ = measures;
	for(int dep1 = 0; dep1!= measures.size(); dep1++) {
		setParameter("Measures."+ std::to_string(dep1), measures.at(dep1));
	}
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
	setParameter("IsDrillDown", isDrillDown ? "true" : "false");
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
	for(int dep1 = 0; dep1!= dimensions.size(); dep1++) {
		auto dimensionsObj = dimensions.at(dep1);
		std::string dimensionsObjStr = "Dimensions." + std::to_string(dep1 + 1);
		setParameter(dimensionsObjStr + ".Value", dimensionsObj.value);
		setParameter(dimensionsObjStr + ".Key", dimensionsObj.key);
	}
}

