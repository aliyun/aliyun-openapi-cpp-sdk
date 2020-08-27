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

#ifndef ALIBABACLOUD_VCS_MODEL_LISTCORPMETRICSRESULT_H_
#define ALIBABACLOUD_VCS_MODEL_LISTCORPMETRICSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vcs/VcsExport.h>

namespace AlibabaCloud
{
	namespace Vcs
	{
		namespace Model
		{
			class ALIBABACLOUD_VCS_EXPORT ListCorpMetricsResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					std::string corpId;
					std::string personId;
					std::string deviceGroupId;
					std::string deviceId;
					std::string userGroupId;
					std::string tagMetrics;
					std::string tagCode;
					std::string tagValue;
					std::string dateId;
				};


				ListCorpMetricsResult();
				explicit ListCorpMetricsResult(const std::string &payload);
				~ListCorpMetricsResult();
				int getTotalCount()const;
				std::string getMessage()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<DataItem> getData()const;
				std::string getCode()const;
				std::string getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string message_;
				int pageSize_;
				int pageNumber_;
				std::vector<DataItem> data_;
				std::string code_;
				std::string success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VCS_MODEL_LISTCORPMETRICSRESULT_H_