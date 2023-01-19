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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGEBASELINESTRATEGYRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGEBASELINESTRATEGYRESULT_H_

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
			class ALIBABACLOUD_SAS_EXPORT DescribeImageBaselineStrategyResult : public ServiceResult
			{
			public:
				struct Strategy
				{
					struct BaselineResult
					{
						std::string itemKey;
						std::string classKey;
						std::string nameKey;
					};
					std::string type;
					std::vector<BaselineResult> baselineItemList;
					std::string strategyName;
					int totalItemCount;
					long strategyId;
					int selectedItemCount;
				};


				DescribeImageBaselineStrategyResult();
				explicit DescribeImageBaselineStrategyResult(const std::string &payload);
				~DescribeImageBaselineStrategyResult();
				Strategy getStrategy()const;

			protected:
				void parse(const std::string &payload);
			private:
				Strategy strategy_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGEBASELINESTRATEGYRESULT_H_