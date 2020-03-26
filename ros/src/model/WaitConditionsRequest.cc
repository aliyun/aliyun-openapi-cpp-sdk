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

#include <alibabacloud/ros/model/WaitConditionsRequest.h>

using AlibabaCloud::ROS::Model::WaitConditionsRequest;

WaitConditionsRequest::WaitConditionsRequest() :
	RoaServiceRequest("ros", "2015-09-01")
{
	setResourcePath("/waitcondition");
	setMethod(HttpRequest::Method::Post);
}

WaitConditionsRequest::~WaitConditionsRequest()
{}

std::string WaitConditionsRequest::getResource()const
{
	return resource_;
}

void WaitConditionsRequest::setResource(const std::string& resource)
{
	resource_ = resource;
	setParameter("Resource", resource);
}

std::string WaitConditionsRequest::getSignature()const
{
	return signature_;
}

void WaitConditionsRequest::setSignature(const std::string& signature)
{
	signature_ = signature;
	setParameter("Signature", signature);
}

std::string WaitConditionsRequest::getStackid()const
{
	return stackid_;
}

void WaitConditionsRequest::setStackid(const std::string& stackid)
{
	stackid_ = stackid;
	setParameter("Stackid", stackid);
}

std::string WaitConditionsRequest::getExpire()const
{
	return expire_;
}

void WaitConditionsRequest::setExpire(const std::string& expire)
{
	expire_ = expire;
	setParameter("Expire", expire);
}

std::string WaitConditionsRequest::getStackname()const
{
	return stackname_;
}

void WaitConditionsRequest::setStackname(const std::string& stackname)
{
	stackname_ = stackname;
	setParameter("Stackname", stackname);
}

