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

#include <alibabacloud/companyreg/model/PutMeasureDataRequest.h>

using AlibabaCloud::Companyreg::Model::PutMeasureDataRequest;

PutMeasureDataRequest::PutMeasureDataRequest() :
	RpcServiceRequest("companyreg", "2020-03-06", "PutMeasureData")
{
	setMethod(HttpRequest::Method::Post);
}

PutMeasureDataRequest::~PutMeasureDataRequest()
{}

std::string PutMeasureDataRequest::getData()const
{
	return data_;
}

void PutMeasureDataRequest::setData(const std::string& data)
{
	data_ = data;
	setBodyParameter("Data", data);
}

std::string PutMeasureDataRequest::getEndTime()const
{
	return endTime_;
}

void PutMeasureDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

std::string PutMeasureDataRequest::getStartTime()const
{
	return startTime_;
}

void PutMeasureDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

std::string PutMeasureDataRequest::getBizType()const
{
	return bizType_;
}

void PutMeasureDataRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setBodyParameter("BizType", bizType);
}

std::string PutMeasureDataRequest::getDataType()const
{
	return dataType_;
}

void PutMeasureDataRequest::setDataType(const std::string& dataType)
{
	dataType_ = dataType;
	setBodyParameter("DataType", dataType);
}

