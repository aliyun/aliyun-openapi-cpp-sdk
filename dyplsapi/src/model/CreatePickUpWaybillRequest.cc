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

#include <alibabacloud/dyplsapi/model/CreatePickUpWaybillRequest.h>

using AlibabaCloud::Dyplsapi::Model::CreatePickUpWaybillRequest;

CreatePickUpWaybillRequest::CreatePickUpWaybillRequest() :
	RpcServiceRequest("dyplsapi", "2017-05-25", "CreatePickUpWaybill")
{
	setMethod(HttpRequest::Method::Post);
}

CreatePickUpWaybillRequest::~CreatePickUpWaybillRequest()
{}

std::string CreatePickUpWaybillRequest::getConsigneeName()const
{
	return consigneeName_;
}

void CreatePickUpWaybillRequest::setConsigneeName(const std::string& consigneeName)
{
	consigneeName_ = consigneeName;
	setParameter("ConsigneeName", consigneeName);
}

std::string CreatePickUpWaybillRequest::getOrderChannels()const
{
	return orderChannels_;
}

void CreatePickUpWaybillRequest::setOrderChannels(const std::string& orderChannels)
{
	orderChannels_ = orderChannels;
	setParameter("OrderChannels", orderChannels);
}

Struct CreatePickUpWaybillRequest::getSendAddress()const
{
	return sendAddress_;
}

void CreatePickUpWaybillRequest::setSendAddress(const Struct& sendAddress)
{
	sendAddress_ = sendAddress;
	setParameter("SendAddress", std::to_string(sendAddress));
}

std::string CreatePickUpWaybillRequest::getOuterOrderCode()const
{
	return outerOrderCode_;
}

void CreatePickUpWaybillRequest::setOuterOrderCode(const std::string& outerOrderCode)
{
	outerOrderCode_ = outerOrderCode;
	setParameter("OuterOrderCode", outerOrderCode);
}

std::string CreatePickUpWaybillRequest::getRemark()const
{
	return remark_;
}

void CreatePickUpWaybillRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setParameter("Remark", remark);
}

std::string CreatePickUpWaybillRequest::getCpCode()const
{
	return cpCode_;
}

void CreatePickUpWaybillRequest::setCpCode(const std::string& cpCode)
{
	cpCode_ = cpCode;
	setParameter("CpCode", cpCode);
}

std::string CreatePickUpWaybillRequest::getSendMobile()const
{
	return sendMobile_;
}

void CreatePickUpWaybillRequest::setSendMobile(const std::string& sendMobile)
{
	sendMobile_ = sendMobile;
	setParameter("SendMobile", sendMobile);
}

std::string CreatePickUpWaybillRequest::getConsigneeMobile()const
{
	return consigneeMobile_;
}

void CreatePickUpWaybillRequest::setConsigneeMobile(const std::string& consigneeMobile)
{
	consigneeMobile_ = consigneeMobile;
	setParameter("ConsigneeMobile", consigneeMobile);
}

std::string CreatePickUpWaybillRequest::getContentType()const
{
	return contentType_;
}

void CreatePickUpWaybillRequest::setContentType(const std::string& contentType)
{
	contentType_ = contentType;
	setHeader("ContentType", contentType);
}

Struct CreatePickUpWaybillRequest::getConsigneeAddress()const
{
	return consigneeAddress_;
}

void CreatePickUpWaybillRequest::setConsigneeAddress(const Struct& consigneeAddress)
{
	consigneeAddress_ = consigneeAddress;
	setParameter("ConsigneeAddress", std::to_string(consigneeAddress));
}

std::string CreatePickUpWaybillRequest::getSendPhone()const
{
	return sendPhone_;
}

void CreatePickUpWaybillRequest::setSendPhone(const std::string& sendPhone)
{
	sendPhone_ = sendPhone;
	setParameter("SendPhone", sendPhone);
}

Array CreatePickUpWaybillRequest::getGoodsInfos()const
{
	return goodsInfos_;
}

void CreatePickUpWaybillRequest::setGoodsInfos(const Array& goodsInfos)
{
	goodsInfos_ = goodsInfos;
	setParameter("GoodsInfos", std::to_string(goodsInfos));
}

std::string CreatePickUpWaybillRequest::getSendName()const
{
	return sendName_;
}

void CreatePickUpWaybillRequest::setSendName(const std::string& sendName)
{
	sendName_ = sendName;
	setParameter("SendName", sendName);
}

std::string CreatePickUpWaybillRequest::getConsigneePhone()const
{
	return consigneePhone_;
}

void CreatePickUpWaybillRequest::setConsigneePhone(const std::string& consigneePhone)
{
	consigneePhone_ = consigneePhone;
	setParameter("ConsigneePhone", consigneePhone);
}

