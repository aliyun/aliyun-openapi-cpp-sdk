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

#include <alibabacloud/aegis/model/DescribeTraceInfoDetailRequest.h>

using AlibabaCloud::Aegis::Model::DescribeTraceInfoDetailRequest;

DescribeTraceInfoDetailRequest::DescribeTraceInfoDetailRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeTraceInfoDetail")
{}

DescribeTraceInfoDetailRequest::~DescribeTraceInfoDetailRequest()
{}

std::string DescribeTraceInfoDetailRequest::getVertexId()const
{
	return vertexId_;
}

void DescribeTraceInfoDetailRequest::setVertexId(const std::string& vertexId)
{
	vertexId_ = vertexId;
	setCoreParameter("VertexId", vertexId);
}

std::string DescribeTraceInfoDetailRequest::getType()const
{
	return type_;
}

void DescribeTraceInfoDetailRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string DescribeTraceInfoDetailRequest::getUuid()const
{
	return uuid_;
}

void DescribeTraceInfoDetailRequest::setUuid(const std::string& uuid)
{
	uuid_ = uuid;
	setCoreParameter("Uuid", uuid);
}

std::string DescribeTraceInfoDetailRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeTraceInfoDetailRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeTraceInfoDetailRequest::getFrom()const
{
	return from_;
}

void DescribeTraceInfoDetailRequest::setFrom(const std::string& from)
{
	from_ = from;
	setCoreParameter("From", from);
}

std::string DescribeTraceInfoDetailRequest::getLang()const
{
	return lang_;
}

void DescribeTraceInfoDetailRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

long DescribeTraceInfoDetailRequest::getIncidentTime()const
{
	return incidentTime_;
}

void DescribeTraceInfoDetailRequest::setIncidentTime(long incidentTime)
{
	incidentTime_ = incidentTime;
	setCoreParameter("IncidentTime", std::to_string(incidentTime));
}

