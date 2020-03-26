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

#include <alibabacloud/afs/model/AnalyzeNvcRequest.h>

using AlibabaCloud::Afs::Model::AnalyzeNvcRequest;

AnalyzeNvcRequest::AnalyzeNvcRequest() :
	RpcServiceRequest("afs", "2018-01-12", "AnalyzeNvc")
{
	setMethod(HttpRequest::Method::Post);
}

AnalyzeNvcRequest::~AnalyzeNvcRequest()
{}

std::string AnalyzeNvcRequest::getData()const
{
	return data_;
}

void AnalyzeNvcRequest::setData(const std::string& data)
{
	data_ = data;
	setParameter("Data", data);
}

std::string AnalyzeNvcRequest::getSourceIp()const
{
	return sourceIp_;
}

void AnalyzeNvcRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string AnalyzeNvcRequest::getScoreJsonStr()const
{
	return scoreJsonStr_;
}

void AnalyzeNvcRequest::setScoreJsonStr(const std::string& scoreJsonStr)
{
	scoreJsonStr_ = scoreJsonStr;
	setParameter("ScoreJsonStr", scoreJsonStr);
}

