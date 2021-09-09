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

#ifndef ALIBABACLOUD_COMPANYREG_MODEL_LISTBOOKKEEPINGSTATISTICSESRESULT_H_
#define ALIBABACLOUD_COMPANYREG_MODEL_LISTBOOKKEEPINGSTATISTICSESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/companyreg/CompanyregExport.h>

namespace AlibabaCloud
{
	namespace Companyreg
	{
		namespace Model
		{
			class ALIBABACLOUD_COMPANYREG_EXPORT ListBookkeepingStatisticsesResult : public ServiceResult
			{
			public:
				struct BookkeepingStatistics
				{
					struct TaxDetail
					{
						int month;
						int year;
						std::string taxName;
						float amount;
						std::string remark;
					};
					float taxFjs;
					std::string taxOtherNote;
					float taxGhjf;
					float income;
					std::string taxGhjfNote;
					float taxZzs;
					int month;
					std::vector<BookkeepingStatistics::TaxDetail> taxDetails;
					float taxAmount;
					std::string taxFjsNote;
					float taxSljj;
					std::string taxZzsNote;
					float profit;
					std::string taxYhsNote;
					float taxYhs;
					float taxQysds;
					std::string taxQysdsNote;
					std::string produceBizId;
					float taxCjrbzj;
					int subjectCount;
					std::string taxCjrbzjNote;
					std::string taxSljjNote;
					float taxOther;
					float expend;
					int year;
					std::string taxAmountNote;
					int voucherCount;
				};


				ListBookkeepingStatisticsesResult();
				explicit ListBookkeepingStatisticsesResult(const std::string &payload);
				~ListBookkeepingStatisticsesResult();
				int getTotalCount()const;
				float getExpendSum()const;
				int getPageSize()const;
				float getIncomeSum()const;
				int getPageNumber()const;
				float getTaxAmountSum()const;
				std::vector<BookkeepingStatistics> getBookkeepingStatisticses()const;
				float getProfitSum()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				float expendSum_;
				int pageSize_;
				float incomeSum_;
				int pageNumber_;
				float taxAmountSum_;
				std::vector<BookkeepingStatistics> bookkeepingStatisticses_;
				float profitSum_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPANYREG_MODEL_LISTBOOKKEEPINGSTATISTICSESRESULT_H_