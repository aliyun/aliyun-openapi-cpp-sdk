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

#include <alibabacloud/csb/model/FindBrokerSLOHisListRequest.h>

using AlibabaCloud::CSB::Model::FindBrokerSLOHisListRequest;

FindBrokerSLOHisListRequest::FindBrokerSLOHisListRequest() :
	RpcServiceRequest("csb", "2017-11-18", "FindBrokerSLOHisList")
{
	setMethod(HttpRequest::Method::Get);
}

FindBrokerSLOHisListRequest::~FindBrokerSLOHisListRequest()
{}

long FindBrokerSLOHisListRequest::getCsbId()const
{
	return csbId_;
}

void FindBrokerSLOHisListRequest::setCsbId(long csbId)
{
	csbId_ = csbId;
	setParameter("CsbId", std::to_string(csbId));
}

std::string FindBrokerSLOHisListRequest::getBeginDdHHmm()const
{
	return beginDdHHmm_;
}

void FindBrokerSLOHisListRequest::setBeginDdHHmm(const std::string& beginDdHHmm)
{
	beginDdHHmm_ = beginDdHHmm;
	setParameter("BeginDdHHmm", beginDdHHmm);
}

std::string FindBrokerSLOHisListRequest::getEndDdHHmm()const
{
	return endDdHHmm_;
}

void FindBrokerSLOHisListRequest::setEndDdHHmm(const std::string& endDdHHmm)
{
	endDdHHmm_ = endDdHHmm;
	setParameter("EndDdHHmm", endDdHHmm);
}

