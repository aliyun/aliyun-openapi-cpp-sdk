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

#include <alibabacloud/cdrs/model/PredictTrajectoryDestinationRequest.h>

using AlibabaCloud::CDRS::Model::PredictTrajectoryDestinationRequest;

PredictTrajectoryDestinationRequest::PredictTrajectoryDestinationRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "PredictTrajectoryDestination")
{
	setMethod(HttpRequest::Method::Post);
}

PredictTrajectoryDestinationRequest::~PredictTrajectoryDestinationRequest()
{}

std::string PredictTrajectoryDestinationRequest::getCorpId()const
{
	return corpId_;
}

void PredictTrajectoryDestinationRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string PredictTrajectoryDestinationRequest::getIdValue()const
{
	return idValue_;
}

void PredictTrajectoryDestinationRequest::setIdValue(const std::string& idValue)
{
	idValue_ = idValue;
	setBodyParameter("IdValue", idValue);
}

std::string PredictTrajectoryDestinationRequest::getIdType()const
{
	return idType_;
}

void PredictTrajectoryDestinationRequest::setIdType(const std::string& idType)
{
	idType_ = idType;
	setBodyParameter("IdType", idType);
}

int PredictTrajectoryDestinationRequest::getPredictTimeSpan()const
{
	return predictTimeSpan_;
}

void PredictTrajectoryDestinationRequest::setPredictTimeSpan(int predictTimeSpan)
{
	predictTimeSpan_ = predictTimeSpan;
	setBodyParameter("PredictTimeSpan", std::to_string(predictTimeSpan));
}

