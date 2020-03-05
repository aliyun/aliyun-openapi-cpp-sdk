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

#ifndef ALIBABACLOUD_EHPC_MODEL_GETACCOUNTINGREPORTRESULT_H_
#define ALIBABACLOUD_EHPC_MODEL_GETACCOUNTINGREPORTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ehpc/EHPCExport.h>

namespace AlibabaCloud
{
	namespace EHPC
	{
		namespace Model
		{
			class ALIBABACLOUD_EHPC_EXPORT GetAccountingReportResult : public ServiceResult
			{
			public:


				GetAccountingReportResult();
				explicit GetAccountingReportResult(const std::string &payload);
				~GetAccountingReportResult();
				std::string getMetrics()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<std::string> getData()const;
				int getTotalCoreTime()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string metrics_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<std::string> data_;
				int totalCoreTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_GETACCOUNTINGREPORTRESULT_H_