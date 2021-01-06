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

#include <alibabacloud/cdrs/model/UpdateCdrsMonitorRequest.h>

using AlibabaCloud::CDRS::Model::UpdateCdrsMonitorRequest;

UpdateCdrsMonitorRequest::UpdateCdrsMonitorRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "UpdateCdrsMonitor")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateCdrsMonitorRequest::~UpdateCdrsMonitorRequest()
{}

std::string UpdateCdrsMonitorRequest::getCorpId()const
{
	return corpId_;
}

void UpdateCdrsMonitorRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string UpdateCdrsMonitorRequest::getDescription()const
{
	return description_;
}

void UpdateCdrsMonitorRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

std::string UpdateCdrsMonitorRequest::getRuleName()const
{
	return ruleName_;
}

void UpdateCdrsMonitorRequest::setRuleName(const std::string& ruleName)
{
	ruleName_ = ruleName;
	setBodyParameter("RuleName", ruleName);
}

std::string UpdateCdrsMonitorRequest::getPicOperateType()const
{
	return picOperateType_;
}

void UpdateCdrsMonitorRequest::setPicOperateType(const std::string& picOperateType)
{
	picOperateType_ = picOperateType;
	setBodyParameter("PicOperateType", picOperateType);
}

std::string UpdateCdrsMonitorRequest::getAttributeName()const
{
	return attributeName_;
}

void UpdateCdrsMonitorRequest::setAttributeName(const std::string& attributeName)
{
	attributeName_ = attributeName;
	setBodyParameter("AttributeName", attributeName);
}

std::string UpdateCdrsMonitorRequest::getAttributeOperateType()const
{
	return attributeOperateType_;
}

void UpdateCdrsMonitorRequest::setAttributeOperateType(const std::string& attributeOperateType)
{
	attributeOperateType_ = attributeOperateType;
	setBodyParameter("AttributeOperateType", attributeOperateType);
}

std::string UpdateCdrsMonitorRequest::getRuleExpression()const
{
	return ruleExpression_;
}

void UpdateCdrsMonitorRequest::setRuleExpression(const std::string& ruleExpression)
{
	ruleExpression_ = ruleExpression;
	setBodyParameter("RuleExpression", ruleExpression);
}

int UpdateCdrsMonitorRequest::getNotifierTimeOut()const
{
	return notifierTimeOut_;
}

void UpdateCdrsMonitorRequest::setNotifierTimeOut(int notifierTimeOut)
{
	notifierTimeOut_ = notifierTimeOut;
	setBodyParameter("NotifierTimeOut", std::to_string(notifierTimeOut));
}

std::string UpdateCdrsMonitorRequest::getTaskId()const
{
	return taskId_;
}

void UpdateCdrsMonitorRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setBodyParameter("TaskId", taskId);
}

std::string UpdateCdrsMonitorRequest::getDeviceOperateType()const
{
	return deviceOperateType_;
}

void UpdateCdrsMonitorRequest::setDeviceOperateType(const std::string& deviceOperateType)
{
	deviceOperateType_ = deviceOperateType;
	setBodyParameter("DeviceOperateType", deviceOperateType);
}

std::string UpdateCdrsMonitorRequest::getPicList()const
{
	return picList_;
}

void UpdateCdrsMonitorRequest::setPicList(const std::string& picList)
{
	picList_ = picList;
	setBodyParameter("PicList", picList);
}

std::string UpdateCdrsMonitorRequest::getAttributeValueList()const
{
	return attributeValueList_;
}

void UpdateCdrsMonitorRequest::setAttributeValueList(const std::string& attributeValueList)
{
	attributeValueList_ = attributeValueList;
	setBodyParameter("AttributeValueList", attributeValueList);
}

std::string UpdateCdrsMonitorRequest::getNotifierAppSecret()const
{
	return notifierAppSecret_;
}

void UpdateCdrsMonitorRequest::setNotifierAppSecret(const std::string& notifierAppSecret)
{
	notifierAppSecret_ = notifierAppSecret;
	setBodyParameter("NotifierAppSecret", notifierAppSecret);
}

std::string UpdateCdrsMonitorRequest::getNotifierExtendValues()const
{
	return notifierExtendValues_;
}

void UpdateCdrsMonitorRequest::setNotifierExtendValues(const std::string& notifierExtendValues)
{
	notifierExtendValues_ = notifierExtendValues;
	setBodyParameter("NotifierExtendValues", notifierExtendValues);
}

std::string UpdateCdrsMonitorRequest::getDeviceList()const
{
	return deviceList_;
}

void UpdateCdrsMonitorRequest::setDeviceList(const std::string& deviceList)
{
	deviceList_ = deviceList;
	setBodyParameter("DeviceList", deviceList);
}

std::string UpdateCdrsMonitorRequest::getNotifierUrl()const
{
	return notifierUrl_;
}

void UpdateCdrsMonitorRequest::setNotifierUrl(const std::string& notifierUrl)
{
	notifierUrl_ = notifierUrl;
	setBodyParameter("NotifierUrl", notifierUrl);
}

std::string UpdateCdrsMonitorRequest::getNotifierType()const
{
	return notifierType_;
}

void UpdateCdrsMonitorRequest::setNotifierType(const std::string& notifierType)
{
	notifierType_ = notifierType;
	setBodyParameter("NotifierType", notifierType);
}

std::string UpdateCdrsMonitorRequest::getAlgorithmVendor()const
{
	return algorithmVendor_;
}

void UpdateCdrsMonitorRequest::setAlgorithmVendor(const std::string& algorithmVendor)
{
	algorithmVendor_ = algorithmVendor;
	setBodyParameter("AlgorithmVendor", algorithmVendor);
}

