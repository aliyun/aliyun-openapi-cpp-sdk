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

#include <alibabacloud/cloudwf/model/GetLatestApStatisticRequest.h>

using AlibabaCloud::Cloudwf::Model::GetLatestApStatisticRequest;

GetLatestApStatisticRequest::GetLatestApStatisticRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "GetLatestApStatistic")
{
	setMethod(HttpRequest::Method::Post);
}

GetLatestApStatisticRequest::~GetLatestApStatisticRequest()
{}

long GetLatestApStatisticRequest::getApgroupId()const
{
	return apgroupId_;
}

void GetLatestApStatisticRequest::setApgroupId(long apgroupId)
{
	apgroupId_ = apgroupId;
	setParameter("ApgroupId", std::to_string(apgroupId));
}

std::string GetLatestApStatisticRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetLatestApStatisticRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

