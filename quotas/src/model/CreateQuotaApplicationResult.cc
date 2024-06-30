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

#include <alibabacloud/quotas/model/CreateQuotaApplicationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quotas;
using namespace AlibabaCloud::Quotas::Model;

CreateQuotaApplicationResult::CreateQuotaApplicationResult() :
	ServiceResult()
{}

CreateQuotaApplicationResult::CreateQuotaApplicationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateQuotaApplicationResult::~CreateQuotaApplicationResult()
{}

void CreateQuotaApplicationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["DesireValue"].isNull())
		desireValue_ = std::stoi(value["DesireValue"].asString());
	if(!value["QuotaActionCode"].isNull())
		quotaActionCode_ = value["QuotaActionCode"].asString();
	if(!value["QuotaName"].isNull())
		quotaName_ = value["QuotaName"].asString();
	if(!value["ApplicationId"].isNull())
		applicationId_ = value["ApplicationId"].asString();
	if(!value["Reason"].isNull())
		reason_ = value["Reason"].asString();
	if(!value["AuditReason"].isNull())
		auditReason_ = value["AuditReason"].asString();
	if(!value["QuotaDescription"].isNull())
		quotaDescription_ = value["QuotaDescription"].asString();
	if(!value["ProductCode"].isNull())
		productCode_ = value["ProductCode"].asString();
	if(!value["QuotaArn"].isNull())
		quotaArn_ = value["QuotaArn"].asString();
	if(!value["ApplyTime"].isNull())
		applyTime_ = value["ApplyTime"].asString();
	if(!value["ApproveValue"].isNull())
		approveValue_ = std::stof(value["ApproveValue"].asString());
	if(!value["Dimension"].isNull())
		dimension_ = value["Dimension"].asString();
	if(!value["NoticeType"].isNull())
		noticeType_ = std::stol(value["NoticeType"].asString());
	if(!value["EffectiveTime"].isNull())
		effectiveTime_ = value["EffectiveTime"].asString();
	if(!value["ExpireTime"].isNull())
		expireTime_ = value["ExpireTime"].asString();
	if(!value["QuotaUnit"].isNull())
		quotaUnit_ = value["QuotaUnit"].asString();

}

std::string CreateQuotaApplicationResult::getStatus()const
{
	return status_;
}

std::string CreateQuotaApplicationResult::getApplyTime()const
{
	return applyTime_;
}

std::string CreateQuotaApplicationResult::getQuotaDescription()const
{
	return quotaDescription_;
}

std::string CreateQuotaApplicationResult::getProductCode()const
{
	return productCode_;
}

std::string CreateQuotaApplicationResult::getEffectiveTime()const
{
	return effectiveTime_;
}

std::string CreateQuotaApplicationResult::getAuditReason()const
{
	return auditReason_;
}

std::string CreateQuotaApplicationResult::getQuotaUnit()const
{
	return quotaUnit_;
}

std::string CreateQuotaApplicationResult::getDimension()const
{
	return dimension_;
}

float CreateQuotaApplicationResult::getApproveValue()const
{
	return approveValue_;
}

std::string CreateQuotaApplicationResult::getReason()const
{
	return reason_;
}

std::string CreateQuotaApplicationResult::getQuotaActionCode()const
{
	return quotaActionCode_;
}

std::string CreateQuotaApplicationResult::getQuotaName()const
{
	return quotaName_;
}

std::string CreateQuotaApplicationResult::getQuotaArn()const
{
	return quotaArn_;
}

long CreateQuotaApplicationResult::getNoticeType()const
{
	return noticeType_;
}

int CreateQuotaApplicationResult::getDesireValue()const
{
	return desireValue_;
}

std::string CreateQuotaApplicationResult::getApplicationId()const
{
	return applicationId_;
}

std::string CreateQuotaApplicationResult::getExpireTime()const
{
	return expireTime_;
}

