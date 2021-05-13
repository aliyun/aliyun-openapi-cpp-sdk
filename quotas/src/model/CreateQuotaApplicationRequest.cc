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

#include <alibabacloud/quotas/model/CreateQuotaApplicationRequest.h>

using AlibabaCloud::Quotas::Model::CreateQuotaApplicationRequest;

CreateQuotaApplicationRequest::CreateQuotaApplicationRequest() :
	RpcServiceRequest("quotas", "2020-05-10", "CreateQuotaApplication")
{
	setMethod(HttpRequest::Method::Post);
}

CreateQuotaApplicationRequest::~CreateQuotaApplicationRequest()
{}

std::string CreateQuotaApplicationRequest::getReason()const
{
	return reason_;
}

void CreateQuotaApplicationRequest::setReason(const std::string& reason)
{
	reason_ = reason;
	setBodyParameter("Reason", reason);
}

std::string CreateQuotaApplicationRequest::getProductCode()const
{
	return productCode_;
}

void CreateQuotaApplicationRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setBodyParameter("ProductCode", productCode);
}

std::string CreateQuotaApplicationRequest::getQuotaActionCode()const
{
	return quotaActionCode_;
}

void CreateQuotaApplicationRequest::setQuotaActionCode(const std::string& quotaActionCode)
{
	quotaActionCode_ = quotaActionCode;
	setBodyParameter("QuotaActionCode", quotaActionCode);
}

float CreateQuotaApplicationRequest::getDesireValue()const
{
	return desireValue_;
}

void CreateQuotaApplicationRequest::setDesireValue(float desireValue)
{
	desireValue_ = desireValue;
	setBodyParameter("DesireValue", std::to_string(desireValue));
}

std::string CreateQuotaApplicationRequest::getQuotaCategory()const
{
	return quotaCategory_;
}

void CreateQuotaApplicationRequest::setQuotaCategory(const std::string& quotaCategory)
{
	quotaCategory_ = quotaCategory;
	setBodyParameter("QuotaCategory", quotaCategory);
}

int CreateQuotaApplicationRequest::getNoticeType()const
{
	return noticeType_;
}

void CreateQuotaApplicationRequest::setNoticeType(int noticeType)
{
	noticeType_ = noticeType;
	setBodyParameter("NoticeType", std::to_string(noticeType));
}

std::string CreateQuotaApplicationRequest::getAuditMode()const
{
	return auditMode_;
}

void CreateQuotaApplicationRequest::setAuditMode(const std::string& auditMode)
{
	auditMode_ = auditMode;
	setBodyParameter("AuditMode", auditMode);
}

std::vector<CreateQuotaApplicationRequest::Dimensions> CreateQuotaApplicationRequest::getDimensions()const
{
	return dimensions_;
}

void CreateQuotaApplicationRequest::setDimensions(const std::vector<Dimensions>& dimensions)
{
	dimensions_ = dimensions;
	for(int dep1 = 0; dep1!= dimensions.size(); dep1++) {
		auto dimensionsObj = dimensions.at(dep1);
		std::string dimensionsObjStr = "Dimensions." + std::to_string(dep1 + 1);
		setParameter(dimensionsObjStr + ".Key", dimensionsObj.key);
		setParameter(dimensionsObjStr + ".Value", dimensionsObj.value);
	}
}

