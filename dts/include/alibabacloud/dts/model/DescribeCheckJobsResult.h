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

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBECHECKJOBSRESULT_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBECHECKJOBSRESULT_H_

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
			class ALIBABACLOUD_DTS_EXPORT DescribeCheckJobsResult : public ServiceResult
			{
			public:
				struct CheckJobsItem
				{
					int status;
					std::string jobStepId;
					long diffSum;
					std::string jobName;
					long finishCount;
					std::string instanceClass;
					std::string parentJobType;
					std::string dtsInstanceID;
					std::string groupId;
					long totalCount;
					std::string dtsJobId;
					int checkType;
					std::string chargeType;
					std::string regionId;
					long diffCount;
					long checkPoint;
				};


				DescribeCheckJobsResult();
				explicit DescribeCheckJobsResult(const std::string &payload);
				~DescribeCheckJobsResult();
				long getTotalRecordCount()const;
				std::vector<CheckJobsItem> getCheckJobs()const;
				long getPageRecordCount()const;
				int getPageNumber()const;
				int getHttpStatusCode()const;
				std::string getDynamicCode()const;
				std::string getDynamicMessage()const;
				std::string getErrMessage()const;
				bool getSuccess()const;
				std::string getErrCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalRecordCount_;
				std::vector<CheckJobsItem> checkJobs_;
				long pageRecordCount_;
				int pageNumber_;
				int httpStatusCode_;
				std::string dynamicCode_;
				std::string dynamicMessage_;
				std::string errMessage_;
				bool success_;
				std::string errCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBECHECKJOBSRESULT_H_