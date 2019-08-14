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

#include <alibabacloud/cloudwf/model/QueryRenewPriceRequest.h>

using AlibabaCloud::Cloudwf::Model::QueryRenewPriceRequest;

QueryRenewPriceRequest::QueryRenewPriceRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "QueryRenewPrice")
{}

QueryRenewPriceRequest::~QueryRenewPriceRequest()
{}

int QueryRenewPriceRequest::getTimeCycleNum()const
{
	return timeCycleNum_;
}

void QueryRenewPriceRequest::setTimeCycleNum(int timeCycleNum)
{
	timeCycleNum_ = timeCycleNum;
	setCoreParameter("TimeCycleNum", std::to_string(timeCycleNum));
}

std::vector<std::string> QueryRenewPriceRequest::getApList()const
{
	return apList_;
}

void QueryRenewPriceRequest::setApList(const std::vector<std::string>& apList)
{
	apList_ = apList;
	for(int i = 0; i!= apList.size(); i++)
		setCoreParameter("ApList."+ std::to_string(i), apList.at(i));
}

std::string QueryRenewPriceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryRenewPriceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

