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

#include <alibabacloud/trademark/model/SaveTaskForOfficialFileCustomRequest.h>

using AlibabaCloud::Trademark::Model::SaveTaskForOfficialFileCustomRequest;

SaveTaskForOfficialFileCustomRequest::SaveTaskForOfficialFileCustomRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "SaveTaskForOfficialFileCustom")
{
	setMethod(HttpRequest::Method::Post);
}

SaveTaskForOfficialFileCustomRequest::~SaveTaskForOfficialFileCustomRequest()
{}

long SaveTaskForOfficialFileCustomRequest::getEndAcceptTime()const
{
	return endAcceptTime_;
}

void SaveTaskForOfficialFileCustomRequest::setEndAcceptTime(long endAcceptTime)
{
	endAcceptTime_ = endAcceptTime;
	setParameter("EndAcceptTime", std::to_string(endAcceptTime));
}

long SaveTaskForOfficialFileCustomRequest::getStartAcceptTime()const
{
	return startAcceptTime_;
}

void SaveTaskForOfficialFileCustomRequest::setStartAcceptTime(long startAcceptTime)
{
	startAcceptTime_ = startAcceptTime;
	setParameter("StartAcceptTime", std::to_string(startAcceptTime));
}

