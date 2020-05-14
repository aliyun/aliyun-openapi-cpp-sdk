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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBECACHEANALYSISREPORTRESULT_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBECACHEANALYSISREPORTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/r-kvstore/R_kvstoreExport.h>

namespace AlibabaCloud
{
	namespace R_kvstore
	{
		namespace Model
		{
			class ALIBABACLOUD_R_KVSTORE_EXPORT DescribeCacheAnalysisReportResult : public ServiceResult
			{
			public:


				DescribeCacheAnalysisReportResult();
				explicit DescribeCacheAnalysisReportResult(const std::string &payload);
				~DescribeCacheAnalysisReportResult();
				int getTotalRecordCount()const;
				std::vector<std::string> getHotKeys()const;
				std::vector<std::string> getBigKeys()const;
				int getPageRecordCount()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalRecordCount_;
				std::vector<std::string> hotKeys_;
				std::vector<std::string> bigKeys_;
				int pageRecordCount_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBECACHEANALYSISREPORTRESULT_H_