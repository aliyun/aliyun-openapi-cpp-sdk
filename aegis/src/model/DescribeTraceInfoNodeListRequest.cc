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

#include <alibabacloud/aegis/model/DescribeTraceInfoNodeListRequest.h>

using AlibabaCloud::Aegis::Model::DescribeTraceInfoNodeListRequest;

DescribeTraceInfoNodeListRequest::DescribeTraceInfoNodeListRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeTraceInfoNodeList")
{}

DescribeTraceInfoNodeListRequest::~DescribeTraceInfoNodeListRequest()
{}

std::string DescribeTraceInfoNodeListRequest::getVertexId()const
{
	return vertexId_;
}

void DescribeTraceInfoNodeListRequest::setVertexId(const std::string& vertexId)
{
	vertexId_ = vertexId;
	setCoreParameter("VertexId", vertexId);
}

std::string DescribeTraceInfoNodeListRequest::getType()const
{
	return type_;
}

void DescribeTraceInfoNodeListRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string DescribeTraceInfoNodeListRequest::getUuid()const
{
	return uuid_;
}

void DescribeTraceInfoNodeListRequest::setUuid(const std::string& uuid)
{
	uuid_ = uuid;
	setCoreParameter("Uuid", uuid);
}

std::string DescribeTraceInfoNodeListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeTraceInfoNodeListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeTraceInfoNodeListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeTraceInfoNodeListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeTraceInfoNodeListRequest::getFrom()const
{
	return from_;
}

void DescribeTraceInfoNodeListRequest::setFrom(const std::string& from)
{
	from_ = from;
	setCoreParameter("From", from);
}

std::string DescribeTraceInfoNodeListRequest::getLang()const
{
	return lang_;
}

void DescribeTraceInfoNodeListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

long DescribeTraceInfoNodeListRequest::getIncidentTime()const
{
	return incidentTime_;
}

void DescribeTraceInfoNodeListRequest::setIncidentTime(long incidentTime)
{
	incidentTime_ = incidentTime;
	setCoreParameter("IncidentTime", std::to_string(incidentTime));
}

std::string DescribeTraceInfoNodeListRequest::getStartType()const
{
	return startType_;
}

void DescribeTraceInfoNodeListRequest::setStartType(const std::string& startType)
{
	startType_ = startType;
	setCoreParameter("StartType", startType);
}

int DescribeTraceInfoNodeListRequest::getPage()const
{
	return page_;
}

void DescribeTraceInfoNodeListRequest::setPage(int page)
{
	page_ = page;
	setCoreParameter("Page", std::to_string(page));
}

