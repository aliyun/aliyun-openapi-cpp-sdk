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

#include <alibabacloud/companyreg/model/PutMeasureReadyFlagRequest.h>

using AlibabaCloud::Companyreg::Model::PutMeasureReadyFlagRequest;

PutMeasureReadyFlagRequest::PutMeasureReadyFlagRequest() :
	RpcServiceRequest("companyreg", "2020-03-06", "PutMeasureReadyFlag")
{
	setMethod(HttpRequest::Method::Post);
}

PutMeasureReadyFlagRequest::~PutMeasureReadyFlagRequest()
{}

std::string PutMeasureReadyFlagRequest::getReadyFlag()const
{
	return readyFlag_;
}

void PutMeasureReadyFlagRequest::setReadyFlag(const std::string& readyFlag)
{
	readyFlag_ = readyFlag;
	setParameter("ReadyFlag", readyFlag);
}

std::string PutMeasureReadyFlagRequest::getEndTime()const
{
	return endTime_;
}

void PutMeasureReadyFlagRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string PutMeasureReadyFlagRequest::getStartTime()const
{
	return startTime_;
}

void PutMeasureReadyFlagRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string PutMeasureReadyFlagRequest::getBizType()const
{
	return bizType_;
}

void PutMeasureReadyFlagRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setParameter("BizType", bizType);
}

std::string PutMeasureReadyFlagRequest::getDataType()const
{
	return dataType_;
}

void PutMeasureReadyFlagRequest::setDataType(const std::string& dataType)
{
	dataType_ = dataType;
	setParameter("DataType", dataType);
}

