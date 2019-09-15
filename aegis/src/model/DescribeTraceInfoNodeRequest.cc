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

#include <alibabacloud/aegis/model/DescribeTraceInfoNodeRequest.h>

using AlibabaCloud::Aegis::Model::DescribeTraceInfoNodeRequest;

DescribeTraceInfoNodeRequest::DescribeTraceInfoNodeRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeTraceInfoNode")
{}

DescribeTraceInfoNodeRequest::~DescribeTraceInfoNodeRequest()
{}

std::string DescribeTraceInfoNodeRequest::getVertexId()const
{
	return vertexId_;
}

void DescribeTraceInfoNodeRequest::setVertexId(const std::string& vertexId)
{
	vertexId_ = vertexId;
	setCoreParameter("VertexId", vertexId);
}

std::string DescribeTraceInfoNodeRequest::getType()const
{
	return type_;
}

void DescribeTraceInfoNodeRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string DescribeTraceInfoNodeRequest::getUuid()const
{
	return uuid_;
}

void DescribeTraceInfoNodeRequest::setUuid(const std::string& uuid)
{
	uuid_ = uuid;
	setCoreParameter("Uuid", uuid);
}

std::string DescribeTraceInfoNodeRequest::getEventName()const
{
	return eventName_;
}

void DescribeTraceInfoNodeRequest::setEventName(const std::string& eventName)
{
	eventName_ = eventName;
	setCoreParameter("EventName", eventName);
}

std::string DescribeTraceInfoNodeRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeTraceInfoNodeRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeTraceInfoNodeRequest::getFrom()const
{
	return from_;
}

void DescribeTraceInfoNodeRequest::setFrom(const std::string& from)
{
	from_ = from;
	setCoreParameter("From", from);
}

std::string DescribeTraceInfoNodeRequest::getLang()const
{
	return lang_;
}

void DescribeTraceInfoNodeRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

long DescribeTraceInfoNodeRequest::getIncidentTime()const
{
	return incidentTime_;
}

void DescribeTraceInfoNodeRequest::setIncidentTime(long incidentTime)
{
	incidentTime_ = incidentTime;
	setCoreParameter("IncidentTime", std::to_string(incidentTime));
}

