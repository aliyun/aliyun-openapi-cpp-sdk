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

#ifndef ALIBABACLOUD_TRADEMARK_MODEL_QUERYTRADEMARKMONITORRULESRESULT_H_
#define ALIBABACLOUD_TRADEMARK_MODEL_QUERYTRADEMARKMONITORRULESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/trademark/TrademarkExport.h>

namespace AlibabaCloud
{
	namespace Trademark
	{
		namespace Model
		{
			class ALIBABACLOUD_TRADEMARK_EXPORT QueryTrademarkMonitorRulesResult : public ServiceResult
			{
			public:
				struct TmMonitorRule
				{
					std::string ruleSource;
					int notifyUpdate;
					std::string endTime;
					std::string ruleExtend;
					std::string createTime;
					std::string startTime;
					int ruleType;
					std::string env;
					int version;
					std::string lastUpdateTime;
					std::string userId;
					std::string lastFinishTime;
					std::string ruleKeyword;
					std::string lastRunTime;
					std::string updateTime;
					std::string ruleStatus;
					std::string id;
					std::string ruleDetail;
					std::string ruleName;
				};


				QueryTrademarkMonitorRulesResult();
				explicit QueryTrademarkMonitorRulesResult(const std::string &payload);
				~QueryTrademarkMonitorRulesResult();
				bool getPrePage()const;
				int getCurrentPageNum()const;
				int getPageSize()const;
				int getTotalPageNum()const;
				std::vector<TmMonitorRule> getData()const;
				int getTotalItemNum()const;
				bool getNextPage()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool prePage_;
				int currentPageNum_;
				int pageSize_;
				int totalPageNum_;
				std::vector<TmMonitorRule> data_;
				int totalItemNum_;
				bool nextPage_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TRADEMARK_MODEL_QUERYTRADEMARKMONITORRULESRESULT_H_