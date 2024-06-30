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

#ifndef ALIBABACLOUD_QUOTAS_MODEL_CREATEQUOTAAPPLICATIONRESULT_H_
#define ALIBABACLOUD_QUOTAS_MODEL_CREATEQUOTAAPPLICATIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/quotas/QuotasExport.h>

namespace AlibabaCloud
{
	namespace Quotas
	{
		namespace Model
		{
			class ALIBABACLOUD_QUOTAS_EXPORT CreateQuotaApplicationResult : public ServiceResult
			{
			public:


				CreateQuotaApplicationResult();
				explicit CreateQuotaApplicationResult(const std::string &payload);
				~CreateQuotaApplicationResult();
				std::string getStatus()const;
				std::string getApplyTime()const;
				std::string getQuotaDescription()const;
				std::string getProductCode()const;
				std::string getEffectiveTime()const;
				std::string getAuditReason()const;
				std::string getQuotaUnit()const;
				std::string getDimension()const;
				float getApproveValue()const;
				std::string getReason()const;
				std::string getQuotaActionCode()const;
				std::string getQuotaName()const;
				std::string getQuotaArn()const;
				long getNoticeType()const;
				int getDesireValue()const;
				std::string getApplicationId()const;
				std::string getExpireTime()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string applyTime_;
				std::string quotaDescription_;
				std::string productCode_;
				std::string effectiveTime_;
				std::string auditReason_;
				std::string quotaUnit_;
				std::string dimension_;
				float approveValue_;
				std::string reason_;
				std::string quotaActionCode_;
				std::string quotaName_;
				std::string quotaArn_;
				long noticeType_;
				int desireValue_;
				std::string applicationId_;
				std::string expireTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_QUOTAS_MODEL_CREATEQUOTAAPPLICATIONRESULT_H_