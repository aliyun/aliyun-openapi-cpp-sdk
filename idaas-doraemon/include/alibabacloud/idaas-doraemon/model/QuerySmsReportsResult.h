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

#ifndef ALIBABACLOUD_IDAAS_DORAEMON_MODEL_QUERYSMSREPORTSRESULT_H_
#define ALIBABACLOUD_IDAAS_DORAEMON_MODEL_QUERYSMSREPORTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/idaas-doraemon/Idaas_doraemonExport.h>

namespace AlibabaCloud
{
	namespace Idaas_doraemon
	{
		namespace Model
		{
			class ALIBABACLOUD_IDAAS_DORAEMON_EXPORT QuerySmsReportsResult : public ServiceResult
			{
			public:
				struct SmsReportsItem
				{
					std::string tenantId;
					std::string stat;
					std::string appId;
					int chargedCount;
					std::string eventId;
					std::string time;
					std::string sn;
					std::string mobile;
					std::string code;
					std::string tid;
				};


				QuerySmsReportsResult();
				explicit QuerySmsReportsResult(const std::string &payload);
				~QuerySmsReportsResult();
				std::vector<SmsReportsItem> getSmsReports()const;
				long getTotalElements()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<SmsReportsItem> smsReports_;
				long totalElements_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IDAAS_DORAEMON_MODEL_QUERYSMSREPORTSRESULT_H_