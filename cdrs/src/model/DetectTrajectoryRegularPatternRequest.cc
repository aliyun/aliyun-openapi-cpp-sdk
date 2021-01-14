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

#include <alibabacloud/cdrs/model/DetectTrajectoryRegularPatternRequest.h>

using AlibabaCloud::CDRS::Model::DetectTrajectoryRegularPatternRequest;

DetectTrajectoryRegularPatternRequest::DetectTrajectoryRegularPatternRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "DetectTrajectoryRegularPattern")
{
	setMethod(HttpRequest::Method::Post);
}

DetectTrajectoryRegularPatternRequest::~DetectTrajectoryRegularPatternRequest()
{}

std::string DetectTrajectoryRegularPatternRequest::getPredictDate()const
{
	return predictDate_;
}

void DetectTrajectoryRegularPatternRequest::setPredictDate(const std::string& predictDate)
{
	predictDate_ = predictDate;
	setBodyParameter("PredictDate", predictDate);
}

std::string DetectTrajectoryRegularPatternRequest::getCorpId()const
{
	return corpId_;
}

void DetectTrajectoryRegularPatternRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string DetectTrajectoryRegularPatternRequest::getIdValue()const
{
	return idValue_;
}

void DetectTrajectoryRegularPatternRequest::setIdValue(const std::string& idValue)
{
	idValue_ = idValue;
	setBodyParameter("IdValue", idValue);
}

std::string DetectTrajectoryRegularPatternRequest::getIdType()const
{
	return idType_;
}

void DetectTrajectoryRegularPatternRequest::setIdType(const std::string& idType)
{
	idType_ = idType;
	setBodyParameter("IdType", idType);
}

