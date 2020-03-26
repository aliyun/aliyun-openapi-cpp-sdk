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

#include <alibabacloud/scdn/model/SetScdnDdosInfoRequest.h>

using AlibabaCloud::Scdn::Model::SetScdnDdosInfoRequest;

SetScdnDdosInfoRequest::SetScdnDdosInfoRequest() :
	RpcServiceRequest("scdn", "2017-11-15", "SetScdnDdosInfo")
{
	setMethod(HttpRequest::Method::Get);
}

SetScdnDdosInfoRequest::~SetScdnDdosInfoRequest()
{}

long SetScdnDdosInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void SetScdnDdosInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int SetScdnDdosInfoRequest::getElasticBandwidth()const
{
	return elasticBandwidth_;
}

void SetScdnDdosInfoRequest::setElasticBandwidth(int elasticBandwidth)
{
	elasticBandwidth_ = elasticBandwidth;
	setParameter("ElasticBandwidth", std::to_string(elasticBandwidth));
}

