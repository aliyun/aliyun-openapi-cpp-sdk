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

#include <alibabacloud/sas/model/CreateSimilarSecurityEventsQueryTaskRequest.h>

using AlibabaCloud::Sas::Model::CreateSimilarSecurityEventsQueryTaskRequest;

CreateSimilarSecurityEventsQueryTaskRequest::CreateSimilarSecurityEventsQueryTaskRequest() :
	RpcServiceRequest("sas", "2018-12-03", "CreateSimilarSecurityEventsQueryTask")
{
	setMethod(HttpRequest::Method::Post);
}

CreateSimilarSecurityEventsQueryTaskRequest::~CreateSimilarSecurityEventsQueryTaskRequest()
{}

long CreateSimilarSecurityEventsQueryTaskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateSimilarSecurityEventsQueryTaskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateSimilarSecurityEventsQueryTaskRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateSimilarSecurityEventsQueryTaskRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

long CreateSimilarSecurityEventsQueryTaskRequest::getSecurityEventId()const
{
	return securityEventId_;
}

void CreateSimilarSecurityEventsQueryTaskRequest::setSecurityEventId(long securityEventId)
{
	securityEventId_ = securityEventId;
	setParameter("SecurityEventId", std::to_string(securityEventId));
}

std::string CreateSimilarSecurityEventsQueryTaskRequest::getSimilarEventScenarioCode()const
{
	return similarEventScenarioCode_;
}

void CreateSimilarSecurityEventsQueryTaskRequest::setSimilarEventScenarioCode(const std::string& similarEventScenarioCode)
{
	similarEventScenarioCode_ = similarEventScenarioCode;
	setParameter("SimilarEventScenarioCode", similarEventScenarioCode);
}

