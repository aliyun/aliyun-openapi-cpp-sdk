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

#include <alibabacloud/sas/model/CreateSasOrderRequest.h>

using AlibabaCloud::Sas::Model::CreateSasOrderRequest;

CreateSasOrderRequest::CreateSasOrderRequest() :
	RpcServiceRequest("sas", "2018-12-03", "CreateSasOrder")
{
	setMethod(HttpRequest::Method::Post);
}

CreateSasOrderRequest::~CreateSasOrderRequest()
{}

std::string CreateSasOrderRequest::getSasWebguardBoolean()const
{
	return sasWebguardBoolean_;
}

void CreateSasOrderRequest::setSasWebguardBoolean(const std::string& sasWebguardBoolean)
{
	sasWebguardBoolean_ = sasWebguardBoolean;
	setParameter("SasWebguardBoolean", sasWebguardBoolean);
}

bool CreateSasOrderRequest::getAutoUseCoupon()const
{
	return autoUseCoupon_;
}

void CreateSasOrderRequest::setAutoUseCoupon(bool autoUseCoupon)
{
	autoUseCoupon_ = autoUseCoupon;
	setParameter("AutoUseCoupon", autoUseCoupon ? "true" : "false");
}

std::string CreateSasOrderRequest::getSpec()const
{
	return spec_;
}

void CreateSasOrderRequest::setSpec(const std::string& spec)
{
	spec_ = spec;
	setParameter("Spec", spec);
}

std::string CreateSasOrderRequest::getInstanceCount()const
{
	return instanceCount_;
}

void CreateSasOrderRequest::setInstanceCount(const std::string& instanceCount)
{
	instanceCount_ = instanceCount;
	setParameter("InstanceCount", instanceCount);
}

std::string CreateSasOrderRequest::getSasWebguardOrderNum()const
{
	return sasWebguardOrderNum_;
}

void CreateSasOrderRequest::setSasWebguardOrderNum(const std::string& sasWebguardOrderNum)
{
	sasWebguardOrderNum_ = sasWebguardOrderNum;
	setParameter("SasWebguardOrderNum", sasWebguardOrderNum);
}

std::string CreateSasOrderRequest::getContainerImageScan()const
{
	return containerImageScan_;
}

void CreateSasOrderRequest::setContainerImageScan(const std::string& containerImageScan)
{
	containerImageScan_ = containerImageScan;
	setParameter("ContainerImageScan", containerImageScan);
}

int CreateSasOrderRequest::getAutoRenewPeriod()const
{
	return autoRenewPeriod_;
}

void CreateSasOrderRequest::setAutoRenewPeriod(int autoRenewPeriod)
{
	autoRenewPeriod_ = autoRenewPeriod;
	setParameter("AutoRenewPeriod", std::to_string(autoRenewPeriod));
}

int CreateSasOrderRequest::getPeriod()const
{
	return period_;
}

void CreateSasOrderRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

bool CreateSasOrderRequest::getAutoPay()const
{
	return autoPay_;
}

void CreateSasOrderRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setParameter("AutoPay", autoPay ? "true" : "false");
}

std::string CreateSasOrderRequest::getSasAntiRansomware()const
{
	return sasAntiRansomware_;
}

void CreateSasOrderRequest::setSasAntiRansomware(const std::string& sasAntiRansomware)
{
	sasAntiRansomware_ = sasAntiRansomware;
	setParameter("SasAntiRansomware", sasAntiRansomware);
}

std::string CreateSasOrderRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void CreateSasOrderRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setParameter("PeriodUnit", periodUnit);
}

std::string CreateSasOrderRequest::getSasSc()const
{
	return sasSc_;
}

void CreateSasOrderRequest::setSasSc(const std::string& sasSc)
{
	sasSc_ = sasSc;
	setParameter("SasSc", sasSc);
}

std::string CreateSasOrderRequest::getVcore()const
{
	return vcore_;
}

void CreateSasOrderRequest::setVcore(const std::string& vcore)
{
	vcore_ = vcore;
	setParameter("Vcore", vcore);
}

std::string CreateSasOrderRequest::getSasSlsStorage()const
{
	return sasSlsStorage_;
}

void CreateSasOrderRequest::setSasSlsStorage(const std::string& sasSlsStorage)
{
	sasSlsStorage_ = sasSlsStorage;
	setParameter("SasSlsStorage", sasSlsStorage);
}

std::string CreateSasOrderRequest::getSasProductService()const
{
	return sasProductService_;
}

void CreateSasOrderRequest::setSasProductService(const std::string& sasProductService)
{
	sasProductService_ = sasProductService;
	setParameter("SasProductService", sasProductService);
}

