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

#include <alibabacloud/cdrs/model/AddCdrsMonitorRequest.h>

using AlibabaCloud::CDRS::Model::AddCdrsMonitorRequest;

AddCdrsMonitorRequest::AddCdrsMonitorRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "AddCdrsMonitor")
{
	setMethod(HttpRequest::Method::Post);
}

AddCdrsMonitorRequest::~AddCdrsMonitorRequest()
{}

std::string AddCdrsMonitorRequest::getMonitorType()const
{
	return monitorType_;
}

void AddCdrsMonitorRequest::setMonitorType(const std::string& monitorType)
{
	monitorType_ = monitorType;
	setBodyParameter("MonitorType", monitorType);
}

std::string AddCdrsMonitorRequest::getCorpId()const
{
	return corpId_;
}

void AddCdrsMonitorRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string AddCdrsMonitorRequest::getDescription()const
{
	return description_;
}

void AddCdrsMonitorRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

std::string AddCdrsMonitorRequest::getNotifierAppSecret()const
{
	return notifierAppSecret_;
}

void AddCdrsMonitorRequest::setNotifierAppSecret(const std::string& notifierAppSecret)
{
	notifierAppSecret_ = notifierAppSecret;
	setBodyParameter("NotifierAppSecret", notifierAppSecret);
}

std::string AddCdrsMonitorRequest::getNotifierExtendValues()const
{
	return notifierExtendValues_;
}

void AddCdrsMonitorRequest::setNotifierExtendValues(const std::string& notifierExtendValues)
{
	notifierExtendValues_ = notifierExtendValues;
	setBodyParameter("NotifierExtendValues", notifierExtendValues);
}

std::string AddCdrsMonitorRequest::getNotifierUrl()const
{
	return notifierUrl_;
}

void AddCdrsMonitorRequest::setNotifierUrl(const std::string& notifierUrl)
{
	notifierUrl_ = notifierUrl;
	setBodyParameter("NotifierUrl", notifierUrl);
}

std::string AddCdrsMonitorRequest::getNotifierType()const
{
	return notifierType_;
}

void AddCdrsMonitorRequest::setNotifierType(const std::string& notifierType)
{
	notifierType_ = notifierType;
	setBodyParameter("NotifierType", notifierType);
}

int AddCdrsMonitorRequest::getBatchIndicator()const
{
	return batchIndicator_;
}

void AddCdrsMonitorRequest::setBatchIndicator(int batchIndicator)
{
	batchIndicator_ = batchIndicator;
	setBodyParameter("BatchIndicator", std::to_string(batchIndicator));
}

std::string AddCdrsMonitorRequest::getBizId()const
{
	return bizId_;
}

void AddCdrsMonitorRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setBodyParameter("BizId", bizId);
}

int AddCdrsMonitorRequest::getNotifierTimeOut()const
{
	return notifierTimeOut_;
}

void AddCdrsMonitorRequest::setNotifierTimeOut(int notifierTimeOut)
{
	notifierTimeOut_ = notifierTimeOut;
	setBodyParameter("NotifierTimeOut", std::to_string(notifierTimeOut));
}

std::string AddCdrsMonitorRequest::getAlgorithmVendor()const
{
	return algorithmVendor_;
}

void AddCdrsMonitorRequest::setAlgorithmVendor(const std::string& algorithmVendor)
{
	algorithmVendor_ = algorithmVendor;
	setBodyParameter("AlgorithmVendor", algorithmVendor);
}

