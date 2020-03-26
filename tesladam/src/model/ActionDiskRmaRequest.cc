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

#include <alibabacloud/tesladam/model/ActionDiskRmaRequest.h>

using AlibabaCloud::TeslaDam::Model::ActionDiskRmaRequest;

ActionDiskRmaRequest::ActionDiskRmaRequest() :
	RpcServiceRequest("tesladam", "2018-01-18", "ActionDiskRma")
{
	setMethod(HttpRequest::Method::Get);
}

ActionDiskRmaRequest::~ActionDiskRmaRequest()
{}

std::string ActionDiskRmaRequest::getDiskName()const
{
	return diskName_;
}

void ActionDiskRmaRequest::setDiskName(const std::string& diskName)
{
	diskName_ = diskName;
	setParameter("DiskName", diskName);
}

std::string ActionDiskRmaRequest::getExecutionId()const
{
	return executionId_;
}

void ActionDiskRmaRequest::setExecutionId(const std::string& executionId)
{
	executionId_ = executionId;
	setParameter("ExecutionId", executionId);
}

std::string ActionDiskRmaRequest::getDiskSlot()const
{
	return diskSlot_;
}

void ActionDiskRmaRequest::setDiskSlot(const std::string& diskSlot)
{
	diskSlot_ = diskSlot;
	setParameter("DiskSlot", diskSlot);
}

std::string ActionDiskRmaRequest::getHostname()const
{
	return hostname_;
}

void ActionDiskRmaRequest::setHostname(const std::string& hostname)
{
	hostname_ = hostname;
	setParameter("Hostname", hostname);
}

std::string ActionDiskRmaRequest::getDiskMount()const
{
	return diskMount_;
}

void ActionDiskRmaRequest::setDiskMount(const std::string& diskMount)
{
	diskMount_ = diskMount;
	setParameter("DiskMount", diskMount);
}

std::string ActionDiskRmaRequest::getDiskReason()const
{
	return diskReason_;
}

void ActionDiskRmaRequest::setDiskReason(const std::string& diskReason)
{
	diskReason_ = diskReason;
	setParameter("DiskReason", diskReason);
}

std::string ActionDiskRmaRequest::getDiskSn()const
{
	return diskSn_;
}

void ActionDiskRmaRequest::setDiskSn(const std::string& diskSn)
{
	diskSn_ = diskSn;
	setParameter("DiskSn", diskSn);
}

