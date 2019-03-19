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

#include <alibabacloud/cloudwf/model/SetScanModeRequest.h>

using AlibabaCloud::Cloudwf::Model::SetScanModeRequest;

SetScanModeRequest::SetScanModeRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "SetScanMode")
{}

SetScanModeRequest::~SetScanModeRequest()
{}

int SetScanModeRequest::getOperation()const
{
	return operation_;
}

void SetScanModeRequest::setOperation(int operation)
{
	operation_ = operation;
	setParameter("Operation", std::to_string(operation));
}

std::vector<std::string> SetScanModeRequest::getMacList()const
{
	return macList_;
}

void SetScanModeRequest::setMacList(const std::vector<std::string>& macList)
{
	macList_ = macList;
	for(int i = 0; i!= macList.size(); i++)
		setParameter("MacList."+ std::to_string(i), macList.at(i));
}

std::string SetScanModeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetScanModeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

