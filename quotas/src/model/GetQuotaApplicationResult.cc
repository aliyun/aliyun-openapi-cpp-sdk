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

#include <alibabacloud/quotas/model/GetQuotaApplicationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quotas;
using namespace AlibabaCloud::Quotas::Model;

GetQuotaApplicationResult::GetQuotaApplicationResult() :
	ServiceResult()
{}

GetQuotaApplicationResult::GetQuotaApplicationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetQuotaApplicationResult::~GetQuotaApplicationResult()
{}

void GetQuotaApplicationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto quotaApplicationNode = value["QuotaApplication"];
	if(!quotaApplicationNode["Status"].isNull())
		quotaApplication_.status = quotaApplicationNode["Status"].asString();
	if(!quotaApplicationNode["DesireValue"].isNull())
		quotaApplication_.desireValue = std::stoi(quotaApplicationNode["DesireValue"].asString());
	if(!quotaApplicationNode["QuotaActionCode"].isNull())
		quotaApplication_.quotaActionCode = quotaApplicationNode["QuotaActionCode"].asString();
	if(!quotaApplicationNode["QuotaName"].isNull())
		quotaApplication_.quotaName = quotaApplicationNode["QuotaName"].asString();
	if(!quotaApplicationNode["ApplicationId"].isNull())
		quotaApplication_.applicationId = quotaApplicationNode["ApplicationId"].asString();
	if(!quotaApplicationNode["Reason"].isNull())
		quotaApplication_.reason = quotaApplicationNode["Reason"].asString();
	if(!quotaApplicationNode["AuditReason"].isNull())
		quotaApplication_.auditReason = quotaApplicationNode["AuditReason"].asString();
	if(!quotaApplicationNode["QuotaDescription"].isNull())
		quotaApplication_.quotaDescription = quotaApplicationNode["QuotaDescription"].asString();
	if(!quotaApplicationNode["ProductCode"].isNull())
		quotaApplication_.productCode = quotaApplicationNode["ProductCode"].asString();
	if(!quotaApplicationNode["QuotaArn"].isNull())
		quotaApplication_.quotaArn = quotaApplicationNode["QuotaArn"].asString();
	if(!quotaApplicationNode["ApplyTime"].isNull())
		quotaApplication_.applyTime = quotaApplicationNode["ApplyTime"].asString();
	if(!quotaApplicationNode["ApproveValue"].isNull())
		quotaApplication_.approveValue = std::stof(quotaApplicationNode["ApproveValue"].asString());
	if(!quotaApplicationNode["Dimension"].isNull())
		quotaApplication_.dimension = quotaApplicationNode["Dimension"].asString();
	if(!quotaApplicationNode["NoticeType"].isNull())
		quotaApplication_.noticeType = std::stol(quotaApplicationNode["NoticeType"].asString());
	if(!quotaApplicationNode["EffectiveTime"].isNull())
		quotaApplication_.effectiveTime = quotaApplicationNode["EffectiveTime"].asString();
	if(!quotaApplicationNode["ExpireTime"].isNull())
		quotaApplication_.expireTime = quotaApplicationNode["ExpireTime"].asString();
	if(!quotaApplicationNode["QuotaUnit"].isNull())
		quotaApplication_.quotaUnit = quotaApplicationNode["QuotaUnit"].asString();

}

GetQuotaApplicationResult::QuotaApplication GetQuotaApplicationResult::getQuotaApplication()const
{
	return quotaApplication_;
}

