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

#include <alibabacloud/iot/model/PrintByTemplateRequest.h>

using AlibabaCloud::Iot::Model::PrintByTemplateRequest;

PrintByTemplateRequest::PrintByTemplateRequest() :
	RpcServiceRequest("iot", "2018-01-20", "PrintByTemplate")
{
	setMethod(HttpRequest::Method::Post);
}

PrintByTemplateRequest::~PrintByTemplateRequest()
{}

std::string PrintByTemplateRequest::getTemplateBizCode()const
{
	return templateBizCode_;
}

void PrintByTemplateRequest::setTemplateBizCode(const std::string& templateBizCode)
{
	templateBizCode_ = templateBizCode;
	setBodyParameter("TemplateBizCode", templateBizCode);
}

std::string PrintByTemplateRequest::getIotId()const
{
	return iotId_;
}

void PrintByTemplateRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setBodyParameter("IotId", iotId);
}

std::string PrintByTemplateRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void PrintByTemplateRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

bool PrintByTemplateRequest::getHistoryPrintTopic()const
{
	return historyPrintTopic_;
}

void PrintByTemplateRequest::setHistoryPrintTopic(bool historyPrintTopic)
{
	historyPrintTopic_ = historyPrintTopic;
	setBodyParameter("HistoryPrintTopic", historyPrintTopic ? "true" : "false");
}

std::string PrintByTemplateRequest::getProductKey()const
{
	return productKey_;
}

void PrintByTemplateRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setBodyParameter("ProductKey", productKey);
}

std::string PrintByTemplateRequest::getParamsJsonString()const
{
	return paramsJsonString_;
}

void PrintByTemplateRequest::setParamsJsonString(const std::string& paramsJsonString)
{
	paramsJsonString_ = paramsJsonString;
	setBodyParameter("ParamsJsonString", paramsJsonString);
}

std::string PrintByTemplateRequest::getApiProduct()const
{
	return apiProduct_;
}

void PrintByTemplateRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string PrintByTemplateRequest::getApiRevision()const
{
	return apiRevision_;
}

void PrintByTemplateRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string PrintByTemplateRequest::getDeviceName()const
{
	return deviceName_;
}

void PrintByTemplateRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setBodyParameter("DeviceName", deviceName);
}

