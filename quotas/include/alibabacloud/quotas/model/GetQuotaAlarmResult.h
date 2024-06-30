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

#ifndef ALIBABACLOUD_QUOTAS_MODEL_GETQUOTAALARMRESULT_H_
#define ALIBABACLOUD_QUOTAS_MODEL_GETQUOTAALARMRESULT_H_

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
			class ALIBABACLOUD_QUOTAS_EXPORT GetQuotaAlarmResult : public ServiceResult
			{
			public:
				struct QuotaAlarm
				{
					std::string alarmId;
					float thresholdPercent;
					std::string productCode;
					std::string createTime;
					float quotaUsage;
					std::string quotaActionCode;
					std::vector<std::string> notifyChannels;
					float quotaValue;
					std::string alarmName;
					std::string notifyTarget;
					std::string quotaDimension;
					std::string webhook;
					std::string thresholdType;
					float threshold;
				};


				GetQuotaAlarmResult();
				explicit GetQuotaAlarmResult(const std::string &payload);
				~GetQuotaAlarmResult();
				QuotaAlarm getQuotaAlarm()const;

			protected:
				void parse(const std::string &payload);
			private:
				QuotaAlarm quotaAlarm_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_QUOTAS_MODEL_GETQUOTAALARMRESULT_H_