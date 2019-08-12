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
{}

ARMSQueryDataSetRequest::~ARMSQueryDataSetRequest()
{}

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

std::string ARMSQueryDataSetRequest::getDateStr()const
{
	return dateStr_;
}

void ARMSQueryDataSetRequest::setDateStr(const std::string& dateStr)
{
	dateStr_ = dateStr;
	setCoreParameter("DateStr", std::to_string(dateStr));
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

long ARMSQueryDataSetRequest::getMinTime()const
{
	return minTime_;
}

void ARMSQueryDataSetRequest::setMinTime(long minTime)
{
	minTime_ = minTime;
	setCoreParameter("MinTime", minTime);
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

long ARMSQueryDataSetRequest::getMaxTime()const
{
	return maxTime_;
}

void ARMSQueryDataSetRequest::setMaxTime(long maxTime)
{
	maxTime_ = maxTime;
	setCoreParameter("MaxTime", maxTime);
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
		setCoreParameter(str + ".Value", std::to_string(obj.value));
		setCoreParameter(str + ".Key", std::to_string(obj.key));
	}
}

