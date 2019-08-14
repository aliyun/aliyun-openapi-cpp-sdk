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

#include <alibabacloud/tesladam/model/ActionDiskCheckRequest.h>

using AlibabaCloud::TeslaDam::Model::ActionDiskCheckRequest;

ActionDiskCheckRequest::ActionDiskCheckRequest() :
	RpcServiceRequest("tesladam", "2018-01-18", "ActionDiskCheck")
{}

ActionDiskCheckRequest::~ActionDiskCheckRequest()
{}

std::string ActionDiskCheckRequest::getDiskMount()const
{
	return diskMount_;
}

void ActionDiskCheckRequest::setDiskMount(const std::string& diskMount)
{
	diskMount_ = diskMount;
	setCoreParameter("DiskMount", diskMount);
}

std::string ActionDiskCheckRequest::getIp()const
{
	return ip_;
}

void ActionDiskCheckRequest::setIp(const std::string& ip)
{
	ip_ = ip;
	setCoreParameter("Ip", ip);
}

