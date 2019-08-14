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

#include <alibabacloud/cloudwf/model/GetSidsAndGids4BidRequest.h>

using AlibabaCloud::Cloudwf::Model::GetSidsAndGids4BidRequest;

GetSidsAndGids4BidRequest::GetSidsAndGids4BidRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "GetSidsAndGids4Bid")
{}

GetSidsAndGids4BidRequest::~GetSidsAndGids4BidRequest()
{}

int GetSidsAndGids4BidRequest::getQueryType()const
{
	return queryType_;
}

void GetSidsAndGids4BidRequest::setQueryType(int queryType)
{
	queryType_ = queryType;
	setCoreParameter("QueryType", std::to_string(queryType));
}

std::string GetSidsAndGids4BidRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetSidsAndGids4BidRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

long GetSidsAndGids4BidRequest::getQueryId()const
{
	return queryId_;
}

void GetSidsAndGids4BidRequest::setQueryId(long queryId)
{
	queryId_ = queryId;
	setCoreParameter("QueryId", std::to_string(queryId));
}

