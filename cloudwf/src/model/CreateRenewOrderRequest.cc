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

#include <alibabacloud/cloudwf/model/CreateRenewOrderRequest.h>

using AlibabaCloud::Cloudwf::Model::CreateRenewOrderRequest;

CreateRenewOrderRequest::CreateRenewOrderRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "CreateRenewOrder")
{}

CreateRenewOrderRequest::~CreateRenewOrderRequest()
{}

int CreateRenewOrderRequest::getTimeCycleNum()const
{
	return timeCycleNum_;
}

void CreateRenewOrderRequest::setTimeCycleNum(int timeCycleNum)
{
	timeCycleNum_ = timeCycleNum;
	setCoreParameter("TimeCycleNum", std::to_string(timeCycleNum));
}

std::vector<std::string> CreateRenewOrderRequest::getApList()const
{
	return apList_;
}

void CreateRenewOrderRequest::setApList(const std::vector<std::string>& apList)
{
	apList_ = apList;
	for(int i = 0; i!= apList.size(); i++)
		setCoreParameter("ApList."+ std::to_string(i), apList.at(i));
}

std::string CreateRenewOrderRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateRenewOrderRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

