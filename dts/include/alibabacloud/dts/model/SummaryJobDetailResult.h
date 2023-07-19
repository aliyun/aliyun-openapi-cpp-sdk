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

#ifndef ALIBABACLOUD_DTS_MODEL_SUMMARYJOBDETAILRESULT_H_
#define ALIBABACLOUD_DTS_MODEL_SUMMARYJOBDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dts/DtsExport.h>

namespace AlibabaCloud
{
	namespace Dts
	{
		namespace Model
		{
			class ALIBABACLOUD_DTS_EXPORT SummaryJobDetailResult : public ServiceResult
			{
			public:
				struct ProgressSummaryDetail
				{
					long totalCount;
					int state;
					std::string key;
				};


				SummaryJobDetailResult();
				explicit SummaryJobDetailResult(const std::string &payload);
				~SummaryJobDetailResult();
				std::vector<ProgressSummaryDetail> getProgressSummaryDetails()const;
				int getHttpStatusCode()const;
				std::string getCode()const;
				bool getSuccess()const;
				std::string getJobId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ProgressSummaryDetail> progressSummaryDetails_;
				int httpStatusCode_;
				std::string code_;
				bool success_;
				std::string jobId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_SUMMARYJOBDETAILRESULT_H_