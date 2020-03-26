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

#include <alibabacloud/sas/model/DescribeGraph4InvestigationOnlineRequest.h>

using AlibabaCloud::Sas::Model::DescribeGraph4InvestigationOnlineRequest;

DescribeGraph4InvestigationOnlineRequest::DescribeGraph4InvestigationOnlineRequest() :
	RpcServiceRequest("sas", "2018-12-03", "DescribeGraph4InvestigationOnline")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeGraph4InvestigationOnlineRequest::~DescribeGraph4InvestigationOnlineRequest()
{}

std::string DescribeGraph4InvestigationOnlineRequest::getVertexId()const
{
	return vertexId_;
}

void DescribeGraph4InvestigationOnlineRequest::setVertexId(const std::string& vertexId)
{
	vertexId_ = vertexId;
	setParameter("VertexId", vertexId);
}

std::string DescribeGraph4InvestigationOnlineRequest::getAnomalyId()const
{
	return anomalyId_;
}

void DescribeGraph4InvestigationOnlineRequest::setAnomalyId(const std::string& anomalyId)
{
	anomalyId_ = anomalyId;
	setParameter("AnomalyId", anomalyId);
}

std::string DescribeGraph4InvestigationOnlineRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeGraph4InvestigationOnlineRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeGraph4InvestigationOnlineRequest::getAnomalyUuid()const
{
	return anomalyUuid_;
}

void DescribeGraph4InvestigationOnlineRequest::setAnomalyUuid(const std::string& anomalyUuid)
{
	anomalyUuid_ = anomalyUuid;
	setParameter("AnomalyUuid", anomalyUuid);
}

std::string DescribeGraph4InvestigationOnlineRequest::getLang()const
{
	return lang_;
}

void DescribeGraph4InvestigationOnlineRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string DescribeGraph4InvestigationOnlineRequest::getDirection()const
{
	return direction_;
}

void DescribeGraph4InvestigationOnlineRequest::setDirection(const std::string& direction)
{
	direction_ = direction;
	setParameter("Direction", direction);
}

int DescribeGraph4InvestigationOnlineRequest::getPathLength()const
{
	return pathLength_;
}

void DescribeGraph4InvestigationOnlineRequest::setPathLength(int pathLength)
{
	pathLength_ = pathLength;
	setParameter("PathLength", std::to_string(pathLength));
}

std::string DescribeGraph4InvestigationOnlineRequest::get_Namespace()const
{
	return _namespace_;
}

void DescribeGraph4InvestigationOnlineRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setParameter("_Namespace", _namespace);
}

