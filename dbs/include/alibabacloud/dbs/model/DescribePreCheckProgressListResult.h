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

#ifndef ALIBABACLOUD_DBS_MODEL_DESCRIBEPRECHECKPROGRESSLISTRESULT_H_
#define ALIBABACLOUD_DBS_MODEL_DESCRIBEPRECHECKPROGRESSLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dbs/DbsExport.h>

namespace AlibabaCloud
{
	namespace Dbs
	{
		namespace Model
		{
			class ALIBABACLOUD_DBS_EXPORT DescribePreCheckProgressListResult : public ServiceResult
			{
			public:
				struct PreCheckProgressDetail
				{
					std::string names;
					std::string item;
					long finishTime;
					std::string orderNum;
					std::string errMsg;
					std::string state;
					long bootTime;
					std::string jobId;
				};


				DescribePreCheckProgressListResult();
				explicit DescribePreCheckProgressListResult(const std::string &payload);
				~DescribePreCheckProgressListResult();
				std::string getStatus()const;
				int getProgress()const;
				int getHttpStatusCode()const;
				std::vector<PreCheckProgressDetail> getItems()const;
				std::string getErrMessage()const;
				bool getSuccess()const;
				std::string getErrCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				int progress_;
				int httpStatusCode_;
				std::vector<PreCheckProgressDetail> items_;
				std::string errMessage_;
				bool success_;
				std::string errCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DBS_MODEL_DESCRIBEPRECHECKPROGRESSLISTRESULT_H_