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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGEBASELINECHECKSUMMARYRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGEBASELINECHECKSUMMARYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeImageBaselineCheckSummaryResult : public ServiceResult
			{
			public:
				struct PageInfo
				{
					int totalCount;
					int pageSize;
					int currentPage;
					int count;
				};
				struct BaselineResultSummaryItem
				{
					int status;
					std::string baselineClassKey;
					std::string baselineClassAlias;
					long firstScanTime;
					int lowRiskImage;
					std::string baselineNameAlias;
					int middleRiskImage;
					int highRiskImage;
					std::string baselineNameLevel;
					long lastScanTime;
					std::string baselineNameKey;
				};


				DescribeImageBaselineCheckSummaryResult();
				explicit DescribeImageBaselineCheckSummaryResult(const std::string &payload);
				~DescribeImageBaselineCheckSummaryResult();
				PageInfo getPageInfo()const;
				std::vector<BaselineResultSummaryItem> getBaselineResultSummary()const;

			protected:
				void parse(const std::string &payload);
			private:
				PageInfo pageInfo_;
				std::vector<BaselineResultSummaryItem> baselineResultSummary_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGEBASELINECHECKSUMMARYRESULT_H_