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

#include <alibabacloud/vcs/model/AddMonitorRequest.h>

using AlibabaCloud::Vcs::Model::AddMonitorRequest;

AddMonitorRequest::AddMonitorRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "AddMonitor")
{
	setMethod(HttpRequest::Method::Post);
}

AddMonitorRequest::~AddMonitorRequest()
{}

std::string AddMonitorRequest::getMonitorType()const
{
	return monitorType_;
}

void AddMonitorRequest::setMonitorType(const std::string& monitorType)
{
	monitorType_ = monitorType;
	setBodyParameter("MonitorType", monitorType);
}

std::string AddMonitorRequest::getCorpId()const
{
	return corpId_;
}

void AddMonitorRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string AddMonitorRequest::getDescription()const
{
	return description_;
}

void AddMonitorRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

std::string AddMonitorRequest::getNotifierAppSecret()const
{
	return notifierAppSecret_;
}

void AddMonitorRequest::setNotifierAppSecret(const std::string& notifierAppSecret)
{
	notifierAppSecret_ = notifierAppSecret;
	setBodyParameter("NotifierAppSecret", notifierAppSecret);
}

std::string AddMonitorRequest::getNotifierExtendValues()const
{
	return notifierExtendValues_;
}

void AddMonitorRequest::setNotifierExtendValues(const std::string& notifierExtendValues)
{
	notifierExtendValues_ = notifierExtendValues;
	setBodyParameter("NotifierExtendValues", notifierExtendValues);
}

std::string AddMonitorRequest::getNotifierUrl()const
{
	return notifierUrl_;
}

void AddMonitorRequest::setNotifierUrl(const std::string& notifierUrl)
{
	notifierUrl_ = notifierUrl;
	setBodyParameter("NotifierUrl", notifierUrl);
}

std::string AddMonitorRequest::getNotifierType()const
{
	return notifierType_;
}

void AddMonitorRequest::setNotifierType(const std::string& notifierType)
{
	notifierType_ = notifierType;
	setBodyParameter("NotifierType", notifierType);
}

int AddMonitorRequest::getBatchIndicator()const
{
	return batchIndicator_;
}

void AddMonitorRequest::setBatchIndicator(int batchIndicator)
{
	batchIndicator_ = batchIndicator;
	setBodyParameter("BatchIndicator", std::to_string(batchIndicator));
}

int AddMonitorRequest::getNotifierTimeOut()const
{
	return notifierTimeOut_;
}

void AddMonitorRequest::setNotifierTimeOut(int notifierTimeOut)
{
	notifierTimeOut_ = notifierTimeOut;
	setBodyParameter("NotifierTimeOut", std::to_string(notifierTimeOut));
}

std::string AddMonitorRequest::getAlgorithmVendor()const
{
	return algorithmVendor_;
}

void AddMonitorRequest::setAlgorithmVendor(const std::string& algorithmVendor)
{
	algorithmVendor_ = algorithmVendor;
	setBodyParameter("AlgorithmVendor", algorithmVendor);
}

