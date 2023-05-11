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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEPDNSOPERATELOGSRESULT_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEPDNSOPERATELOGSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/alidns/AlidnsExport.h>

namespace AlibabaCloud
{
	namespace Alidns
	{
		namespace Model
		{
			class ALIBABACLOUD_ALIDNS_EXPORT DescribePdnsOperateLogsResult : public ServiceResult
			{
			public:
				struct Log
				{
					std::string operateTime;
					std::string type;
					std::string action;
					std::string content;
				};


				DescribePdnsOperateLogsResult();
				explicit DescribePdnsOperateLogsResult(const std::string &payload);
				~DescribePdnsOperateLogsResult();
				long getTotalCount()const;
				long getPageSize()const;
				long getPageNumber()const;
				std::vector<Log> getLogs()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				long pageSize_;
				long pageNumber_;
				std::vector<Log> logs_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEPDNSOPERATELOGSRESULT_H_