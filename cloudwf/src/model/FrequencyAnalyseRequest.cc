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

#include <alibabacloud/cloudwf/model/FrequencyAnalyseRequest.h>

using AlibabaCloud::Cloudwf::Model::FrequencyAnalyseRequest;

FrequencyAnalyseRequest::FrequencyAnalyseRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "FrequencyAnalyse")
{
	setMethod(HttpRequest::Method::Post);
}

FrequencyAnalyseRequest::~FrequencyAnalyseRequest()
{}

std::string FrequencyAnalyseRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void FrequencyAnalyseRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long FrequencyAnalyseRequest::getGsid()const
{
	return gsid_;
}

void FrequencyAnalyseRequest::setGsid(long gsid)
{
	gsid_ = gsid;
	setParameter("Gsid", std::to_string(gsid));
}

