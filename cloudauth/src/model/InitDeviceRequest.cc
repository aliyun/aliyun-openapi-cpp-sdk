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

#include <alibabacloud/cloudauth/model/InitDeviceRequest.h>

using AlibabaCloud::Cloudauth::Model::InitDeviceRequest;

InitDeviceRequest::InitDeviceRequest() :
	RpcServiceRequest("cloudauth", "2019-03-07", "InitDevice")
{
	setMethod(HttpRequest::Method::Post);
}

InitDeviceRequest::~InitDeviceRequest()
{}

std::string InitDeviceRequest::getChannel()const
{
	return channel_;
}

void InitDeviceRequest::setChannel(const std::string& channel)
{
	channel_ = channel;
	setParameter("Channel", channel);
}

std::string InitDeviceRequest::getBizData()const
{
	return bizData_;
}

void InitDeviceRequest::setBizData(const std::string& bizData)
{
	bizData_ = bizData;
	setParameter("BizData", bizData);
}

std::string InitDeviceRequest::getMerchant()const
{
	return merchant_;
}

void InitDeviceRequest::setMerchant(const std::string& merchant)
{
	merchant_ = merchant;
	setParameter("Merchant", merchant);
}

std::string InitDeviceRequest::getAppVersion()const
{
	return appVersion_;
}

void InitDeviceRequest::setAppVersion(const std::string& appVersion)
{
	appVersion_ = appVersion;
	setParameter("AppVersion", appVersion);
}

std::string InitDeviceRequest::getCertifyId()const
{
	return certifyId_;
}

void InitDeviceRequest::setCertifyId(const std::string& certifyId)
{
	certifyId_ = certifyId;
	setParameter("CertifyId", certifyId);
}

std::string InitDeviceRequest::getOuterOrderNo()const
{
	return outerOrderNo_;
}

void InitDeviceRequest::setOuterOrderNo(const std::string& outerOrderNo)
{
	outerOrderNo_ = outerOrderNo;
	setParameter("OuterOrderNo", outerOrderNo);
}

std::string InitDeviceRequest::getProduceNode()const
{
	return produceNode_;
}

void InitDeviceRequest::setProduceNode(const std::string& produceNode)
{
	produceNode_ = produceNode;
	setParameter("ProduceNode", produceNode);
}

std::string InitDeviceRequest::getProductName()const
{
	return productName_;
}

void InitDeviceRequest::setProductName(const std::string& productName)
{
	productName_ = productName;
	setParameter("ProductName", productName);
}

std::string InitDeviceRequest::getCertifyPrincipal()const
{
	return certifyPrincipal_;
}

void InitDeviceRequest::setCertifyPrincipal(const std::string& certifyPrincipal)
{
	certifyPrincipal_ = certifyPrincipal;
	setParameter("CertifyPrincipal", certifyPrincipal);
}

std::string InitDeviceRequest::getMetaInfo()const
{
	return metaInfo_;
}

void InitDeviceRequest::setMetaInfo(const std::string& metaInfo)
{
	metaInfo_ = metaInfo;
	setParameter("MetaInfo", metaInfo);
}

