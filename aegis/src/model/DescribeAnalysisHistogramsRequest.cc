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

#include <alibabacloud/aegis/model/DescribeAnalysisHistogramsRequest.h>

using AlibabaCloud::Aegis::Model::DescribeAnalysisHistogramsRequest;

DescribeAnalysisHistogramsRequest::DescribeAnalysisHistogramsRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeAnalysisHistograms")
{}

DescribeAnalysisHistogramsRequest::~DescribeAnalysisHistogramsRequest()
{}

std::string DescribeAnalysisHistogramsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeAnalysisHistogramsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

std::string DescribeAnalysisHistogramsRequest::getQuery()const
{
	return query_;
}

void DescribeAnalysisHistogramsRequest::setQuery(const std::string& query)
{
	query_ = query;
	setCoreParameter("Query", std::to_string(query));
}

int DescribeAnalysisHistogramsRequest::getFrom()const
{
	return from_;
}

void DescribeAnalysisHistogramsRequest::setFrom(int from)
{
	from_ = from;
	setCoreParameter("From", from);
}

int DescribeAnalysisHistogramsRequest::getTo()const
{
	return to_;
}

void DescribeAnalysisHistogramsRequest::setTo(int to)
{
	to_ = to;
	setCoreParameter("To", to);
}

