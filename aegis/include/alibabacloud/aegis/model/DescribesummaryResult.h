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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBESUMMARYRESULT_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBESUMMARYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT DescribesummaryResult : public ServiceResult
			{
			public:
				struct WarningSummary
				{
					long riskId;
					std::string lastFoundTime;
					int pendingCount;
					int totalCount;
					std::string riskDetail;
					std::string level;
					std::string typeAlias;
					std::string riskName;
					std::string subTypeAlias;
				};


				DescribesummaryResult();
				explicit DescribesummaryResult(const std::string &payload);
				~DescribesummaryResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getCurrentPage()const;
				int getCount()const;
				std::vector<WarningSummary> getWarningSummarys()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int currentPage_;
				int count_;
				std::vector<WarningSummary> warningSummarys_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBESUMMARYRESULT_H_