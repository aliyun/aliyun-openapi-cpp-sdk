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

#include <alibabacloud/companyreg/model/AcceptPartnerNotificationRequest.h>

using AlibabaCloud::Companyreg::Model::AcceptPartnerNotificationRequest;

AcceptPartnerNotificationRequest::AcceptPartnerNotificationRequest() :
	RpcServiceRequest("companyreg", "2019-05-08", "AcceptPartnerNotification")
{
	setMethod(HttpRequest::Method::Post);
}

AcceptPartnerNotificationRequest::~AcceptPartnerNotificationRequest()
{}

std::string AcceptPartnerNotificationRequest::getCertificateEndTime()const
{
	return certificateEndTime_;
}

void AcceptPartnerNotificationRequest::setCertificateEndTime(const std::string& certificateEndTime)
{
	certificateEndTime_ = certificateEndTime;
	setParameter("CertificateEndTime", certificateEndTime);
}

int AcceptPartnerNotificationRequest::getApplicationStatus()const
{
	return applicationStatus_;
}

void AcceptPartnerNotificationRequest::setApplicationStatus(int applicationStatus)
{
	applicationStatus_ = applicationStatus;
	setParameter("ApplicationStatus", std::to_string(applicationStatus));
}

std::string AcceptPartnerNotificationRequest::getCertificateNumber()const
{
	return certificateNumber_;
}

void AcceptPartnerNotificationRequest::setCertificateNumber(const std::string& certificateNumber)
{
	certificateNumber_ = certificateNumber;
	setParameter("CertificateNumber", certificateNumber);
}

std::string AcceptPartnerNotificationRequest::getOfficialFileURL()const
{
	return officialFileURL_;
}

void AcceptPartnerNotificationRequest::setOfficialFileURL(const std::string& officialFileURL)
{
	officialFileURL_ = officialFileURL;
	setParameter("OfficialFileURL", officialFileURL);
}

std::string AcceptPartnerNotificationRequest::getCertificateStartTime()const
{
	return certificateStartTime_;
}

void AcceptPartnerNotificationRequest::setCertificateStartTime(const std::string& certificateStartTime)
{
	certificateStartTime_ = certificateStartTime;
	setParameter("CertificateStartTime", certificateStartTime);
}

std::string AcceptPartnerNotificationRequest::getBizId()const
{
	return bizId_;
}

void AcceptPartnerNotificationRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

