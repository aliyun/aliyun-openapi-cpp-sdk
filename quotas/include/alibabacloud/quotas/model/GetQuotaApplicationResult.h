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

#ifndef ALIBABACLOUD_QUOTAS_MODEL_GETQUOTAAPPLICATIONRESULT_H_
#define ALIBABACLOUD_QUOTAS_MODEL_GETQUOTAAPPLICATIONRESULT_H_

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
			class ALIBABACLOUD_QUOTAS_EXPORT GetQuotaApplicationResult : public ServiceResult
			{
			public:
				struct QuotaApplication
				{
					std::string status;
					std::string applyTime;
					std::string quotaDescription;
					std::string productCode;
					std::string effectiveTime;
					std::string auditReason;
					std::string quotaUnit;
					std::string dimension;
					float approveValue;
					std::string reason;
					std::string quotaActionCode;
					std::string quotaName;
					std::string quotaArn;
					long noticeType;
					int desireValue;
					std::string applicationId;
					std::string expireTime;
				};


				GetQuotaApplicationResult();
				explicit GetQuotaApplicationResult(const std::string &payload);
				~GetQuotaApplicationResult();
				QuotaApplication getQuotaApplication()const;

			protected:
				void parse(const std::string &payload);
			private:
				QuotaApplication quotaApplication_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_QUOTAS_MODEL_GETQUOTAAPPLICATIONRESULT_H_