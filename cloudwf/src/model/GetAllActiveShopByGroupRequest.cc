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

#include <alibabacloud/cloudwf/model/GetAllActiveShopByGroupRequest.h>

using AlibabaCloud::Cloudwf::Model::GetAllActiveShopByGroupRequest;

GetAllActiveShopByGroupRequest::GetAllActiveShopByGroupRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "GetAllActiveShopByGroup")
{}

GetAllActiveShopByGroupRequest::~GetAllActiveShopByGroupRequest()
{}

std::vector<long> GetAllActiveShopByGroupRequest::getGids()const
{
	return gids_;
}

void GetAllActiveShopByGroupRequest::setGids(const std::vector<long>& gids)
{
	gids_ = gids;
	for(int i = 0; i!= gids.size(); i++)
		setCoreParameter("Gids."+ std::to_string(i), std::to_string(gids.at(i)));
}

long GetAllActiveShopByGroupRequest::getBid()const
{
	return bid_;
}

void GetAllActiveShopByGroupRequest::setBid(long bid)
{
	bid_ = bid;
	setCoreParameter("Bid", std::to_string(bid));
}

std::string GetAllActiveShopByGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetAllActiveShopByGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

