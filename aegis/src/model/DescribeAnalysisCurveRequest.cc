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

#include <alibabacloud/aegis/model/DescribeAnalysisCurveRequest.h>

using AlibabaCloud::Aegis::Model::DescribeAnalysisCurveRequest;

DescribeAnalysisCurveRequest::DescribeAnalysisCurveRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeAnalysisCurve")
{}

DescribeAnalysisCurveRequest::~DescribeAnalysisCurveRequest()
{}

long DescribeAnalysisCurveRequest::getStartTimeStamp()const
{
	return startTimeStamp_;
}

void DescribeAnalysisCurveRequest::setStartTimeStamp(long startTimeStamp)
{
	startTimeStamp_ = startTimeStamp;
	setCoreParameter("StartTimeStamp", std::to_string(startTimeStamp));
}

long DescribeAnalysisCurveRequest::getEndTimeStamp()const
{
	return endTimeStamp_;
}

void DescribeAnalysisCurveRequest::setEndTimeStamp(long endTimeStamp)
{
	endTimeStamp_ = endTimeStamp;
	setCoreParameter("EndTimeStamp", std::to_string(endTimeStamp));
}

std::string DescribeAnalysisCurveRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeAnalysisCurveRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

